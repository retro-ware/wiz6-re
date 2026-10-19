#asm
	extrn f22b7_:near
	extrn f24e9_:near
#endasm
extern char *g438c;
extern char g019d[];
extern char g019e[];
extern int g0846;
extern int g4360;
extern int g43aa[];
extern int g4fc4;
f55cd(p4, p6, p8, p10)
char *p4;
{
	char x0[78];
	int l80;
	char x80[78];
	int l160;
	char x160[8];
	int l170;
	int l172;
	int l174;
	if (g4360 != 1) goto L55e2;
	return 1;
L55e2:
	f32be(p4, 32, 3, 0);
	f2a63();
	f075b(3600, &l80);
	f075b(p6, &l160);
	f05c1(&l80, &l160, 36);
	l172 = (10 - ((strlen(&l80) + 1) / 2));
	f030b(p4, l172, 1);
	f251d(p4, &l80, 3);
	f075b(3606, &l170);
	f030b(p4, 7, 3);
	f251d(p4, &l170, 3);
	l174 = 5;
	switch (p8) {
case 0:
case 1:
	l174 = 2;
	goto L56ce;
case 2:
	l174 = 3;
	goto L56ce;
case 3:
	l174 = 5;
	goto L56ce;
	}
L56ce:
	l174 = (l174 > g4360 ? g4360 : l174);
	l172 = 0;
	goto L571e;
L56e9:
	f0c16(l172, (unsigned char)g438c[2], ((unsigned char)g438c[3] + l172), ((unsigned char)g438c[2] + 19), ((unsigned char)g438c[3] + l172));
	l172++;
L571e:
	if (l172 < l174) goto L56e9;
	f0c16(l174, ((unsigned char)p4[2] + 7), ((unsigned char)p4[3] + 3), ((strlen(&l170) + (unsigned char)p4[2]) + 6), ((unsigned char)p4[3] + 3));
	f0c16((l174 + 1), 255, 0, 0, 0);
L577e:
	if (g0846) goto L5888;
	if (p10 != -1) goto L57b4;
	f030b(p4, 7, 3);
	f24e9(p4, &l170, -7);
	goto L5888;
L57b4:
	f030b(g438c, 0, p10);
	f22b7(g438c, (unsigned char)(((unsigned char)g019d[g43aa[p10]] + 48)), -7);
#asm
	db 0b8h,0f9h,0ffh,050h,0b8h,020h,000h,050h,0ffh,036h,08ch,043h
	call f22b7_
	db 083h,0c4h,006h,0b8h,0f9h,0ffh,050h,08bh,046h,00ah,0d1h,0e0h,08bh,0d8h,08bh,09fh
	db 0aah,043h,080h,0bfh,09dh,001h,001h,075h,005h,0b8h,000h,000h,0ebh,003h
#endasm
L5817:
	;
#asm
l5817:
	db 0b8h,001h,000h
#endasm
L581a:
	;
#asm
l581a:
	db 0b9h,004h,000h,0d3h,0e0h,08bh,0c8h,051h,08ah,087h,09ch,001h,02ah,0e4h,0b9h,005h
	db 000h,0d3h,0e0h,059h,003h,0c8h,08bh,046h,00ah,0d1h,0e0h,08bh,0d8h,08bh,087h,0b8h
	db 043h,003h,0c1h,050h,0ffh,036h,08ch,043h
	call f24e9_
	db 083h,0c4h,006h
#endasm
L5848:
	if ((unsigned)g438c[6] >= 19) goto L5863;
	f22b7(g438c, 32, -7);
	goto L5848;
L5863:
	f22b7(g438c, (unsigned char)(((unsigned char)g019e[g43aa[p10]] + 48)), -7);
L5888:
	l172 = f51d9(17270, 13720);
	if (g4fc4 != 1) goto L58bc;
	p10 = (l172 < l174 ? l172 : -1);
	l172 = 5;
	goto L59d1;
L58bc:
	switch (l172) {
case 1:
	if (p10 == -1) goto L58dc;
	f4623(g438c, 1);
	p10 = -1;
L58dc:
	goto L59d1;
case 2:
	if (p10 != -1) goto L590f;
	f030b(p4, 7, 3);
	f251d(p4, &l170, 3);
	p10 = 0;
	goto L592d;
L590f:
	f4623(g438c, 1);
	if ((p10 - 1) < 0) goto L5928;
	p10--;
	goto L592d;
L5928:
	p10 = -1;
L592d:
	goto L59d1;
case 3:
	if (p10 != -1) goto L595e;
	f030b(p4, 7, 3);
	f251d(p4, &l170, 3);
	p10 = 0;
L595e:
	goto L59d1;
case 4:
	if (p10 != -1) goto L5990;
	f030b(p4, 7, 3);
	f251d(p4, &l170, 3);
	p10 = 0;
	goto L59b2;
L5990:
	f4623(g438c, 1);
	if ((p10 + 1) >= l174) goto L59ad;
	p10++;
	goto L59b2;
L59ad:
	p10 = -1;
L59b2:
	goto L59d1;
	}
L59d1:
	if (l172 != 5) goto L577e;
	if (p10 != -1) goto L59e7;
	return -1;
L59e7:
	return (p10 + 1);
}
