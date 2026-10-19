#asm
	extrn f0aaa_:near
	extrn f2881_:near
	extrn f2962_:near
	extrn f45ac_:near
#endasm
extern int g363c;
extern int g4ee8;
extern int g4f9c;
extern int g4f9e;
extern int g4fa0;
extern int g502a;
extern int g502c;
f6561()
{
	char x0[6];
	int l8;
	int l10;
	register int rsi;
#asm
	db 08bh,01eh,0a8h,04fh,08bh,036h,09ch,04fh,08ah,080h,0c0h,006h,02ah,0e4h,089h,046h
	db 0f8h
#endasm
L6579:
	l8 = f818a(g4fa0, g4f9e, g4f9c, l8);
	if (l8 == -1) goto L6731;
#asm
l6599:
	db 08bh,01eh,0a8h,04fh,08bh,0f0h,080h,0b8h,060h,003h,013h,074h,003h
#endasm
	goto L6692;
L65a9:
	;
#asm
l65a9:
	db 0b8h,0b0h,001h,0f7h,06eh,004h,08bh,04eh,006h,0d1h,0e1h,0d1h,0e1h,0d1h,0e1h,003h
	db 0c1h,08bh,0d8h,08bh,087h,028h,044h,0d1h,0e6h,08bh,01eh,0a8h,04fh,08bh,008h,03bh
	db 0c1h,074h,003h
#endasm
	goto L6692;
L65cf:
	;
#asm
l65cf:
	db 0b8h,008h,000h,050h,0b8h,000h,000h,050h,0ffh,0b0h,040h,002h
	call f2962_
	db 083h,0c4h,006h,089h,046h,0f6h,0b8h,000h,000h,050h,0ffh,076h,0f6h,0a1h,03ch,036h
	db 08bh,0d0h,0d1h,0e0h,0d1h,0e0h,003h,0c2h,0d1h,0e0h,005h,0ech,04eh,050h
	call f2881_
	db 083h,0c4h,006h,0b8h,008h,000h,050h,050h,08bh,046h,0f8h,0d1h,0e0h,08bh,0f0h,08bh
	db 01eh,0a8h,04fh,0ffh,0b0h,040h,002h
	call f2962_
	db 083h,0c4h,006h,089h,046h,0f6h,085h,0c0h,074h,01eh
#endasm
	f2881(((g363c * 10) + 20204), l10, 1);
L6641:
	;
#asm
l6641:
	db 08bh,01eh,0a8h,04fh,08bh,076h,0f8h,080h,0b8h,030h,006h,000h,076h,034h,080h,0b8h
	db 030h,006h,00eh,072h,01bh,08ah,080h,030h,006h,02ah,0e4h,03bh,006h,036h,043h,074h
	db 005h,050h
	call f45ac_
	db 059h
#endasm
L6667:
	f0aaa(14);
	goto L6683;
L6671:
	;
#asm
l6671:
	db 08bh,01eh,0a8h,04fh,08bh,076h,0f8h,08ah,080h,030h,006h,02ah,0e4h,050h
	call f0aaa_
	db 059h
#endasm
L6683:
	g4ee8 = (l8 + 1);
	return 1;
L6692:
	;
#asm
l6692:
	db 08bh,01eh,0a8h,04fh,08bh,076h,0f8h,080h,0b8h,060h,003h,007h,074h,003h
#endasm
	goto L672b;
L66a3:
	;
#asm
l66a3:
	db 0b8h,002h,000h,050h,0a1h,09ah,04fh,0d1h,0e0h,050h,0d1h,0e6h,0ffh,0b0h,040h,002h
	call f2962_
	db 083h,0c4h,006h,03dh,001h,000h,074h,024h,0b8h,002h,000h,050h,0a1h,09ah,04fh,0d1h
	db 0e0h,050h,08bh,046h,0f8h,0d1h,0e0h,08bh,0f0h,08bh,01eh,0a8h,04fh,0ffh,0b0h,040h
	db 002h
	call f2962_
	db 083h,0c4h,006h,03dh,002h,000h,075h,049h
#endasm
L66e2:
	;
#asm
l66e2:
	db 08bh,046h,0f8h,0d1h,0e0h,08bh,0f0h,08bh,01eh,0a8h,04fh,08bh,080h,020h,001h,089h
	db 046h,0fah,0b8h,0b0h,001h,0f7h,06eh,004h,08bh,04eh,006h,0d1h,0e1h,0d1h,0e1h,0d1h
	db 0e1h,003h,0c1h,08bh,0d8h,08bh,08fh,028h,044h,08bh,046h,0fah,03bh,0c8h,075h,019h
#endasm
	f5051(l8);
	g502a = 2113;
	g502c = 0;
	return 1;
L672b:
	l8++;
	goto L6579;
L6731:
	return 0;
}
