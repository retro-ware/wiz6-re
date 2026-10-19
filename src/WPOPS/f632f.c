extern char g00de[];
f632f(p4, p6)
{
	int l2;
	register int rsi;
	register int rdi;
	l2 = 0;
	rsi = 0;
L633f:
	if ((unsigned char)g00de[(rsi * 6)] != p6) goto L637b;
	if (f28af(((432 * p4) + 17776), rsi) != 1) goto L637b;
#asm
	db 08bh,046h,0feh,0d1h,0e0h,08bh,0f8h,08bh,05eh,008h,089h,031h
#endasm
	l2++;
L637b:
	rsi++;
	if (rsi < 82) goto L633f;
	return l2;
}
