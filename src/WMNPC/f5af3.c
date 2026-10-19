#asm
	extrn f5a1e_:near
#endasm
extern int g5264;
extern int loot_count;
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
	clear_window(g5264, 1);
	loot_count = 0;
L5b1d:
	;
}
