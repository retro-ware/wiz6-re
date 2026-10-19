extern char *g3342;
extern int g0846;
extern int g43ce;
extern int g4fb2;
extern int g4fc4;
f6c2b(p4)
{
	int l2;
	char *l4;
	int l6;
	char x6[78];
	int l86;
	char x86[8];
	int l96;
	char x96[8];
	int l106;
	int l108;
	int l110;
	int l112;
	int l114;
	register int rsi;
	if (g43ce >= 2) goto L6c41;
	return 0;
L6c41:
	l4 = f011a(0, 19, 19, 5, 25, -4, 0, 0);
	f32be(l4, 32, 3, 0);
	f075b(2027, &l96);
	f075b(2028, &l106);
	f075b(p4, &l86);
	f6372(&l86, (10 - ((strlen(&l86) + 6) / 2)));
	l108 = (unsigned char)g3342[6];
	l110 = (unsigned char)g3342[7];
	f0a42(g4fb2, 0);
	f2a63();
	f030b(g3342, l108, l110);
	if (g0846 != 1) goto L6d15;
	f251d(g3342, &l96, 3);
	goto L6d27;
L6d15:
	f24e9(g3342, &l106, -5);
L6d27:
	rsi = 0;
	goto L6db6;
L6d2d:
	l112 = (((rsi % 2) * 9) + 2);
	l114 = ((rsi / 2) + 1);
	f030b(l4, l112, l114);
	f251d(l4, ((432 * rsi) + 17384), 3);
	f0c16(rsi, ((unsigned char)l4[2] + l112), ((unsigned char)l4[3] + l114), (((strlen(((432 * rsi) + 17384)) + (unsigned char)l4[2]) + l112) - 1), ((unsigned char)l4[3] + l114));
	rsi++;
L6db6:
	if (rsi < g43ce) goto L6d2d;
	f0c16(g43ce, ((unsigned char)g3342[2] + l108), ((unsigned char)g3342[3] + l110), (((strlen(&l106) + (unsigned char)g3342[2]) + l108) - 1), ((unsigned char)g3342[3] + l110));
	f0c16((g43ce + 1), 255, 0, 0, 0);
	l6 = -1;
L6e1b:
	if (g0846) goto L6e8a;
	if (l6 != -1) goto L6e4c;
	f030b(g3342, l108, l110);
	f24e9(g3342, &l106, -5);
	goto L6e8a;
L6e4c:
	f030b(l4, (((l6 % 2) * 9) + 2), ((l6 / 2) + 1));
	f24e9(l4, ((432 * l6) + 17384), -5);
L6e8a:
	l2 = f469f(20582, 13720);
	if (g4fc4 != 1) goto L6ebb;
	l6 = (l2 < g43ce ? l2 : -1);
	l2 = 5;
	goto L6faa;
L6ebb:
	switch (l2) {
case 1:
	if (l6 == -1) goto L6ee6;
	if ((l6 % 2) <= 0) goto L6ee6;
	f6be6(l4, l6);
	l6--;
L6ee6:
	goto L6faa;
case 2:
	if (l6 == -1) goto L6f0c;
	f6be6(l4, l6);
	if ((l6 - 2) < 0) goto L6f07;
	l6 = (l6 - 2);
	goto L6f0c;
L6f07:
	l6 = -1;
L6f0c:
	goto L6faa;
case 3:
	;
#asm
l6f0f:
	db 08bh,046h,0fah,03dh,0ffh,0ffh,074h,026h,0b9h,002h,000h,099h,0f7h,0f9h,08bh,0c2h
	db 03dh,001h,000h,07dh,019h
#endasm
	if ((l6 + 1) >= g43ce) goto L6f3d;
	f6be6(l4, l6);
	l6++;
L6f3d:
	goto L6faa;
case 4:
	if (l6 != -1) goto L6f6e;
	f030b(g3342, l108, l110);
	f251d(g3342, &l96, 3);
	l6 = 0;
	goto L6f8b;
L6f6e:
	if ((l6 + 2) >= g43ce) goto L6f8b;
	f6be6(l4, l6);
	l6 += 2;
L6f8b:
	goto L6faa;
	}
L6faa:
	if (l2 != 5) goto L6e1b;
	f02d2(l4, 0);
	f0a42(g4fb2, 0);
	return l6;
}
