#!/bin/sh
# try.sh FILE.c: compile one C file with Aztec cc and print the disassembly of its code
cd "$(dirname "$0")/.."
d=work/try; rm -rf $d; mkdir -p $d; cp "$1" $d/T.C
tools/dosrun.sh $d "cc -n -L500 t.c" | grep -iE 'error|warn' | head
.venv/bin/python -c "
import sys; sys.path.insert(0,'tools')
from aztobj import Obj; from liftloop import keys
o=Obj(open('$d/T.O','rb').read())
for k in keys(o.seg['code'],0): print('%04x %s'%(k[0],k[2]))"
