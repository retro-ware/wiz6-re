"""Data cross-references for one image: which function touches which DGROUP address.

usage: xref.py IMAGE    -> work/fn/IMAGE.xref.json and a summary
Memory operands ([disp], [reg+disp]) are data refs; `mov reg,imm` / `push imm` whose value
points into initialized data are recorded as 'imm' refs (likely string literals / &global).
"""
import json, os, re, sys
sys.path.insert(0, os.path.dirname(__file__))
from blobutil import insns, ovl, ROOT_GAME_END, OVL_BASE, R

name = sys.argv[1]
if name == 'ROOT':
    img = open(R + '/orig/wroot.img', 'rb').read()
    code, org = img[:ROOT_GAME_END], 0
    dlo, dhi = 2, 0x636
else:
    hdr, c, d = ovl(name)
    code, org = c[:hdr[6] - OVL_BASE], OVL_BASE
    dlo, dhi = 0x4fee, 0x4fee + hdr[4]
funcs = json.load(open(R + '/work/fn/funcs.json'))[name]

refs = []   # (insn addr, func, kind, value)
fi = 0
for a, b, t in insns(code, org):
    while fi + 1 < len(funcs) and funcs[fi + 1] <= a:
        fi += 1
    f = funcs[fi] if funcs and a >= funcs[0] else None
    if 'cs:' in t or t.startswith('j') or t.startswith('call') or t.startswith('loop'):
        continue
    m = re.search(r'\[([^\]]*)\]', t)
    if m:
        expr = m.group(1)
        if 'bp' in expr:
            continue
        disp = re.findall(r'0x[0-9a-f]+|\b\d+\b', expr)
        neg = '-0x' in expr
        if disp:
            v = int(disp[-1], 0)
            if neg:
                v = -v & 0xffff
            refs.append((a, f, 'mem' if re.fullmatch(r'0x[0-9a-f]+', expr) else 'idx', v))
        continue
    m = re.match(r'(?:mov (?:ax|bx|cx|dx|si|di),|push word )(0x[0-9a-f]+)$', t)
    if m:
        v = int(m.group(1), 16)
        if dlo <= v < dhi:
            refs.append((a, f, 'imm', v))
json.dump(refs, open(R + '/work/fn/%s.xref.json' % name, 'w'))
print(name, len(refs), 'refs;', sum(1 for r in refs if r[2] == 'imm'), 'imm into init data')
