"""Run one original WROOT/overlay function in Unicorn (16-bit real mode).

Memory: WROOT.EXE loaded at segment SEG (relocated), CS=SEG, DS=SS=SEG+0xFD8 as the
game sets them; the overlay's code at CS:4572, its data at DS:4FEE, BSS zeroed (the
layout the root's Aztec overlay loader produces, see NOTES.md).

Root and overlay calls outside the mechanics are stubbed (return 0 at once).
random/random_word stay emulated and are logged; message, number and sound calls are
logged as observable output.
"""
import os, struct
from unicorn import Uc, UC_ARCH_X86, UC_MODE_16, UC_HOOK_CODE, UC_HOOK_MEM_READ, UC_HOOK_MEM_WRITE, UcError
from unicorn.x86_const import *

APP = os.path.join(os.path.dirname(__file__), '../../gog/x/app')
SEG = 0x1000
DSEG = SEG + 0xFD8
OVBASE, OVDATA = 0x4572, 0x4FEE
SENTINEL = 0xFD70        # CS offset of the fake return address (past every overlay's code; CS:FD80 on is DS:0)
RANDOM, RANDOM_RET = 0x09e2, 0x09fa
SEEDS = 0x1d3b           # cs: three int seeds

# Root functions that run for real (pure computation); everything else in the root's
# game code (0000-37FA) is stubbed. The C library (37FA-4572) always runs.
ROOT_REAL = {
    0x09e2, 0x2556, 0x25b9,                  # random, random_word, step_random
    0x2881, 0x28af, 0x28da, 0x2925, 0x2962,  # bit helpers
    0x040e, 0x0453, 0x04f1,                  # reverse_string, long_to_string, int_to_string
    0x00fe,                                  # copy_far
    0x3350, 0x3384,                          # char_index, string_index
}
ROOT_LOGGED = {          # stubbed, but the call is recorded: addr -> (tag, arg index)
    0x075b: ('msg', 0),  # get_message(n, buf)
    0x083f: ('msg', 0),  # print_message(n, win, color)
    0x0aaa: ('snd', 0),  # play_sound(n)
}
KEY_AVAILABLE, GET_KEY = 0x2643, 0x2724   # fed from Machine.keys (a case's scripted keys)
LONG_TO_STRING = 0x0453   # (long n, buf); int_to_string goes through it


class Crash(Exception):
    """The original faulted (e.g. divide by zero) or ran away: not a valid case."""


ACCESS_RECORD = 0x0882   # access_scenario_record(type, buf, index, mode)
_SCEN = {}


def scenario_record(typ, index):
    """SCENARIO.DBS record (none of this scenario's types are packed)."""
    if not _SCEN:
        for f in ('SCENARIO.DBS', 'DISK.HDR', 'MASTER.HDR'):
            _SCEN[f] = open(os.path.join(APP, f), 'rb').read()
    disk, master = _SCEN['DISK.HDR'], _SCEN['MASTER.HDR']
    remap = {2: 0x2c, 3: 0x2c, 5: 0x3c, 7: 0x7c, 4: 0x17c, 8: 0x27c}
    if typ in remap:
        index = disk[remap[typ] + index]
    size = struct.unpack_from('<H', master, 2 * typ)[0]
    off = index * size + struct.unpack_from('<I', disk, 4 + 4 * typ)[0]
    return _SCEN['SCENARIO.DBS'][off:off + size]


MSG_NOT_FOUND = 0x3042
_MSGS = {}


def message_text(n):
    """Message n of MSG.DBS decoded as get_message does, or None if not indexed."""
    if not _MSGS:
        import sys
        sys.path.insert(0, os.path.join(os.path.dirname(__file__), '..'))
        import msgdump
        hdr, dbs, misc = (open(os.path.join(APP, f), 'rb').read() for f in ('MSG.HDR', 'MSG.DBS', 'MISC.HDR'))
        tree = struct.unpack('<%dh' % (len(misc) // 2), misc)
        for i in range(struct.unpack_from('<H', hdr)[0]):
            first, off, cnt, blk = struct.unpack_from('<HHBB', hdr, 2 + i * 6)
            pos = blk * 1024 + off
            for k in range(cnt + 1):
                ln = dbs[pos]
                try:
                    _MSGS[first + k] = bytes(msgdump.decode(dbs[pos + 1:pos + 1 + ln], tree))
                except StopIteration:
                    _MSGS[first + k] = b''
                pos += 1 + ln
    return _MSGS.get(n)


class Machine:
    reads = set()
    keys = []
    texts = False   # get_message writes the real text (else an empty one)
    def __init__(self, ovl, stubs=(), stub_ret=None, stub_fx=None):
        """ovl: overlay name; stubs: overlay function addresses to stub;
        stub_ret: {addr: ax} return values of stubs (default 0)."""
        exe = open(os.path.join(APP, 'WROOT.EXE'), 'rb').read()
        h = struct.unpack_from('<14H', exe)
        img = bytearray(exe[h[4] * 16:(h[2] - 1) * 512 + h[1]])
        for i in range(h[3]):
            off, seg = struct.unpack_from('<2H', exe, h[12] + 4 * i)
            a = seg * 16 + off
            struct.pack_into('<H', img, a, (struct.unpack_from('<H', img, a)[0] + SEG) & 0xffff)
        d = open(os.path.join(APP, ovl + '.OVR'), 'rb').read()
        _, cbase, csz, dbase, dsz, bsz, _ = struct.unpack_from('<7H', d)
        assert (cbase, dbase) == (OVBASE, OVDATA)
        img[cbase:cbase + csz] = d[14:14 + csz]
        self.image = bytes(img)
        self.ovdata = d[14 + csz:14 + csz + dsz]
        self.ovbss = (dbase + dsz, bsz)
        self.stubs = set(stubs)
        self.stub_ret = stub_ret or {}
        self.stub_fx = stub_fx or {}   # addr -> f(machine): a stub's lasting effect
        self.uc = Uc(UC_ARCH_X86, UC_MODE_16)
        self.uc.mem_map(0, 0x100000)
        self.uc.hook_add(UC_HOOK_CODE, self._hook, begin=SEG * 16, end=SEG * 16 + 0xffff)
        self.uc.hook_add(UC_HOOK_MEM_READ, self._read, begin=DSEG * 16, end=DSEG * 16 + 0xffff)
        self.uc.hook_add(UC_HOOK_MEM_WRITE, self._write, begin=DSEG * 16, end=DSEG * 16 + 0xffff)
        self.reset()

    def _write(self, uc, access, addr, size, value, _):
        for k in range(size):
            self.writes.add(addr - DSEG * 16 + k)

    def _read(self, uc, access, addr, size, value, _):
        for k in range(size):
            self.reads.add(addr - DSEG * 16 + k)

    def reset(self):
        """Fresh memory: the image, the overlay's data, zeroed BSS and heap."""
        uc = self.uc
        uc.mem_write(SEG * 16, b'\0' * 0x20000)
        uc.mem_write(SEG * 16, self.image)
        uc.mem_write(DSEG * 16 + OVDATA, self.ovdata)
        uc.mem_write(SEG * 16 + SENTINEL, b'\xf4')

    # --- data segment access
    def rd(self, off, n):
        return bytes(self.uc.mem_read(DSEG * 16 + off, n))

    def wr(self, off, b):
        self.uc.mem_write(DSEG * 16 + off, bytes(b))

    def w16(self, off, v):
        self.wr(off, struct.pack('<H', v & 0xffff))

    def r16(self, off, signed=True):
        return struct.unpack('<h' if signed else '<H', self.rd(off, 2))[0]

    def seeds(self, s=None):
        a = SEG * 16 + SEEDS
        if s is not None:
            self.uc.mem_write(a, struct.pack('<3H', *[x & 0xffff for x in s]))
        return list(struct.unpack('<3h', self.uc.mem_read(a, 6)))

    # --- calls
    def _arg(self, i):
        sp = self.uc.reg_read(UC_X86_REG_SP)
        return struct.unpack('<h', self.uc.mem_read(DSEG * 16 + sp + 2 + 2 * i, 2))[0]

    def _ret(self, ax):
        uc = self.uc
        sp = uc.reg_read(UC_X86_REG_SP)
        ip = struct.unpack('<H', uc.mem_read(DSEG * 16 + sp, 2))[0]
        uc.reg_write(UC_X86_REG_SP, sp + 2)
        uc.reg_write(UC_X86_REG_AX, ax & 0xffff)
        uc.reg_write(UC_X86_REG_IP, ip)

    def _hook(self, uc, addr, size, _):
        ip = addr - SEG * 16
        if ip == SENTINEL:
            uc.emu_stop()
            return
        if ip == RANDOM:
            self.rng.append([self._arg(0)])
        elif ip == RANDOM_RET:
            self.rng[-1].append(struct.unpack('<h', struct.pack('<H', uc.reg_read(UC_X86_REG_AX)))[0])
        elif ip == LONG_TO_STRING:
            self.log.append(['num', (self._arg(0) & 0xffff) | (self._arg(1) << 16)])
        if ip == ACCESS_RECORD:
            self._record(self._arg(0), self._arg(1) & 0xffff, self._arg(2), self._arg(3))
            self._ret(0)
        elif ip in ROOT_LOGGED:
            tag, k = ROOT_LOGGED[ip]
            self.log.append([tag, self._arg(k)])
            if ip == 0x075b and self.texts:   # the real text (msg_not_found as the C sets it)
                t = message_text(self._arg(0))
                if t is None:
                    self.w16(MSG_NOT_FOUND, 1)
                else:
                    self.wr(self._arg(1) & 0xffff, t + b'\0')
                    self.w16(MSG_NOT_FOUND, 0)
            elif ip == 0x075b:   # empty message text
                self.wr(self._arg(1) & 0xffff, b'\0')
            self._ret(0)
        elif ip == KEY_AVAILABLE:     # scripted input: the case's keys
            if not self.keys:
                self.idle_polls += 1
                if self.idle_polls > 3000:   # waiting for input that never comes
                    uc.emu_stop()
                    return
            self._ret(1 if self.keys else 0)
        elif ip == GET_KEY:
            if not self.keys:          # input exhausted: not a valid case
                uc.emu_stop()
                return
            self._ret(self.keys.pop(0))
        elif ip < 0x37FA and ip not in ROOT_REAL and self._isentry(ip):
            self._ret(0)
        elif ip in self.stubs:
            if ip in self.stub_fx:
                self.stub_fx[ip](self)
            self._ret(self.stub_ret.get(ip, 0))

    def _record(self, typ, buf, index, mode):
        if mode == 0:
            b = scenario_record(typ, index)
            self.wr(buf, b)    # a short read leaves the rest of buf as it was
            self.writes.update(range(buf, buf + len(b)))   # mem_write bypasses the write hook
        else:
            self.log.append(['recwrite', typ, index])

    def _isentry(self, ip):
        return ip in self.root_entries

    def call(self, fn, args, max_insns=5_000_000):
        """Near-call CS:fn with int args (cdecl); returns ax (signed)."""
        uc = self.uc
        self.rng, self.log, self.reads, self.writes = [], [], set(), set()
        self.idle_polls = 0
        sp = 0xAFEE
        words = [SENTINEL] + [a & 0xffff for a in args]
        sp -= 2 * len(words)
        uc.mem_write(DSEG * 16 + sp, struct.pack('<%dH' % len(words), *words))
        for r, v in ((UC_X86_REG_CS, SEG), (UC_X86_REG_DS, DSEG), (UC_X86_REG_ES, DSEG),
                     (UC_X86_REG_SS, DSEG), (UC_X86_REG_SP, sp), (UC_X86_REG_BP, 0)):
            uc.reg_write(r, v)
        try:
            uc.emu_start(SEG * 16 + fn, SEG * 16 + SENTINEL, count=max_insns)
        except UcError as e:
            bp, chain = uc.reg_read(UC_X86_REG_BP), []
            for _ in range(4):     # callers, by the bp chain
                if not bp:
                    break
                chain.append('%04x' % self.r16(bp + 2, False))
                bp = self.r16(bp, False)
            raise Crash('%s at %04x from %s' % (e, uc.reg_read(UC_X86_REG_IP), ' '.join(chain)))
        ip = uc.reg_read(UC_X86_REG_IP)
        if ip != SENTINEL:
            raise Crash('did not return (ip %04x)' % ip)
        return struct.unpack('<h', struct.pack('<H', uc.reg_read(UC_X86_REG_AX)))[0]


def _root_entries():
    import json
    names = json.load(open(os.path.join(os.path.dirname(__file__), '../../names/ROOT.json')))['func']
    src = os.path.join(os.path.dirname(__file__), '../../src/ROOT')
    ents = {int(k, 16) for k in names}
    ents |= {int(f[1:5], 16) for f in os.listdir(src) if f[0] == 'f' and f.endswith('.c')}
    return {e for e in ents if e < 0x37FA}


Machine.root_entries = _root_entries()
