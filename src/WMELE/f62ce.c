#asm
	extrn f47b1_:near
	extrn f4965_:near
#endasm
extern int g4354;
extern int g43c6;
extern int g43c8;
f62ce()
{
	char x0[4];
	register int rsi;
	g43c8 = 0;
	g43c6 = 0;
#asm
	db 0a1h,03ah,043h,03dh,080h,000h,074h,00ah,03dh,097h,000h,074h,005h,03dh,099h,000h
	db 075h,006h
#endasm
L62f3:
	g4354 = 1;
L62f9:
	;
#asm
l62f9:
	call f47b1_
	db 0b8h,001h,000h,050h,0ffh,036h,03ah,043h
	call f4965_
	db 083h,0c4h,004h,08bh,01eh,0b8h,043h,08bh,036h,038h,043h,08ah,080h,0a2h,000h,02ah
	db 0e4h,0a3h,0c4h,043h
#endasm
	f54d5();
	f4d5b();
}
