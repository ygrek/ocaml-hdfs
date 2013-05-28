
#define Val_none Val_int(0)
#define Some_val(v) Field(v,0)

CAMLprim value ml_hdfs_connect(value v_bld)
{
  value _vres;

  struct hdfsBuilder* bld = hdfsNewBuilder();
  if (NULL == bld)
    uerror("hdfsNewBuilder",Nothing);

  if (Bool_val(Field(v_bld,0)))
    hdfsBuilderSetForceNewInstance(bld);

  hdfsBuilderSetNameNode(bld, (Val_none != Field(v_bld,1)) ? String_val(Some_val(Field(v_bld,1))) : NULL);

  if (Val_none != Field(v_bld,2))
    hdfsBuilderSetNameNodePort(bld, Int_val(Some_val(Field(v_bld,2))));

  if (Val_none != Field(v_bld,3))
    /* argument is passed by reference, but there is no GC here so string value doesn't move */
    hdfsBuilderSetUserName(bld, String_val(Some_val(Field(v_bld,3))));

  if (Val_none != Field(v_bld,4))
    /* idem */
    hdfsBuilderSetKerbTicketCachePath(bld, String_val(Some_val(Field(v_bld,4))));

  hdfsFS fs = hdfsBuilderConnect(bld);

  if (NULL == fs)
    uerror("hdfsBuilderConnect",(Val_none != Field(v_bld,1)) ? Some_val(Field(v_bld,1)) : Nothing);

  struct camlidl_ctx_struct _ctxs = { CAMLIDL_TRANSIENT, NULL };
  camlidl_ctx _ctx = &_ctxs;
  _vres = camlidl_c2ml_hdfs_hdfsFS(&fs, _ctx);
  camlidl_free(_ctx);
  return _vres;
}

#if 0
    /**
     * Set a configuration string for an HdfsBuilder.
     *
     * @param key      The key to set.
     * @param val      The value, or NULL to set no value.
     *                 This will be shallow-copied.  You are responsible for
     *                 ensuring that it remains valid until the builder is
     *                 freed.
     *
     * @return         0 on success; nonzero error code otherwise.
     */
    int hdfsBuilderConfSetStr(struct hdfsBuilder *bld, const char *key,
                              const char *val);
#endif
