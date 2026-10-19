extern int g3342;
extern int g4fb0;
extern int g5234[];
fd8a9(p4)
{
	int l2;
	int l4;
	int l6;
	char x6[12];
	int l20;
	int l26[3];
	int l28;
	int l30;
	int l32;
	char x32[2];
	register int rsi;
#asm
	db 08bh,046h,004h,0d1h,0e0h,08bh,0f0h,08bh,01eh,0a8h,04fh,08bh,080h,020h,001h,089h
	db 046h,0deh
#endasm
	rsi = p4;
#asm
	db 08ah,080h,030h,006h,02ah,0e4h,089h,046h,0e2h
#endasm
	l32 = f2962(l30, 0, 5);
	l2 = 0;
Ld8e7:
	g5234[l2] = f09e2((l32 * 5));
	l2++;
	if (l2 < 6) goto Ld8e7;
	l2 = 0;
Ld912:
	l26[l2] = 1;
	l2++;
	if (l2 <= 2) goto Ld912;
	l20 = -1;
	f3118(g4fb0);
	l6 = f011a(0, 19, 19, 5, 10, -4, 0, 0);
Ld95b:
	f32be(l6, 32, 3, 0);
	f09fb(g3342, 0);
	f0a42(g3342, 0);
	f030b(g3342, 3, 0);
	f3118(g3342);
	f083f(2002, g3342, 18);
	f31d1(g3342);
	f2a63();
	l28 = f5ad8(l6, 2100, l26, 1, 1, 7, 1, 5, 0);
	goto Lda5b;
	l4 = f4f2c(2110, 1);
	if (l4 == -1) goto Lda23;
	if (!f65ea(l4)) goto Lda23;
	if (fced8(l4, p4)) goto Lda23;
	l28 = 2;
Lda23:
	goto Lda65;
	l4 = f4f2c(2110, 1);
	if (l4 == -1) goto Lda59;
	if (!f65ea(l4)) goto Lda59;
	if (fd3b3(l4, p4)) goto Lda59;
	l28 = 2;
Lda59:
	goto Lda65;
Lda5b:
	;
#asm
lda5b:
	db 03dh,000h,000h,074h,08fh,03dh,001h,000h,074h,0c0h
#endasm
Lda65:
	if (l28 != 2) goto Ld95b;
	f02d2(l6, 0);
	f31d1(g4fb0);
	f09fb(g3342, 0);
}
