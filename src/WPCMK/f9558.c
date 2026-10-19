extern char g4fd8[];
extern int g4fd2;
f9558()
{
	register int rsi;
	rsi = 0;
	goto L956a;
L955e:
	if (g4fd8[rsi]) goto L9569;
	return rsi;
L9569:
	rsi++;
L956a:
	if (rsi < g4fd2) goto L955e;
	return -1;
}
