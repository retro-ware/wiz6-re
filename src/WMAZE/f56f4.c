#asm
	extrn f7b1b_:near
#endasm
extern int g363c;
extern int g4eca;
extern int g4f9c;
extern int g4f9e;
extern int g4fa0;
extern int g4fa2;
extern int g4fa4;
extern int g4faa;
extern int g5032;
f56f4(p4)
{
	int l2;
	int l4;
	int l6;
	register int rsi;
	register int rdi;
	f5651();
	rsi = (((g4f9c << 6) + (g4f9e << 3)) + g4fa0);
	g5032 = 1;
	l6 = f2925((g4faa + 504), rsi, 4);
	if (l6 == 1) goto L5740;
	if (l6 != 2) goto L575d;
L5740:
	if (f2925((g4faa + 888), rsi, 2) != p4) goto L575d;
	g5032 = 0;
L575d:
	f55ef(p4, 1);
	if (!f7b1b(20384, 20382, 20380, g4fa4, g4fa2)) goto L57b5;
	if (g363c == 10) goto L5796;
	if (g363c != 12) goto L57a2;
L5796:
	f56a9();
	return 0;
L57a2:
	f5404(2022, 4);
	return 1;
L57b5:
	rsi = (((g4f9c << 6) + (g4f9e << 3)) + g4fa0);
	l2 = f28af((g4faa + 1082), rsi);
	l4 = f28af((g4faa + 1178), rsi);
	if (g4eca != 1) goto L5806;
	if (l2) goto L5806;
	g4eca = 0;
L5806:
	if (l2 != 1) goto L590e;
#asm
l580f:
	db 0a1h,03ch,036h,0e9h,0ech,000h
#endasm
	f5404(10000, 4);
	return 1;
	if (g4f9c != 10) goto L58af;
	f98cb();
	f0aaa(8);
	if (g4fa0 >= 4) goto L5857;
	g4f9c = 4;
	g4fa0 += 4;
	g4f9e += 3;
	goto L5867;
L5857:
	g4f9c = 5;
	g4fa0 += -4;
	g4f9e += 3;
L5867:
	;
#asm
l5867:
	db 08bh,01eh,0aah,04fh,08bh,03eh,09ch,04fh,08ah,081h,0e0h,001h,02ah,0e4h,003h,006h
	db 0a0h,04fh,0a3h,0a4h,04fh,08ah,081h,0ech,001h,02ah,0e4h,003h,006h,09eh,04fh,0a3h
	db 0a2h,04fh,050h,0ffh,036h,0a4h,04fh,0b8h,09ch,04fh,050h,0b8h,09eh,04fh,050h,0b8h
	db 0a0h,04fh,050h
	call f7b1b_
	db 083h,0c4h,00ah
#endasm
	l2 = 0;
	l4 = 0;
	f5651();
	goto L58c3;
L58af:
	f5404(10000, 4);
	return 1;
L58c3:
	goto L590e;
#asm
	db 0ebh,047h
#endasm
	if (g363c != 12) goto L58d5;
	if (g4f9c >= 9) goto L58e5;
L58d5:
	if (g4eca) goto L58e5;
	f56a9();
	return 0;
L58e5:
	goto L590e;
#asm
	db 015h,058h,029h,058h,015h,058h,015h,058h,015h,058h,0c5h,058h,015h,058h,00eh,059h
	db 0c7h,058h,00eh,059h,0c7h,058h,015h,058h,0c7h,058h
l5901:
	db 03dh,00dh,000h,073h,008h,093h,0d1h,0e3h,02eh,0ffh,0a7h,0e7h,058h
#endasm
L590e:
	if (l4 != 1) goto L5932;
	switch (g363c) {
case 2:
	f5404(2022, 4);
	return 1;
	}
L5932:
	;
#asm
l5932:
	db 08bh,01eh,0a8h,04fh,08bh,03eh,09ch,04fh,08ah,081h,0c0h,006h,02ah,0e4h,0a3h,0e8h
	db 04eh
#endasm
	return 0;
}
