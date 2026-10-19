extern int g5750[];
extern int g5770[];
extern int g5790[];
f99d1(p4, p6, p8, p10)
char *p4;
{
	char x0[16];
	char l17;
	char x17[1];
	int l20;
	register int rsi;
	f619b(p4, 0);
	f3118(p4);
	rsi = -3;
L99ef:
	if ((p6 + rsi) < 0) goto L9be8;
	if ((p6 + rsi) >= p10) goto L9be8;
	f030b(p4, 1, (rsi + 3));
	if (p8 != 1) goto L9b0d;
	if (rsi) goto L9b0d;
	f24e9(p4, (((p6 + rsi) << 3) + 22224), 5);
L9a40:
	if ((unsigned)p4[6] >= 9) goto L9a5a;
	f22b7(p4, 32, 1);
	goto L9a40;
L9a5a:
	f075b((g5750[(p6 + rsi)] + 140), &l20);
	f22b7(p4, (unsigned char)*(char *)&l20, 7);
	f22b7(p4, 45, 9);
	f075b((g5770[(p6 + rsi)] + 100), &l20);
	l17 = 0;
	f24e9(p4, &l20, 6);
	f22b7(p4, 32, 1);
	f075b((g5790[(p6 + rsi)] + 120), &l20);
	l17 = 0;
	f24e9(p4, &l20, 3);
	goto L9be8;
L9b0d:
	f251d(p4, (((p6 + rsi) << 3) + 22224), 3);
L9b29:
	if ((unsigned)p4[6] >= 9) goto L9b43;
	f23e3(p4, 32, 3);
	goto L9b29;
L9b43:
	f075b((g5750[(p6 + rsi)] + 140), &l20);
	f23e3(p4, (unsigned char)*(char *)&l20, 3);
	f23e3(p4, 45, 3);
	f075b((g5770[(p6 + rsi)] + 100), &l20);
	l17 = 0;
	f251d(p4, &l20, 3);
	p4[6]++;
	f075b((g5790[(p6 + rsi)] + 120), &l20);
	l17 = 0;
	f251d(p4, &l20, 3);
L9be8:
	rsi++;
	if (rsi <= 3) goto L99ef;
	f31d1(p4);
	f2b19(p4);
}
