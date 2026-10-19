#asm
	extrn f36ac_:near
#endasm
extern char g5284[];
extern char g52ec[];
extern int g3646;
extern int g5290[];
extern int g545c;
faebf(p4, p6, p8, p10, p12, p14, p16, p18)
{
	if (g5284[((p4 * 3) + p6)]) goto Laf08;
	f36ac((g545c ? (p10 + p4) : (p8 + p4)), 1, (g545c != 0 ? (p8 + p4) : -1));
Laf08:
	if (g52ec[((p4 * 3) + p6)]) goto Lafaa;
	if (*(int *)((char *)g5290 + ((p4 * 6) + (p6 << 1)))) goto Laf6e;
#asm
	db 0b8h,0ffh,0ffh,083h,03eh,05ch,054h,000h,074h,006h,08bh,046h,00ch,003h,046h,004h
laf4b:
	db 050h,0b8h,001h,000h,050h,083h,03eh,05ch,054h,000h,074h,008h,08bh,046h,00eh,003h
	db 046h,004h,0ebh,006h
laf5f:
	db 08bh,046h,00ch,003h,046h,004h
laf65:
	db 050h
	call f36ac_
	db 083h,0c4h,006h,0ebh,03ch
#endasm
Laf6e:
	f36ac((((g545c + g3646) % 2) ? (p18 + p4) : (p16 + p4)), 1, (((g545c + g3646) % 2) ? (p16 + p4) : -1));
Lafaa:
	;
}
