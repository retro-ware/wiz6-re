f843b()
{
	int l2;
	register int rsi;
	l2 = 0;
L8447:
	;
#asm
l8447:
	db 08bh,046h,004h,0d1h,0e0h,08bh,0d8h,08bh,09fh,0b6h,043h,08bh,076h,0feh,080h,0b8h
	db 080h,000h,000h,074h,00dh
#endasm
	if (f09e2(2) != 1) goto L8478;
L8469:
	l2 = ((l2 + 1) % 3);
	goto L8447;
L8478:
	return l2;
}
