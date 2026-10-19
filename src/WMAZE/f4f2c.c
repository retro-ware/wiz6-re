#asm
	extrn f030b_:near
	extrn strlen_:near
#endasm
extern char *g3342;
extern int g0846;
extern int g43ce;
extern int g4fc4;
f4f2c(p4, p6)
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
	if (g43ce >= 2) goto L4f42;
	return 0;
L4f42:
	l4 = f011a(0, 19, 19, 5, 25, -4, 0, 0);
	f32be(l4, 32, 3, 0);
	f09fb(g3342, 0);
	f0a42(g3342, 0);
	f2a63();
	f075b(p4, &l106);
#asm
	db 0b8h,000h,000h,050h,08dh,046h,096h,050h
	call strlen_
	db 059h,0b9h,000h,000h,083h,07eh,006h,001h,075h,003h,0b9h,005h,000h
#endasm
L4fbe:
	;
#asm
l4fbe:
	db 003h,0c1h,040h,0b9h,002h,000h,099h,0f7h,0f9h,08bh,0c8h,0b8h,00ah,000h,02bh,0c1h
	db 050h,0ffh,036h,042h,033h
	call f030b_
	db 083h,0c4h,006h
#endasm
	f251d(g3342, &l106, 3);
	if (p6 != 1) goto L5055;
	g3342[6]++;
	l108 = (unsigned char)g3342[6];
	l110 = (unsigned char)g3342[7];
	f075b(2027, &l16);
	f075b(2028, &l26);
	if (g0846 != 1) goto L5043;
	f251d(g3342, &l16, 3);
	goto L5055;
L5043:
	f24e9(g3342, &l26, -5);
L5055:
	rsi = 0;
	goto L50e4;
L505b:
	l112 = (((rsi % 2) * 9) + 2);
	l114 = ((rsi / 2) + 1);
	f030b(l4, l112, l114);
	f251d(l4, ((432 * rsi) + 17384), 3);
	f0c16(rsi, ((unsigned char)l4[2] + l112), ((unsigned char)l4[3] + l114), (((strlen(((432 * rsi) + 17384)) + (unsigned char)l4[2]) + l112) - 1), ((unsigned char)l4[3] + l114));
	rsi++;
L50e4:
	if (rsi < g43ce) goto L505b;
	f0c16(g43ce, 255, 0, 0, 0);
	if (p6 != 1) goto L515e;
	f0c16(g43ce, ((unsigned char)g3342[2] + l108), ((unsigned char)g3342[3] + l110), (((strlen(&l26) + (unsigned char)g3342[2]) + l108) - 1), ((unsigned char)g3342[3] + l110));
	f0c16((g43ce + 1), 255, 0, 0, 0);
L515e:
	l6 = (p6 == 1 ? -1 : 0);
L516d:
	if (g0846) goto L51dc;
	if (l6 != -1) goto L519e;
	f030b(g3342, l108, l110);
	f24e9(g3342, &l26, -5);
	goto L51dc;
L519e:
	f030b(l4, (((l6 % 2) * 9) + 2), ((l6 / 2) + 1));
	f24e9(l4, ((432 * l6) + 17384), -5);
L51dc:
	l2 = f5534(20520, 13720);
	if (g4fc4 != 1) goto L520d;
	l6 = (l2 < g43ce ? l2 : -1);
	l2 = 5;
	goto L5311;
L520d:
	switch (l2) {
case 1:
	if (l6 == -1) goto L5238;
	if ((l6 % 2) <= 0) goto L5238;
	f4ee7(l4, l6);
	l6--;
L5238:
	goto L5311;
case 2:
	if (l6 == -1) goto L5273;
	if ((l6 - 2) < 0) goto L525c;
	f4ee7(l4, l6);
	l6 -= 2;
	goto L5273;
L525c:
	if (p6 != 1) goto L5273;
	f4ee7(l4, l6);
	l6 = -1;
L5273:
	goto L5311;
case 3:
	;
#asm
l5276:
	db 08bh,046h,0fah,03dh,0ffh,0ffh,074h,026h,0b9h,002h,000h,099h,0f7h,0f9h,08bh,0c2h
	db 03dh,001h,000h,07dh,019h
#endasm
	if ((l6 + 1) >= g43ce) goto L52a4;
	f4ee7(l4, l6);
	l6++;
L52a4:
	goto L5311;
case 4:
	if (l6 != -1) goto L52d5;
	f030b(g3342, l108, l110);
	f251d(g3342, &l16, 3);
	l6 = 0;
	goto L52f2;
L52d5:
	if ((l6 + 2) >= g43ce) goto L52f2;
	f4ee7(l4, l6);
	l6 += 2;
L52f2:
	goto L5311;
	}
L5311:
	if (l2 != 5) goto L516d;
	f09fb(g3342, 0);
	f02d2(l4, 0);
	return l6;
}
