extern char g55a4[];
extern char g5618;
f604d(p4)
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
	l4 = f011a(20, 4, 20, 16, 25, -1, 0, 0);
	l30 = 0;
	l2 = 17;
L609f:
	if ((unsigned)g55a4[l2] <= 0) goto L60ae;
	l30 = 1;
L60ae:
	l2++;
	if (l2 < 22) goto L609f;
	l28 = 0;
L60be:
	l6 = f5b3b(l4, p4, l28, &l26);
	f56bc(p4, l4, l28, &l26, l6);
	l28 = ((l28 + 1) % 4);
	if (l28 != 2) goto L6103;
	if (l30) goto L6103;
	l28++;
L6103:
	if ((unsigned)g5618 > 0) goto L60be;
	f02d2(l4, 0);
}
