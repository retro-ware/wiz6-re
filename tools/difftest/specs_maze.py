"""Maze (WMAZE, WDOPT) case specs."""
import layout as L
from specs import pick, Spec, STUB_FX, SCRATCH

L.GLOBALS.update({
    'gameState': (0x363a, 'int16'),
    'curMember': (0x43cc, 'int16'),
    'curSound': (0x4336, 'int16'),
    'messageDelay': (0x4fca, 'int16'),
    'cellEventIndex': (0x4ee8, 'int16'),
    'curEvent': (0x4ee0, '[4]int16'),
    'reloadMapB': (0x4eea, 'uint8'),
    'reloadMapA': (0x4eeb, 'uint8'),
    'levelFlags': (0x4eec, '[14][10]uint8'),
    'saveState.G4f78': (0x4f78, 'int32'),
    'saveState.G4f7c': (0x4f7c, 'int32'),
    'saveState.G4f80': (0x4f80, 'int32'),
    'g4f84': (0x4f84, 'int16'),
    'g4f86': (0x4f86, 'int16'),
    'g4f88': (0x4f88, 'int16'),
    'g4f8a': (0x4f8a, 'int16'),
    'saveState.G4f8c': (0x4f8c, 'int16'),
    'saveState.G4f8e': (0x4f8e, 'int16'),
    'saveState.G4f90': (0x4f90, 'int16'),
    'saveState.G4f92': (0x4f92, 'int16'),
    'saveState.G4f94': (0x4f94, 'int16'),
    'saveState.G4f96': (0x4f96, 'int16'),
    'saveState.G4f98': (0x4f98, 'int16'),
    'partyFacing': (0x4f9a, 'int16'),
    'partyBlock': (0x4f9c, 'int16'),
    'cellY': (0x4f9e, 'int16'),
    'cellX': (0x4fa0, 'int16'),
    'partyY': (0x4fa2, 'int16'),
    'partyX': (0x4fa4, 'int16'),
    'g4fa6': (0x4fa6, 'int16'),
    # WMAZE bss
    'mzRedrawView': (0x5032, 'int16'),
    'mzG5034': (0x5034, 'int16'),
    'mzG5038': (0x5038, 'int16'),
    'mzG503a': (0x503a, 'int16'),
    'mzG503c': (0x503c, 'int16'),
    'mzG503e': (0x503e, 'int16'),
    'eventScreenDirty': (0x5230, 'int16'),
    'mzG5232': (0x5232, 'int16'),
})


def rv(rnd, size=1, signed=False):
    """A random field value: mostly small, sometimes anything."""
    r = rnd.random()
    if r < 0.4:
        return 0
    if r < 0.8:
        return rnd.randint(1, 10)
    lo, hi = (-(1 << (8 * size - 1)), (1 << (8 * size - 1)) - 1) if signed else (0, (1 << (8 * size)) - 1)
    return rnd.randint(lo, hi)


def fill(s, rnd, root, ty, base=None):
    """Every scalar of root (type ty) random."""
    for p, o, n, sg in L.leaves(ty, root, 0):
        s[p] = rv(rnd, n, sg)


def base(rnd):
    s = {}
    pc = rnd.randint(1, 6)
    s['partyCount'] = pc
    s['gameState'] = rnd.choice([5, 5, 5, 6, 8, 10])
    s['gameStateArg'] = rnd.randint(0, 13)
    s['hdr.Level'] = rnd.randint(0, 2)
    s['messageDelay'] = rnd.randint(0, 3)
    s['curSound'] = rnd.randint(0, 20)
    s['cellEventIndex'] = rnd.randint(0, 143)
    for k in ('G4f78', 'G4f7c', 'G4f80'):
        s['saveState.' + k] = pick(rnd, 0, 100000, (0, -1, 0x7fffffff))
    for i in range(6):
        s['partyCounters[%d].A' % i] = pick(rnd, 0, 200, (0, 1, 60, -1, 32767))
        s['partyCounters[%d].B' % i] = rnd.randint(0, 10)
    for m in range(6):
        p = 'party[%d].' % m
        fill(s, rnd, 'party[%d]' % m, 'PC')
        s[p + 'Condition'] = rnd.choice([0] * 6 + [1, 2, 3, 4, 5, 255])
        s[p + 'HPMax'] = pick(rnd, 1, 200, (0, 32767))
        s[p + 'HP'] = pick(rnd, 0, 200, (0, -5, 32767))
        s[p + 'StaminaMax'] = pick(rnd, 1, 200, (0, 32767))
        s[p + 'Stamina'] = pick(rnd, 0, 200, (0, -5, 32767))
        for k in range(6):
            s[p + 'SP[%d].Max' % k] = pick(rnd, 0, 50, (0, 32767))
            s[p + 'SP[%d].Cur' % k] = pick(rnd, 0, 50, (0, -1, 32767))
        for k in range(14):
            s[p + 'Resist[%d]' % k] = pick(rnd, 0, 100, (0, 100, 255))
    for f in range(14):
        for k in range(10):
            s['levelFlags[%d][%d]' % (f, k)] = rnd.randint(0, 255)
            s['hdr.LevelFlags[%d][%d]' % (f, k)] = rnd.randint(0, 255)
    return s


def maze(rnd, s):
    """A random map and a position in it."""
    fill(s, rnd, 'mazeA', 'MapA')
    for k in range(len(range(192))):
        s['mazeA.Walls0[%d]' % k] = rnd.randint(0, 255)
        s['mazeA.Walls1[%d]' % k] = rnd.randint(0, 255)
        s['mazeA.Feature[%d]' % k] = rnd.randint(0, 255)
    for k in range(12):
        s['mazeA.BlockX[%d]' % k] = rnd.randint(0, 4) * 8
        s['mazeA.BlockY[%d]' % k] = rnd.randint(0, 4) * 8
    fill(s, rnd, 'mazeB', 'MapB')
    for e in range(144):
        s['mazeB.Data[%d]' % e] = pick(rnd, 0, 2000, (0, -1, 1, 2))
        s['mazeB.Unk288[%d]' % e] = pick(rnd, 0, 13, (0,))
        s['mazeB.DirBits[%d]' % e] = rnd.randint(-32768, 32767)
        s['mazeB.Kind[%d]' % e] = rnd.randint(0, 30)
        s['mazeB.X[%d]' % e] = rnd.randint(0, 7)
        s['mazeB.Y[%d]' % e] = rnd.randint(0, 7)
        s['mazeB.Unk1296[%d]' % e] = rnd.randint(0, 11)
        s['mazeB.FlagBit[%d]' % e] = rnd.randint(0, 79)
        s['mazeB.Param[%d]' % e] = rnd.randint(0, 30)
    for b in range(12):
        s['mazeB.FirstEvent[%d]' % b] = rnd.randint(0, 143)
    s['partyBlock'] = rnd.randint(0, 11)
    s['cellX'] = rnd.randint(0, 7)
    s['cellY'] = rnd.randint(0, 7)
    s['partyX'] = s['mazeA.BlockX[%d]' % s['partyBlock']] + s['cellX']
    s['partyY'] = s['mazeA.BlockY[%d]' % s['partyBlock']] + s['cellY']
    s['partyFacing'] = rnd.randint(0, 3)
    return s


STUB_FX['WMAZE'] = {0x9948: lambda m: m.w16(0x4336, m._arg(0))}   # load_sound_bank sets cur_sound

# WMAZE functions that only draw, animate, wait or poll input.
MAZE_UI = (0x4ac7, 0x4ba8,   # draw_vital_bar_m, draw_member_status_m
           0x533b,           # wait_animating_m
           0x9a66, 0x9c19, 0x9cde,   # wait_key_animating, wait_more_prompt_m, end_text_page_m
           0x98cb, 0x903b, 0x8f79,   # view drawing
           0xb3ac, 0xb500, 0x9948)   # animate_door, shake_view, load_sound_bank (disk)


def _f55b7(rnd):
    return base(rnd), [pick(rnd, 0, 100, (0, 1, 60, -1, 32767))]


f55b7 = Spec('WMAZE', 0x55b7, _f55b7, MAZE_UI, void=True)


def _f61f8(rnd):
    s = base(rnd)
    return s, [rnd.randint(0, s['partyCount'] - 1), pick(rnd, 0, 30, (0, 1)), pick(rnd, 0, 100, (0, -1)),
               pick(rnd, 0, 6, (0, -1, 6)), rnd.randint(-1, 1)]


f61f8 = Spec('WMAZE', 0x61f8, _f61f8, MAZE_UI, void=True)


def _f63f4(rnd):
    return base(rnd), []


f63f4 = Spec('WMAZE', 0x63f4, _f63f4, MAZE_UI)


def _fae49(rnd):
    return maze(rnd, base(rnd)), []


fae49 = Spec('WMAZE', 0xae49, _fae49, MAZE_UI + (0x9e51,), void=True)
