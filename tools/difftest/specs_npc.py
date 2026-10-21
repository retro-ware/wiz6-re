"""Treasure, NPC and monster-action (WTREA, WMNPC, WPOPS) case specs."""
import layout as L
from emu import scenario_record
from specs import pick, Spec, STUB_FX, SCRATCH
from specs_combat import base, rich, MONSTERS, ITEMS

L.OVL_GLOBALS.setdefault('WPOPS', {}).update({   # overlay BSS: per overlay (it aliases WMEXE's)
    'wpopsTargetTaken': (0x5043, '[64]uint8'),   # WPOPS g5043
})

# WPOPS overlay functions that only draw, animate, wait or poll input.
POPS_UI = ()


def _pops(rnd):
    s = rich(rnd)
    if rnd.random() < 0.5:
        s['monsterGroups[6].Count'] = 0
    for g in range(7):
        for i in range(9):
            c = 'monsterGroups[%d].Members[%d].' % (g, i)
            s[c + 'B41'] = pick(rnd, -3, 10, (-128, 127))
            s[c + 'B35[1]'] = rnd.choice([0, 0, 1, -1])
        s['monsterGroups[%d].Members[0].Condition' % g] = 0   # a living target (the C loops otherwise)
    return s


f8a45 = Spec('WPOPS', 0x8a45, lambda r: (_pops(r), []), POPS_UI, void=True)


def _f5dbb(rnd):
    s = _pops(rnd)
    for k in range(64):
        s['wpopsTargetTaken[%d]' % k] = rnd.choice([0, 0, 1])
    g = rnd.randint(1, 6)
    placed = rnd.random() < 0.8
    for i in range(9):
        r, c = rnd.randint(0, 1), rnd.randint(0, 4)
        s['monsterGroups[%d].Members[%d].Pos' % (g, i)] = r * 10 + c if placed else -1
        if placed:
            s['viewPosGroup[%d][%d]' % (r, c)] = g   # the C loops if no member is in view
    return s, [rnd.randint(0, 5), g]


f5dbb = Spec('WPOPS', 0x5dbb, _f5dbb, POPS_UI)
