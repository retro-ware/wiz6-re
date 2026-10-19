extern char *g56ca;
extern int g546e;
extern int g56ce;
f9656()
{
	int l2;
	int l4;
	int l6;
	char x6[8];
	int l16;
	f95f7(g546e, g56ca);
	l2 = f9558();
	if (l2 != -1) goto L9679;
	return;
L9679:
	f030b(g56ca, 1, 1);
	f083f(1100, g56ca, 18);
	l4 = (unsigned char)g56ca[6];
	l6 = (unsigned char)g56ca[7];
	f033f(g56ca, l4, l6, (l4 + 7), l6);
	f030b(g56ca, l4, l6);
	f4654(g56ca, &l16, 7, 5, 0);
	g56ce = 0;
	if (!*(char *)&l16) goto L9727;
	if (f9575(&l16) != -1) goto L971a;
	f95bf(1102, 6, 2);
	goto L9727;
L971a:
	f93ab(&l16, l2);
L9727:
	return;
}
