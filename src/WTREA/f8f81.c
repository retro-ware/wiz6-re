#asm
	extrn f2881_:near
	extrn f4b36_:near
#endasm
extern int g363c;
f8f81()
{
	int l2;
	int l4;
	register int rsi;
#asm
	db 0a1h,0e8h,04eh,0d1h,0e0h,08bh,0f0h,08bh,01eh,0a8h,04fh,08bh,080h,040h,002h,089h
	db 046h,0feh,083h,0b8h,020h,001h,000h,07eh,00eh,0b8h,000h,000h,050h,0ffh,0b0h,020h
	db 001h
	call f4b36_
	db 083h,0c4h,004h
#endasm
L8faf:
	l4 = f2962(l2, 0, 8);
	f2881(((g363c * 10) + 20204), l4, 0);
	if (f2962(l2, 11, 1) != 1) goto L9015;
	f2881(((g363c * 10) + 13304), l4, 0);
L9015:
	l4 = f2962(l2, 9, 2);
	if (l4 <= 0) goto L9088;
#asm
	db 0b8h,001h,000h,050h,08bh,01eh,0a8h,04fh,08bh,036h,0e8h,04eh,08ah,080h,0a0h,005h
	db 02ah,0e4h,050h,0a1h,03ch,036h,08bh,0d0h,0d1h,0e0h,0d1h,0e0h,003h,0c2h,0d1h,0e0h
	db 005h,0ech,04eh,050h
	call f2881_
	db 083h,0c4h,006h
#endasm
	if (l4 <= 1) goto L9088;
#asm
	db 0b8h,001h,000h,050h,08bh,01eh,0a8h,04fh,08bh,036h,0e8h,04eh,08ah,080h,0a0h,005h
	db 02ah,0e4h,050h,0a1h,03ch,036h,08bh,0d0h,0d1h,0e0h,0d1h,0e0h,003h,0c2h,0d1h,0e0h
	db 005h,0f8h,033h,050h
	call f2881_
	db 083h,0c4h,006h
#endasm
L9088:
	;
}
