#asm
	extrn f0aaa_:near
	extrn f5691_:near
#endasm
extern char g55a4[];
extern char g5618;
extern int g4fc4;
f56bc(p4, p6, p8, p10, p12)
char *p4;
char *p10;
{
	int l2;
	int l4;
	int l24[10];
	int l26;
	int l28;
	register int rsi;
	l26 = (unsigned char)g5618;
	f32be(p4, 32, 3, 0);
	f2b19(p4);
	f030b(p4, 7, 1);
	f083f(610, p4, 18);
	f030b(p4, 2, 2);
	f083f(606, p4, 18);
	p4[6] += 3;
	f083f(607, p4, 18);
	l4 = 0;
L5745:
	l24[l4] = 0;
	l4++;
	if (l4 < 10) goto L5745;
	l4 = 0;
	f0c16(0, ((unsigned char)p4[2] + 2), ((unsigned char)p4[3] + 2), ((unsigned char)p4[2] + 2), ((unsigned char)p4[3] + 2));
	f0c16(1, ((unsigned char)p4[2] + 3), ((unsigned char)p4[3] + 2), ((unsigned char)p4[2] + 3), ((unsigned char)p4[3] + 2));
	f0c16(2, ((unsigned char)p4[2] + 22), ((unsigned char)p4[3] + 2), ((unsigned char)p4[2] + 22), ((unsigned char)p4[3] + 2));
	f0c16(3, ((unsigned char)p4[2] + 23), ((unsigned char)p4[3] + 2), ((unsigned char)p4[2] + 23), ((unsigned char)p4[3] + 2));
	f0c16(4, ((unsigned char)p4[2] + 13), ((unsigned char)p4[3] + 3), ((unsigned char)p4[2] + 13), ((unsigned char)p4[3] + 3));
	f0c16(5, 255, 0, 0, 0);
	f030b(p6, 15, (l4 + 3));
	f22b7(p6, 100, 4);
L5887:
	f030b(p4, 7, 3);
	f083f((l26 > 0 ? 608 : 609), p4, 18);
	l28 = (l26 > 0 ? 13 : 18);
	f0c16(4, ((unsigned char)p4[2] + l28), ((unsigned char)p4[3] + 3), ((unsigned char)p4[2] + l28), ((unsigned char)p4[3] + 3));
	l2 = f45fc(21534, 13720);
	if (g4fc4 != 1) goto L5946;
#asm
	db 0ebh,02dh
#endasm
	l2 = 1;
	goto L5946;
	l2 = 3;
#asm
	db 0ebh,02ch
#endasm
	l2 = 2;
#asm
	db 0ebh,025h
#endasm
	l2 = 4;
#asm
	db 0ebh,01eh
#endasm
	l2 = 5;
#asm
	db 0ebh,017h,00ch,059h,013h,059h,01ah,059h,021h,059h,028h,059h
l5939:
	db 03dh,005h,000h,073h,008h,093h,0d1h,0e3h,02eh,0ffh,0a7h,02fh,059h
#endasm
L5946:
	switch (l2) {
case 1:
	if (l24[l4] <= 0) goto L59ad;
	rsi = (l4 << 1);
	g55a4[*(int *)(p10 + rsi)]--;
#asm
	db 08bh,0d8h,003h,0ddh,0ffh,04fh,0e8h
#endasm
	l26++;
#asm
	db 0b8h,001h,000h,050h
	call f0aaa_
	db 059h,08bh,046h,0fch,0d1h,0e0h,08bh,0f0h,08bh,05eh,00ah,08bh,018h,08ah,087h,0a4h
	db 055h,02ah,0e4h,050h,08bh,046h,0fch,040h,040h,040h,050h,0ffh,076h,006h
	call f5691_
	db 083h,0c4h,006h
#endasm
	f5691(p6, 14, l26);
	goto L59b5;
L59ad:
	f0aaa(0);
L59b5:
	goto L5b02;
case 2:
	f030b(p6, 15, (l4 + 3));
	f22b7(p6, 32, 7);
	if (l4 <= 0) goto L59e8;
	l4--;
	goto L59ef;
L59e8:
	l4 = (p12 - 1);
L59ef:
	f030b(p6, 15, (l4 + 3));
	f22b7(p6, 100, 4);
	goto L5b02;
case 3:
	;
#asm
l5a17:
	db 08bh,046h,0fch,0d1h,0e0h,08bh,0f0h,08bh,05eh,00ah,08bh,018h,080h,0bfh,0a4h,055h
	db 064h,073h,051h
#endasm
	if (l26 <= 0) goto L5a7b;
#asm
	db 0feh,087h,0a4h,055h,08bh,0d8h,003h,0ddh,0ffh,047h,0e8h
#endasm
	l26--;
#asm
	db 0b8h,001h,000h,050h
	call f0aaa_
	db 059h,08bh,046h,0fch,0d1h,0e0h,08bh,0f0h,08bh,05eh,00ah,08bh,018h,08ah,087h,0a4h
	db 055h,02ah,0e4h,050h,08bh,046h,0fch,040h,040h,040h,050h,0ffh,076h,006h
	call f5691_
	db 083h,0c4h,006h
#endasm
	f5691(p6, 14, l26);
	goto L5a83;
L5a7b:
	f0aaa(0);
L5a83:
	goto L5b02;
case 4:
	f030b(p6, 15, (l4 + 3));
	f22b7(p6, 32, 7);
	if ((l4 + 1) >= p12) goto L5ab9;
	l4++;
	goto L5abe;
L5ab9:
	l4 = 0;
L5abe:
	f030b(p6, 15, (l4 + 3));
	f22b7(p6, 100, 4);
	goto L5b02;
	}
L5b02:
	if (l2 != 5) goto L5887;
	f030b(p6, 15, (l4 + 3));
	f22b7(p6, 32, 7);
	g5618 = *(char *)&l26;
}
