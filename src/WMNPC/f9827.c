extern char g00cc[];
extern char g442c[];
extern char g442d[];
extern char g442e[];
extern int g5324;
extern int g5326[];
f9827(p4, p6, p8, p10)
{
	int l2;
	register int rsi;
	f88c7(p4, 0);
	f3118(p4);
	rsi = -2;
L9845:
	if ((p8 + rsi) < 0) goto L99ca;
	if ((p8 + rsi) >= g5324) goto L99ca;
	f030b(p4, 2, (rsi + 2));
	l2 = g5326[(p8 + rsi)];
	if (p10 != 1) goto L9916;
	if (rsi) goto L9916;
	f24e9(p4, ((l2 << 4) + 21330), 3);
	if (g00cc[(unsigned char)g442c[((432 * p6) + (l2 << 3))]] != 1) goto L9903;
	f0396(p4, 15, 3);
	f05a5(p4, (unsigned char)g442e[((432 * p6) + (l2 << 3))], 3, 1);
	goto L9914;
L9903:
	f0396(p4, 18, 3);
L9914:
	goto L998e;
L9916:
	f251d(p4, ((l2 << 4) + 21330), 3);
	if (g00cc[(unsigned char)g442c[((432 * p6) + (l2 << 3))]] != 1) goto L998e;
	f030b(p4, 15, (rsi + 2));
	f05a5(p4, (unsigned char)g442e[((432 * p6) + (l2 << 3))], 3, 18);
L998e:
	f030b(p4, 18, (rsi + 2));
	f23e3(p4, (unsigned char)(((unsigned char)g442d[((432 * p6) + (l2 << 3))] + 1)), 4);
L99ca:
	rsi++;
	if (rsi <= 2) goto L9845;
	f31d1(p4);
	f2b19(p4);
}
