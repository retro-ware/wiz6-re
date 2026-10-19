#asm
	extrn drv_op_c6_:near
#endasm
extern char g5042[];
extern char g50aa[];
extern int anim_phase;
extern int g504e[];
extern int g521a;
f8d07(p4, p6, p8, p10, p12, p14, p16, p18)
{
	if (g5042[((p4 * 3) + p6)]) goto L8d50;
	drv_op_c6((g521a ? (p10 + p4) : (p8 + p4)), 1, (g521a != 0 ? (p8 + p4) : -1));
L8d50:
	if (g50aa[((p4 * 3) + p6)]) goto L8df2;
	if (*(int *)((char *)g504e + ((p4 * 6) + (p6 << 1)))) goto L8db6;
#asm
	db 0b8h,0ffh,0ffh,083h,03eh,01ah,052h,000h,074h,006h,08bh,046h,00ch,003h,046h,004h
l8d93:
	db 050h,0b8h,001h,000h,050h,083h,03eh,01ah,052h,000h,074h,008h,08bh,046h,00eh,003h
	db 046h,004h,0ebh,006h
l8da7:
	db 08bh,046h,00ch,003h,046h,004h
l8dad:
	db 050h
	call drv_op_c6_
	db 083h,0c4h,006h,0ebh,03ch
#endasm
L8db6:
	drv_op_c6((((g521a + anim_phase) % 2) ? (p18 + p4) : (p16 + p4)), 1, (((g521a + anim_phase) % 2) ? (p16 + p4) : -1));
L8df2:
	;
}
