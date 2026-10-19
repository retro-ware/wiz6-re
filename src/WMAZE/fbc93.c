#asm
	extrn f9e51_:near
#endasm
extern int g3342;
extern int g363c;
extern int g4fb2;
extern int g522a;
extern int g5230;
fbc93()
{
	int l2;
	int l4;
	int l6;
	int l8;
	int l10;
	int l12;
	int l14;
	int l16;
	int l18;
	int l20;
	int l22;
	int l24;
	int l26;
	int l28;
	char l108[80];
	char x108[78];
	int l188;
	int l220[16];
	int l222;
	register int rsi;
#asm
	db 08bh,01eh,0a8h,04fh,08bh,036h,0e8h,04eh,080h,0b8h,030h,006h,000h,076h,01fh,0b8h
	db 000h,000h,050h,0d1h,0e6h,08bh,000h,050h,08bh,036h,0e8h,04eh,08ah,080h,030h,006h
	db 02ah,0e4h,08bh,0c8h,058h,003h,0c1h,050h
	call f9e51_
	db 083h,0c4h,004h
#endasm
Lbcc9:
	;
#asm
lbcc9:
	db 0a1h,0e8h,04eh,0d1h,0e0h,08bh,0f0h,08bh,01eh,0a8h,04fh,08bh,080h,040h,002h,089h
	db 046h,0f8h
#endasm
	l12 = f2962(l8, 0, 4);
	l14 = f2962(l8, 4, 4);
	l16 = f2962(l8, 8, 4);
	l18 = f2962(l8, 12, 1);
	l20 = f2962(l8, 13, 1);
	l22 = f2962(l8, 14, 1);
	l28 = f2962(l8, 15, 1);
	g5230 = 1;
#asm
	db 0a1h,0e8h,04eh,0d1h,0e0h,08bh,0f0h,08bh,01eh,0a8h,04fh,08bh,000h,089h,046h,0f6h
#endasm
	f09fb(g3342, 0);
	f3118(g3342);
	if (l20 != 1) goto Lbda6;
	f075b(2038, l108);
	goto Lbdb6;
Lbda6:
	f075b(l10, l108);
	l10++;
Lbdb6:
	f030b(g3342, (20 - ((strlen(l108) + 1) / 2)), 0);
	f251d(g3342, l108, 3);
	f31d1(g3342);
	g522a = f011a(0, 19, 40, 5, 20, -1, 0, 0);
	f32be(g522a, 32, 3, 0);
	f09fb(g4fb2, 0);
	f2a63();
	f075b(l10, l108);
	l10++;
	l2 = 0;
	goto Lbe6b;
Lbe59:
	l220[l2] = 1;
	l2++;
Lbe6b:
	if (l2 < l12) goto Lbe59;
	l220[l12] = -1;
	if (l20 != 1) goto Lbf2d;
	f075b(l10, &l188);
	l6 = f5ad8(g522a, l10, l220, (20 - ((strlen(&l188) + 1) / 2)), 1, 20, 4, 5, 0);
	l222 = ((((unsigned char)l108[(l6 << 1)] * 10) + (unsigned char)l108[((l6 << 1) + 1)]) + -528);
	if (l222 <= 0) goto Lbf2a;
	if (l222 >= 80) goto Lbf2a;
	f2881(((g363c * 10) + 20204), l222, 0);
Lbf2a:
	goto Lc090;
Lbf2d:
	l24 = 0;
	l26 = 0;
	l2 = 0;
	goto Lc043;
Lbf3f:
	f32be(g522a, 32, 3, 0);
	f2b19(g522a);
	f075b(l10, &l188);
	l6 = f5ad8(g522a, l10, l220, (20 - (((strlen(&l188) << 1) + 4) / 2)), 1, (strlen(&l188) + 3), (((l12 - 1) / 2) + 1), 5, 0);
	if (l22 != 1) goto Lbfd3;
	l220[l6] = 0;
Lbfd3:
	if ((l12 - 1) != l6) goto Lbfef;
	l2 = l14;
	if (l24) goto Lbfed;
	l26 = 1;
Lbfed:
	goto Lc040;
Lbfef:
	if (l16 <= 0) goto Lbffc;
	f0aaa(l16);
Lbffc:
	l4 = f3350(l108, (unsigned char)((l6 + 48)));
	if (l4 == -1) goto Lc02f;
	if (l18) goto Lc040;
	if (((unsigned char)l108[l2] + -48) == l6) goto Lc040;
Lc02f:
	l24 = 1;
	if (l28 != 1) goto Lc040;
	l2 = l14;
Lc040:
	l2++;
Lc043:
	if (l2 < l14) goto Lbf3f;
	if (l26) goto Lc090;
#asm
	db 0a1h,0e8h,04eh,0d1h,0e0h,08bh,0f0h,08bh,01eh,0a8h,04fh,08bh,080h,020h,001h,089h
	db 046h,0f8h
#endasm
	fbbe7(f2962(l8, 0, 8), f2962(l8, 8, 8), l24);
Lc090:
	f09fb(g3342, 0);
	f02d2(g522a, 0);
	f0a42(g4fb2, 0);
}
