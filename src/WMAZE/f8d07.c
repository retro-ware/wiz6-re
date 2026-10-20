extern char g5042[];
extern char g50aa[];
extern int anim_phase;
extern int g504e[];
extern int g521a;
f8d07(p4, p6, p8, p10, p12, p14, p16, p18)
{
	if (!g5042[((p4 * 3) + p6)]) {
	drv_op_c6((g521a ? (p10 + p4) : (p8 + p4)), 1, (g521a != 0 ? (p8 + p4) : -1));
	}
	if (g50aa[((p4 * 3) + p6)]) goto L8df2;
	if (*(int *)((char *)g504e + ((p4 * 6) + (p6 << 1)))) goto L8db6;
	drv_op_c6((g521a ? (p14 + p4) : (p12 + p4)), 1, (g521a != 0 ? (p12 + p4) : -1));
	goto L8df2;
L8db6:
	drv_op_c6((((g521a + anim_phase) % 2) ? (p18 + p4) : (p16 + p4)), 1, (((g521a + anim_phase) % 2) ? (p16 + p4) : -1));
L8df2:
	;
}
