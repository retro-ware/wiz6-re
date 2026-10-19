#asm
	extrn f0aaa_:near
	extrn fde9f_:near
#endasm
extern char g4590[];
extern int g4fc4;
fdeca(p4, p6, p8, p10, p12, p14)
char *p4;
{
	int l2;
	int l4;
	int l24[10];
	int l26;
	int l28;
	register int rsi;
	l26 = (unsigned char)g4590[(432 * p8)];
	f32be(p4, 32, 3, 0);
	f2b19(p4);
	f030b(p4, 2, 1);
	f083f(606, p4, 18);
	p4[6] += 3;
	f083f(607, p4, 18);
	l4 = 0;
Ldf3d:
	l24[l4] = 0;
	l4++;
	if (l4 < 10) goto Ldf3d;
	l4 = 0;
	f0c16(0, ((unsigned char)p4[2] + 2), ((unsigned char)p4[3] + 1), ((unsigned char)p4[2] + 2), ((unsigned char)p4[3] + 1));
	f0c16(1, ((unsigned char)p4[2] + 3), ((unsigned char)p4[3] + 1), ((unsigned char)p4[2] + 3), ((unsigned char)p4[3] + 1));
	f0c16(2, ((unsigned char)p4[2] + 22), ((unsigned char)p4[3] + 1), ((unsigned char)p4[2] + 22), ((unsigned char)p4[3] + 1));
	f0c16(3, ((unsigned char)p4[2] + 23), ((unsigned char)p4[3] + 1), ((unsigned char)p4[2] + 23), ((unsigned char)p4[3] + 1));
	f0c16(4, ((unsigned char)p4[2] + 13), ((unsigned char)p4[3] + 2), ((unsigned char)p4[2] + 13), ((unsigned char)p4[3] + 2));
	f0c16(5, 255, 0, 0, 0);
	f030b(p6, 15, (l4 + 3));
	f22b7(p6, 100, 4);
Le075:
	f030b(p4, 7, 2);
	f083f((l26 > 0 ? 608 : 609), p4, 18);
	l28 = (l26 > 0 ? 13 : 18);
	f0c16(4, ((unsigned char)p4[2] + l28), ((unsigned char)p4[3] + 2), ((unsigned char)p4[2] + l28), ((unsigned char)p4[3] + 2));
	l2 = f8891(21822, 13720);
	if (g4fc4 != 1) goto Le132;
#asm
	db 0ebh,02dh
#endasm
	l2 = 1;
	goto Le132;
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
	db 0ebh,017h,0f8h,0e0h,0ffh,0e0h,006h,0e1h,00dh,0e1h,014h,0e1h
le125:
	db 03dh,005h,000h,073h,008h,093h,0d1h,0e3h,02eh,0ffh,0a7h,01bh,0e1h
#endasm
Le132:
	switch (l2) {
case 1:
	if (l24[l4] <= 0) goto Le1b2;
#asm
	db 0b8h,0b0h,001h,0f7h,06eh,008h,08bh,04eh,0fch,0d1h,0e1h,08bh,0f1h,08bh,05eh,00ch
	db 08bh,008h,003h,0c1h,08bh,0d8h,0feh,08fh,01ch,045h,08bh,0deh,003h,0ddh,0ffh,04fh
	db 0e8h
#endasm
	l26++;
#asm
	db 0b8h,001h,000h,050h
	call f0aaa_
	db 059h,0b8h,0b0h,001h,0f7h,06eh,008h,08bh,04eh,0fch,0d1h,0e1h,08bh,0f1h,08bh,05eh
	db 00ch,08bh,008h,003h,0c1h,08bh,0d8h,08ah,087h,01ch,045h,02ah,0e4h,050h,08bh,046h
	db 0fch,040h,040h,040h,050h,0ffh,076h,006h
	call fde9f_
	db 083h,0c4h,006h
#endasm
	fde9f(p6, 14, l26);
	goto Le1ba;
Le1b2:
	f0aaa(0);
Le1ba:
	goto Le31b;
case 2:
	f030b(p6, 15, (l4 + 3));
	f22b7(p6, 32, 7);
	if (l4 <= 0) goto Le1ed;
	l4--;
	goto Le1f4;
Le1ed:
	l4 = (p14 - 1);
Le1f4:
	f030b(p6, 15, (l4 + 3));
	f22b7(p6, 100, 4);
	goto Le31b;
case 3:
	;
#asm
le21c:
	db 0b8h,0b0h,001h,0f7h,06eh,008h,08bh,04eh,0fch,0d1h,0e1h,08bh,0f1h,08bh,05eh,00ch
	db 08bh,008h,003h,0c1h,08bh,0d8h,080h,0bfh,01ch,045h,064h,073h,05bh
#endasm
	if (l26 <= 0) goto Le294;
#asm
	db 0feh,087h,01ch,045h,08bh,0deh,003h,0ddh,0ffh,047h,0e8h
#endasm
	l26--;
#asm
	db 0b8h,001h,000h,050h
	call f0aaa_
	db 059h,0b8h,0b0h,001h,0f7h,06eh,008h,08bh,04eh,0fch,0d1h,0e1h,08bh,0f1h,08bh,05eh
	db 00ch,08bh,008h,003h,0c1h,08bh,0d8h,08ah,087h,01ch,045h,02ah,0e4h,050h,08bh,046h
	db 0fch,040h,040h,040h,050h,0ffh,076h,006h
	call fde9f_
	db 083h,0c4h,006h
#endasm
	fde9f(p6, 14, l26);
	goto Le29c;
Le294:
	f0aaa(0);
Le29c:
	goto Le31b;
case 4:
	f030b(p6, 15, (l4 + 3));
	f22b7(p6, 32, 7);
	if ((l4 + 1) >= p14) goto Le2d2;
	l4++;
	goto Le2d7;
Le2d2:
	l4 = 0;
Le2d7:
	f030b(p6, 15, (l4 + 3));
	f22b7(p6, 100, 4);
	goto Le31b;
	}
Le31b:
	if (l2 != 5) goto Le075;
	f030b(p6, 15, (l4 + 3));
	f22b7(p6, 32, 7);
	g4590[(432 * p8)] = *(char *)&l26;
}
