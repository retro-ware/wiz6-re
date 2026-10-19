f9f54()
{
	int l2;
	register int rsi;
	l2 = f09e2(4);
L9f66:
	;
#asm
l9f66:
	db 08bh,046h,0feh,0d1h,0e0h,08bh,0f0h,08bh,05eh,004h,083h,038h,000h,075h,00fh
#endasm
	l2 = ((l2 + 1) % 4);
	goto L9f66;
L9f84:
	return l2;
}
