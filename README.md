Bindings to libhdfs
===================

How to build
------------

libhdfs is often installed in non-system path, in such case one has to tell C compiler
how to find the header and library files, e.g. with gcc on Linux something like below should work :

    export LIBRARY_PATH=/opt/hadoop/lib/native:$LIBRARY_PATH
    export C_INCLUDE_PATH=/opt/hadoop/include:$C_INCLUDE_PATH
    make

This library will use hdfs pkg-config files when available (but not all hadoop packages provide those) and above configuration will not be necessary.
Runtime configuration (below) might be required anyway.

How to run
----------

Accordingly, the binary relies on dynamic linker to find libhdfs C library and jvm to find hdfs jars to run.
If they are not present in default paths - specify manually :

    export CLASSPATH=$(JAVA_HOME=/usr/lib/jvm/default-java /opt/hadoop/bin/hadoop classpath --glob)
    export LD_LIBRARY_PATH=/opt/hadoop/lib/native:$LD_LIBRARY_PATH
    ./example.native user webhdfs://address
