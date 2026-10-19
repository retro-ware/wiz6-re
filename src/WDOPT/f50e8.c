#asm
	extrn f2962_:near
#endasm
extern int g4f9c;
extern int g4f9e;
extern int g4fa0;
f50e8()
{
	int l2;
	register int rsi;
#asm
	db 08bh,01eh,0a8h,04fh,08bh,036h,09ch,04fh,08ah,080h,0c0h,006h,02ah,0e4h,089h,046h
	db 0feh
#endasm
	l2 = f818a(g4fa0, g4f9e, g4f9c, l2);
	if (l2 == -1) goto L5176;
#asm
	db 08bh,01eh,0a8h,04fh,08bh,0f0h,080h,0b8h,060h,003h,007h,075h,047h,0b8h,002h,000h
	db 050h,0a1h,09ah,04fh,0d1h,0e0h,050h,0d1h,0e6h,0ffh,0b0h,040h,002h
	call f2962_
	db 083h,0c4h,006h,03dh,001h,000h,074h,024h,0b8h,002h,000h,050h,0a1h,09ah,04fh,0d1h
	db 0e0h,050h,08bh,046h,0feh,0d1h,0e0h,08bh,0f0h,08bh,01eh,0a8h,04fh,0ffh,0b0h,040h
	db 002h
	call f2962_
	db 083h,0c4h,006h,03dh,002h,000h,075h,008h
#endasm
L5169:
	return l2;
L5171:
	l2++;
#asm
	db 0ebh,08ah
#endasm
L5176:
	return -1;
}
