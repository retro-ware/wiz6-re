#asm
	extrn f2925_:near
#endasm
extern int g363c;
f9df9(p4, p6, p8, p10, p12)
{
	if (!f9cd3(&p8, &p10, &p12, p4, (p6 - 1))) goto L9e34;
	if (g363c == 10) goto L9e2d;
	if (g363c == 12) goto L9e2d;
#asm
	db 0b8h,002h,000h,0ebh,003h
#endasm
L9e2d:
	;
#asm
l9e2d:
	db 0b8h,000h,000h
#endasm
	return;
L9e34:
	;
#asm
l9e34:
	db 0b8h,002h,000h,050h,08bh,046h,00ch,0b9h,006h,000h,0d3h,0e0h,08bh,04eh,00ah,0d1h
	db 0e1h,0d1h,0e1h,0d1h,0e1h,003h,0c1h,003h,046h,008h,050h,0a1h,0aah,04fh,005h,060h
	db 000h,050h
	call f2925_
	db 083h,0c4h,006h
#endasm
	return;
}
