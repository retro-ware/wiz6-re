#asm
	extrn f36ac_:near
#endasm
extern char g6aa6[];
extern char g6b0e[];
extern int g3646;
extern int g6ab2[];
extern int g6c7e;
feafa(p4, p6, p8, p10, p12, p14, p16, p18)
{
	if (g6aa6[((p4 * 3) + p6)]) goto Leb43;
	f36ac((g6c7e ? (p10 + p4) : (p8 + p4)), 1, (g6c7e != 0 ? (p8 + p4) : -1));
Leb43:
	if (g6b0e[((p4 * 3) + p6)]) goto Lebe5;
	if (*(int *)((char *)g6ab2 + ((p4 * 6) + (p6 << 1)))) goto Leba9;
#asm
	db 0b8h,0ffh,0ffh,083h,03eh,07eh,06ch,000h,074h,006h,08bh,046h,00ch,003h,046h,004h
leb86:
	db 050h,0b8h,001h,000h,050h,083h,03eh,07eh,06ch,000h,074h,008h,08bh,046h,00eh,003h
	db 046h,004h,0ebh,006h
leb9a:
	db 08bh,046h,00ch,003h,046h,004h
leba0:
	db 050h
	call f36ac_
	db 083h,0c4h,006h,0ebh,03ch
#endasm
Leba9:
	f36ac((((g6c7e + g3646) % 2) ? (p18 + p4) : (p16 + p4)), 1, (((g6c7e + g3646) % 2) ? (p16 + p4) : -1));
Lebe5:
	;
}
