#!/bin/sh
rm -rf z_tmp/cb
cmake -G "CodeBlocks - Unix Makefiles" -H. -Bz_tmp/cb -DCMAKE_BUILD_TYPE=Debug