#asm
	extrn f2962_:near
	extrn f533b_:near
	extrn fa1bc_:near
#endasm
extern int g363c;
fb9a2()
{
	int l2;
	int l4;
	char x4[2];
	int l8;
	int l10;
	register int rsi;
#asm
	db 0b8h,005h,000h,050h
	call f533b_
	db 059h,0a1h,0e8h,04eh,0d1h,0e0h,08bh,0f0h,08bh,01eh,0a8h,04fh,08bh,080h,040h,002h
	db 089h,046h,0feh
#endasm
	l4 = f2962(l2, 0, 8);
#asm
	db 08bh,01eh,0a8h,04fh,08bh,036h,0e8h,04eh,08ah,080h,030h,006h,02ah,0e4h,089h,046h
	db 0fah,03dh,000h,000h,07eh,005h,089h,046h,0f8h
#endasm
	goto Lb9fc;
Lb9f2:
	l8 = f09e2(l4);
Lb9fc:
	if (f09e2(l4) >= l8) goto Lba17;
#asm
	db 0a1h,0e8h,04eh,0d1h,0e0h,08bh,0f0h,08bh,01eh,0a8h,04fh,08bh,000h,0ebh,00fh
#endasm
Lba17:
	;
#asm
lba17:
	db 0a1h,0e8h,04eh,0d1h,0e0h,08bh,0f0h,08bh,01eh,0a8h,04fh,08bh,080h,020h,001h
#endasm
Lba26:
	;
#asm
lba26:
	db 089h,046h,0f6h
#endasm
	f2881(((g363c * 10) + 20204), l10, 0);
	if (f2962(l2, 8, 1) != 1) goto Lba7b;
	f2881(((g363c * 10) + 13304), l10, 0);
Lba7b:
	if (g363c != 7) goto Lbac6;
	if (l10 != 24) goto Lbac6;
	f2881(((g363c * 10) + 20204), 18, 1);
	f2881(((g363c * 10) + 13304), 18, 1);
Lbac6:
	;
#asm
lbac6:
	db 0b8h,002h,000h,050h,0b8h,009h,000h,050h,0a1h,0e8h,04eh,0d1h,0e0h,08bh,0f0h,08bh
	db 01eh,0a8h,04fh,0ffh,0b0h,040h,002h
	call f2962_
	db 083h,0c4h,006h,050h
	call fa1bc_
	db 059h
#endasm
}
