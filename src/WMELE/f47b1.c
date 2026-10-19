extern char g019d[];
extern int g4356;
extern int g4358;
extern int g4360;
extern int g43a8[];
f47b1()
{
	char x0[416];
	register int rsi;
	f075b(3900, 17270);
	setmem(17250, 20, 0);
	rsi = 0;
L47dc:
	setmem(g43a8[rsi], 416, 0);
	rsi++;
	if (rsi < 7) goto L47dc;
	rsi = 0;
L47fd:
	g019d[g43a8[rsi]] = 0;
	rsi++;
	if (rsi < 7) goto L47fd;
	g4360 = 0;
	g4356 = 0;
	g4358 = -2;
}
