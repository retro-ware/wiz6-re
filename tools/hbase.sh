#!/bin/sh
# hbase.sh IMAGE ADDR: the committed lifter output of src/IMAGE/fADDR.c (LF), as a base for hand/
cd "$(dirname "$0")/.."
git show HEAD:src/$1/f$2.c | tr -d '\r'
