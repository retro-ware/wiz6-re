#asm
	extrn f98cb_:near
#endasm
extern int g363c;
extern int g4f9c;
extern int g4f9e;
extern int g4fa0;
extern int g5034;
extern int g5232;
fa22c()
{
	int l2;
	int l4;
	register int rsi;
#asm
	db 0a1h,0e8h,04eh,0d1h,0e0h,08bh,0f0h,08bh,01eh,0a8h,04fh,08bh,080h,040h,002h,089h
	db 046h,0feh
#endasm
	fa1bc(f2962(l2, 10, 2));
	g4fa0 = f2962(l2, 0, 3);
	g4f9e = f2962(l2, 3, 3);
	g4f9c = f2962(l2, 6, 4);
#asm
	db 08bh,01eh,0a8h,04fh,08bh,036h,0e8h,04eh,08ah,080h,030h,006h,02ah,0e4h,089h,046h
	db 0fch,03dh,063h,000h,075h,005h
#endasm
	l4 = -1;
La2af:
	;
#asm
la2af:
	db 08bh,01eh,0aah,04fh,08bh,036h,09ch,04fh,08ah,080h,0e0h,001h,02ah,0e4h,003h,006h
	db 0a0h,04fh,0a3h,0a4h,04fh,08ah,080h,0ech,001h,02ah,0e4h,003h,006h,09eh,04fh,0a3h
	db 0a2h,04fh,08bh,01eh,0a8h,04fh,08ah,080h,0c0h,006h,02ah,0e4h,0a3h,0e8h,04eh
#endasm
	g5232 = 0;
	if (l4 != g363c) goto La2f2;
#asm
	call f98cb_
	db 0ebh,01ah
#endasm
La2f2:
	f98d7();
	f4937(l4);
	if (g363c < 0) goto La306;
	f98cb();
La306:
	g5034 = 1;
La30c:
	;
}
