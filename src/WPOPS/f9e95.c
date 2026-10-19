extern char g507c[];
extern char g50e4[];
extern int anim_phase;
extern int g5088[];
extern int g5254;
draw_floor_ceiling(p4, p6, p8, p10, p12, p14, p16, p18)
{
	if (g507c[((p4 * 3) + p6)]) goto L9ede;
	drv_op_c6((g5254 ? (p10 + p4) : (p8 + p4)), 1, (g5254 != 0 ? (p8 + p4) : -1));
L9ede:
	if (g50e4[((p4 * 3) + p6)]) goto L9f80;
	if (*(int *)((char *)g5088 + ((p4 * 6) + (p6 << 1)))) goto L9f44;
	drv_op_c6((g5254 ? (p14 + p4) : (p12 + p4)), 1, (g5254 != 0 ? (p12 + p4) : -1));
	goto L9f80;
L9f44:
	drv_op_c6((((g5254 + anim_phase) % 2) ? (p18 + p4) : (p16 + p4)), 1, (((g5254 + anim_phase) % 2) ? (p16 + p4) : -1));
L9f80:
	;
}
