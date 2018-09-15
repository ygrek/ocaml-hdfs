
open Printf

let error fmt = ksprintf (fun s -> prerr_endline s; exit 1) fmt

let generate n =
  let b = Bytes.create n in
  for i = 0 to n - 1 do
    Bytes.set b i (Char.chr (Char.code 'a' + Random.int 26))
  done;
  Bytes.unsafe_to_string b

let main user namenode =
  let open Hdfs in

  Random.self_init ();

  (* Get a handle to the HDFS cluster. *)
  let fs = hdfsConnect { default with namenode; user; } in

  (* Make a directory /ctest *)
  let dir = "ctest" in
  hdfsCreateDirectory fs dir;

  (* What we just created better be a directory *)
  if KObjectKindDirectory <> (hdfsGetPathInfo fs dir).mKind then
    error "HDFS doesn't think %S is a dir!" dir;

  (* Create a file *)
  let file1 = Filename.concat dir "foo.1" in

  (*
    fd is our file-handle to the file we are creating; this
    file handle should be used in subsequent I/O calls on the file.
    Use default buffer size, replication factor and block size.
  *)
  let fd = hdfsOpenFile fs file1 [O_WRONLY] 0 0 0 in

  (* Get the directory listings *)
  let entries = hdfsListDirectory fs dir in

  print_endline "Read dir returned: ";
  Array.iter (fun m -> print_endline m.mName) entries;

  (* write something to the file *)
  let numBytes = 2048 in
  let data = generate numBytes in

  let written = hdfsWrite fs fd data in
  if written <> numBytes then
    error "Was able to write only %d instead of %d bytes" written numBytes;

  (* flush out the changes *)
  hdfsHSync fs fd;

  (* Close the file-handle *)
  hdfsCloseFile fs fd;

  (* Determine the file-size *)
  let size = (hdfsGetPathInfo fs file1).mSize in
  if size <> numBytes then
    error "HDFS thinks the file's size is %d instead of %d bytes" size numBytes;

  (* rename the file *)
  let file2 = Filename.concat dir "foo.2" in
  hdfsRename fs file1 file2;

  if hdfsExists fs file1 then
    error "file %s still exists after rename!" file1;

  (* Re-create the file and try a rename that should fail... *)
  let fd1 = hdfsOpenFile fs file1 [O_WRONLY] 0 0 0 in

  if not (hdfsExists fs file1) then
    error "After re-create %s doesn't exists!" file1;

  hdfsCloseFile fs fd1;

  (* try to rename and don't allow overwrite *)
(* no rename without overwrite
  begin try
    hdfsRename fs file2 file1;
    error "Rename with overwrite disabled succeeded...error!";
  with
    _ -> ()
  end;
*)

  (* Remove the file *)
  hdfsDelete fs file1 false;

  (* Re-open the file *)
  let fd = hdfsOpenFile fs file2 [O_RDONLY] 0 0 0 in

  (* read some bytes *)
  let read = hdfsRead_n fs fd 128 in
  if String.length read <> 128 then
    error "couldn't read 128 bytes from %s" file2;

  (* Verify what we read matches what we wrote *)
  for i = 0 to 127 do
    if read.[i] <> data.[i] then
      error "Data mismatch at %d" i
  done;

  (* seek to offset 40 *)
  hdfsSeek fs fd 40;

  (* Seek and verify that we are we think we are *)
  let pos = hdfsTell fs fd in
  if pos <> 40 then
    error "After seek, we are at %d, should be at 40" pos;

  hdfsCloseFile fs fd;

  (* cleanup *)
  hdfsDelete fs file2 false;
  hdfsDelete fs dir false;
  hdfsDisconnect fs;
  print_endline "Tests passed!"

let () =
  try
    match Sys.argv with
    | [| _; user; host |] -> main (Some user) (Some host)
    | _ -> error "Usage: %s <user> <namenode>" Sys.executable_name
  with
    exn ->
      prerr_endline (Printexc.to_string exn);
      exit 1
