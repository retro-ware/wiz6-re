#asm
	extrn f4617_:near
#endasm
f5211(p4, p6)
{
	f51e4(p4);
	f0aaa(0);
	if (!p6) goto L5233;
#asm
	db 0b8h,00ch,000h,050h
	call f4617_
	db 059h,0ebh,008h
#endasm
L5233:
	f09a3(12);
L523b:
	;
}
