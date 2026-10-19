#asm
	extrn drv_op_c6_:near
#endasm
extern char g511c[];
extern char g5184[];
extern int anim_phase;
extern int g5128[];
extern int g52f4;
fe6f2(p4, p6, p8, p10, p12, p14, p16, p18)
{
	if (g511c[((p4 * 3) + p6)]) goto Le73b;
	drv_op_c6((g52f4 ? (p10 + p4) : (p8 + p4)), 1, (g52f4 != 0 ? (p8 + p4) : -1));
Le73b:
	if (g5184[((p4 * 3) + p6)]) goto Le7dd;
	if (*(int *)((char *)g5128 + ((p4 * 6) + (p6 << 1)))) goto Le7a1;
#asm
	db 0b8h,0ffh,0ffh,083h,03eh,0f4h,052h,000h,074h,006h,08bh,046h,00ch,003h,046h,004h
le77e:
	db 050h,0b8h,001h,000h,050h,083h,03eh,0f4h,052h,000h,074h,008h,08bh,046h,00eh,003h
	db 046h,004h,0ebh,006h
le792:
	db 08bh,046h,00ch,003h,046h,004h
le798:
	db 050h
	call drv_op_c6_
	db 083h,0c4h,006h,0ebh,03ch
#endasm
Le7a1:
	drv_op_c6((((g52f4 + anim_phase) % 2) ? (p18 + p4) : (p16 + p4)), 1, (((g52f4 + anim_phase) % 2) ? (p16 + p4) : -1));
Le7dd:
	;
}
