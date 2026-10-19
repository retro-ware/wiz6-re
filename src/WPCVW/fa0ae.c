#asm
	extrn f09fb_:near
	extrn f0a42_:near
	extrn f3118_:near
#endasm
extern int g4fb2;
fa0ae(p4, p6)
{
	f02d2(p4, 0);
	f02d2(p6, 0);
#asm
	db 0a1h,0ceh,04fh,0ebh,038h
#endasm
#asm
la0d0:
	db 0b8h,000h,000h,050h,0ffh,036h,0b2h,04fh
	call f0a42_
	db 083h,0c4h,004h,0ebh,037h
#endasm
#asm
la0e0:
	db 0b8h,000h,000h,050h,0ffh,036h,0b2h,04fh
	call f09fb_
	db 083h,0c4h,004h,0ebh,027h
#endasm
	f0a42(g4fb2, 0);
#asm
	db 0ffh,036h,0b2h,04fh
	call f3118_
	db 059h,0ebh,00fh
#endasm
La108:
	;
#asm
la108:
	db 03dh,004h,000h,074h,0d3h,03dh,005h,000h,074h,0beh,03dh,00dh,000h,074h,0d9h
#endasm
La117:
	;
}
