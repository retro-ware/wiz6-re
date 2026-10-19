#asm
	extrn f0aaa_:near
	extrn f28da_:near
#endasm
extern int g4ee8;
fbaed()
{
	int l2;
	int l4;
	int l6;
	int l8;
	int l10;
	register int rsi;
#asm
	db 0a1h,0e8h,04eh,0d1h,0e0h,08bh,0f0h,08bh,01eh,0a8h,04fh,08bh,080h,040h,002h,089h
	db 046h,0fch
#endasm
	l6 = f2962(l4, 0, 3);
	l8 = f2962(l4, 3, 3);
	l10 = f2962(l4, 6, 4);
	l2 = (((l10 << 6) + (l8 << 3)) + l6);
#asm
	db 0a1h,0e8h,04eh,0d1h,0e0h,08bh,0f0h,08bh,01eh,0a8h,04fh,0ffh,030h,0b8h,004h,000h
	db 050h,0ffh,076h,0feh,0a1h,0aah,04fh,005h,0f8h,001h,050h
	call f28da_
	db 083h,0c4h,008h
#endasm
	rsi = g4ee8;
#asm
	db 08bh,01eh,0a8h,04fh,08ah,080h,030h,006h,02ah,0e4h,050h,0b8h,002h,000h,050h,0ffh
	db 076h,0feh,0a1h,0aah,04fh,005h,078h,003h,050h
	call f28da_
	db 083h,0c4h,008h
#endasm
	if (f2962(l4, 10, 1) != 1) goto Lbbb2;
	f98cb();
Lbbb2:
	;
#asm
lbbb2:
	db 0a1h,0e8h,04eh,0d1h,0e0h,08bh,0f0h,08bh,01eh,0a8h,04fh,083h,0b8h,020h,001h,000h
	db 07eh,008h,0ffh,0b0h,020h,001h
	call f0aaa_
	db 059h
#endasm
Lbbcc:
	fa1bc(f2962(l4, 11, 2));
}
