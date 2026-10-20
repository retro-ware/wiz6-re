"""The 4-byte struct-returning dice maker each overlay carries its own copy of.

cgen returns a struct through a static buffer in the module's own bss; ln places that ahead of
the asm 'global' commons, so it lands at the image's bss start. A function whose bytes match
the template with its buffer there is printed as the C below, and promote.py starts bss.c after
the buffer.
"""
import struct

# WTREA 5ac7 with the buffer address (0x5018) at offsets BUF, BUF + 2 at HI
CODE = bytes.fromhex('558bec83c4fc5756'
                     '8a46048846fe'
                     '8a46068846ff'
                     '8b46088946fc'
                     '8b46fca31850'
                     '8b46fea31a50'
                     'b81850'
                     '5e5f8be55dc3')
BUF = (0x1e, 0x27)          # offsets of the buffer address words
HI = 0x24                   # offset of buffer + 2
SIZE = 4


def buffer(img, s, e):
    """The buffer address if [s, e) is the template returning through the image's bss start."""
    code = img.code[s - img.cbase:e - img.cbase]
    if len(code) != len(CODE) or not img.bss or img.bss[1] <= img.bss[0]:
        return None
    b = struct.unpack_from('<H', code, BUF[0])[0]
    want = bytearray(CODE)
    for o in BUF:
        struct.pack_into('<H', want, o, b)
    struct.pack_into('<H', want, HI, b + 2)
    return b if bytes(want) == code and img.bss[0] <= b < img.bss[1] else None

def accepted(img, state):
    """Function addresses (hex keys) whose struct buffers ln will place where the original has them:
    they chain from the bss start in buffer order. Returns (keys, first free bss address)."""
    b0, keys = img.bss[0], set()
    for buf, size, k in sorted((v['structret'], v.get('sretsize', SIZE), k) for k, v in state.items()
                               if v['status'] == 'ok' and v.get('structret')):
        if buf == b0:
            keys.add(k)
            b0 += size
    return keys, b0



def source(name):
    return ['struct dice { int n; char a, b; };',
            'struct dice %s(p4, p6, p8)' % name,
            'char p4;',
            'char p6;',
            '{',
            '\tstruct dice d;',
            '\td.a = p4;',
            '\td.b = p6;',
            '\td.n = p8;',
            '\treturn d;',
            '}']
