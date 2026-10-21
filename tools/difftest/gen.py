"""Generate golden cases for the Go port's difftest from the original code.

usage: gen.py FUNC [N]     writes ~/Projects/wiz6-go/internal/game/testdata/diff/FUNC.json.gz
"""
import gzip, json, os, random as pyrandom, sys
sys.path.insert(0, os.path.dirname(__file__))
from emu import Machine
import layout as L
import specs

OUT = os.path.expanduser('~/Projects/wiz6-go/internal/game/testdata/diff')
TABLE = L.table()
BYOFF = {}
for _p, (_o, _s, _sg) in TABLE.items():
    for _k in range(_s):
        BYOFF[_o + _k] = _p
# Scratch the Go port keeps in locals: low DS (null window pointers), the stack, and
# per overlay its text buffers and temporaries.
IGNORE = [(0, 0x10), (0x9000, 0x10000)]
IGNORE_OVL = {'WMEXE': [(0x5006, 0x500a),    # f5eea's dice
                        (0x500c, 0x50fc)]}   # text buffers


def read(m, p):
    o, s, sg = TABLE[p]
    return int.from_bytes(m.rd(o, s), 'little', signed=sg)


def write(m, p, v):
    o, s, sg = TABLE[p]
    m.wr(o, (v & ((1 << 8 * s) - 1)).to_bytes(s, 'little'))


def run_case(m, spec, rnd):
    m.reset()
    for g, (a, ty, n, heap) in L.PTRS.items():
        for i in range(n):
            m.w16(a + 2 * i, heap + i * L.size(ty))
    made = spec.make(rnd)
    state, args = made[:2]
    cargs = made[2] if len(made) > 2 else args       # the C's args, when they differ (pointers)
    seeds = [rnd.randrange(1, 0x7600) for _ in range(3)]
    for p, v in state.items():
        write(m, p, v)
    m.seeds(seeds)
    before = m.rd(0, 0x10000)
    ret = m.call(spec.addr, cargs)
    after = m.rd(0, 0x10000)
    out, unmapped = {}, set()
    for o in range(0x10000):
        if before[o] != after[o] and not any(a <= o < b for a, b in IGNORE + IGNORE_OVL.get(spec.ovl, [])):
            if o in BYOFF:
                out[BYOFF[o]] = read(m, BYOFF[o])
            else:
                unmapped.add(o)
    # the input: every named field the call read (as stored, i.e. wrapped)
    state = {p: int.from_bytes(before[TABLE[p][0]:TABLE[p][0] + TABLE[p][1]], 'little', signed=TABLE[p][2])
             for p in sorted({BYOFF[o] for o in m.reads if o in BYOFF})}
    return dict(args=args, seeds=seeds, state=state, ret=None if spec.void else ret, out=out,
                rng=m.rng, log=m.log), unmapped


def main():
    name = sys.argv[1]
    n = int(sys.argv[2]) if len(sys.argv) > 2 else 1000
    spec = getattr(specs, name)
    m = Machine(spec.ovl, spec.stubs)
    rnd = pyrandom.Random(name)
    cases, unmapped = [], set()
    for _ in range(n):
        c, u = run_case(m, spec, rnd)
        cases.append(c)
        unmapped |= u
    if unmapped:
        print('unmapped DS writes:', ' '.join('%04x' % o for o in sorted(unmapped)))
    os.makedirs(OUT, exist_ok=True)
    data = json.dumps(cases, separators=(',', ':')).encode()
    with gzip.GzipFile(os.path.join(OUT, name + '.json.gz'), 'wb', mtime=0) as f:
        f.write(data)
    print('%s: %d cases' % (name, len(cases)))


if __name__ == '__main__':
    main()
