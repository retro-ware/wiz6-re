# Align OBD text dumps with raw Aztec .o bytes: print raw bytes for each non-Data record.
import re,sys,collections
obd=open(sys.argv[1]).read().split('@@@ ')[1:]
out=collections.defaultdict(list)
for blk in obd:
    lines=blk.splitlines(); name=lines[0].split('\\')[-1].strip()
    raw=open(sys.argv[2]+'/'+name,'rb').read()
    recs=[]  # (kind, text, databytes)
    cur=None
    for l in lines[1:]:
        m=re.match(r'(Code|Data) \(([0-9a-f]+)\): (.*)',l)
        if m:
            t=m.group(3)
            d=re.match(r'Data\(\s*(\d+)\)\s+(.*)',t)
            if d: recs.append(('D',bytes.fromhex(d.group(2))))
            else: recs.append(('X',t))
        elif l.startswith('   ') and recs: recs[-1]=('X',recs[-1][1]+' | '+l.strip())
    # find stream start: first Data record search
    pos=None
    for i,r in enumerate(recs):
        if r[0]=='D':
            p=raw.find(bytes([0x0f+len(r[1])])+r[1]); 
            # stream begins somewhere before; take prior X records raw unknown
            break
    # walk: between consecutive D records, the X records' raw bytes = gap
    p=0; pending=[]; prev_end=None
    for r in recs:
        if r[0]=='D':
            q=raw.find(bytes([0x0f+len(r[1])])+r[1], prev_end if prev_end else 0)
            if q<0: print('LOST',name,r); break
            if prev_end is not None and pending:
                gap=raw[prev_end:q]
                out[' || '.join(x[1] for x in pending)].append(gap.hex(' '))
            pending=[]; prev_end=q+1+len(r[1])
        else: pending.append(r)
    if pending and prev_end: out[' || '.join(x[1] for x in pending)].append(raw[prev_end:prev_end+12].hex(' ')+' ...')
for k,v in sorted(out.items(), key=lambda kv:-len(kv[1])):
    print(len(v),'|',k,'=>',v[0], ('; '+v[1]) if len(v)>1 else '')
