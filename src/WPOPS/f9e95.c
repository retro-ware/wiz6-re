#asm
	extrn f36ac_:near
#endasm
extern char g507c[];
extern char g50e4[];
extern int g3646;
extern int g5088[];
extern int g5254;
f9e95(p4, p6, p8, p10, p12, p14, p16, p18)
{
	if (g507c[((p4 * 3) + p6)]) goto L9ede;
	f36ac((g5254 ? (p10 + p4) : (p8 + p4)), 1, (g5254 != 0 ? (p8 + p4) : -1));
L9ede:
	if (g50e4[((p4 * 3) + p6)]) goto L9f80;
	if (*(int *)((char *)g5088 + ((p4 * 6) + (p6 << 1)))) goto L9f44;
#asm
	db 0b8h,0ffh,0ffh,083h,03eh,054h,052h,000h,074h,006h,08bh,046h,00ch,003h,046h,004h
l9f21:
	db 050h,0b8h,001h,000h,050h,083h,03eh,054h,052h,000h,074h,008h,08bh,046h,00eh,003h
	db 046h,004h,0ebh,006h
l9f35:
	db 08bh,046h,00ch,003h,046h,004h
l9f3b:
	db 050h
	call f36ac_
	db 083h,0c4h,006h,0ebh,03ch
#endasm
L9f44:
	f36ac((((g5254 + g3646) % 2) ? (p18 + p4) : (p16 + p4)), 1, (((g5254 + g3646) % 2) ? (p16 + p4) : -1));
L9f80:
	;
}
