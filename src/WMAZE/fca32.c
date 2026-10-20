fca32(p4, p6)
char *p4;
{
	register int rsi;
	rsi = p6;
	goto Lca63;
Lca3c:
	*(p4 + (rsi / 8)) &= ~(1 << (rsi % 8));
	rsi++;
Lca63:
	if ((p6 + 2) > rsi) goto Lca3c;
}
