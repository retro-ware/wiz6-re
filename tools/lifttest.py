import sys; sys.path.insert(0,'tools')
from x86dis import Image
from lift import Lifter
from cprint import Printer
import skel
img=Image(sys.argv[1]); names=skel.Names(img)
want=[int(x,16) for x in sys.argv[2:]]
for s,e in img.ranges():
    if want and s not in want: continue
    L=Lifter(img,s,e,names,[]); L.run()
    try:
        src,miss=Printer(L,names).source()
        print('\n'.join(src)); print('missing',miss)
    except Exception as ex:
        print('printer:',ex)
    for st in L.sts:
        if st.kind=='raw': print('  raw %04x-%04x %s'%(st.s,st.e,st.why))
