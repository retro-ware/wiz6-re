extern char g00de[];
f8bcd(p4, p6)
{
	int l2;
	register int rsi;
	register int rdi;
	l2 = 0;
	rsi = 0;
L8bdd:
	if ((unsigned char)g00de[(rsi * 6)] != p6) goto L8c19;
	if (f28af(((432 * p4) + 17776), rsi) != 1) goto L8c19;
#asm
	db 08bh,046h,0feh,0d1h,0e0h,08bh,0f8h,08bh,05eh,008h,089h,031h
#endasm
	l2++;
L8c19:
	rsi++;
	if (rsi < 82) goto L8bdd;
	return l2;
}
