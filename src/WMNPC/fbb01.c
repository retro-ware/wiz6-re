fbb01(p4, p6)
{
	int l2;
	register int rsi;
	l2 = 0;
	goto Lbb1b;
Lbb0f:
	;
#asm
lbb0f:
	db 08bh,05eh,004h,08bh,076h,0feh,0c6h,000h,078h
#endasm
	l2++;
Lbb1b:
	if (l2 < p6) goto Lbb0f;
}
