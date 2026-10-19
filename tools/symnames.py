"""Readable names from names/*.json, used by every generator (C printer, asm skeletons, promote,
cmpobj) so a rename is one table edit and a regeneration.

names/IMAGE.json: {"func": {"45d0": "draw_name_list"},          functions of that image
                   "data": {"0526": "spell_level_table"},        globals (ROOT.json only: one DS)
                   "local": {"45d0": {"p4": "win", "l4": "row", "rsi": "i"}}}
Unnamed symbols keep their address names: fXXXX, gXXXX, pN, lN, rsi/rdi.
"""
import glob, json, os, re

R = os.path.join(os.path.dirname(__file__), '..')
_T = None


def table():
    global _T
    if _T is None:
        _T = {}
        if os.environ.get('WIZ6_NAMES') == '0':      # liftloop: address names only
            return _T
        for p in sorted(glob.glob(R + '/names/*.json')):
            _T[os.path.basename(p)[:-5]] = json.load(open(p))
        check(_T)
    return _T


LIB = {l.split()[3].rstrip('_') for l in open(R + '/work/symmap.txt')} | {
    'main', 'ovmain', 'int', 'char', 'long', 'unsigned', 'register', 'return', 'goto', 'if', 'else',
    'switch', 'case', 'default', 'while', 'for', 'do', 'break', 'continue', 'static', 'extern',
    'struct', 'union', 'sizeof', 'short', 'float', 'double', 'auto', 'typedef', 'enum', 'void'}


def check(t):
    """Names must be C identifiers, unique among the root and each overlay's own symbols."""
    ident = re.compile(r'[A-Za-z_][A-Za-z0-9_]*$')
    root = set(t.get('ROOT', {}).get('func', {}).values()) | set(t.get('ROOT', {}).get('data', {}).values())
    for img, d in t.items():
        if img != 'ROOT' and d.get('data'):
            raise SystemExit('names/%s.json: globals belong in ROOT.json' % img)
        seen = set(LIB) if img == 'ROOT' else set(root) | set(LIB)
        for kind in ('func', 'data'):
            for a, n in d.get(kind, {}).items():
                if not ident.match(n) or re.fullmatch(r'[fg][0-9a-f]{4}|main|ovmain', n):
                    raise SystemExit('names/%s.json: bad name %r' % (img, n))
                if n in seen:
                    raise SystemExit('names/%s.json: duplicate name %r' % (img, n))
                seen.add(n)
        for f, m in d.get('local', {}).items():
            if len(set(m.values())) != len(m) or not all(ident.match(n) for n in m.values()):
                raise SystemExit('names/%s.json: bad locals in %s' % (img, f))


def func(img, a):
    return table().get(img, {}).get('func', {}).get('%04x' % a)


def data(a):
    return table().get('ROOT', {}).get('data', {}).get('%04x' % a, 'g%04x' % a)


def doc(img, a):
    """One-line description of a function (names/IMG.json "doc"), or None."""
    return table().get(img, {}).get('doc', {}).get('%04x' % a)


def local(img, f, key):
    return table().get(img, {}).get('local', {}).get('%04x' % f, {}).get(key, key)


def data_addr(name):
    """Address of a global by its C name (without the trailing _), or None."""
    m = re.fullmatch(r'g([0-9a-f]{4})', name)
    if m:
        return int(m.group(1), 16)
    for a, n in table().get('ROOT', {}).get('data', {}).items():
        if n == name:
            return int(a, 16)
    return None


def func_addr(img, name):
    """Address of a function seen from img (its own or a root one) by C name, or None."""
    m = re.fullmatch(r'f([0-9a-f]{4})', name)
    if m:
        return int(m.group(1), 16)
    for i in (img, 'ROOT'):
        for a, n in table().get(i, {}).get('func', {}).items():
            if n == name:
                return int(a, 16)
    return None
