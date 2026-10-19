extern char *g3342;
extern int g0846;
extern int g43ce;
extern int g4fc4;
f62ee(p4, p6)
{
	int l2;
	char *l4;
	int l6;
	char x6[8];
	int l16;
	char x16[8];
	int l26;
	int l28;
	int l30;
	int l32;
	int l34;
	register int rsi;
	if (g43ce >= 2) goto L6304;
	return 0;
L6304:
	l4 = f011a(0, 19, 19, 5, 25, -4, 0, 0);
	f32be(l4, 32, 3, 0);
	f09fb(g3342, 0);
	f0a42(g3342, 0);
	f075b(p4, 20948);
	f541a(20948, (p6 == 1 ? 5 : 0));
	f2a63();
	if (p6 != 1) goto L63e9;
	g3342[6]++;
	l28 = (unsigned char)g3342[6];
	l30 = (unsigned char)g3342[7];
	f075b(2027, &l16);
	f075b(2028, &l26);
	if (g0846 != 1) goto L63d7;
	f251d(g3342, &l16, 3);
	goto L63e9;
L63d7:
	f24e9(g3342, &l26, -5);
L63e9:
	rsi = 0;
	goto L6478;
L63ef:
	l32 = (((rsi % 2) * 9) + 2);
	l34 = ((rsi / 2) + 1);
	f030b(l4, l32, l34);
	f251d(l4, ((432 * rsi) + 17384), 3);
	f0c16(rsi, ((unsigned char)l4[2] + l32), ((unsigned char)l4[3] + l34), (((strlen(((432 * rsi) + 17384)) + (unsigned char)l4[2]) + l32) - 1), ((unsigned char)l4[3] + l34));
	rsi++;
L6478:
	if (rsi < g43ce) goto L63ef;
	f0c16(g43ce, 255, 0, 0, 0);
	if (p6 != 1) goto L64f2;
	f0c16(g43ce, ((unsigned char)g3342[2] + l28), ((unsigned char)g3342[3] + l30), (((strlen(&l26) + (unsigned char)g3342[2]) + l28) - 1), ((unsigned char)g3342[3] + l30));
	f0c16((g43ce + 1), 255, 0, 0, 0);
L64f2:
	l6 = (p6 == 1 ? -1 : 0);
L6501:
	if (g0846) goto L6570;
	if (l6 != -1) goto L6532;
	f030b(g3342, l28, l30);
	f24e9(g3342, &l26, -5);
	goto L6570;
L6532:
	f030b(l4, (((l6 % 2) * 9) + 2), ((l6 / 2) + 1));
	f24e9(l4, ((432 * l6) + 17384), -5);
L6570:
	l2 = f5994(21098, 13720);
	if (g4fc4 != 1) goto L65a1;
	l6 = (l2 < g43ce ? l2 : -1);
	l2 = 5;
	goto L66a5;
L65a1:
	switch (l2) {
case 1:
	if (l6 == -1) goto L65cc;
	if ((l6 % 2) <= 0) goto L65cc;
	f62a9(l4, l6);
	l6--;
L65cc:
	goto L66a5;
case 2:
	if (l6 == -1) goto L6607;
	if ((l6 - 2) < 0) goto L65f0;
	f62a9(l4, l6);
	l6 -= 2;
	goto L6607;
L65f0:
	if (p6 != 1) goto L6607;
	f62a9(l4, l6);
	l6 = -1;
L6607:
	goto L66a5;
case 3:
	;
#asm
l660a:
	db 08bh,046h,0fah,03dh,0ffh,0ffh,074h,026h,0b9h,002h,000h,099h,0f7h,0f9h,08bh,0c2h
	db 03dh,001h,000h,07dh,019h
#endasm
	if ((l6 + 1) >= g43ce) goto L6638;
	f62a9(l4, l6);
	l6++;
L6638:
	goto L66a5;
case 4:
	if (l6 != -1) goto L6669;
	f030b(g3342, l28, l30);
	f251d(g3342, &l16, 3);
	l6 = 0;
	goto L6686;
L6669:
	if ((l6 + 2) >= g43ce) goto L6686;
	f62a9(l4, l6);
	l6 += 2;
L6686:
	goto L66a5;
	}
L66a5:
	if (l2 != 5) goto L6501;
	f09fb(g3342, 0);
	f02d2(l4, 0);
	return l6;
}
