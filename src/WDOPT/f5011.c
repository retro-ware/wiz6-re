f5011(p4, p6)
char *p4;
{
	register int rsi;
	rsi = p6;
	goto L5042;
L501b:
	*(p4 + (rsi / 8)) = (char)(*(p4 + (rsi / 8)) & ~(1 << (rsi % 8)));
	rsi++;
L5042:
	if ((p6 + 2) > rsi) goto L501b;
}
