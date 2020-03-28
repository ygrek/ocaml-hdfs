(* File generated from hdfs.idl *)

type int32_t = int
and time_t = int
and int64_t = int
and uint16_t = int
and tObjectKind =
  | KObjectKindFile
  | KObjectKindDirectory
and tSize = int32_t
and tTime = time_t
and tOffset = int64_t
and tPort = uint16_t
and open_flags =
  | O_RDONLY
  | O_WRONLY
  | O_APPEND
and retcode = int
and hdfsFS
and hdfsFile
and struct_3 = {
  mKind: tObjectKind;
  mName: string;
  mLastMod: tTime;
  mSize: tOffset;
  mReplication: int;
  mBlockSize: tOffset;
  mOwner: string;
  mGroup: string;
  mPermissions: int;
  mLastAccess: tTime;
}
and hdfsFileInfo = struct_3


type params = {
  (** Force the builder to always create a new instance of the FileSystem,
      rather than possibly finding one in the cache. *)
  force_new_instance : bool;
  (**
     * Set the HDFS NameNode to connect to.
     *
     * @param bld The HDFS builder
     * @param nn The NameNode to use.
     *
     * If the string given is 'default', the default NameNode
     * configuration will be used (from the XML configuration files)
     *
     * If NULL is given, a LocalFileSystem will be created.
     *
     * If the string starts with a protocol type such as file:
     * hdfs:
     * hdfs:
     *
     * You may specify a NameNode port in the usual way by
     * passing a string of the format hdfs:
     * Alternately, you may set the port with
     * hdfsBuilderSetNameNodePort. However, you must not pass the
     * port in two different ways.
     *)
  namenode : string option;
  port : int option;
  (** The username to use when connecting to the HDFS cluster. *)
  user : string option;
  (** The path to the Kerberos ticket cache to use when connecting to the HDFS cluster. *)
  krb_ticket_cache : string option;
}

external hdfsConnect : params -> hdfsFS = "ml_hdfs_connect"

external hdfsGetWorkingDirectory : hdfsFS -> string = "ml_hdfs_getwd"



 val default : params

external hdfsFileIsOpenForRead : hdfsFile -> bool
	= "camlidl_hdfs_hdfsFileIsOpenForRead"

external hdfsFileIsOpenForWrite : hdfsFile -> bool
	= "camlidl_hdfs_hdfsFileIsOpenForWrite"

external hdfsConfGetStr : string -> string option
	= "camlidl_hdfs_hdfsConfGetStr"

external hdfsConfGetInt : string -> int32_t
	= "camlidl_hdfs_hdfsConfGetInt"

external hdfsDisconnect : hdfsFS -> unit
	= "camlidl_hdfs_hdfsDisconnect"

external hdfsOpenFile : hdfsFS -> string -> open_flags list -> int -> int -> tSize -> hdfsFile
	= "camlidl_hdfs_hdfsOpenFile_bytecode" "camlidl_hdfs_hdfsOpenFile"

external hdfsCloseFile : hdfsFS -> hdfsFile -> unit
	= "camlidl_hdfs_hdfsCloseFile"

external hdfsExists : hdfsFS -> string -> bool
	= "camlidl_hdfs_hdfsExists"

external hdfsSeek : hdfsFS -> hdfsFile -> tOffset -> unit
	= "camlidl_hdfs_hdfsSeek"

external hdfsTell : hdfsFS -> hdfsFile -> tOffset
	= "camlidl_hdfs_hdfsTell"

external hdfsRead : hdfsFS -> hdfsFile -> bytes -> int
	= "camlidl_hdfs_hdfsRead"

val hdfsRead_n : hdfsFS -> hdfsFile -> int -> string

external hdfsPread : hdfsFS -> hdfsFile -> tOffset -> bytes -> int
	= "camlidl_hdfs_hdfsPread"

val hdfsPread_n : hdfsFS -> hdfsFile -> pos:int -> size:int -> string

external hdfsWrite : hdfsFS -> hdfsFile -> string -> tSize
	= "camlidl_hdfs_hdfsWrite"

external hdfsFlush : hdfsFS -> hdfsFile -> unit
	= "camlidl_hdfs_hdfsFlush"

external hdfsHFlush : hdfsFS -> hdfsFile -> unit
	= "camlidl_hdfs_hdfsHFlush"

external hdfsHSync : hdfsFS -> hdfsFile -> unit
	= "camlidl_hdfs_hdfsHSync"

external hdfsAvailable : hdfsFS -> hdfsFile -> int
	= "camlidl_hdfs_hdfsAvailable"

external hdfsCopy : hdfsFS -> string -> hdfsFS -> string -> unit
	= "camlidl_hdfs_hdfsCopy"

external hdfsMove : hdfsFS -> string -> hdfsFS -> string -> unit
	= "camlidl_hdfs_hdfsMove"

external hdfsDelete : hdfsFS -> string -> bool -> unit
	= "camlidl_hdfs_hdfsDelete"

external hdfsRename : hdfsFS -> string -> string -> unit
	= "camlidl_hdfs_hdfsRename"

external hdfsSetWorkingDirectory : hdfsFS -> string -> unit
	= "camlidl_hdfs_hdfsSetWorkingDirectory"

external hdfsCreateDirectory : hdfsFS -> string -> unit
	= "camlidl_hdfs_hdfsCreateDirectory"

external hdfsSetReplication : hdfsFS -> string -> int -> unit
	= "camlidl_hdfs_hdfsSetReplication"

external hdfsListDirectory : hdfsFS -> string -> hdfsFileInfo array
	= "camlidl_hdfs_hdfsListDirectory"

external hdfsGetPathInfo : hdfsFS -> string -> hdfsFileInfo
	= "camlidl_hdfs_hdfsGetPathInfo"

