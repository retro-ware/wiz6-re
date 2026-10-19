extern char g451c[];
extern char g4590[];
fe922(p4, p6)
{
	int l2;
	int l4;
	int l6;
	char x6[18];
	int l26;
	int l28;
	int l30;
	f32be(p4, 32, 3, 0);
	f2b19(p4);
	f075b(605, 21902);
	fe8b6(p4, 21902, 1);
	l4 = f011a(20, 4, 20, 16, 25, -1, 0, 0);
	l30 = 0;
	l2 = 17;
Le993:
	if ((unsigned)g451c[((432 * p6) + l2)] <= 0) goto Le9aa;
	l30 = 1;
Le9aa:
	l2++;
	if (l2 < 22) goto Le993;
	l28 = 0;
Le9ba:
	l6 = fe35f(l4, p4, p6, l28, &l26);
	fdeca(p4, l4, p6, l28, &l26, l6);
	l28 = ((l28 + 1) % 4);
	if (l28 != 2) goto Lea05;
	if (l30) goto Lea05;
	l28++;
Lea05:
	if ((unsigned)g4590[(432 * p6)] > 0) goto Le9ba;
	f02d2(l4, 0);
}
