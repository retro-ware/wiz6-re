"""Generate build/<NAME>.O: an overlay's game code/data as one blob object.

usage: mkovl.py NAME          (e.g. WMAZE)
Calls into root game code become WREL fn_XXXX (published by ROOT.O, resolved via WROOT.RSM);
calls to library functions (in the root or in the overlay's own library tail) become WREL on
their names. Game BSS is one uninitialized global.
"""
import os, struct, sys
sys.path.insert(0, os.path.dirname(__file__))
from aztobj import Writer
from blobutil import insns, root_publics, libfns

R = os.path.join(os.path.dirname(__file__), '..')
BASE = 0x4572
name = sys.argv[1]
d = open(R + '/gog/x/app/%s.OVR' % name, 'rb').read()
magic, cbase, csz, dbase, dsz, bsz, entry = struct.unpack_from('<7H', d)
code, data = d[14:14 + csz], d[14 + csz:14 + csz + dsz]
game_end = entry - BASE                  # $ovbgn follows the game modules

lib = libfns('ROOT')
lib.update(libfns(name))
pub = root_publics()
w = Writer()
fix = {}
for a, b, t in insns(code[:game_end], BASE):
    if b[0] in (0xe8, 0xe9) and len(b) == 3:
        tgt = (a + 3 + struct.unpack_from('<h', b, 1)[0]) & 0xffff
        if tgt in lib:
            fix[a + 1 - BASE] = lib[tgt]
        elif tgt < BASE:
            fix[a + 1 - BASE] = pub[tgt]
# ovmain_ = target of $ovbgn's call (rel word at $ovbgn+0x27); not always the first function
ovmain = (entry + 0x29 + struct.unpack_from('<h', code, game_end + 0x27)[0]) & 0xffff
w.sym('ovmain_', 2, 0x48, ovmain - BASE)
p = 0
for a in sorted(fix):
    w.emit('code', code[p:a])
    w.sym(fix[a])
    w.emit('code', ('wrel', fix[a]))
    p = a + 2
w.emit('code', code[p:game_end])
# after the game data: OVBGN's 10 bytes, then data of the library tail (atol pulls ctype, 0x82)
tail = 0xa + (0x82 if any(n == 'atol_' for n in libfns(name).values()) else 0)
w.emit('data', data[:len(data) - tail])
# the overlay's own BSS: everything except what its library tail allocates
gbss = int(sys.argv[2], 16) if len(sys.argv) > 2 else bsz
if gbss:
    w.sym('%s_bss_' % name.lower(), 7, 0x4a, gbss)
open(R + '/build/%s.O' % name, 'wb').write(w.bytes())
print('%s.O: code %x data %x bss %x, %d fixups' % (name, w.size['code'], w.size['data'], bsz, len(fix)))
