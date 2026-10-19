extern int g58a4;
extern int g58a6;
extern int g58a8;
extern int g58aa;
extern int g58ac;
extern int g58ae;
extern int g58b0;
extern int g58b4;
fbb28()
{
#asm
$20004 equ 1
#endasm
	g58b4 = 1;
#asm
	db 08bh,046h,004h,0ebh,050h
#endasm
	g58b4 = 0;
#asm
	db 0ebh,058h
#endasm
	g58a4 = 1;
#asm
	db 0ebh,050h
#endasm
	g58a6 = 1;
#asm
	db 0ebh,048h
#endasm
	g58a8 = 1;
#asm
	db 0ebh,040h
#endasm
	g58aa = 1;
#asm
	db 0ebh,038h
#endasm
	g58ac = 1;
#asm
	db 0ebh,030h
#endasm
	g58ae = 1;
#asm
	db 0ebh,028h
#endasm
	g58b0 = 1;
#asm
	db 0ebh,020h,036h,0bbh,03eh,0bbh,046h,0bbh,04eh,0bbh,056h,0bbh,05eh,0bbh,066h,0bbh
	db 06eh,0bbh
lbb86:
	db 02dh,0ffh,0ffh,03dh,008h,000h,073h,008h,093h,0d1h,0e3h,02eh,0ffh,0a7h,076h,0bbh
#endasm
Lbb96:
	;
}
