"""Asm skeleton of one image: every function as a file-level #asm in src/IMAGE/fXXXX.C.

usage: skel.py IMAGE
Instructions become db bytes, except branches/calls, which use labels (lXXXX inside the
function) or symbols (other functions, library), so ln pulls the same library modules.
Bytes not reached from the entry (switch tables, dead code) stay db. Also writes DATA.C
(initialized game data), BSS.C (game BSS) and LINK.LST (objects in link order).
"""
import os, sys
sys.path.insert(0, os.path.dirname(__file__))
from capstone import x86 as X
from x86dis import Image, flow, BRANCH, OVL_BASE

R = os.path.join(os.path.dirname(__file__), '..')


def db(b):
    out = []
    for i in range(0, len(b), 16):
        out.append('\tdb ' + ','.join('%03xh' % x for x in b[i:i + 16]))
    return out


class Names:
    """Symbol for a code address seen from IMAGE, or None."""

    def __init__(self, img):
        self.img = img
        self.root = Image('ROOT') if img.name != 'ROOT' else img
        self.own = set(img.funcs)

    def __call__(self, a):
        if a in self.img.lib:
            return self.img.lib[a]
        if a in self.own:
            return self.img.fname(a) + '_'
        if self.img.name != 'ROOT' and a < OVL_BASE and a in self.root.funcs:
            return self.root.fname(a) + '_'
        return None


def asm_lines(img, names, s, e, seen, own_label):
    """Asm for [s, e): returns (lines, externs)."""
    targets = set()
    for a, i in seen.items():
        if (i.group(X.X86_GRP_JUMP) or i.mnemonic in BRANCH) and i.operands[0].type == X.X86_OP_IMM:
            t = i.operands[0].imm & 0xffff
            if s <= t < e:
                targets.add(t)
    lines, ext = [], set()
    a = s
    raw = bytearray()

    def flush():
        lines.extend(db(raw))
        raw.clear()

    while a < e:
        if a in targets:
            flush()
            lines.append('l%04x:' % a)
        if a not in seen:
            raw.append(img.code[a - img.cbase])
            a += 1
            continue
        i = seen[a]
        b = bytes(i.bytes)
        m = i.mnemonic
        sym = None
        if (i.group(X.X86_GRP_JUMP) or i.group(X.X86_GRP_CALL) or m in BRANCH) and \
                i.operands[0].type == X.X86_OP_IMM:
            t = i.operands[0].imm & 0xffff
            if t == s and b[0] == 0xe8:
                sym = own_label
            elif s <= t < e:
                # inside the block: the original relative bytes stay right (as mis-resolves some labels)
                sym = None
            elif b[0] in (0xe8, 0xe9):
                sym = names(t)
                if sym:
                    ext.add(sym)
        if sym is None:
            raw += b
        else:
            flush()
            if b[0] == 0xe8:
                lines.append('\tcall %s' % sym)
            elif b[0] == 0xe9:
                lines.append('\tjmp near ptr %s' % sym)
            elif b[0] == 0xeb:
                lines.append('\tjmp short %s' % sym)
            else:
                lines.append('\t%s %s' % (m, sym))
        a += i.size
    flush()
    return lines, ext


def skeleton(img, s, e):
    names = Names(img)
    seen, tables = flow(img, s, e)
    name = img.fname(s) + '_'
    lines, ext = asm_lines(img, names, s, e, seen, name)
    ext.discard(name)
    out = ['#asm', '\tpublic %s' % name]
    out += ['\textrn %s:near' % x for x in sorted(ext)]
    out += ['%s:' % name] + lines + ['#endasm']
    import symnames
    doc = symnames.doc(img.name, s)
    return (['/* %s */' % doc.replace('*/', '* /')] if doc else []) + out


def write(path, lines):
    open(path, 'wb').write(('\r\n'.join(lines) + '\r\n').encode('latin1'))


def main(iname):
    img = Image(iname)
    d = R + '/src/' + iname
    os.makedirs(d, exist_ok=True)
    objs = ['data.o']
    for s, e in img.ranges():
        write('%s/f%04x.c' % (d, s), skeleton(img, s, e))
        objs.append('f%04x.o' % s)
    write(d + '/data.c', ['#asm', 'dataseg segment word public \'data\''] + db(img.data) +
          ['dataseg ends', '#endasm'])
    if img.bss[1] > img.bss[0]:
        write(d + '/bss.c', ['char g%04x[%d];' % (img.bss[0], img.bss[1] - img.bss[0])])
        objs.insert(0, 'bss.o')     # ln allocates commons in order of first mention
    write(d + '/link.lst', objs)
    print('%s: %d functions' % (iname, len(img.ranges())))


if __name__ == '__main__':
    main(sys.argv[1])
