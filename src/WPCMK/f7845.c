extern char g560f;
extern int g546e;
extern int g56ae[];
extern int g56ca;
extern int g56cc;
f7845()
{
	int l2;
	int l4;
	char x4[10];
	int l16;
	int l44[14];
	f7274();
	l4 = 0;
L7853:
	if (g56ae[l4] != 1) goto L786a;
	l44[l4] = 1;
	goto L7873;
L786a:
	l44[l4] = 0;
L7873:
	l4++;
	if (l4 <= 13) goto L7853;
	l16 = -1;
	f32be(g56ca, 32, 3, 0);
	f2b19(g56ca);
	f030b(g56ca, 7, 1);
	f083f(1106, g56ca, 18);
	f32be(g56cc, 32, 3, 0);
	f2b19(g56cc);
	f4b9c(1118);
	l2 = f4800(g56cc, 120, l44, 1, 1, 10, 11, 5, 0);
	f4b6d();
	f32be(g56cc, 32, 3, 0);
	f2b19(g56cc);
	g560f = *(char *)&l2;
	f5022(((unsigned char)g560f + 120), g546e, 13, 2, 1);
	f73e9(l2);
	f7068();
}
