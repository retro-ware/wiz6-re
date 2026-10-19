#asm
	extrn f5a1e_:near
#endasm
extern int g5264;
extern int g5266;
f5af3(p4)
{
	if (p4 != 1) goto L5b06;
#asm
	db 0ffh,036h,0cah,04fh
	call f5a1e_
	db 059h,0ebh,017h
#endasm
L5b06:
	f5a69();
	f02f0(g5264, 1);
	g5266 = 0;
L5b1d:
	;
}
