#asm
	extrn f2962_:near
	extrn f9e51_:near
	extrn fa1bc_:near
#endasm
extern int g4f8a;
extern int g4f9a;
fb123()
{
	int l2;
	register int rsi;
#asm
	db 0a1h,0e8h,04eh,0d1h,0e0h,08bh,0f0h,08bh,01eh,0a8h,04fh,08bh,080h,040h,002h,089h
	db 046h,0feh
#endasm
	if (f2962(l2, 6, 1) != 1) goto Lb171;
	g4f8a = f2962(l2, 4, 2);
	if (g4f8a == g4f9a) goto Lb171;
	return;
Lb171:
	;
#asm
lb171:
	db 0b8h,001h,000h,050h,0b8h,002h,000h,050h,0a1h,0e8h,04eh,0d1h,0e0h,08bh,0f0h,08bh
	db 01eh,0a8h,04fh,0ffh,0b0h,040h,002h
	call f2962_
	db 083h,0c4h,006h,050h,0a1h,0e8h,04eh,0d1h,0e0h,08bh,0f0h,08bh,01eh,0a8h,04fh,0ffh
	db 030h
	call f9e51_
	db 083h,0c4h,004h,0b8h,002h,000h,050h,0b8h,000h,000h,050h,0a1h,0e8h,04eh,0d1h,0e0h
	db 08bh,0f0h,08bh,01eh,0a8h,04fh,0ffh,0b0h,040h,002h
	call f2962_
	db 083h,0c4h,006h,050h
	call fa1bc_
	db 059h
#endasm
	return;
}
