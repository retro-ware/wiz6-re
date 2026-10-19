#asm
	extrn f36ac_:near
#endasm
extern char g511a[];
extern char g5182[];
extern int g3646;
extern int g5126[];
extern int g52f2;
f8718(p4, p6, p8, p10, p12, p14, p16, p18)
{
	if (g511a[((p4 * 3) + p6)]) goto L8761;
	f36ac((g52f2 ? (p10 + p4) : (p8 + p4)), 1, (g52f2 != 0 ? (p8 + p4) : -1));
L8761:
	if (g5182[((p4 * 3) + p6)]) goto L8803;
	if (*(int *)((char *)g5126 + ((p4 * 6) + (p6 << 1)))) goto L87c7;
#asm
	db 0b8h,0ffh,0ffh,083h,03eh,0f2h,052h,000h,074h,006h,08bh,046h,00ch,003h,046h,004h
l87a4:
	db 050h,0b8h,001h,000h,050h,083h,03eh,0f2h,052h,000h,074h,008h,08bh,046h,00eh,003h
	db 046h,004h,0ebh,006h
l87b8:
	db 08bh,046h,00ch,003h,046h,004h
l87be:
	db 050h
	call f36ac_
	db 083h,0c4h,006h,0ebh,03ch
#endasm
L87c7:
	f36ac((((g52f2 + g3646) % 2) ? (p18 + p4) : (p16 + p4)), 1, (((g52f2 + g3646) % 2) ? (p16 + p4) : -1));
L8803:
	;
}
