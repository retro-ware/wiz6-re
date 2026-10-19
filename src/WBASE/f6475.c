extern int g50fa[];
extern int g511a[];
extern int g513a[];
f6475(p4, p6, p8, p10)
char *p4;
{
	char x0[16];
	char l17;
	char x17[1];
	int l20;
	register int rsi;
	f63f7(p4, 0);
	f3118(p4);
	rsi = -2;
L6493:
	if ((p6 + rsi) < 0) goto L668b;
	if ((p6 + rsi) >= p10) goto L668b;
	f030b(p4, 2, (rsi + 2));
	if (p8 != 1) goto L65b0;
	if (rsi) goto L65b0;
	f24e9(p4, (((p6 + rsi) << 3) + 20602), 5);
L64e3:
	if ((unsigned)p4[6] >= 10) goto L64fd;
	f22b7(p4, 32, 1);
	goto L64e3;
L64fd:
	f075b((g50fa[(p6 + rsi)] + 140), &l20);
	f22b7(p4, (unsigned char)*(char *)&l20, 7);
	f22b7(p4, 45, 9);
	f075b((g511a[(p6 + rsi)] + 100), &l20);
	l17 = 0;
	f24e9(p4, &l20, 6);
	f22b7(p4, 32, 1);
	f075b((g513a[(p6 + rsi)] + 120), &l20);
	l17 = 0;
	f24e9(p4, &l20, 3);
	goto L668b;
L65b0:
	f251d(p4, (((p6 + rsi) << 3) + 20602), 3);
L65cc:
	if ((unsigned)p4[6] >= 10) goto L65e6;
	f23e3(p4, 32, 3);
	goto L65cc;
L65e6:
	f075b((g50fa[(p6 + rsi)] + 140), &l20);
	f23e3(p4, (unsigned char)*(char *)&l20, 3);
	f23e3(p4, 45, 3);
	f075b((g511a[(p6 + rsi)] + 100), &l20);
	l17 = 0;
	f251d(p4, &l20, 3);
	p4[6]++;
	f075b((g513a[(p6 + rsi)] + 120), &l20);
	l17 = 0;
	f251d(p4, &l20, 3);
L668b:
	rsi++;
	if (rsi <= 2) goto L6493;
	f31d1(p4);
	f2b19(p4);
}
