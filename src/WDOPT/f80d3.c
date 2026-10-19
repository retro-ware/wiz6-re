extern int g4fa6;
f80d3(p4, p6, p8, p10, p12)
char *p8;
{
	register int rsi;
	register int rdi;
	rdi = f8096(*(int *)p8, p10, p12);
#asm
	db 08bh,0c7h,03dh,0ffh,0ffh,075h,05ah
#endasm
	rdi = f8096(g4fa6, p10, p12);
#asm
	db 08bh,0c7h,03dh,0ffh,0ffh,075h,041h
#endasm
	rsi = ((*(int *)p8 + 1) % 12);
L8119:
	rdi = f8096(rsi, p10, p12);
#asm
	db 08bh,0c7h,03dh,0ffh,0ffh,075h,01dh
#endasm
	rsi = ((rsi + 1) % 12);
	if (rsi != *(int *)p8) goto L814a;
	return 1;
L814a:
	goto L8119;
L814c:
	;
#asm
l814c:
	db 08bh,046h,00ah,050h,08bh,01eh,0aah,04fh,08ah,081h,0e0h,001h,02ah,0e4h,08bh,0c8h
	db 058h,02bh,0c1h,08bh,05eh,004h,089h,007h,08bh,046h,00ch,050h,08bh,01eh,0aah,04fh
	db 08ah,081h,0ech,001h,02ah,0e4h,08bh,0c8h,058h,02bh,0c1h,08bh,05eh,006h,089h,007h
#endasm
	*(int *)p8 = rdi;
	g4fa6 = rdi;
	return 0;
}
