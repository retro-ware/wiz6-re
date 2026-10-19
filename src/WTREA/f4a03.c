#asm
	extrn f48df_:near
#endasm
extern int g502e;
extern int g5030;
f4a03(p4)
{
	if (p4 != 1) goto L4a16;
#asm
	db 0ffh,036h,0cah,04fh
	call f48df_
	db 059h,0ebh,017h
#endasm
L4a16:
	f4950();
	f02f0(g502e, 1);
	g5030 = 0;
L4a2d:
	;
}
