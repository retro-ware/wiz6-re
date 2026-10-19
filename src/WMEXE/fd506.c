extern int g4fa6;
fd506(p4, p6, p8, p10, p12)
char *p8;
{
	register int rsi;
	register int rdi;
	rdi = fd4c9(*(int *)p8, p10, p12);
#asm
	db 08bh,0c7h,03dh,0ffh,0ffh,075h,05ah
#endasm
	rdi = fd4c9(g4fa6, p10, p12);
#asm
	db 08bh,0c7h,03dh,0ffh,0ffh,075h,041h
#endasm
	rsi = ((*(int *)p8 + 1) % 12);
Ld54c:
	rdi = fd4c9(rsi, p10, p12);
#asm
	db 08bh,0c7h,03dh,0ffh,0ffh,075h,01dh
#endasm
	rsi = ((rsi + 1) % 12);
	if (rsi != *(int *)p8) goto Ld57d;
	return 1;
Ld57d:
	goto Ld54c;
Ld57f:
	;
#asm
ld57f:
	db 08bh,046h,00ah,050h,08bh,01eh,0aah,04fh,08ah,081h,0e0h,001h,02ah,0e4h,08bh,0c8h
	db 058h,02bh,0c1h,08bh,05eh,004h,089h,007h,08bh,046h,00ch,050h,08bh,01eh,0aah,04fh
	db 08ah,081h,0ech,001h,02ah,0e4h,08bh,0c8h,058h,02bh,0c1h,08bh,05eh,006h,089h,007h
#endasm
	*(int *)p8 = rdi;
	g4fa6 = rdi;
	return 0;
}
