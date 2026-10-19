"""Shared helpers for the blob generators (mkroot.py, mkovl.py)."""
import glob, os, re, struct, subprocess

R = os.path.join(os.path.dirname(__file__), '..')
ROOT_GAME_END = 0x36dc   # start of OVLD in the root
OVL_BASE = 0x4572


def insns(code, org):
    """(address, bytes, text) for each instruction of a linear ndisasm sweep."""
    out = subprocess.run(['ndisasm', '-b16', '-o', hex(org), '-'], input=code,
                         capture_output=True).stdout.decode()
    for l in out.splitlines():
        m = re.match(r'([0-9A-F]{8})\s+([0-9A-F]+)\s+(.*)', l)
        if m:
            yield int(m.group(1), 16), bytes.fromhex(m.group(2)), m.group(3)


def ovl(name):
    d = open(R + '/gog/x/app/%s.OVR' % name, 'rb').read()
    hdr = struct.unpack_from('<7H', d)
    csz, dsz = hdr[2], hdr[4]
    return hdr, d[14:14 + csz], d[14 + csz:14 + csz + dsz]


def ovl_names():
    return sorted(os.path.basename(f)[:-4] for f in glob.glob(R + '/gog/x/app/*.OVR'))


def call_targets(code, org, ops=(0xe8, 0xe9)):
    for a, b, t in insns(code, org):
        if b[0] in ops and len(b) == 3:
            yield a, (a + 3 + struct.unpack_from('<h', b, 1)[0]) & 0xffff


def libfns(image):
    """Library function addresses in one image (ROOT or an overlay), from work/symmap.txt."""
    out = {}
    for l in open(R + '/work/symmap.txt'):
        a, k, v, n = l.split()
        v = int(v, 16)
        if a == image and k == 'code' and (image != 'ROOT' or v >= ROOT_GAME_END):
            out[v] = n
    return out


def root_publics():
    """main_ plus every root game address that an overlay calls."""
    pub = {0x132d: 'main_'}
    for n in ovl_names():
        hdr, code, _ = ovl(n)
        for a, tgt in call_targets(code, OVL_BASE):
            if tgt < ROOT_GAME_END:
                pub.setdefault(tgt, 'f%04x_' % tgt)
    return pub
