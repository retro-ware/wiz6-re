extern int g4f86;
extern int g5034;
extern int party_x;
extern int party_y;
step_position(p4, p6)
{
	g5034 = 1;
	setmem(20192, 8, 0);
	g4f86 = 0;
#asm
	db 08bh,046h,004h,0ebh,024h
#endasm
	party_y += p6;
#asm
	db 0ebh,02fh
#endasm
	party_x += p6;
#asm
	db 0ebh,026h
#endasm
	party_y -= p6;
#asm
	db 0ebh,01dh
#endasm
	party_x -= p6;
#asm
	db 0ebh,014h
#endasm
L5639:
	;
#asm
l5639:
	db 03dh,000h,000h,074h,0d7h,03dh,001h,000h,074h,0dbh,03dh,002h,000h,074h,0dfh,03dh
	db 003h,000h,074h,0e3h
#endasm
L564d:
	;
}
