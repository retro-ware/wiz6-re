extern char g00de[];
f66ea(p4)
{
	int l2;
	register int rsi;
	register int rdi;
	l2 = 0;
	rsi = 0;
L66fa:
	if ((unsigned char)g00de[(rsi * 6)] != p4) goto L6730;
	if (f28af(22008, rsi) != 1) goto L6730;
#asm
	db 08bh,046h,0feh,0d1h,0e0h,08bh,0f8h,08bh,05eh,006h,089h,031h
#endasm
	l2++;
L6730:
	rsi++;
	if (rsi < 82) goto L66fa;
	return l2;
}
