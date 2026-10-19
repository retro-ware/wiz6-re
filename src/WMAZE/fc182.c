#asm
	extrn f2962_:near
	extrn f9e51_:near
	extrn fbbe7_:near
#endasm
extern int g3042;
extern int g3342;
extern int g4f8a;
extern int g4f9a;
extern int g4fb2;
extern int g522a;
fc182()
{
	char x0[4];
	int l6;
	int l8;
	char x8[78];
	int l88;
	char l168[80];
	int l170;
	int l172;
	register int rsi;
#asm
	db 0a1h,0e8h,04eh,0d1h,0e0h,08bh,0f0h,08bh,01eh,0a8h,04fh,08bh,080h,040h,002h,089h
	db 046h,0fah
#endasm
	if (f2962(l6, 11, 1) != 1) goto Lc1d1;
	g4f8a = f2962(l6, 9, 2);
	if (g4f8a == g4f9a) goto Lc1d1;
	return;
Lc1d1:
	;
#asm
lc1d1:
	db 0b8h,000h,000h,050h,0a1h,0e8h,04eh,0d1h,0e0h,08bh,0f0h,08bh,01eh,0a8h,04fh,0ffh
	db 030h
	call f9e51_
	db 083h,0c4h,004h
#endasm
	l172 = f2962(l6, 8, 1);
#asm
	db 0b8h,008h,000h,050h,0b8h,000h,000h,050h,0ffh,076h,0fah
	call f2962_
	db 083h,0c4h,006h,08bh,00eh,0e8h,04eh,0d1h,0e1h,08bh,0f1h,08bh,01eh,0a8h,04fh,08bh
	db 008h,003h,0c1h,089h,046h,0f8h
#endasm
	f3118(g3342);
	f3118(g4fb2);
	g522a = f011a(0, 19, 40, 5, 20, -1, 0, 0);
	f2a63();
	f030b(g522a, 2, 0);
	f083f(2039, g522a, 1);
	f9aae(g522a, &l88, 20, 6, 0);
	l170 = 1;
	f075b(l8, l168);
Lc2ac:
	if (g3042) goto Lc312;
	if (l168[0] != 36) goto Lc2e6;
	strcpy(l168, ((char *)l168 + 1));
	if (f3384(&l88, l168) == -1) goto Lc2e4;
	l170 = 0;
Lc2e4:
	goto Lc2ff;
Lc2e6:
	if (strcmp(&l88, l168)) goto Lc2ff;
	l170 = 0;
Lc2ff:
	l8++;
	f075b(l8, l168);
	goto Lc2ac;
Lc312:
	;
#asm
lc312:
	db 0ffh,0b6h,056h,0ffh,08bh,036h,0e8h,04eh,08bh,01eh,0a8h,04fh,08ah,080h,030h,006h
	db 02ah,0e4h,050h,0d1h,0e6h,0ffh,0b0h,020h,001h
	call fbbe7_
	db 083h,0c4h,006h
#endasm
	if (l170) goto Lc342;
	fa1bc((l172 + 1));
Lc342:
	f02d2(g522a, 0);
	f31d1(g3342);
	f31d1(g4fb2);
	return;
}
