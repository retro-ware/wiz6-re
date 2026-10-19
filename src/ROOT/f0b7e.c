#asm
	extrn f251d_:near
#endasm
f0b7e(p4, p6, p8, p10)
{
	f030b(p4, (20 - ((strlen(p6) + 1) / 2)), p8);
	if (p10 < 16) goto L0bbe;
#asm
	db 08bh,046h,00ah,005h,0f1h,0ffh,050h,0ffh,076h,006h,0ffh,076h,004h
	call f251d_
	db 083h,0c4h,006h,0ebh,00fh
#endasm
L0bbe:
	f24e9(p4, p6, p10);
L0bcd:
	;
}
