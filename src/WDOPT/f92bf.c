#asm
	extrn drv_op_c6_:near
#endasm
extern char g5414[];
extern char g547c[];
extern int anim_phase;
extern int g5420[];
extern int g55ec;
f92bf(p4, p6, p8, p10, p12, p14, p16, p18)
{
	if (g5414[((p4 * 3) + p6)]) goto L9308;
	drv_op_c6((g55ec ? (p10 + p4) : (p8 + p4)), 1, (g55ec != 0 ? (p8 + p4) : -1));
L9308:
	if (g547c[((p4 * 3) + p6)]) goto L93aa;
	if (*(int *)((char *)g5420 + ((p4 * 6) + (p6 << 1)))) goto L936e;
#asm
	db 0b8h,0ffh,0ffh,083h,03eh,0ech,055h,000h,074h,006h,08bh,046h,00ch,003h,046h,004h
l934b:
	db 050h,0b8h,001h,000h,050h,083h,03eh,0ech,055h,000h,074h,008h,08bh,046h,00eh,003h
	db 046h,004h,0ebh,006h
l935f:
	db 08bh,046h,00ch,003h,046h,004h
l9365:
	db 050h
	call drv_op_c6_
	db 083h,0c4h,006h,0ebh,03ch
#endasm
L936e:
	drv_op_c6((((g55ec + anim_phase) % 2) ? (p18 + p4) : (p16 + p4)), 1, (((g55ec + anim_phase) % 2) ? (p16 + p4) : -1));
L93aa:
	;
}
