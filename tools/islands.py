"""Print each code-bearing #asm block of src/IMAGE/fXXXX.c with C context and its disassembly.

usage: islands.py IMAGE ADDR
"""
import re, sys, os
sys.path.insert(0, os.path.dirname(__file__))
from liftloop import keys
from x86dis import Image

R = os.path.join(os.path.dirname(__file__), '..')
iname, a = sys.argv[1], int(sys.argv[2], 16)
img = Image(iname)
e = dict(img.ranges())[a]
code = img.code[a - img.cbase:e - img.cbase]
dis = {k[0]: k[2] for k in keys(code, a)}
lines = open(R + '/src/%s/f%04x.c' % (iname, a), encoding='latin1').read().replace('\r', '').split('\n')
i = 0
while i < len(lines):
    if lines[i] == '#asm':
        j = lines.index('#endasm', i)
        body = lines[i + 1:j]
        if any(not l.startswith('\textrn') and not l.startswith('\tpublic') for l in body):
            print('\n'.join(lines[max(0, i - 4):i]))
            print('  ---- asm')
            buf = b''
            def flush(buf):
                for k in keys(buf, 0):
                    print('    %s' % k[2])
            for l in body:
                if l.startswith('\tdb '):
                    buf += bytes(int(x[:-1], 16) for x in l[4:].split(','))
                    continue
                flush(buf); buf = b''
                print('  ' + l)
            flush(buf)
            print('\n'.join(lines[j + 1:j + 4]))
            print('=========')
        i = j
    i += 1
