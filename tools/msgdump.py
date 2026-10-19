#!/usr/bin/env python3
"""Dump Wizardry 6 message text (MSG.DBS / MSG.HDR / MISC.HDR).

Game-side API (findings):
  f075b(num, outbuf)  [src/ROOT/f075b.c]  -- fetch + decode message `num` into outbuf.
      f063a(num)  binary-searches the MSG.HDR table (loaded at 2122, count g0848)
                  for the entry with first <= num <= first+count.
      f06aa(blk)  loads 1024-byte block `blk` of MSG.DBS (4-block cache).
      f29d9(src, dst) Huffman-decodes one record (bit reader f2a18).
  f50df(num, win, x, y, attr) [src/WPCVW/f50df.c] -- "print message num in window":
      f075b(num, buf); f030b(win, x, y) sets cursor; f24e9(win, buf, attr) prints.
  The number passed IS the message number printed below (no offset/remap).

Format:
  MSG.HDR: u16 n, then n entries of 6 bytes:
      u16 first, u16 offset_in_block, u8 count, u8 block.
      Entry covers numbers first..first+count (inclusive).
  MSG.DBS: records starting at block*1024+offset, back to back:
      u8 len, then len bytes. Skip (num-first) records to reach num.
      Payload: u8 nchars, then a Huffman bitstream (MSB first).
  MISC.HDR: Huffman tree, nodes of two s16 (left=bit 0, right=bit 1);
      value >= 0 is a leaf char, value < 0 is node index -value. Root = node 0.
"""
import struct, sys, os

APP = os.path.join(os.path.dirname(__file__), '..', 'gog', 'x', 'app')


def load(name):
    with open(os.path.join(APP, name), 'rb') as f:
        return f.read()


def decode(payload, tree):
    n = payload[0]
    out = []
    bits = ((b >> (7 - i)) & 1 for b in payload[1:] for i in range(8))
    for _ in range(n):
        node = 0
        while True:
            v = tree[node * 2 + next(bits)]
            if v >= 0:
                out.append(v)
                break
            node = -v
    return out


def fmt(codes):
    s = []
    for c in codes:
        if c == 10 or c == 13:
            s.append('\\n')
        elif c == 9:
            s.append('\\t')
        elif c == 0x5c:
            s.append('\\\\')
        elif 32 <= c < 127:
            s.append(chr(c))
        else:
            s.append('\\x%02x' % c)
    return ''.join(s)


def main():
    hdr, dbs, misc = load('MSG.HDR'), load('MSG.DBS'), load('MISC.HDR')
    tree = struct.unpack('<%dh' % (len(misc) // 2), misc)
    n = struct.unpack_from('<H', hdr)[0]
    for i in range(n):
        first, off, cnt, blk = struct.unpack_from('<HHBB', hdr, 2 + i * 6)
        pos = blk * 1024 + off
        for k in range(cnt + 1):
            ln = dbs[pos]
            payload = dbs[pos + 1:pos + 1 + ln]
            pos += 1 + ln
            try:
                text = fmt(decode(payload, tree))
            except StopIteration:
                text = '<<truncated>>'
            sys.stdout.write('%d\t%s\n' % (first + k, text))


if __name__ == '__main__':
    main()
