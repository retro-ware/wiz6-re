f6eea(p4)
char *p4;
{
	int l2;
	register int rsi;
	l2 = f09e2(100);
	rsi = 0;
L6eff:
	if ((unsigned char)*(p4 + rsi) <= l2) goto L6f12;
	return rsi;
L6f12:
	l2 -= (unsigned char)*(p4 + rsi);
	rsi++;
	if (rsi < 8) goto L6eff;
	return 4;
}
