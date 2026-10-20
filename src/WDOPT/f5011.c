f5011(p4, p6)
char *p4;
{
	register int rsi;
	for (rsi = p6; (p6 + 2) > rsi; rsi++) {
	*(p4 + (rsi / 8)) &= ~(1 << (rsi % 8));
	}
}
