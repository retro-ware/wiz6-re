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
        s[p + 'ItemCount'] = rnd.randint(0, 10)
        s[p + 'SwagCount'] = rnd.randint(0, 12)
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


L.GLOBALS.update({
    'returnCmd': (0x4fce, 'int16'),
    'g4338': (0x4338, 'int16'),
    'g433a': (0x433a, 'int16'),
    'treasureID': (0x43c4, 'int16'),
    'g363e': (0x363e, 'int16'),
    'reachableCells': (0x4e08, '[96]uint8'),
    'eventCells': (0x4e68, '[96]uint8'),
})


def events_here(rnd, s, kinds=range(1, 26)):
    """A run of events from cellEventIndex on in the party's block, most on its cell."""
    st = rnd.randint(0, 130)
    s['cellEventIndex'] = st
    for e in range(st, min(144, st + rnd.randint(1, 6))):
        s['mazeB.Unk1296[%d]' % e] = s['partyBlock']
        if rnd.random() < 0.8:
            s['mazeB.X[%d]' % e], s['mazeB.Y[%d]' % e] = s['cellX'], s['cellY']
        k = s['mazeB.Kind[%d]' % e] = rnd.choice(kinds)
        d = s['mazeB.DirBits[%d]' % e]
        if k in (10, 21, 23):     # target block < 12
            s['mazeB.DirBits[%d]' % e] = (d & ~0x3c0) | (rnd.randint(0, 11) << 6)
        if k in (11, 22):     # flag bits < 80, map < 14
            s['mazeB.Data[%d]' % e] = rnd.randint(0, 79)
            s['mazeB.Unk288[%d]' % e] = rnd.randint(0, 79)
        if k == 4:      # encounter table < 24
            s['mazeB.Param[%d]' % e] = rnd.randint(0, 23)
        if k == 24:     # header bit
            s['mazeB.Data[%d]' % e] = rnd.randint(0, 1000)
        if k == 11:
            s['mazeB.DirBits[%d]' % e] = (d & ~0xfff) | (rnd.randint(0, 13) << 8) | rnd.randint(0, 79)
        if rnd.random() < 0.7:   # mostly not flagged yet
            f = s['mazeB.FlagBit[%d]' % e]
            s['levelFlags[%d][%d]' % (s['gameStateArg'], f >> 3)] &= ~(1 << (f & 7)) & 255
    return s


def mz(rnd):
    s = maze(rnd, base(rnd))
    s['gameState'] = 5
    for k in range(4):
        s['curEvent[%d]' % k] = rnd.choice([0, 0, 1, 2, 3])
    for k in ('G4f8c', 'G4f8e', 'G4f90', 'G4f92', 'G4f94', 'G4f96', 'G4f98'):
        s['saveState.' + k] = rnd.randint(0, 13 if k == 'G4f98' else 7)
    s['mzG5034'] = rnd.randint(0, 1)
    return s


MZ_STUBS = MAZE_UI + (0x9e51, 0xbc93, 0xc182)   # + show_message_text_m, puzzle_event, riddle_event (input)

f5949 = Spec('WMAZE', 0x5949, lambda r: (mz(r), [r.randint(-1, 2)]), MZ_STUBS, void=True)
f56f4 = Spec('WMAZE', 0x56f4, lambda r: (mz(r), [r.randint(0, 3)]), MZ_STUBS)
f7868 = Spec('WMAZE', 0x7868, lambda r: (mz(r), [r.randint(1, 14)]), MZ_STUBS, void=True)
fc8eb = Spec('WMAZE', 0xc8eb, lambda r: (events_here(r, mz(r)), []), MZ_STUBS, void=True)
fa4f5 = Spec('WMAZE', 0xa4f5, lambda r: (events_here(r, mz(r), (8,)), []), MZ_STUBS, void=True)
fccd2 = Spec('WMAZE', 0xccd2, lambda r: (events_here(r, mz(r)), []), MZ_STUBS, void=True)


L.GLOBALS.update({'lockTumblers': (0x5234, '[6]int16')})


def _lock(rnd):
    s = events_here(rnd, mz(rnd), (7,))
    for k in range(6):
        s['lockTumblers[%d]' % k] = rnd.randint(0, 40)
    for m in range(6):
        s['party[%d].StaminaMax' % m] = rnd.randint(1, 200)
    return s, [rnd.randint(0, s['partyCount'] - 1), s['cellEventIndex']]


def stop_after(rnd, n=12):
    """Scripted keys: a few non-Enter keys, then Enter."""
    return [rnd.choice([32, 65, 27, 0]) for _ in range(rnd.randint(0, n))] + [13]


def _lockk(rnd):
    s, a = _lock(rnd)
    return s, a, a, {}, stop_after(rnd)


fced8 = Spec('WMAZE', 0xced8, _lockk, MZ_STUBS)
fd3b3 = Spec('WMAZE', 0xd3b3, _lockk, MZ_STUBS)


# WDOPT (spells and items outside combat)
L.GLOBALS.update({'dpResultMsg': (0x502a, 'int16'), 'dpResultBeep': (0x502c, 'int16')})
STUB_FX['WDOPT'] = {0x45ac: lambda m: m.w16(0x4336, m._arg(0))}   # load_sound_dopt sets cur_sound
DOPT_UI = (0x45ac, 0x4688, 0x46ae, 0x4728, 0x47ce, 0x483f, 0x489b, 0x48e0, 0x5273, 0x5be2,
           0x6737, 0x6760, 0x6789, 0x67dc, 0x6880, 0x6953, 0x6b3d, 0x6bfd, 0x76d5,
           0x8aa9, 0x9531, 0x95f3, 0x9e83)
SPELLS = (53, 68, 41, 30, 38, 70, 10, 15, 26, 46, 57, 51, 64, 77, 39, 60, 62, 80, 81)


def dp(rnd, kinds=(7, 19, 3)):
    s = events_here(rnd, mz(rnd), kinds)
    for e in range(144):
        if s['mazeB.Kind[%d]' % e] == 19:
            s['mazeB.DirBits[%d]' % e] = rnd.randint(0, 79) | rnd.randint(0, 79) << 8
            if rnd.random() < 0.6:
                s['mazeB.Data[%d]' % e] = s['party[0].Items[0].ID']
    return s


f6054 = Spec('WDOPT', 0x6054, lambda r: (dp(r), [r.randint(0, 5), r.choice(SPELLS + (r.randint(0, 81),)),
                                                  r.randint(1, 7), r.randint(0, 5)]), DOPT_UI, void=True)
f517b = Spec('WDOPT', 0x517b, lambda r: (dp(r), [r.randint(1, 7)]), DOPT_UI)
f6561 = Spec('WDOPT', 0x6561, lambda r: (dp(r), [0, 0] if r.random() < 0.5 else [r.randint(0, 5), r.randint(0, 9)]), DOPT_UI)
def _slot(rnd):
    """A member and one of its items or swag."""
    s = base(rnd)
    m = rnd.randint(0, 5)
    p = 'party[%d].' % m
    s[p + 'ItemCount'], s[p + 'SwagCount'] = rnd.randint(1, 10), rnd.randint(1, 12)
    if rnd.random() < 0.5:
        return s, [m, rnd.randint(0, s[p + 'ItemCount'] - 1)]
    return s, [m, 10 + rnd.randint(0, s[p + 'SwagCount'] - 1)]


f4faf = Spec('WDOPT', 0x4faf, _slot, DOPT_UI, void=True)
f4e09 = Spec('WDOPT', 0x4e09, _slot, DOPT_UI, void=True)


def _flood(rnd):
    s = mz(rnd)
    for k in range(192):     # sparser walls: bigger regions
        if rnd.random() < 0.5:
            s['mazeA.Walls0[%d]' % k] = 0
            s['mazeA.Walls1[%d]' % k] = 0
    for k in range(96):
        s['reachableCells[%d]' % k] = rnd.choice([0, 0, 255, rnd.randint(0, 255)])
    return s, [rnd.randint(0, 11), rnd.randint(-8, 7), rnd.randint(-8, 7), rnd.randint(0, 1)]


f4735 = Spec('WMAZE', 0x4735, _flood, MZ_STUBS, void=True)
f9a24 = Spec('WMAZE', 0x9a24, lambda r: (base(r), [r.randint(0, 5), r.randint(0, 29), pick(r, 0, 10, (0, -1, 300))]),
             MZ_STUBS, void=True)


KEYS = [8, 9, 10, 11, 13, 27, 32] + [ord(c) for c in '123456FPEfpeYN']


def script(rnd, n=20):
    """Random scripted keys from the menus' alphabet."""
    return [rnd.choice(KEYS) for _ in range(rnd.randint(1, n))]


from emu import message_text
PROMPTS = {0x501e: message_text(2000) + b'\0', 0x5028: message_text(2001) + b'\0'}   # init_maze_screen's key sets


def _menu(rnd):
    s, a = _lock(rnd)
    for k in range(6):   # written first: an input equal to the result would not be recorded
        del s['lockTumblers[%d]' % k]
    return s, [a[1]], [a[1]], PROMPTS, script(rnd) + [11, 10, 10, 13] * 3   # then EXIT


fd8a9 = Spec('WMAZE', 0xd8a9, _menu, MZ_STUBS, void=True, texts=True)

fdb1e = Spec('WMAZE', 0xdb1e, lambda r: (events_here(r, mz(r), (3, 7, 7, 1)), [], [], PROMPTS,
                                         script(r) + [11, 10, 10, 13] * 3), MZ_STUBS, void=True, texts=True)
