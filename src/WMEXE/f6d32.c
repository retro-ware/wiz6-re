#asm
	extrn strlen_:near
#endasm
extern char *g4fb6;
f6d32(p4, p6, p8, p10, p12, p14)
char *p4;
char *p6;
char *p8;
{
	int l2;
	char x2[2];
#asm
	db 08bh,05eh,004h,080h,03fh,000h,074h,005h,0b8h,001h,000h,0ebh,003h
l6d45:
	db 0b8h,000h,000h
l6d48:
	db 08bh,05eh,006h,080h,03fh,000h,074h,005h,0b9h,001h,000h,0ebh,003h
l6d55:
	db 0b9h,000h,000h
l6d58:
	db 003h,0c1h,08bh,05eh,008h,080h,03fh,000h,074h,005h,0b9h,001h,000h,0ebh,003h
#endasm
L6d67:
	;
#asm
l6d67:
	db 0b9h,000h,000h
#endasm
L6d6a:
	;
#asm
l6d6a:
	db 003h,0c1h,089h,046h,0fch,0ffh,076h,004h
	call strlen_
	db 059h,050h,0ffh,076h,006h
	call strlen_
	db 059h,08bh,0c8h,058h,003h,0c1h,050h,0ffh,076h,008h
	call strlen_
	db 059h,08bh,0c8h,058h,003h,0c1h,08bh,0c8h,08bh,046h,0fch,003h,0c8h,08bh,0c1h,0b9h
	db 002h,000h,099h,0f7h,0f9h,08bh,0c8h,0b8h,014h,000h,02bh,0c1h,089h,046h,0feh,03dh
	db 000h,000h,07dh,005h
#endasm
	l2 = 0;
L6db3:
	f030b(g4fb6, l2, (unsigned char)g4fb6[7]);
	if (!*p4) goto L6dd9;
	f6bf1(p4, p10);
L6dd9:
	if (!*p6) goto L6deb;
	f6bf1(p6, p12);
L6deb:
	if (!*p8) goto L6dfd;
	f6bf1(p8, p14);
L6dfd:
	;
}
