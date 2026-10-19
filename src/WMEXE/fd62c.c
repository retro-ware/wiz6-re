#asm
	extrn f2925_:near
#endasm
extern int g363c;
fd62c(p4, p6, p8, p10, p12)
{
	if (!fd506(&p8, &p10, &p12, p4, (p6 - 1))) goto Ld667;
	if (g363c == 10) goto Ld660;
	if (g363c == 12) goto Ld660;
#asm
	db 0b8h,002h,000h,0ebh,003h
#endasm
Ld660:
	;
#asm
ld660:
	db 0b8h,000h,000h
#endasm
	return;
Ld667:
	;
#asm
ld667:
	db 0b8h,002h,000h,050h,08bh,046h,00ch,0b9h,006h,000h,0d3h,0e0h,08bh,04eh,00ah,0d1h
	db 0e1h,0d1h,0e1h,0d1h,0e1h,003h,0c1h,003h,046h,008h,050h,0a1h,0aah,04fh,005h,060h
	db 000h,050h
	call f2925_
	db 083h,0c4h,006h
#endasm
	return;
}
