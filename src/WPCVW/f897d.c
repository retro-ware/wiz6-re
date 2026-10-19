extern int g0846;
extern int g43ce;
extern int g4fc4;
extern int g5752;
f897d(p4, p6, p8, p10)
char *p6;
{
	int l2;
	char x2[8];
	int l12;
	int l14;
	int l16;
	int l18;
	int l20;
	register int rsi;
	if (g43ce >= 2) goto L8993;
	return 0;
L8993:
	f3118(g5752);
	rsi = 0;
	goto L89ac;
L89a0:
	f49c9(g5752, rsi);
	rsi++;
L89ac:
	if (rsi < g43ce) goto L89a0;
	f31d1(g5752);
	f32be(p6, 32, 3, 0);
	f2a63();
	f075b(p8, 21902);
	f030b(p6, (10 - ((strlen(21902) + 1) / 2)), 1);
	f251d(p6, 21902, 3);
	l14 = 8;
	l16 = 3;
	f075b(503, &l12);
	f030b(p6, l14, l16);
	if (g0846) goto L8a5b;
	if (p10 != -1) goto L8a5b;
	f24e9(p6, &l12, -5);
	goto L8a6c;
L8a5b:
	f251d(p6, &l12, 3);
L8a6c:
	rsi = 0;
	goto L8b20;
L8a72:
	l18 = (((rsi % 2) * 9) + 22);
	l20 = ((rsi / 2) + 1);
	f030b(p6, l18, l20);
	if (g0846) goto L8ac7;
	if (rsi != p10) goto L8ac7;
	f24e9(p6, ((432 * rsi) + 17384), -5);
	goto L8add;
L8ac7:
	f251d(p6, ((432 * rsi) + 17384), 3);
L8add:
	f0c16(rsi, ((unsigned char)p6[2] + l18), ((unsigned char)p6[3] + l20), (((strlen(((432 * rsi) + 17384)) + (unsigned char)p6[2]) + l18) - 1), ((unsigned char)p6[3] + l20));
	rsi++;
L8b20:
	if (rsi < g43ce) goto L8a72;
	f0c16(g43ce, ((unsigned char)p6[2] + l14), ((unsigned char)p6[3] + l16), (((strlen(&l12) + (unsigned char)p6[2]) + l14) - 1), ((unsigned char)p6[3] + l16));
	f0c16((g43ce + 1), 255, 0, 0, 0);
L8b7e:
	if (g0846) goto L8bec;
	if (p10 != -1) goto L8bad;
	f030b(p6, l14, l16);
	f24e9(p6, &l12, -5);
	goto L8bec;
L8bad:
	f030b(p6, (((p10 % 2) * 9) + 22), ((p10 / 2) + 1));
	f24e9(p6, ((432 * p10) + 17384), -5);
L8bec:
	l2 = f8891(21822, 13720);
	if (g4fc4 != 1) goto L8c1d;
	p10 = (l2 < g43ce ? l2 : -1);
	l2 = 5;
	goto L8d0e;
L8c1d:
	switch (l2) {
case 1:
	if (p10 == -1) goto L8c4f;
	f8937(p6, p10);
	if ((p10 % 2) <= 0) goto L8c4a;
	p10--;
	goto L8c4f;
L8c4a:
	p10 = -1;
L8c4f:
	goto L8d0e;
case 2:
	if (p10 == -1) goto L8c71;
	if ((p10 - 2) < 0) goto L8c71;
	f8937(p6, p10);
	p10 -= 2;
L8c71:
	goto L8d0e;
case 3:
	if (p10 != -1) goto L8ca1;
	f030b(p6, l14, l16);
	f251d(p6, &l12, 3);
	p10 = 0;
	goto L8cca;
L8ca1:
	if ((p10 % 2) >= 1) goto L8cca;
	if ((p10 + 1) >= g43ce) goto L8cca;
	f8937(p6, p10);
	p10++;
L8cca:
	goto L8d0e;
case 4:
	if (p10 == -1) goto L8cef;
	if ((p10 + 2) >= g43ce) goto L8cef;
	f8937(p6, p10);
	p10 += 2;
L8cef:
	goto L8d0e;
	}
L8d0e:
	if (l2 != 5) goto L8b7e;
	f32be(p6, 32, 3, 0);
	f3118(g5752);
	return p10;
}
