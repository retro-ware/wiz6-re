#asm
	extrn f2962_:near
#endasm
extern int g3342;
extern int g4f9a;
extern int g4f9c;
extern int g4f9e;
extern int g4fa0;
extern int g4faa;
extern int g4fca;
fccd2()
{
	int l2;
	int l4;
	int l6;
	register int rsi;
	l2 = (((g4f9c << 6) + (g4f9e << 3)) + g4fa0);
	if (f2925((g4faa + 504), l2, 4) != 5) goto Lcd46;
	if (f2925((g4faa + 888), l2, 2) != g4f9a) goto Lcd46;
	f53e5(2044);
	f0aaa(4);
	f533b(2);
	l6 = 0;
	goto Lcd5b;
Lcd46:
	f53e5(2043);
	f533b(g4fca);
	l6 = 1;
Lcd5b:
	;
#asm
lcd5b:
	db 08bh,01eh,0a8h,04fh,08bh,036h,09ch,04fh,08ah,080h,0c0h,006h,02ah,0e4h,089h,046h
	db 0fch
#endasm
	l4 = f7bd2(g4fa0, g4f9e, g4f9c, l4);
	if (l4 == -1) goto Lcddf;
#asm
	db 08bh,01eh,0a8h,04fh,08bh,0f0h,080h,0b8h,060h,003h,007h,075h,02ah,0b8h,002h,000h
	db 050h,0a1h,09ah,04fh,0d1h,0e0h,005h,008h,000h,050h,0d1h,0e6h,0ffh,0b0h,040h,002h
	call f2962_
	db 083h,0c4h,006h,03dh,002h,000h,075h,00ch
#endasm
	fca72(l4);
	return;
Lcdc0:
	;
#asm
lcdc0:
	db 08bh,01eh,0a8h,04fh,08bh,076h,0fch,080h,0b8h,060h,003h,008h,075h,00ch
#endasm
	if (fcc10(rsi) != 1) goto Lcdda;
	return;
Lcdda:
	l4++;
#asm
	db 0ebh,08dh
#endasm
Lcddf:
	if (l6 != 1) goto Lce03;
	f53e5(2045);
	f0aaa(0);
	f533b((g4fca / 2));
Lce03:
	f09fb(g3342, 1);
	return;
}
