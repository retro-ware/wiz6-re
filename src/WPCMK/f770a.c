extern char g560e;
extern int g546e;
extern int g56ca;
extern int g56cc;
f770a()
{
	int l2;
	int l4;
	char x4[78];
	int l84;
	char x84[34];
	int l120;
	int l124[2];
	l4 = 0;
L7715:
	l124[l4] = 1;
	l4++;
	if (l4 <= 1) goto L7715;
	l120 = -1;
	f32be(g56ca, 32, 3, 0);
	f2b19(g56ca);
	f030b(g56ca, 10, 1);
	f083f(1105, g56ca, 18);
	f32be(g56cc, 32, 3, 0);
	f2b19(g56cc);
	f4b9c(1117);
	l2 = f4800(g56cc, 140, l124, 1, 1, 10, 11, 5, 0);
	f4b6d();
	f32be(g56cc, 32, 3, 0);
	f2b19(g56cc);
	g560e = *(char *)&l2;
	f030b(g546e, 13, 1);
	f075b(((unsigned char)g560e + 140), &l84);
	f22b7(g546e, (unsigned char)*(char *)&l84, 1);
	f22b7(g546e, 45, 1);
	f75d2(l2);
	f7068();
}
