#asm
	extrn f033f_:near
	extrn f0aaa_:near
	extrn f31d1_:near
	extrn strcpy_:near
#endasm
extern char g00cc[];
extern char g442c[];
extern char g442d[];
extern char g442e[];
extern char g442f[];
extern char g4594[];
extern char g4595[];
extern int g43ca;
extern int g4428[];
f6317(p4, p6, p8)
{
	int l2;
	int l4;
	int l6;
	char x6[10];
	int l18;
	int l26[4];
	int l28;
	int l30;
	int l32;
	char x32[72];
	int l106;
	register int rsi;
	register int rdi;
	l32 = 0;
	l4 = f011a(20, 4, 20, 16, 25, -1, 0, 0);
	f32be(l4, 0, 1, 0);
	f5f86(l4, 0, 0, 14);
	f5f86(l4, 19, 0, 10);
	f5f86(l4, 0, 15, 11);
	f5f86(l4, 19, 15, 8);
	l2 = 1;
L63b5:
	f5f86(l4, l2, 0, 12);
	f5f86(l4, l2, 2, 12);
	f5f86(l4, l2, 15, 7);
	l2++;
	if (l2 < 19) goto L63b5;
	l2 = 1;
L6401:
	f5f86(l4, 0, l2, 13);
	f5f86(l4, 19, l2, 5);
	l2++;
	if (l2 < 15) goto L6401;
	f5f86(l4, 0, 2, 33);
	f5f86(l4, 0, 9, 15);
	f5f86(l4, 0, 11, 15);
	f5f86(l4, 0, 13, 15);
	f5f86(l4, 19, 2, 10);
	f5f86(l4, 17, 2, 14);
	f5f86(l4, 17, 15, 11);
	l2 = 3;
L64cc:
	f5f86(l4, 17, l2, 13);
	l2++;
	if (l2 < 15) goto L64cc;
	f3118(l4);
	f030b(l4, 1, 1);
	f083f(750, l4, 18);
	f5165(l4, 2, 1, 100);
	f5165(l4, 17, 1, 100);
	l2 = 0;
	goto L6684;
L6543:
	l28 = (l2 + 10);
	if (l32) goto L6591;
	f0882(1, &l106, *(int *)((char *)g4428 + ((432 * p8) + (l28 << 3))), 0);
	strcpy(((l2 << 4) + 22162), &l106);
L6591:
	f030b(l4, 2, (l2 + 3));
	f24e9(l4, ((l2 << 4) + 22162), 9);
	f0396(l4, 14, 0);
	if (g00cc[(unsigned char)g442c[((432 * p8) + (l28 << 3))]] != 1) goto L6632;
	f030b(l4, 14, (l2 + 3));
	f05a5(l4, (unsigned char)g442e[((432 * p8) + (l28 << 3))], 3, 1);
	goto L6643;
L6632:
	f0396(l4, 17, 0);
L6643:
	f030b(l4, 18, (l2 + 3));
	f23e3(l4, (unsigned char)(((unsigned char)g442d[((432 * p8) + (l28 << 3))] + 1)), 4);
	l2++;
L6684:
	if ((unsigned char)g4595[(432 * p8)] > l2) goto L6543;
#asm
l669a:
	db 0b8h,0b0h,001h,0f7h,06eh,008h,08bh,0d8h,080h,0bfh,095h,045h,00ch,073h,01fh,0b8h
	db 00eh,000h,050h,0b8h,010h,000h,050h,08ah,087h,095h,045h,02ah,0e4h,040h,040h,040h
	db 050h,0b8h,001h,000h,050h,0ffh,076h,0fch
	call f033f_
	db 083h,0c4h,00ah
#endasm
L66c8:
	l2 = (unsigned char)g4595[(432 * p8)];
	goto L6703;
L66db:
	f030b(l4, 18, (l2 + 3));
	f23e3(l4, 32, 3);
	l2++;
L6703:
	if (l2 < 12) goto L66db;
	l32 = 1;
	f31d1(l4);
	f32be(p6, 32, 3, 0);
	f2b19(l4);
	f2b19(p6);
	l2 = 0;
L673d:
	l26[l2] = 1;
	l2++;
	if (l2 <= 3) goto L673d;
	if ((unsigned)g4595[(432 * p8)] >= 12) goto L676c;
	if (g4594[(432 * p8)]) goto L6771;
L676c:
	l26[0] = 0;
L6771:
	if (!g4595[(432 * p8)]) goto L677f;
	if ((unsigned)g4594[(432 * p8)] < 10) goto L6784;
L677f:
	l26[1] = 0;
L6784:
	if (g4595[(432 * p8)]) goto L6790;
	l26[2] = 0;
L6790:
	l18 = -1;
	f32be(p6, 32, 3, 0);
	f2b19(p6);
	l6 = rename_test_fn(p6, 751, l26, 2, 1, 8, 2, 5, f5be5(l26, 3));
	goto L6a43;
	f3118(l4);
	f32be(p6, 32, 3, 0);
	f2a63();
	g43ca = f5fac(p4, p6, 760, p8, 0);
	if (g43ca == -1) goto L68f7;
	if (!((unsigned char)g442f[((432 * p8) + (g43ca << 3))] & 1)) goto L6856;
#asm
	db 0b8h,000h,000h,050h
	call f0aaa_
	db 059h,0e9h,0a1h,000h
#endasm
L6856:
	l28 = ((unsigned char)g4595[(432 * p8)] + 10);
	rsi = (((432 * p8) + (g43ca << 3)) + 17448);
	rdi = (((432 * p8) + (l28 << 3)) + 17448);
#asm
	db 08ch,0d9h,08eh,0c1h,0b9h,004h,000h,0f3h,0a5h,0a1h,0cah,043h,0b9h,004h,000h,0d3h
	db 0e0h,005h,0deh,055h,050h,0b8h,0b0h,001h,0f7h,06eh,008h,08bh,0d8h,08ah,087h,095h
	db 045h,02ah,0e4h,0d3h,0e0h,005h,092h,056h,050h
	call strcpy_
	db 083h,0c4h,004h
#endasm
	g4595[(432 * p8)]++;
	f5d5b(p8, g43ca);
	f3118(p4);
	fb1e5(p4, p8);
	f31d1(p4);
L68f7:
	;
#asm
l68f7:
	db 0ffh,076h,0fch
	call f31d1_
	db 059h,0e9h,05fh,001h
#endasm
	l30 = f5fac(l4, p6, 761, p8, 1);
	if (l30 == -1) goto L69bd;
	l28 = (l30 + 10);
	rsi = (((432 * p8) + (l28 << 3)) + 17448);
	rdi = (((432 * p8) + ((unsigned char)g4594[(432 * p8)] << 3)) + 17448);
#asm
	db 08ch,0d9h,08eh,0c1h,0b9h,004h,000h,0f3h,0a5h,08bh,046h,0e2h,0b9h,004h,000h,0d3h
	db 0e0h,005h,092h,056h,050h,0b8h,0b0h,001h,0f7h,06eh,008h,08bh,0d8h,08ah,087h,094h
	db 045h,02ah,0e4h,0d3h,0e0h,005h,0deh,055h,050h
	call strcpy_
	db 083h,0c4h,004h
#endasm
	g4594[(432 * p8)]++;
	f5ec7(p8, l30);
	fb1e5(p4, p8);
L69bd:
	;
#asm
l69bd:
	db 0e9h,0a0h,000h
#endasm
	l30 = f5fac(l4, p6, 762, p8, 1);
	if (l30 == -1) goto L6a19;
	l28 = (l30 + 10);
	if (!((unsigned char)g442f[((432 * p8) + (l28 << 3))] & 64)) goto L6a0d;
	f0aaa(0);
	goto L6a19;
L6a0d:
	f5ec7(p8, l30);
L6a19:
	;
#asm
l6a19:
	db 0ebh,045h
#endasm
	f32be(p6, 32, 3, 0);
	f02d2(l4, 1);
L6a3d:
	return;
L6a43:
	;
#asm
l6a43:
	db 03dh,000h,000h,075h,003h,0e9h,0a0h,0fdh
l6a4b:
	db 03dh,001h,000h,075h,003h,0e9h,0aeh,0feh
l6a53:
	db 03dh,002h,000h,075h,003h,0e9h,065h,0ffh
l6a5b:
	db 03dh,003h,000h,074h,0bbh
l6a60:
	db 0e9h,0e7h,0f8h
#endasm
	goto L6a3d;
}
