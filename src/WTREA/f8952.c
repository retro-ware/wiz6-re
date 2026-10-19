extern int g0846;
extern int g3342;
extern int g4fb2;
extern int g4fc4;
extern int g4fca;
extern int g51d6[];
extern int g5266;
extern int g5268[];
extern int g5274[];
f8952()
{
	int l2;
	char x2[2];
	int l6;
	int l8;
	int l10;
	char *l12;
	char *l14;
	int l16;
	int l18;
	char x18[8];
	int l28;
	char x28[2];
	int l32;
	f31d1(g3342);
	f31d1(g4fb2);
	f0a42(g4fb2, 0);
	l12 = f011a(0, 19, 19, 5, 20, -4, 0, 0);
	f32be(l12, 32, 3, 0);
	l14 = f011a(20, 19, 20, 5, 21, -5, 0, 0);
	f32be(l14, 32, 3, 0);
	f3118(l12);
	f030b(l12, 2, 1);
	f083f(5102, l12, 18);
	l12[6]++;
	l16 = (unsigned char)l12[6];
	l18 = (unsigned char)l12[7];
	f075b(5103, &l28);
	f251d(l12, &l28, 3);
	f88a9(l12, 1, 2, 17);
	f88a9(l12, 18, 2, 19);
	f88a9(l12, 1, 4, 6);
	f88a9(l12, 18, 4, 8);
	l2 = 2;
L8aa3:
	f88a9(l12, l2, 2, 18);
	f88a9(l12, l2, 4, 7);
	l2++;
	if (l2 < 18) goto L8aa3;
	f88a9(l12, 1, 3, 4);
	f88a9(l12, 18, 3, 5);
	f033f(l12, 2, 3, 17, 3);
	f31d1(l12);
	l10 = 0;
L8b25:
	if (l10 < g5266) goto L8b33;
	l10--;
	goto L8b25;
L8b33:
	f5097(5101, 2);
	f3118(l14);
	f32be(l14, 32, 3, 0);
	l2 = 0;
	goto L8ba1;
L8b64:
	f8848(l14, l2);
	f0c16(l2, ((unsigned char)l14[2] + 1), ((unsigned char)l14[3] + l2), ((unsigned char)l14[2] + 19), ((unsigned char)l14[3] + l2));
	l2++;
L8ba1:
	if (l2 < g5266) goto L8b64;
	f31d1(l14);
	f0c16(g5266, ((unsigned char)l12[2] + l16), ((unsigned char)l12[3] + l18), (((strlen(&l28) + (unsigned char)l12[2]) + l16) - 1), ((unsigned char)l12[3] + l18));
	f0c16((g5266 + 1), 255, 0, 0, 0);
	f2a63();
L8c09:
	if (l10 != -1) goto L8c52;
	if (g0846) goto L8c36;
	f030b(l12, l16, l18);
	f24e9(l12, &l28, -3);
L8c36:
	f033f(l12, 2, 3, 17, 3);
	goto L8d0c;
L8c52:
	f030b(l14, 21, l10);
	f24e9(l14, ((l10 * 18) + 20974), -3);
	f030b(l12, 2, 3);
	f083f(5104, l12, 11);
	f030b(l12, 12, 3);
	f05a5(l12, (g5268[l10] / 10), 4, 3);
	f22b7(l12, 46, 3);
	f05a5(l12, (g5268[l10] % 10), 1, 3);
L8d0c:
	l8 = f4c2f(20670, 13720);
	if (g4fc4 != 1) goto L8d65;
	if (l8 != l10) goto L8d30;
	l8 = 5;
	goto L8d62;
L8d30:
	if (l10 == -1) goto L8d42;
	f8848(l14, l10);
L8d42:
	l10 = (l8 < g5266 ? l8 : -1);
	l8 = (l10 == -1 ? 5 : 0);
L8d62:
	goto L8e6a;
L8d65:
	switch (l8) {
case 1:
	if (l10 == -1) goto L8d82;
	f8848(l14, l10);
	l10 = -1;
L8d82:
	goto L8e6a;
case 2:
	if (l10 != -1) goto L8db2;
	f030b(l12, l16, l18);
	f251d(l12, &l28, 3);
	l10 = 0;
	goto L8dce;
L8db2:
	f8848(l14, l10);
	if (l10 <= 0) goto L8dc9;
	l10--;
	goto L8dce;
L8dc9:
	l10 = -1;
L8dce:
	goto L8e6a;
case 3:
	if (l10 != -1) goto L8dfc;
	f030b(l12, l16, l18);
	f251d(l12, &l28, 3);
	l10 = 0;
L8dfc:
	goto L8e6a;
case 4:
	if (l10 != -1) goto L8e2b;
	f030b(l12, l16, l18);
	f251d(l12, &l28, 3);
	l10 = 0;
	goto L8e4b;
L8e2b:
	f8848(l14, l10);
	if ((l10 + 1) >= g5266) goto L8e46;
	l10++;
	goto L8e4b;
L8e46:
	l10 = -1;
L8e4b:
	goto L8e6a;
	}
L8e6a:
	if (l8 != 5) goto L8c09;
	if (l10 == -1) goto L8edd;
	l6 = f5649(5105, 0);
	if (l6 == -1) goto L8edd;
	if (g51d6[l10] <= 0) goto L8edd;
	if (f8583(l6, l10) == -1) goto L8eb7;
	f88d2(l10);
	goto L8edd;
L8eb7:
	f5097(5108, 6);
	f2b19(g3342);
	f0aaa(0);
	f48df(g4fca);
L8edd:
	if (l10 != -1) goto L8f3a;
	l32 = 0;
	l2 = 0;
	goto L8f05;
L8eef:
	if (g5274[l2] != 1) goto L8f02;
	l32 = 1;
L8f02:
	l2++;
L8f05:
	if (l2 < g5266) goto L8eef;
	if (l32 != 1) goto L8f3a;
	f5097(5109, 1);
	f2b19(g3342);
	f0aaa(0);
	f48df(g4fca);
L8f3a:
	if (g5266 <= 0) goto L8f53;
	if (l10 != -1) goto L8b25;
	if (l32 == 1) goto L8b25;
L8f53:
	f02d2(l14, 0);
	f02d2(l12, 0);
	f3118(g3342);
	f3118(g4fb2);
}
