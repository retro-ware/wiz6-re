extern char g55a3;
extern char g560e;
extern int g546e;
extern int g56ca;
f7d9b()
{
	int l2;
	f32be(g56ca, 32, 3, 0);
	f2b19(g56ca);
	f030b(g56ca, 9, 1);
	f083f(1111, g56ca, 18);
	l2 = 1;
L7de8:
	g55a3 = (char)f09e2(19);
	if (g560e != 1) goto L7dfe;
	g55a3++;
L7dfe:
	f030b(g546e, 5, 12);
	f05a5(g546e, (unsigned char)g55a3, 2, 1);
	if (!f0c42()) goto L7e34;
	l2 = 0;
L7e34:
	if (f2643(1) != 1) goto L7e52;
	if ((char)f2724(1) != 13) goto L7e52;
	l2 = 0;
L7e52:
	if (l2) goto L7de8;
	f7068();
}
