extern char g560d;
extern int g546e;
extern int g56ca;
extern int g56cc;
f75f1()
{
	int l2;
	int l4;
	char x4[16];
	int l22;
	int l44[11];
	l4 = 0;
L75fc:
	l44[l4] = 1;
	l4++;
	if (l4 <= 10) goto L75fc;
	l22 = -1;
	f32be(g56ca, 32, 3, 0);
	f2b19(g56ca);
	f030b(g56ca, 9, 1);
	f083f(1104, g56ca, 18);
	f32be(g56cc, 32, 3, 0);
	f2b19(g56cc);
	f4b9c(1116);
	l2 = f4800(g56cc, 100, l44, 1, 1, 10, 11, 5, 0);
	f4b6d();
	f32be(g56cc, 32, 3, 0);
	f2b19(g56cc);
	g560d = *(char *)&l2;
	f030b(g546e, 15, 1);
	f5058(((unsigned char)g560d + 100), g546e, 1);
	f7532(l2);
	f7068();
}
