extern char g452b[];
extern char g4587[];
extern int g363c;
extern int g440c[];
f6919(p4, p6)
{
	int l2;
	int l4;
	int l6;
	l6 = (*(int *)((char *)g440c + (432 * p6)) / 5);
	l6 = (l6 > 6 ? 6 : l6);
	if (g4587[(432 * p6)] != 3) goto L6987;
	l2 = (((((unsigned char)g452b[(432 * p6)] / 10) + l6) - g363c) + 5);
	l4 = (((((unsigned char)g452b[(432 * p6)] / 2) + l6) + 50) - (g363c << 1));
	goto L6a09;
L6987:
	;
#asm
l6987:
	db 08ah,087h,087h,045h,03ch,00dh,074h,008h,03ch,004h,074h,004h,03ch,006h,075h,042h
#endasm
L6997:
	;
#asm
l6997:
	db 08ah,087h,02bh,045h,02ah,0e4h,0b9h,00ah,000h,099h,0f7h,0f9h,003h,046h,0fah,02bh
	db 006h,03ch,036h,040h,040h,040h,089h,046h,0feh,08ah,087h,02bh,045h,02ah,0e4h,0b9h
	db 002h,000h,099h,0f7h,0f9h,003h,046h,0fah,005h,023h,000h,050h,0a1h,03ch,036h,08bh
	db 0d0h,0d1h,0e0h,003h,0c2h,099h,0f7h,0f9h,08bh,0c8h,058h,02bh,0c1h,089h,046h,0fch
#endasm
	goto L6a09;
L69d9:
	;
#asm
l69d9:
	db 08ah,087h,02bh,045h,02ah,0e4h,0b9h,00ah,000h,099h,0f7h,0f9h,003h,046h,0fah,02bh
	db 006h,03ch,036h,040h,089h,046h,0feh,08ah,087h,02bh,045h,02ah,0e4h,0b9h,002h,000h
	db 099h,0f7h,0f9h,003h,046h,0fah,005h,00fh,000h,02bh,006h,03ch,036h,089h,046h,0fch
#endasm
L6a09:
	if (l2 >= 1) goto L6a14;
	l2 = 1;
L6a14:
	if (l4 >= 5) goto L6a1f;
	l4 = 5;
L6a1f:
	if (l4 <= 95) goto L6a2a;
	l4 = 95;
L6a2a:
	f672d(p4, p6, l2, l4);
}
