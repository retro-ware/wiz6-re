"""rawsample.py IMAGE WHY [N]: show context of raw statements with the given reason."""
import sys; sys.path.insert(0, 'tools')
from x86dis import Image
from lift import Lifter
import skel, capstone as cs
md = cs.Cs(cs.CS_ARCH_X86, cs.CS_MODE_16)
img = Image(sys.argv[1]); names = skel.Names(img)
why, N = sys.argv[2], int(sys.argv[3]) if len(sys.argv) > 3 else 5
n = 0
for s, e in img.ranges():
    L = Lifter(img, s, e, names, []); L.run()
    for st in L.sts:
        if st.kind == 'raw' and st.why == why and n < N:
            n += 1
            lo = max(s, st.s - 10)
            print('--- %04x-%04x' % (st.s, st.e))
            for i in md.disasm(bytes(img.code[lo - img.cbase:min(st.e + 6, e) - img.cbase]), lo):
                print('%s%04x %s %s' % ('>' if i.address == st.s else ' ', i.address, i.mnemonic, i.op_str))
