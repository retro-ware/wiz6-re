"""Field names <-> data-segment offsets.

Struct layouts are read from the Go port's typed records (packed, in declaration
order, as encoding/binary lays them out; checked against their +0xNN comments).
GLOBALS maps each Go global the tests use to its DS address and type.
"""
import os, re

GO = os.path.expanduser('~/Projects/wiz6-go/internal')
PRIM = {'int8': (1, True), 'uint8': (1, False), 'int16': (2, True), 'uint16': (2, False),
        'int32': (4, True), 'uint32': (4, False), 'bool16': (2, False)}

# Go global -> (DS offset, type). Pointer arrays (monsterGroups, groupMonsterRec) are
# placed by the harness: HEAP[name] is where element 0 goes.
GLOBALS = {
    'party': (0x43e8, '[6]PC'),
    'combatGold': (0x43c6, 'int32'),
    'partyCount': (0x43ce, 'int16'),
    'g4fc8': (0x4fc8, 'int16'),
    'actMember': (0x435c, 'int16'),
    'actGroup': (0x435e, 'int16'),
    'monsterGroupCount': (0x4360, 'int16'),
    'mexeMsgMode': (0x500a, 'int16'),      # WMEXE g500a
    'hdr': (0x33f8, 'ScenarioHeader'),
    'viewPosGroup': (0x4362, '[2][5]int16'),
    'monsterJitterX': (0x4348, '[2][5]uint8'),
    'monsterJitterY': (0x433e, '[2][5]uint8'),
    'animCycle': (0x3644, 'int16'),
    'mexeEffect': (0x50fe, '[2][5]int16'),  # WMEXE g50fe
    'mexeBackfire': (0x50fc, 'int16'),      # WMEXE g50fc
    'mexeDelayed': (0x5116, 'int16'),       # WMEXE g5116
    'partyCounters': (0x4ec8, '[6]PartyCounter'),
    'g4352': (0x4352, 'int16'),
    'initiative': (0x435a, 'int16'),
    'g4fcc': (0x4fcc, 'int16'),
    'combatOver': (0x4356, 'int16'),
    'viewRowsOpen': (0x433c, 'int16'),
    'g4354': (0x4354, 'int16'),
    'gameStateArg': (0x363c, 'int16'),
    'memberPortrait': (0x43d0, '[6]int16'),   # C int[6]; the Go port keeps uint8 (slots 0..5)
    'memberPcfileIndex': (0x43dc, '[6]int16'),
    'mexeSpellSound': (0x5114, 'int16'),    # WMEXE g5114
    'mexeFizzle': (0x5118, 'int16'),        # WMEXE g5118
    'monsterPics': (0x36de, '[10]MonsterPicRec'),
    'picSlotLoaded': (0x4322, '[10]uint8'),
    'picSlotMonster': (0x432c, '[10]int8'),    # -1: none (Go int)
    'viewAnimState': (0x4358, 'int16'),
    'rosterSlotUsed': (0x4fd8, '[16]uint8'),
    'levelFlags': (0x4eec, '[14][10]uint8'),
}
# Overlay globals: {ovl: {Go global: (DS offset, type)}}; overlay BSS overlaps between overlays.
OVL_GLOBALS = {
    'WMELE': {'meleAnnounce': (0x500e, 'int16'), 'meleNPCFirst': (0x5010, 'int16'),
              'meleNewFight': (0x5012, 'int16'), 'meleFlash': (0x50b4, '[2][5]int16')},
    'WPCMK': {'newPC': (0x5470, 'PC'), 'bonusPoints': (0x56ac, 'int16'),
              'classEligible': (0x56ae, '[14]bool16'), 'pcmkSkillShown': (0x5670, '[30]bool16')},
    'WPCVW': {'pvClassAllowed': (0x57e0, '[14]bool16'), 'pvSpellTarget': (0x578e, 'int16')},
}
PTRS = {   # pointer array global -> (DS offset of the pointers, element type, count, heap)
    'monsterGroups': (0x43a8, 'MonsterGroup', 7, 0x6000),
    'groupMonsterRec': (0x43b6, 'MonsterRec', 7, 0x7000),
    'mazeA': (0x4faa, 'MapA', 0, 0x7700),    # maze_data
    'mazeB': (0x4fa8, 'MapB', 0, 0x7c80),    # g4fa8
}


def _parse():
    types = {}
    for f in ('dbs/records.go', 'game/state.go'):
        src = open(os.path.join(GO, f)).read()
        for m in re.finditer(r'^type (\w+) struct \{\n(.*?)^\}', src, re.S | re.M):
            fields = []
            for line in m.group(2).splitlines():
                line = line.split('//')[0].strip()
                if not line:
                    continue
                mm = re.match(r'([\w, ]+?)\s+((?:\[\d+\])*[\w.]+)$', line)
                if not mm:          # slices etc.: not a fixed record
                    fields = None
                    break
                for n in mm.group(1).split(','):
                    fields.append((n.strip(), mm.group(2).replace('dbs.', '')))
            if fields is not None:
                types[m.group(1)] = fields
        for m in re.finditer(r'^\s*(\w+)\s*= dbs\.(\w+)$', src, re.M):
            types.setdefault(m.group(1), types.get(m.group(2)))
    return types


TYPES = _parse()


def leaves(t, path='', off=0):
    """Yield (path, offset, size, signed) for every scalar of type t."""
    m = re.match(r'\[(\d+)\](.*)', t)
    if m:
        n, et = int(m.group(1)), m.group(2)
        sz = size(et)
        for i in range(n):
            yield from leaves(et, '%s[%d]' % (path, i), off + i * sz)
    elif t in PRIM:
        yield (path, off) + PRIM[t]
    else:
        for n, ft in TYPES[t]:
            yield from leaves(ft, path + '.' + n, off)
            off += size(ft)


_sz = {}


def size(t):
    if t not in _sz:
        _sz[t] = sum(s for _, _, s, _ in leaves(t))
    return _sz[t]


assert size('PC') == 432 and size('MonsterGroup') == 416 and size('MonsterRec') == 222
assert size('Combatant') == 44 and size('ScenarioHeader') == 414


def table(ovl=None):
    """path -> (DS offset, size, signed) for every scalar the tests can name."""
    t = {}
    for g, (a, ty) in list(GLOBALS.items()) + list(OVL_GLOBALS.get(ovl, {}).items()):
        for p, o, s, sg in leaves(ty, g, a):
            t[p] = (o, s, sg)
    for g, (_, ty, n, heap) in PTRS.items():
        for i in range(n or 1):   # n 0: a single pointer, paths without [i]
            for p, o, s, sg in leaves(ty, '%s[%d]' % (g, i) if n else g, heap + i * size(ty)):
                t[p] = (o, s, sg)
    return t


def decode(ty, b, prefix):
    """{path: value} for the scalars of record bytes b of type ty."""
    return {prefix + p: int.from_bytes(b[o:o + n], 'little', signed=sg) for p, o, n, sg in leaves(ty)}
