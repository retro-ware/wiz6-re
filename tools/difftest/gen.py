"""Generate golden cases for the Go port's difftest from the original code.

usage: gen.py FUNC[,FUNC...]|all [N]     writes ~/Projects/wiz6-go/internal/game/testdata/diff/FUNC.json.gz
"""
import gzip, json, os, random as pyrandom, sys
sys.path.insert(0, os.path.dirname(__file__))
from emu import Machine, Crash
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
unmapped_reads = set()
# Always part of the input when set: the Go port reaches the actor through them where the
# C gets a pointer.
KEEP = {'actGroup', 'actMember'}
IGNORE = [(0, 0x10), (0x43a8, 0x43c4), (0x4fa8, 0x4fc0),  # pointers: groups, windows
           (0x9000, 0x10000)]
IGNORE_OVL = {'WMEXE': [(0x4ff8, 0x500a),    # struct-return statics (f5eea's dice, get_load_category_x)
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
    raw = made[3] if len(made) > 3 else {}           # {DS offset: bytes} the C's pointer args point at
    seeds = [rnd.randrange(1, 0x7600) for _ in range(3)]
    for p, v in state.items():
        write(m, p, v)
    for o, b in raw.items():
        m.wr(o, b)
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
             for p in sorted({BYOFF[o] for o in m.reads if o in BYOFF} | (KEEP & set(made[0])))}
    for o in m.reads:
        if o not in BYOFF and 0x6be <= o < 0x9000 and not any(a <= o < b for a, b in IGNORE + IGNORE_OVL.get(spec.ovl, [])):
            unmapped_reads.add(o)
    return dict(args=args, seeds=seeds, state=state, ret=None if spec.void else ret, out=out,
                rng=m.rng, log=m.log), unmapped


def main():
    n = int(sys.argv[2]) if len(sys.argv) > 2 else 1000
    names = sys.argv[1].split(',')
    if names == ['all']:
        names = sorted(k for k, v in vars(specs).items() if isinstance(v, specs.Spec))
    for name in names:
        gen(name, n)


def gen(name, n):
    spec = getattr(specs, name)
    m = Machine(spec.ovl, spec.stubs, stub_fx=spec.stub_fx)
    rnd = pyrandom.Random(name)
    cases, unmapped = [], set()
    crashes = {}
    while len(cases) < n:
        try:
            c, u = run_case(m, spec, rnd)
        except Crash as e:
            crashes[str(e)] = crashes.get(str(e), 0) + 1
            if sum(crashes.values()) > n:
                break
            continue
        cases.append(c)
        unmapped |= u
    if unmapped:
        print('unmapped DS writes:', ' '.join('%04x' % o for o in sorted(unmapped)))
    if crashes:
        print('discarded (the original faults):', crashes)
    if unmapped_reads:
        print('unmapped BSS reads:', ' '.join('%04x' % o for o in sorted(unmapped_reads)))
    os.makedirs(OUT, exist_ok=True)
    data = json.dumps(cases, separators=(',', ':')).encode()
    with gzip.GzipFile(os.path.join(OUT, name + '.json.gz'), 'wb', mtime=0) as f:
        f.write(data)
    print('%s: %d cases' % (name, len(cases)))


if __name__ == '__main__':
    main()
