#asm
	extrn $ldv:near
#endasm
f7af7(p4, p6)
{
	int l2;
	register int rsi;
#asm
	db 08bh,046h,004h,0d1h,0e0h,08bh,0d8h,08bh,09fh,0b6h,043h,08bh,076h,008h,08ah,080h
	db 094h,000h,02ah,0e4h,08bh,0c8h,02bh,046h,00ah,08bh,0c8h,08bh,046h,006h,08bh,0d9h
	db 0f7h,0ebh,0b9h,064h,000h,0bbh,000h,000h
	call $ldv
	db 089h,046h,0feh,03dh,000h,000h,07dh,005h
#endasm
	l2 = 0;
L7b36:
	if (l2 <= p6) goto L7b44;
	l2 = p6;
L7b44:
	return (p6 - f09e2((l2 + 1)));
}
