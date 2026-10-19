#asm
	extrn f31d1_:near
	extrn fce81_:near
#endasm
extern char g452b[];
extern int g3342;
extern int g440c[];
extern int g4f9a;
extern int g4fa2;
extern int g4fa4;
extern int g4fca;
extern int g5234[];
fd3b3(p4, p6)
{
	int l2;
	int l4;
	int l6;
	int l8;
	char x8[2];
	int l12;
	char l52[40];
	int l54;
	int l66[6];
	int l68;
	int l70;
	int l72;
	int l74;
	register int rsi;
	f0bd1();
	l12 = f011a(20, 19, 20, 5, 20, -1, 0, 0);
	f32be(l12, 32, 1, 0);
	fceb2(l12, 0, 0, 17);
	fceb2(l12, 18, 0, 19);
	fceb2(l12, 0, 1, 4);
	fceb2(l12, 18, 1, 5);
	fceb2(l12, 0, 2, 9);
	fceb2(l12, 18, 2, 10);
	fceb2(l12, 0, 3, 4);
	fceb2(l12, 18, 3, 5);
	fceb2(l12, 0, 4, 6);
	fceb2(l12, 18, 4, 8);
	l2 = 1;
Ld4cc:
	fceb2(l12, l2, 0, 18);
	fceb2(l12, l2, 2, 12);
	fceb2(l12, l2, 4, 7);
	l2++;
	if (l2 < 18) goto Ld4cc;
	l2 = 3;
Ld518:
	fceb2(l12, l2, 0, 34);
	fceb2(l12, l2, 1, 13);
	fceb2(l12, l2, 2, 16);
	fceb2(l12, l2, 3, 13);
	fceb2(l12, l2, 4, 11);
	l2 += 3;
	if (l2 < 18) goto Ld518;
	f3118(l12);
	l2 = 0;
Ld592:
	f030b(l12, 19, l2);
	f23e3(l12, 32, 3);
	l2++;
	if (l2 < 5) goto Ld592;
#asm
	db 0ffh,076h,0f4h
	call f31d1_
	db 059h,08bh,046h,006h,0d1h,0e0h,08bh,0f0h,08bh,01eh,0a8h,04fh,08bh,080h,020h,001h
	db 089h,046h,0f6h
#endasm
	rsi = p6;
#asm
	db 08ah,080h,030h,006h,02ah,0e4h,089h,046h,0fch
#endasm
	l8 = f2962(l4, 0, 5);
	l6 = (*(int *)((char *)g440c + (432 * p4)) + (unsigned char)g452b[(432 * p4)]);
	if (l6 <= 95) goto Ld61c;
	l6 = 95;
Ld61c:
	l68 = ((l8 / 3) + 1);
	if (l68 <= 6) goto Ld633;
	l68 = 6;
Ld633:
	l70 = 0;
#asm
	db 08bh,046h,006h,0d1h,0e0h,08bh,0f0h,08bh,01eh,0a8h,04fh,08bh,080h,040h,002h,089h
	db 046h,0fch
#endasm
	if (f2962(l4, (g4f9a << 1), 2) != 2) goto Ld67e;
	g5234[((g4fa4 + g4fa2) % l68)] = 100;
	l70 = 1;
Ld67e:
	f075b(2111, l52);
	f030b(g3342, 21, 0);
	f251d(g3342, l52, 3);
	l52[0] = 99;
	l52[(0 + 1)] = 99;
	l52[2] = 0;
	l74 = 1;
Ld6c1:
	l54 = 0;
	f3118(l12);
	l2 = 0;
	goto Ld776;
Ld6d5:
	l66[l2] = f09e2(l6);
	f030b(l12, ((l2 * 3) + 1), 3);
	f05a5(l12, l66[l2], 2, 1);
	f030b(l12, ((l2 * 3) + 1), 1);
	if (l66[l2] <= g5234[l2]) goto Ld757;
	l72 = 6;
	goto Ld763;
Ld757:
	l72 = 12;
	l54 = (l70 + 1);
Ld763:
	f24e9(l12, l52, l72);
	l2++;
Ld776:
	if (l2 < l68) goto Ld6d5;
	f31d1(l12);
	f2b19(l12);
	if (!f2643(1)) goto Ld7ac;
	if ((char)f2724(1) != 13) goto Ld7ac;
	l74 = 0;
Ld7ac:
	if (l74 != 1) goto Ld7bc;
	if (!f0c42()) goto Ld6c1;
Ld7bc:
	if (!l54) goto Ld806;
	if (l54 != 1) goto Ld7f1;
#asm
	db 0b8h,0b0h,001h,0f7h,06eh,004h,08bh,0d8h,08ah,087h,087h,045h,03ch,003h,074h,008h
	db 03ch,006h,074h,004h,03ch,00dh,075h,011h
#endasm
Ld7e0:
	f9a24(p4, 15, 1);
Ld7f1:
	if (f09e2(3)) goto Ld804;
	fce13(p6);
Ld804:
	goto Ld836;
Ld806:
	;
#asm
ld806:
	db 0ffh,076h,006h
	call fce81_
	db 059h,0b8h,0b0h,001h,0f7h,06eh,004h,08bh,0d8h,08ah,087h,087h,045h,03ch,003h,074h
	db 008h,03ch,006h,074h,004h,03ch,00dh,075h,011h
#endasm
Ld825:
	f9a24(p4, 15, 4);
Ld836:
	f09fb(g3342, 1);
	f075b((l54 + 2113), l52);
	f030b(g3342, (20 - ((strlen(l52) + 1) / 2)), 0);
	f251d(g3342, l52, 3);
	f533b(g4fca);
	f02d2(l12, 0);
	return l54;
}
