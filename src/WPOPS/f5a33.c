extern char *g3342;
extern int g0846;
extern int g43ce;
extern int g4fc4;
f5a33(p4)
{
	int l2;
	char *l4;
	int l6;
	char x6[38];
	int l46;
	char x46[48];
	int l96;
	char x96[8];
	int l106;
	int l108;
	int l110;
	int l112;
	int l114;
	register int rsi;
	if (g43ce >= 2) goto L5a49;
	return 0;
L5a49:
	l4 = f011a(0, 19, 19, 5, 25, -4, 0, 0);
	f32be(l4, 32, 3, 0);
	f075b(3607, &l96);
	f075b(3608, &l106);
	f075b(p4, &l46);
	f45b5(&l46, 5);
	g3342[6]++;
	l108 = (unsigned char)g3342[6];
	l110 = (unsigned char)g3342[7];
	f2b19(g3342);
	f2b19(l4);
	f030b(g3342, l108, l110);
	if (g0846 != 1) goto L5b0a;
	f251d(g3342, &l96, 3);
	goto L5b1c;
L5b0a:
	f24e9(g3342, &l106, -5);
L5b1c:
	rsi = 0;
	goto L5bab;
L5b22:
	l112 = (((rsi % 2) * 9) + 2);
	l114 = ((rsi / 2) + 1);
	f030b(l4, l112, l114);
	f251d(l4, ((432 * rsi) + 17384), 3);
	f0c16(rsi, ((unsigned char)l4[2] + l112), ((unsigned char)l4[3] + l114), (((strlen(((432 * rsi) + 17384)) + (unsigned char)l4[2]) + l112) - 1), ((unsigned char)l4[3] + l114));
	rsi++;
L5bab:
	if (rsi < g43ce) goto L5b22;
	f0c16(g43ce, ((unsigned char)g3342[2] + l108), ((unsigned char)g3342[3] + l110), (((strlen(&l106) + (unsigned char)g3342[2]) + l108) - 1), ((unsigned char)g3342[3] + l110));
	f0c16((g43ce + 1), 255, 0, 0, 0);
	l6 = -1;
L5c10:
	if (g0846) goto L5c7f;
	if (l6 != -1) goto L5c41;
	f030b(g3342, l108, l110);
	f24e9(g3342, &l106, -5);
	goto L5c7f;
L5c41:
	f030b(l4, (((l6 % 2) * 9) + 2), ((l6 / 2) + 1));
	f24e9(l4, ((432 * l6) + 17384), -5);
L5c7f:
	l2 = f51d9(17270, 13720);
	if (g4fc4 != 1) goto L5cb0;
	l6 = (l2 < g43ce ? l2 : -1);
	l2 = 5;
	goto L5d9f;
L5cb0:
	switch (l2) {
case 1:
	if (l6 == -1) goto L5cdb;
	if ((l6 % 2) <= 0) goto L5cdb;
	f59ee(l4, l6);
	l6--;
L5cdb:
	goto L5d9f;
case 2:
	if (l6 == -1) goto L5d01;
	f59ee(l4, l6);
	if ((l6 - 2) < 0) goto L5cfc;
	l6 = (l6 - 2);
	goto L5d01;
L5cfc:
	l6 = -1;
L5d01:
	goto L5d9f;
case 3:
	;
#asm
l5d04:
	db 08bh,046h,0fah,03dh,0ffh,0ffh,074h,026h,0b9h,002h,000h,099h,0f7h,0f9h,08bh,0c2h
	db 03dh,001h,000h,07dh,019h
#endasm
	if ((l6 + 1) >= g43ce) goto L5d32;
	f59ee(l4, l6);
	l6++;
L5d32:
	goto L5d9f;
case 4:
	if (l6 != -1) goto L5d63;
	f030b(g3342, l108, l110);
	f251d(g3342, &l96, 3);
	l6 = 0;
	goto L5d80;
L5d63:
	if ((l6 + 2) >= g43ce) goto L5d80;
	f59ee(l4, l6);
	l6 += 2;
L5d80:
	goto L5d9f;
	}
L5d9f:
	if (l2 != 5) goto L5c10;
	f02d2(l4, 0);
	return l6;
}
