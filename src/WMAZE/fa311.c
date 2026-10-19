#asm
	extrn fa22c_:near
#endasm
extern int g4fca;
extern int g503e;
fa311()
{
	char x0[2];
	register int rsi;
#asm
	db 0a1h,0e8h,04eh,0d1h,0e0h,08bh,0f0h,08bh,01eh,0a8h,04fh,08bh,000h,089h,046h,0feh
	db 0ebh,049h
	call fa22c_
	db 0ebh,051h
#endasm
	f53e5(2052);
	f0aaa(8);
	f533b((g4fca / 4));
	g503e = 1;
#asm
	call fa22c_
	db 0ebh,028h
#endasm
	f0aaa(8);
#asm
	call fa22c_
	db 0ebh,01bh,02ah,0a3h,02ah,0a3h,02fh,0a3h,080h,0a3h,058h,0a3h,058h,0a3h,058h,0a3h
la373:
	db 03dh,007h,000h,073h,008h,093h,0d1h,0e3h,02eh,0ffh,0a7h,065h,0a3h
#endasm
La380:
	;
}
