extern char g3592;
extern int g0842;
extern int g0844;
extern int g3044;
extern int g3342;
f0d26(p4, p6, p8, p10)
{
	int l2;
	int l4;
	char x4[73];
	char l78;
	char x78[4];
	int l84;
	char x84[38];
	int l124;
	char l164[40];
	int l166;
	int l168;
	int l170;
	int l172;
	int l174;
	int l176;
	int l178;
	f3640();
	l178 = p6;
	strcpy(&l124, p4);
	if (!p8) goto L0d5a;
	close(g0844);
	close(g0842);
L0d5a:
	if (!g3342) goto L0d6f;
	f09fb(g3342, 0);
L0d6f:
	l2 = f011a(0, 19, 40, 6, 31, -1, 0, 0);
	l174 = -2;
	if (g3592 != 5) goto L0df1;
	if (p6) goto L0db0;
	l174 = 1;
	goto L0df1;
L0db0:
	if (p6 <= 2) goto L0df1;
	l166 = open(1404, 0);
	if (l166 != -1) goto L0ddb;
	l174 = p6;
	p6 = 2;
	goto L0df1;
L0ddb:
	close(l166);
	strcpy(&l124, 13652);
L0df1:
	l172 = 0;
L0df7:
	f3118(l2);
	f32be(l2, 32, 3, 0);
	if (p6 >= 0) goto L0e29;
	strcpy(&l84, 1414);
	goto L0e59;
L0e29:
	l164[0] = (char)(p6 + 65);
	l164[(0 + 1)] = 0;
	strcpy(&l84, 1435);
	f05c1(&l84, l164, 94);
L0e59:
	l170 = (20 - ((strlen(&l84) + 1) / 2));
	f030b(l2, l170, 1);
	f251d(l2, &l84, 3);
	strcpy(&l84, 1451);
	f05c1(&l84, &l124, 94);
	f030b(l2, l170, 2);
	f251d(l2, &l84, 3);
	strcpy(&l84, 1464);
	l78 = 21;
	f030b(l2, (20 - ((strlen(&l84) + 1) / 2)), 4);
	f251d(l2, &l84, 3);
	f31d1(l2);
	f2a63();
	f280c();
	l4 = 1;
L0f30:
	if (!f0c42()) goto L0f3c;
	l4 = 0;
L0f3c:
	if (f2643(1) != 1) goto L0f5a;
	if ((char)f2724(1) != 13) goto L0f5a;
	l4 = 0;
L0f5a:
	if (l4) goto L0f30;
	f32be(l2, 32, 3, 0);
	f2b19(l2);
	strcpy(l164, &l124);
	if (g3592 != 5) goto L0ff5;
	if (p6 == 1) goto L0f9e;
	if (p6 != 2) goto L0ff5;
L0f9e:
	switch (p6) {
case 1:
	strcat(l164, 1472);
	goto L0fcf;
case 2:
	strcat(l164, 1484);
	goto L0fcf;
	}
L0fcf:
	l166 = open(l164, 0);
	if (l166 == -1) goto L0ff2;
	l172 = 1;
	close(l166);
L0ff2:
	goto L1083;
L0ff5:
	strcat(l164, 1494);
	l166 = open(l164, 0);
	if (p6 >= 0) goto L1031;
	if (l166 != -1) goto L102a;
	l172 = 1;
	goto L102f;
L102a:
	close(l166);
L102f:
	goto L1083;
L1031:
	if (l166 == -1) goto L1083;
	l168 = read(l166, 12356, 700);
	l176 = ((g3592 == 5) && (p6 > 0) ? (p6 - 2) : p6);
	if (l168 <= 0) goto L107b;
	if (l176 != g3044) goto L107b;
	l172 = 1;
L107b:
	close(l166);
L1083:
	if (!l172) goto L0df7;
	p6 = l174;
	l174 = -2;
	strcpy(&l124, 13652);
	if (p6 != -2) goto L0df1;
	f280c();
	f02d2(l2, 0);
	if (!p10) goto L1120;
	g0844 = open(f0cd6(1503, 0), 0);
	if (g0844 != -1) goto L10ed;
	f00d5(17);
L10ed:
	g0842 = open(f0cd6(1511, (l178 == 0 ? 0 : 1)), 0);
	if (g0842 != -1) goto L1120;
	f00d5(18);
L1120:
	;
}
