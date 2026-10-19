extern char g442d[];
extern int g51b8;
extern int g51ba[];
extern int g5346[];
f76d5(p4, p6, p8, p10)
char *p4;
{
	int l2;
	register int rsi;
	f67dc(p4, 0);
	f3118(p4);
	rsi = -2;
L76f3:
	if ((p8 + rsi) < 0) goto L7844;
	if ((p8 + rsi) >= g51b8) goto L7844;
	f030b(p4, 2, (rsi + 2));
	l2 = g51ba[(p8 + rsi)];
	if (p10 != 1) goto L77b3;
	if (rsi) goto L77b3;
	f24e9(p4, ((l2 << 4) + 20966), 3);
	if (g5346[l2] <= 0) goto L7797;
L775f:
	if ((unsigned)p4[6] >= 15) goto L7779;
	f22b7(p4, 32, 3);
	goto L775f;
L7779:
	f05a5(p4, g5346[l2], 3, 1);
	goto L77b1;
L7797:
	if ((unsigned)p4[6] >= 18) goto L77b1;
	f22b7(p4, 32, 3);
	goto L7797;
L77b1:
	goto L7808;
L77b3:
	f251d(p4, ((l2 << 4) + 20966), 3);
	if (g5346[l2] <= 0) goto L7808;
	f030b(p4, 15, (rsi + 2));
	f05a5(p4, g5346[l2], 3, 18);
L7808:
	f030b(p4, 18, (rsi + 2));
	f23e3(p4, (unsigned char)(((unsigned char)g442d[((432 * p6) + (l2 << 3))] + 1)), 4);
L7844:
	rsi++;
	if (rsi <= 2) goto L76f3;
	f31d1(p4);
	f2b19(p4);
}
