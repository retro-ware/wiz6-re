extern char *g3342;
extern int g0846;
extern int g43ce;
extern int g4fc4;
f48e0(p4)
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
	if (g43ce >= 2) goto L48f6;
	return 0;
L48f6:
	l4 = f011a(0, 19, 19, 5, 25, -4, 0, 0);
	f32be(l4, 32, 3, 0);
	f075b(2027, &l16);
	f075b(2028, &l26);
	f075b(p4, 20588);
	f483f(20588, (10 - ((strlen(20588) + 6) / 2)));
	l28 = (unsigned char)g3342[6];
	l30 = (unsigned char)g3342[7];
	f2b19(g3342);
	f2b19(l4);
	f030b(g3342, l28, l30);
	if (g0846 != 1) goto L49c5;
	f251d(g3342, &l16, 3);
	goto L49d7;
L49c5:
	f24e9(g3342, &l26, -5);
L49d7:
	rsi = 0;
	goto L4a66;
L49dd:
	l32 = (((rsi % 2) * 9) + 2);
	l34 = ((rsi / 2) + 1);
	f030b(l4, l32, l34);
	f251d(l4, ((432 * rsi) + 17384), 3);
	f0c16(rsi, ((unsigned char)l4[2] + l32), ((unsigned char)l4[3] + l34), (((strlen(((432 * rsi) + 17384)) + (unsigned char)l4[2]) + l32) - 1), ((unsigned char)l4[3] + l34));
	rsi++;
L4a66:
	if (rsi < g43ce) goto L49dd;
	f0c16(g43ce, ((unsigned char)g3342[2] + l28), ((unsigned char)g3342[3] + l30), (((strlen(&l26) + (unsigned char)g3342[2]) + l28) - 1), ((unsigned char)g3342[3] + l30));
	f0c16((g43ce + 1), 255, 0, 0, 0);
	l6 = -1;
L4acb:
	if (g0846) goto L4b3a;
	if (l6 != -1) goto L4afc;
	f030b(g3342, l28, l30);
	f24e9(g3342, &l26, -5);
	goto L4b3a;
L4afc:
	f030b(l4, (((l6 % 2) * 9) + 2), ((l6 / 2) + 1));
	f24e9(l4, ((432 * l6) + 17384), -5);
L4b3a:
	l2 = f4728(20668, 13720);
	if (g4fc4 != 1) goto L4b6b;
	l6 = (l2 < g43ce ? l2 : -1);
	l2 = 5;
	goto L4c5a;
L4b6b:
	switch (l2) {
case 1:
	if (l6 == -1) goto L4b96;
	if ((l6 % 2) <= 0) goto L4b96;
	f489b(l4, l6);
	l6--;
L4b96:
	goto L4c5a;
case 2:
	if (l6 == -1) goto L4bbc;
	f489b(l4, l6);
	if ((l6 - 2) < 0) goto L4bb7;
	l6 = (l6 - 2);
	goto L4bbc;
L4bb7:
	l6 = -1;
L4bbc:
	goto L4c5a;
case 3:
	;
#asm
l4bbf:
	db 08bh,046h,0fah,03dh,0ffh,0ffh,074h,026h,0b9h,002h,000h,099h,0f7h,0f9h,08bh,0c2h
	db 03dh,001h,000h,07dh,019h
#endasm
	if ((l6 + 1) >= g43ce) goto L4bed;
	f489b(l4, l6);
	l6++;
L4bed:
	goto L4c5a;
case 4:
	if (l6 != -1) goto L4c1e;
	f030b(g3342, l28, l30);
	f251d(g3342, &l16, 3);
	l6 = 0;
	goto L4c3b;
L4c1e:
	if ((l6 + 2) >= g43ce) goto L4c3b;
	f489b(l4, l6);
	l6 += 2;
L4c3b:
	goto L4c5a;
	}
L4c5a:
	if (l2 != 5) goto L4acb;
	f02d2(l4, 0);
	return l6;
}
