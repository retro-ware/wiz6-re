#asm
	extrn f0aaa_:near
	extrn f2962_:near
	extrn f9948_:near
	extrn f9e51_:near
	extrn fa1bc_:near
#endasm
extern char g4518[];
extern char g453a[];
extern int g3342;
extern int g43ce;
extern int g4edc;
extern int g4fb2;
extern int g4fca;
extern int g522a;
extern int g5230;
fae49()
{
	int l2;
	int l4;
	int l6;
	int l8;
	int l10;
	int l12;
	int l14;
	int l16;
	char x16[78];
	int l96;
	register int rsi;
#asm
	db 0a1h,0e8h,04eh,0d1h,0e0h,08bh,0f0h,08bh,01eh,0a8h,04fh,08bh,080h,040h,002h,089h
	db 046h,0fah
#endasm
	if (f2962(l6, 8, 4) != 4) goto Lae8b;
	f5404(10000, 4);
	return;
Lae8b:
	g5230 = 1;
#asm
	db 08bh,01eh,0a8h,04fh,08bh,036h,0e8h,04eh,080h,0b8h,030h,006h,000h,076h,035h,080h
	db 0b8h,030h,006h,00eh,072h,01bh,08ah,080h,030h,006h,02ah,0e4h,03bh,006h,036h,043h
	db 074h,005h,050h
	call f9948_
	db 059h
#endasm
Laeb8:
	f0aaa(14);
	goto Laed5;
Laec2:
	;
#asm
laec2:
	db 08bh,01eh,0a8h,04fh,08bh,036h,0e8h,04eh,08ah,080h,030h,006h,02ah,0e4h,050h
	call f0aaa_
	db 059h
#endasm
Laed5:
	;
#asm
laed5:
	db 0a1h,0e8h,04eh,0d1h,0e0h,08bh,0f0h,08bh,01eh,0a8h,04fh,083h,038h,000h,07eh,00ch
	db 0b8h,000h,000h,050h,0ffh,030h
	call f9e51_
	db 083h,0c4h,004h
#endasm
Laef1:
	f3118(g3342);
	f3118(g4fb2);
	g522a = f011a(0, 19, 40, 5, 20, -1, 0, 0);
	l4 = f2962(l6, 8, 4);
	l10 = f2962(l6, 0, 4);
	l8 = f2962(l6, 4, 4);
	l16 = f2962(l6, 12, 1);
	l14 = f2962(l6, 15, 1);
	if (!l16) goto Lb000;
	if (g4edc <= 0) goto Lb000;
	l14 = 1;
	f075b(2056, &l96);
	f02f0(g522a, 0);
	f2a63();
	f030b(g522a, (20 - ((strlen(&l96) + 1) / 2)), 1);
	f24e9(g522a, &l96, 6);
	f0aaa(0);
	f533b(g4fca);
Lb000:
	;
#asm
lb000:
	db 0a1h,0e8h,04eh,0d1h,0e0h,08bh,0f0h,08bh,01eh,0a8h,04fh,08bh,080h,020h,001h,089h
	db 046h,0f4h
#endasm
	l2 = 0;
	goto Lb0d4;
Lb01a:
	if (f09e2(54) <= ((unsigned char)g4518[(432 * l2)] - l8)) goto Lb0d1;
	if (l14) goto Lb089;
	if (!l12) goto Lb07a;
	if (f09e2(100) <= ((unsigned char)g453a[((432 * l2) + l12)] - (l8 * 3))) goto Lb089;
Lb07a:
	fac20(l2, l8, l10);
Lb089:
	if (l4 <= 0) goto Lb0d1;
	if (l4 >= 6) goto Lb0ad;
	fab6c(l2, (l4 + 5261), l12, l4);
	goto Lb0d1;
Lb0ad:
	fad18(l2, (l4 + 5244), l12, (l4 + -6), l8, 10, l8);
Lb0d1:
	l2++;
Lb0d4:
	if (l2 < g43ce) goto Lb01a;
#asm
lb0e0:
	db 0b8h,002h,000h,050h,0b8h,00dh,000h,050h,0a1h,0e8h,04eh,0d1h,0e0h,08bh,0f0h,08bh
	db 01eh,0a8h,04fh,0ffh,0b0h,040h,002h
	call f2962_
	db 083h,0c4h,006h,050h
	call fa1bc_
	db 059h
#endasm
	f02d2(g522a, 0);
	f31d1(g3342);
	f31d1(g4fb2);
	return;
}
