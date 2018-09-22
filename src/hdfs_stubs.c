/* File generated from hdfs.idl */

#include <stddef.h>
#include <string.h>
#include <caml/mlvalues.h>
#include <caml/memory.h>
#include <caml/alloc.h>
#include <caml/fail.h>
#include <caml/callback.h>
#ifdef Custom_tag
#include <caml/custom.h>
#include <caml/bigarray.h>
#endif
#include <caml/camlidlruntime.h>

#include <caml/unixsupport.h>

#include <hdfs.h>

void camlidl_ml2c_hdfs_int32_t(value _v1, int32_t * _c2, camlidl_ctx _ctx)
{
  (*_c2) = Int_val(_v1);
}

value camlidl_c2ml_hdfs_int32_t(int32_t * _c2, camlidl_ctx _ctx)
{
value _v1;
  _v1 = Val_int((*_c2));
  return _v1;
}

void camlidl_ml2c_hdfs_time_t(value _v1, time_t * _c2, camlidl_ctx _ctx)
{
  (*_c2) = Int_val(_v1);
}

value camlidl_c2ml_hdfs_time_t(time_t * _c2, camlidl_ctx _ctx)
{
value _v1;
  _v1 = Val_int((*_c2));
  return _v1;
}

void camlidl_ml2c_hdfs_int64_t(value _v1, int64_t * _c2, camlidl_ctx _ctx)
{
  (*_c2) = Long_val(_v1);
}

value camlidl_c2ml_hdfs_int64_t(int64_t * _c2, camlidl_ctx _ctx)
{
value _v1;
  _v1 = Val_long((*_c2));
  return _v1;
}

void camlidl_ml2c_hdfs_uint16_t(value _v1, uint16_t * _c2, camlidl_ctx _ctx)
{
  (*_c2) = Int_val(_v1);
}

value camlidl_c2ml_hdfs_uint16_t(uint16_t * _c2, camlidl_ctx _ctx)
{
value _v1;
  _v1 = Val_int((*_c2));
  return _v1;
}

int camlidl_transl_table_hdfs_enum_1[2] = {
  kObjectKindFile,
  kObjectKindDirectory,
};

int camlidl_ml2c_hdfs_enum_tObjectKind(value _v1)
{
  int _c2;
  _c2 = camlidl_transl_table_hdfs_enum_1[Int_val(_v1)];
  return _c2;
}

value camlidl_c2ml_hdfs_enum_tObjectKind(int _c1)
{
  value _v2;
  switch(_c1) {
  case kObjectKindFile: _v2 = Val_int(0); break;
  case kObjectKindDirectory: _v2 = Val_int(1); break;
  default: invalid_argument("enum tObjectKind: bad enum tObjectKind value");
  }
  return _v2;
}

void camlidl_ml2c_hdfs_tSize(value _v1, tSize * _c2, camlidl_ctx _ctx)
{
  camlidl_ml2c_hdfs_int32_t(_v1, &(*_c2), _ctx);
}

value camlidl_c2ml_hdfs_tSize(tSize * _c2, camlidl_ctx _ctx)
{
value _v1;
  _v1 = camlidl_c2ml_hdfs_int32_t(&(*_c2), _ctx);
  return _v1;
}

void camlidl_ml2c_hdfs_tTime(value _v1, tTime * _c2, camlidl_ctx _ctx)
{
  camlidl_ml2c_hdfs_time_t(_v1, &(*_c2), _ctx);
}

value camlidl_c2ml_hdfs_tTime(tTime * _c2, camlidl_ctx _ctx)
{
value _v1;
  _v1 = camlidl_c2ml_hdfs_time_t(&(*_c2), _ctx);
  return _v1;
}

void camlidl_ml2c_hdfs_tOffset(value _v1, tOffset * _c2, camlidl_ctx _ctx)
{
  camlidl_ml2c_hdfs_int64_t(_v1, &(*_c2), _ctx);
}

value camlidl_c2ml_hdfs_tOffset(tOffset * _c2, camlidl_ctx _ctx)
{
value _v1;
  _v1 = camlidl_c2ml_hdfs_int64_t(&(*_c2), _ctx);
  return _v1;
}

void camlidl_ml2c_hdfs_tPort(value _v1, tPort * _c2, camlidl_ctx _ctx)
{
  camlidl_ml2c_hdfs_uint16_t(_v1, &(*_c2), _ctx);
}

value camlidl_c2ml_hdfs_tPort(tPort * _c2, camlidl_ctx _ctx)
{
value _v1;
  _v1 = camlidl_c2ml_hdfs_uint16_t(&(*_c2), _ctx);
  return _v1;
}

int camlidl_transl_table_hdfs_enum_2[3] = {
  O_RDONLY,
  O_WRONLY,
  O_APPEND,
};

int camlidl_ml2c_hdfs_enum_open_flags(value _v1)
{
  int _c2;
  _c2 = camlidl_transl_table_hdfs_enum_2[Int_val(_v1)];
  return _c2;
}

value camlidl_c2ml_hdfs_enum_open_flags(int _c1)
{
  value _v2;
  switch(_c1) {
  case O_RDONLY: _v2 = Val_int(0); break;
  case O_WRONLY: _v2 = Val_int(1); break;
  case O_APPEND: _v2 = Val_int(2); break;
  default: invalid_argument("enum open_flags: bad enum open_flags value");
  }
  return _v2;
}

typedef int retcode;

void camlidl_ml2c_hdfs_retcode(value _v1, retcode * _c2, camlidl_ctx _ctx)
{
  (*_c2) = Int_val(_v1);
}

value camlidl_c2ml_hdfs_retcode(retcode * _c2, camlidl_ctx _ctx)
{
value _v1;
  _v1 = Val_int((*_c2));
  return _v1;
}

extern void camlidl_ml2c_hdfs_struct_hdfs_internal(value, struct hdfs_internal *, camlidl_ctx _ctx);
extern value camlidl_c2ml_hdfs_struct_hdfs_internal(struct hdfs_internal *, camlidl_ctx _ctx);

void camlidl_ml2c_hdfs_hdfsFS(value _v1, hdfsFS * _c2, camlidl_ctx _ctx)
{
  *_c2 = *((hdfsFS *) Bp_val(_v1));
}

value camlidl_c2ml_hdfs_hdfsFS(hdfsFS * _c2, camlidl_ctx _ctx)
{
value _v1;
  _v1 = camlidl_alloc((sizeof(hdfsFS) + sizeof(value) - 1) / sizeof(value), Abstract_tag);
  *((hdfsFS *) Bp_val(_v1)) = *_c2;
  return _v1;
}

extern void camlidl_ml2c_hdfs_struct_hdfsFile_internal(value, struct hdfsFile_internal *, camlidl_ctx _ctx);
extern value camlidl_c2ml_hdfs_struct_hdfsFile_internal(struct hdfsFile_internal *, camlidl_ctx _ctx);

void camlidl_ml2c_hdfs_hdfsFile(value _v1, hdfsFile * _c2, camlidl_ctx _ctx)
{
  *_c2 = *((hdfsFile *) Bp_val(_v1));
}

value camlidl_c2ml_hdfs_hdfsFile(hdfsFile * _c2, camlidl_ctx _ctx)
{
value _v1;
  _v1 = camlidl_alloc((sizeof(hdfsFile) + sizeof(value) - 1) / sizeof(value), Abstract_tag);
  *((hdfsFile *) Bp_val(_v1)) = *_c2;
  return _v1;
}

#include "hdfs_connect.h"

value camlidl_hdfs_hdfsFileIsOpenForRead(
	value _v_file)
{
  hdfsFile file; /*in*/
  int _res;
  value _vres;

  struct camlidl_ctx_struct _ctxs = { CAMLIDL_TRANSIENT, NULL };
  camlidl_ctx _ctx = &_ctxs;
  camlidl_ml2c_hdfs_hdfsFile(_v_file, &file, _ctx);
  _res = hdfsFileIsOpenForRead(file);
  _vres = Val_int(_res);
  camlidl_free(_ctx);
  return _vres;
}

value camlidl_hdfs_hdfsFileIsOpenForWrite(
	value _v_file)
{
  hdfsFile file; /*in*/
  int _res;
  value _vres;

  struct camlidl_ctx_struct _ctxs = { CAMLIDL_TRANSIENT, NULL };
  camlidl_ctx _ctx = &_ctxs;
  camlidl_ml2c_hdfs_hdfsFile(_v_file, &file, _ctx);
  _res = hdfsFileIsOpenForWrite(file);
  _vres = Val_int(_res);
  camlidl_free(_ctx);
  return _vres;
}

value camlidl_hdfs_hdfsConfGetStr(
	value _v_key)
{
  char const *key; /*in*/
  char **val; /*out*/
  retcode _res;
  char *_c1;
  value _v2;
  value _vres;

  key = String_val(_v_key);
  val = &_c1;
  /* begin user-supplied calling sequence */
  _res = hdfsConfGetStr(key, val); 
  if (0 != _res) unix_error(_res,"hdfsConfGetStr",_v_key); 
  /* end user-supplied calling sequence */
  if (val == NULL) {
    _vres = Val_int(0);
  } else {
    _v2 = copy_string(*val);
    Begin_root(_v2)
      _vres = camlidl_alloc_small(1, 0);
      Field(_vres, 0) = _v2;
    End_roots();
  }
  /* begin user-supplied deallocation sequence */
  if (NULL != *val) hdfsConfStrFree(*val);
  /* end user-supplied deallocation sequence */
  return _vres;
}

value camlidl_hdfs_hdfsConfGetInt(
	value _v_key)
{
  char const *key; /*in*/
  int32_t *val; /*out*/
  retcode _res;
  int32_t _c1;
  value _vres;

  struct camlidl_ctx_struct _ctxs = { CAMLIDL_TRANSIENT, NULL };
  camlidl_ctx _ctx = &_ctxs;
  key = String_val(_v_key);
  val = &_c1;
  /* begin user-supplied calling sequence */
  *val = 0; 
  _res = hdfsConfGetInt(key, val); 
  if (0 != _res) unix_error(_res,"hdfsConfGetInt",_v_key); 
  /* end user-supplied calling sequence */
  _vres = camlidl_c2ml_hdfs_int32_t(&*val, _ctx);
  camlidl_free(_ctx);
  return _vres;
}

value camlidl_hdfs_hdfsDisconnect(
	value _v_fs)
{
  hdfsFS fs; /*in*/
  retcode _res;
  struct camlidl_ctx_struct _ctxs = { CAMLIDL_TRANSIENT, NULL };
  camlidl_ctx _ctx = &_ctxs;
  camlidl_ml2c_hdfs_hdfsFS(_v_fs, &fs, _ctx);
  _res = hdfsDisconnect(fs);
  camlidl_free(_ctx);
  /* begin user-supplied deallocation sequence */
if (-1 == _res) uerror("hdfsDisconnect", Nothing);
  /* end user-supplied deallocation sequence */
  return Val_unit;
}

value camlidl_hdfs_hdfsOpenFile(
	value _v_fs,
	value _v_path,
	value _v_flags,
	value _v_bufferSize,
	value _v_replication,
	value _v_blocksize)
{
  hdfsFS fs; /*in*/
  char const *path; /*in*/
  int flags; /*in*/
  int bufferSize; /*in*/
  short replication; /*in*/
  tSize blocksize; /*in*/
  hdfsFile _res;
  value _vres;

  struct camlidl_ctx_struct _ctxs = { CAMLIDL_TRANSIENT, NULL };
  camlidl_ctx _ctx = &_ctxs;
  camlidl_ml2c_hdfs_hdfsFS(_v_fs, &fs, _ctx);
  path = String_val(_v_path);
  flags = convert_flag_list(_v_flags, camlidl_transl_table_hdfs_enum_2);
  bufferSize = Int_val(_v_bufferSize);
  replication = Int_val(_v_replication);
  camlidl_ml2c_hdfs_tSize(_v_blocksize, &blocksize, _ctx);
  /* begin user-supplied calling sequence */
  _res = hdfsOpenFile(fs, path, flags, bufferSize, replication, blocksize);
  if (NULL == _res) uerror("hdfsOpenFile", _v_path);
  /* end user-supplied calling sequence */
  _vres = camlidl_c2ml_hdfs_hdfsFile(&_res, _ctx);
  camlidl_free(_ctx);
  return _vres;
}

value camlidl_hdfs_hdfsOpenFile_bytecode(value * argv, int argn)
{
  return camlidl_hdfs_hdfsOpenFile(argv[0], argv[1], argv[2], argv[3], argv[4], argv[5]);
}

value camlidl_hdfs_hdfsCloseFile(
	value _v_fs,
	value _v_file)
{
  hdfsFS fs; /*in*/
  hdfsFile file; /*in*/
  retcode _res;
  struct camlidl_ctx_struct _ctxs = { CAMLIDL_TRANSIENT, NULL };
  camlidl_ctx _ctx = &_ctxs;
  camlidl_ml2c_hdfs_hdfsFS(_v_fs, &fs, _ctx);
  camlidl_ml2c_hdfs_hdfsFile(_v_file, &file, _ctx);
  _res = hdfsCloseFile(fs, file);
  camlidl_free(_ctx);
  /* begin user-supplied deallocation sequence */
if (-1 == _res) uerror("hdfsCloseFile", Nothing);
  /* end user-supplied deallocation sequence */
  return Val_unit;
}

value camlidl_hdfs_hdfsExists(
	value _v_fs,
	value _v_path)
{
  hdfsFS fs; /*in*/
  char const *path; /*in*/
  int _res;
  value _vres;

  struct camlidl_ctx_struct _ctxs = { CAMLIDL_TRANSIENT, NULL };
  camlidl_ctx _ctx = &_ctxs;
  camlidl_ml2c_hdfs_hdfsFS(_v_fs, &fs, _ctx);
  path = String_val(_v_path);
  /* begin user-supplied calling sequence */
  _res = (0 == hdfsExists(fs,path));
  /* end user-supplied calling sequence */
  _vres = Val_int(_res);
  camlidl_free(_ctx);
  return _vres;
}

value camlidl_hdfs_hdfsSeek(
	value _v_fs,
	value _v_file,
	value _v_desiredPos)
{
  hdfsFS fs; /*in*/
  hdfsFile file; /*in*/
  tOffset desiredPos; /*in*/
  retcode _res;
  struct camlidl_ctx_struct _ctxs = { CAMLIDL_TRANSIENT, NULL };
  camlidl_ctx _ctx = &_ctxs;
  camlidl_ml2c_hdfs_hdfsFS(_v_fs, &fs, _ctx);
  camlidl_ml2c_hdfs_hdfsFile(_v_file, &file, _ctx);
  camlidl_ml2c_hdfs_tOffset(_v_desiredPos, &desiredPos, _ctx);
  _res = hdfsSeek(fs, file, desiredPos);
  camlidl_free(_ctx);
  /* begin user-supplied deallocation sequence */
if (-1 == _res) uerror("hdfsSeek", Nothing);
  /* end user-supplied deallocation sequence */
  return Val_unit;
}

value camlidl_hdfs_hdfsTell(
	value _v_fs,
	value _v_file)
{
  hdfsFS fs; /*in*/
  hdfsFile file; /*in*/
  tOffset _res;
  value _vres;

  struct camlidl_ctx_struct _ctxs = { CAMLIDL_TRANSIENT, NULL };
  camlidl_ctx _ctx = &_ctxs;
  camlidl_ml2c_hdfs_hdfsFS(_v_fs, &fs, _ctx);
  camlidl_ml2c_hdfs_hdfsFile(_v_file, &file, _ctx);
  _res = hdfsTell(fs, file);
  _vres = camlidl_c2ml_hdfs_tOffset(&_res, _ctx);
  camlidl_free(_ctx);
  /* begin user-supplied deallocation sequence */
if (-1 == _res) uerror("hdfsTell", Nothing);
  /* end user-supplied deallocation sequence */
  return _vres;
}

value camlidl_hdfs_hdfsRead(
	value _v_fs,
	value _v_file,
	value _v_buffer)
{
  hdfsFS fs; /*in*/
  hdfsFile file; /*in*/
  char *buffer; /*in*/
  tSize length; /*in*/
  int _res;
  value _vres;

  struct camlidl_ctx_struct _ctxs = { CAMLIDL_TRANSIENT, NULL };
  camlidl_ctx _ctx = &_ctxs;
  camlidl_ml2c_hdfs_hdfsFS(_v_fs, &fs, _ctx);
  camlidl_ml2c_hdfs_hdfsFile(_v_file, &file, _ctx);
  buffer = String_val(_v_buffer);
  length = string_length(_v_buffer);
  /* begin user-supplied calling sequence */
  _res = hdfsRead(fs, file, buffer, length);
  if (-1 == _res) { camlidl_free(_ctx); uerror("hdfsRead",Nothing); }
  /* end user-supplied calling sequence */
  _vres = Val_int(_res);
  camlidl_free(_ctx);
  return _vres;
}

value camlidl_hdfs_hdfsPread(
	value _v_fs,
	value _v_file,
	value _v_position,
	value _v_buffer)
{
  hdfsFS fs; /*in*/
  hdfsFile file; /*in*/
  tOffset position; /*in*/
  char *buffer; /*in*/
  tSize length; /*in*/
  int _res;
  value _vres;

  struct camlidl_ctx_struct _ctxs = { CAMLIDL_TRANSIENT, NULL };
  camlidl_ctx _ctx = &_ctxs;
  camlidl_ml2c_hdfs_hdfsFS(_v_fs, &fs, _ctx);
  camlidl_ml2c_hdfs_hdfsFile(_v_file, &file, _ctx);
  camlidl_ml2c_hdfs_tOffset(_v_position, &position, _ctx);
  buffer = String_val(_v_buffer);
  length = string_length(_v_buffer);
  /* begin user-supplied calling sequence */
  _res = hdfsPread(fs, file, position, buffer, length);
  if (-1 == _res) { camlidl_free(_ctx); uerror("hdfsPread",Nothing); }
  /* end user-supplied calling sequence */
  _vres = Val_int(_res);
  camlidl_free(_ctx);
  return _vres;
}

value camlidl_hdfs_hdfsWrite(
	value _v_fs,
	value _v_file,
	value _v_buffer)
{
  hdfsFS fs; /*in*/
  hdfsFile file; /*in*/
  char const *buffer; /*in*/
  tSize length; /*in*/
  tSize _res;
  value _vres;

  struct camlidl_ctx_struct _ctxs = { CAMLIDL_TRANSIENT, NULL };
  camlidl_ctx _ctx = &_ctxs;
  camlidl_ml2c_hdfs_hdfsFS(_v_fs, &fs, _ctx);
  camlidl_ml2c_hdfs_hdfsFile(_v_file, &file, _ctx);
  buffer = String_val(_v_buffer);
  length = string_length(_v_buffer);
  _res = hdfsWrite(fs, file, buffer, length);
  _vres = camlidl_c2ml_hdfs_tSize(&_res, _ctx);
  camlidl_free(_ctx);
  /* begin user-supplied deallocation sequence */
if (-1 == _res) uerror("hdfsWrite", Nothing);
  /* end user-supplied deallocation sequence */
  return _vres;
}

value camlidl_hdfs_hdfsFlush(
	value _v_fs,
	value _v_file)
{
  hdfsFS fs; /*in*/
  hdfsFile file; /*in*/
  retcode _res;
  struct camlidl_ctx_struct _ctxs = { CAMLIDL_TRANSIENT, NULL };
  camlidl_ctx _ctx = &_ctxs;
  camlidl_ml2c_hdfs_hdfsFS(_v_fs, &fs, _ctx);
  camlidl_ml2c_hdfs_hdfsFile(_v_file, &file, _ctx);
  _res = hdfsFlush(fs, file);
  camlidl_free(_ctx);
  /* begin user-supplied deallocation sequence */
if (-1 == _res) uerror("hdfsFlush", Nothing);
  /* end user-supplied deallocation sequence */
  return Val_unit;
}

value camlidl_hdfs_hdfsHFlush(
	value _v_fs,
	value _v_file)
{
  hdfsFS fs; /*in*/
  hdfsFile file; /*in*/
  retcode _res;
  struct camlidl_ctx_struct _ctxs = { CAMLIDL_TRANSIENT, NULL };
  camlidl_ctx _ctx = &_ctxs;
  camlidl_ml2c_hdfs_hdfsFS(_v_fs, &fs, _ctx);
  camlidl_ml2c_hdfs_hdfsFile(_v_file, &file, _ctx);
  _res = hdfsHFlush(fs, file);
  camlidl_free(_ctx);
  /* begin user-supplied deallocation sequence */
if (-1 == _res) uerror("hdfsHFlush", Nothing);
  /* end user-supplied deallocation sequence */
  return Val_unit;
}

value camlidl_hdfs_hdfsHSync(
	value _v_fs,
	value _v_file)
{
  hdfsFS fs; /*in*/
  hdfsFile file; /*in*/
  retcode _res;
  struct camlidl_ctx_struct _ctxs = { CAMLIDL_TRANSIENT, NULL };
  camlidl_ctx _ctx = &_ctxs;
  camlidl_ml2c_hdfs_hdfsFS(_v_fs, &fs, _ctx);
  camlidl_ml2c_hdfs_hdfsFile(_v_file, &file, _ctx);
  _res = hdfsHSync(fs, file);
  camlidl_free(_ctx);
  /* begin user-supplied deallocation sequence */
if (-1 == _res) uerror("hdfsHSync", Nothing);
  /* end user-supplied deallocation sequence */
  return Val_unit;
}

value camlidl_hdfs_hdfsAvailable(
	value _v_fs,
	value _v_file)
{
  hdfsFS fs; /*in*/
  hdfsFile file; /*in*/
  int _res;
  value _vres;

  struct camlidl_ctx_struct _ctxs = { CAMLIDL_TRANSIENT, NULL };
  camlidl_ctx _ctx = &_ctxs;
  camlidl_ml2c_hdfs_hdfsFS(_v_fs, &fs, _ctx);
  camlidl_ml2c_hdfs_hdfsFile(_v_file, &file, _ctx);
  _res = hdfsAvailable(fs, file);
  _vres = Val_int(_res);
  camlidl_free(_ctx);
  /* begin user-supplied deallocation sequence */
if (-1 == _res) uerror("hdfsAvailable", Nothing);
  /* end user-supplied deallocation sequence */
  return _vres;
}

value camlidl_hdfs_hdfsCopy(
	value _v_srcFS,
	value _v_src,
	value _v_dstFS,
	value _v_dst)
{
  hdfsFS srcFS; /*in*/
  char const *src; /*in*/
  hdfsFS dstFS; /*in*/
  char const *dst; /*in*/
  retcode _res;
  struct camlidl_ctx_struct _ctxs = { CAMLIDL_TRANSIENT, NULL };
  camlidl_ctx _ctx = &_ctxs;
  camlidl_ml2c_hdfs_hdfsFS(_v_srcFS, &srcFS, _ctx);
  src = String_val(_v_src);
  camlidl_ml2c_hdfs_hdfsFS(_v_dstFS, &dstFS, _ctx);
  dst = String_val(_v_dst);
  _res = hdfsCopy(srcFS, src, dstFS, dst);
  camlidl_free(_ctx);
  /* begin user-supplied deallocation sequence */
if (-1 == _res) uerror("hdfsCopy", _v_src);
  /* end user-supplied deallocation sequence */
  return Val_unit;
}

value camlidl_hdfs_hdfsMove(
	value _v_srcFS,
	value _v_src,
	value _v_dstFS,
	value _v_dst)
{
  hdfsFS srcFS; /*in*/
  char const *src; /*in*/
  hdfsFS dstFS; /*in*/
  char const *dst; /*in*/
  retcode _res;
  struct camlidl_ctx_struct _ctxs = { CAMLIDL_TRANSIENT, NULL };
  camlidl_ctx _ctx = &_ctxs;
  camlidl_ml2c_hdfs_hdfsFS(_v_srcFS, &srcFS, _ctx);
  src = String_val(_v_src);
  camlidl_ml2c_hdfs_hdfsFS(_v_dstFS, &dstFS, _ctx);
  dst = String_val(_v_dst);
  _res = hdfsMove(srcFS, src, dstFS, dst);
  camlidl_free(_ctx);
  /* begin user-supplied deallocation sequence */
if (-1 == _res) uerror("hdfsMove", _v_src);
  /* end user-supplied deallocation sequence */
  return Val_unit;
}

value camlidl_hdfs_hdfsDelete(
	value _v_fs,
	value _v_path,
	value _v_recursive)
{
  hdfsFS fs; /*in*/
  char const *path; /*in*/
  int recursive; /*in*/
  retcode _res;
  struct camlidl_ctx_struct _ctxs = { CAMLIDL_TRANSIENT, NULL };
  camlidl_ctx _ctx = &_ctxs;
  camlidl_ml2c_hdfs_hdfsFS(_v_fs, &fs, _ctx);
  path = String_val(_v_path);
  recursive = Int_val(_v_recursive);
  _res = hdfsDelete(fs, path, recursive);
  camlidl_free(_ctx);
  /* begin user-supplied deallocation sequence */
if (-1 == _res) uerror("hdfsDelete", _v_path);
  /* end user-supplied deallocation sequence */
  return Val_unit;
}

value camlidl_hdfs_hdfsRename(
	value _v_fs,
	value _v_oldPath,
	value _v_newPath)
{
  hdfsFS fs; /*in*/
  char const *oldPath; /*in*/
  char const *newPath; /*in*/
  retcode _res;
  struct camlidl_ctx_struct _ctxs = { CAMLIDL_TRANSIENT, NULL };
  camlidl_ctx _ctx = &_ctxs;
  camlidl_ml2c_hdfs_hdfsFS(_v_fs, &fs, _ctx);
  oldPath = String_val(_v_oldPath);
  newPath = String_val(_v_newPath);
  _res = hdfsRename(fs, oldPath, newPath);
  camlidl_free(_ctx);
  /* begin user-supplied deallocation sequence */
if (-1 == _res) uerror("hdfsRename", _v_oldPath);
  /* end user-supplied deallocation sequence */
  return Val_unit;
}

value camlidl_hdfs_hdfsSetWorkingDirectory(
	value _v_fs,
	value _v_path)
{
  hdfsFS fs; /*in*/
  char const *path; /*in*/
  retcode _res;
  struct camlidl_ctx_struct _ctxs = { CAMLIDL_TRANSIENT, NULL };
  camlidl_ctx _ctx = &_ctxs;
  camlidl_ml2c_hdfs_hdfsFS(_v_fs, &fs, _ctx);
  path = String_val(_v_path);
  _res = hdfsSetWorkingDirectory(fs, path);
  camlidl_free(_ctx);
  /* begin user-supplied deallocation sequence */
if (-1 == _res) uerror("hdfsSetWorkingDirectory", _v_path);
  /* end user-supplied deallocation sequence */
  return Val_unit;
}

value camlidl_hdfs_hdfsCreateDirectory(
	value _v_fs,
	value _v_path)
{
  hdfsFS fs; /*in*/
  char const *path; /*in*/
  retcode _res;
  struct camlidl_ctx_struct _ctxs = { CAMLIDL_TRANSIENT, NULL };
  camlidl_ctx _ctx = &_ctxs;
  camlidl_ml2c_hdfs_hdfsFS(_v_fs, &fs, _ctx);
  path = String_val(_v_path);
  _res = hdfsCreateDirectory(fs, path);
  camlidl_free(_ctx);
  /* begin user-supplied deallocation sequence */
if (-1 == _res) uerror("hdfsCreateDirectory", _v_path);
  /* end user-supplied deallocation sequence */
  return Val_unit;
}

value camlidl_hdfs_hdfsSetReplication(
	value _v_fs,
	value _v_path,
	value _v_replication)
{
  hdfsFS fs; /*in*/
  char const *path; /*in*/
  int replication; /*in*/
  retcode _res;
  struct camlidl_ctx_struct _ctxs = { CAMLIDL_TRANSIENT, NULL };
  camlidl_ctx _ctx = &_ctxs;
  camlidl_ml2c_hdfs_hdfsFS(_v_fs, &fs, _ctx);
  path = String_val(_v_path);
  replication = Int_val(_v_replication);
  _res = hdfsSetReplication(fs, path, replication);
  camlidl_free(_ctx);
  /* begin user-supplied deallocation sequence */
if (-1 == _res) uerror("hdfsSetReplication", _v_path);
  /* end user-supplied deallocation sequence */
  return Val_unit;
}

void camlidl_ml2c_hdfs_hdfsFileInfo(value _v1, hdfsFileInfo * _c2, camlidl_ctx _ctx)
{
value _v3;
value _v4;
value _v5;
value _v6;
value _v7;
value _v8;
value _v9;
value _v10;
value _v11;
value _v12;
  _v3 = Field(_v1, 0);
  (*_c2).mKind = camlidl_ml2c_hdfs_enum_tObjectKind(_v3);
  _v4 = Field(_v1, 1);
  (*_c2).mName = camlidl_malloc_string(_v4, _ctx);
  _v5 = Field(_v1, 2);
  camlidl_ml2c_hdfs_tTime(_v5, &(*_c2).mLastMod, _ctx);
  _v6 = Field(_v1, 3);
  camlidl_ml2c_hdfs_tOffset(_v6, &(*_c2).mSize, _ctx);
  _v7 = Field(_v1, 4);
  (*_c2).mReplication = Int_val(_v7);
  _v8 = Field(_v1, 5);
  camlidl_ml2c_hdfs_tOffset(_v8, &(*_c2).mBlockSize, _ctx);
  _v9 = Field(_v1, 6);
  (*_c2).mOwner = camlidl_malloc_string(_v9, _ctx);
  _v10 = Field(_v1, 7);
  (*_c2).mGroup = camlidl_malloc_string(_v10, _ctx);
  _v11 = Field(_v1, 8);
  (*_c2).mPermissions = Int_val(_v11);
  _v12 = Field(_v1, 9);
  camlidl_ml2c_hdfs_tTime(_v12, &(*_c2).mLastAccess, _ctx);
}

value camlidl_c2ml_hdfs_hdfsFileInfo(hdfsFileInfo * _c2, camlidl_ctx _ctx)
{
value _v1;
value _v3[10];
  memset(_v3, 0, 10 * sizeof(value));
  Begin_roots_block(_v3, 10)
    _v3[0] = camlidl_c2ml_hdfs_enum_tObjectKind((*_c2).mKind);
    _v3[1] = copy_string((*_c2).mName);
    _v3[2] = camlidl_c2ml_hdfs_tTime(&(*_c2).mLastMod, _ctx);
    _v3[3] = camlidl_c2ml_hdfs_tOffset(&(*_c2).mSize, _ctx);
    _v3[4] = Val_int((*_c2).mReplication);
    _v3[5] = camlidl_c2ml_hdfs_tOffset(&(*_c2).mBlockSize, _ctx);
    _v3[6] = copy_string((*_c2).mOwner);
    _v3[7] = copy_string((*_c2).mGroup);
    _v3[8] = Val_int((*_c2).mPermissions);
    _v3[9] = camlidl_c2ml_hdfs_tTime(&(*_c2).mLastAccess, _ctx);
    _v1 = camlidl_alloc_small(10, 0);
    { mlsize_t _c4;
      for (_c4 = 0; _c4 < 10; _c4++) Field(_v1, _c4) = _v3[_c4];
    }
  End_roots()
  return _v1;
}

value camlidl_hdfs_hdfsListDirectory(
	value _v_fs,
	value _v_path)
{
  hdfsFS fs; /*in*/
  char const *path; /*in*/
  int *numEntries; /*out*/
  hdfsFileInfo *_res;
  int _c1;
  mlsize_t _c2;
  value _v3;
  value _vres;

  struct camlidl_ctx_struct _ctxs = { CAMLIDL_TRANSIENT, NULL };
  camlidl_ctx _ctx = &_ctxs;
  camlidl_ml2c_hdfs_hdfsFS(_v_fs, &fs, _ctx);
  path = String_val(_v_path);
  numEntries = &_c1;
  /* begin user-supplied calling sequence */
  _res = hdfsListDirectory(fs, path, numEntries);
  if (NULL == _res) uerror("hdfsListDirectory", _v_path);
  /* end user-supplied calling sequence */
  _vres = camlidl_alloc(*numEntries, 0);
  Begin_root(_vres)
    for (_c2 = 0; _c2 < *numEntries; _c2++) {
      _v3 = camlidl_c2ml_hdfs_hdfsFileInfo(&_res[_c2], _ctx);
      modify(&Field(_vres, _c2), _v3);
    }
  End_roots()
  camlidl_free(_ctx);
  /* begin user-supplied deallocation sequence */
  hdfsFreeFileInfo(_res, *numEntries);
  /* end user-supplied deallocation sequence */
  return _vres;
}

value camlidl_hdfs_hdfsGetPathInfo(
	value _v_fs,
	value _v_path)
{
  hdfsFS fs; /*in*/
  char const *path; /*in*/
  hdfsFileInfo *_res;
  value _vres;

  struct camlidl_ctx_struct _ctxs = { CAMLIDL_TRANSIENT, NULL };
  camlidl_ctx _ctx = &_ctxs;
  camlidl_ml2c_hdfs_hdfsFS(_v_fs, &fs, _ctx);
  path = String_val(_v_path);
  /* begin user-supplied calling sequence */
  _res = hdfsGetPathInfo(fs, path);
  if (NULL == _res) uerror("hdfsGetPathInfo", _v_path);
  /* end user-supplied calling sequence */
  _vres = camlidl_c2ml_hdfs_hdfsFileInfo(&*_res, _ctx);
  camlidl_free(_ctx);
  /* begin user-supplied deallocation sequence */
  hdfsFreeFileInfo(_res, 1);
  /* end user-supplied deallocation sequence */
  return _vres;
}

