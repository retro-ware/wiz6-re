extern char *g3342;
extern int g0846;
extern int g43ce;
extern int g4fc4;
f5649(p4, p6)
{
	int l2;
	char *l4;
	int l6;
	char x6[8];
	int l16;
	char x16[8];
	int l26;
	char x26[78];
	int l106;
	int l108;
	int l110;
	int l112;
	int l114;
	register int rsi;
	if (g43ce >= 2) goto L565f;
	return 0;
L565f:
	l4 = f011a(0, 19, 19, 5, 25, -4, 0, 0);
	f32be(l4, 32, 3, 0);
	f075b(2027, &l16);
	f075b(2028, &l26);
	f075b(p4, &l106);
	f5097(p4, (10 - ((strlen(&l106) + 6) / 2)));
	l108 = (unsigned char)g3342[6];
	l110 = (unsigned char)g3342[7];
	if (p6) goto L570a;
	f2b19(g3342);
	f2b19(l4);
	goto L570d;
L570a:
	f2a63();
L570d:
	f030b(g3342, l108, l110);
	if (g0846 != 1) goto L5738;
	f251d(g3342, &l16, 3);
	goto L574a;
L5738:
	f24e9(g3342, &l26, -5);
L574a:
	rsi = 0;
	goto L57d9;
L5750:
	l112 = (((rsi % 2) * 9) + 2);
	l114 = ((rsi / 2) + 1);
	f030b(l4, l112, l114);
	f251d(l4, ((432 * rsi) + 17384), 3);
	f0c16(rsi, ((unsigned char)l4[2] + l112), ((unsigned char)l4[3] + l114), (((strlen(((432 * rsi) + 17384)) + (unsigned char)l4[2]) + l112) - 1), ((unsigned char)l4[3] + l114));
	rsi++;
L57d9:
	if (rsi < g43ce) goto L5750;
	f0c16(g43ce, ((unsigned char)g3342[2] + l108), ((unsigned char)g3342[3] + l110), (((strlen(&l26) + (unsigned char)g3342[2]) + l108) - 1), ((unsigned char)g3342[3] + l110));
	f0c16((g43ce + 1), 255, 0, 0, 0);
	l6 = -1;
L583e:
	if (g0846) goto L58ad;
	if (l6 != -1) goto L586f;
	f030b(g3342, l108, l110);
	f24e9(g3342, &l26, -5);
	goto L58ad;
L586f:
	f030b(l4, (((l6 % 2) * 9) + 2), ((l6 / 2) + 1));
	f24e9(l4, ((432 * l6) + 17384), -5);
L58ad:
	l2 = f4c2f(20670, 13720);
	if (g4fc4 != 1) goto L58de;
	l6 = (l2 < g43ce ? l2 : -1);
	l2 = 5;
	goto L59cd;
L58de:
	switch (l2) {
case 1:
	if (l6 == -1) goto L5909;
	if ((l6 % 2) <= 0) goto L5909;
	f5604(l4, l6);
	l6--;
L5909:
	goto L59cd;
case 2:
	if (l6 == -1) goto L592f;
	f5604(l4, l6);
	if ((l6 - 2) < 0) goto L592a;
	l6 = (l6 - 2);
	goto L592f;
L592a:
	l6 = -1;
L592f:
	goto L59cd;
case 3:
	;
#asm
l5932:
	db 08bh,046h,0fah,03dh,0ffh,0ffh,074h,026h,0b9h,002h,000h,099h,0f7h,0f9h,08bh,0c2h
	db 03dh,001h,000h,07dh,019h
#endasm
	if ((l6 + 1) >= g43ce) goto L5960;
	f5604(l4, l6);
	l6++;
L5960:
	goto L59cd;
case 4:
	if (l6 != -1) goto L5991;
	f030b(g3342, l108, l110);
	f251d(g3342, &l16, 3);
	l6 = 0;
	goto L59ae;
L5991:
	if ((l6 + 2) >= g43ce) goto L59ae;
	f5604(l4, l6);
	l6 += 2;
L59ae:
	goto L59cd;
	}
L59cd:
	if (l2 != 5) goto L583e;
	f02d2(l4, 0);
	return l6;
}
