extern char g5182[];
extern char pclist_race[];
extern int anim_phase;
extern int g5126[];
extern int g52f2;
/* Draw floor and ceiling pieces of one depth row. */
draw_floor_ceiling(p4, p6, p8, p10, p12, p14, p16, p18)
{
	if (!pclist_race[((p4 * 3) + p6)]) {
	drv_op_c6((g52f2 ? (p10 + p4) : (p8 + p4)), 1, (g52f2 != 0 ? (p8 + p4) : -1));
	}
	if (g5182[((p4 * 3) + p6)]) goto L8803;
	if (*(int *)((char *)g5126 + ((p4 * 6) + (p6 << 1)))) goto L87c7;
	drv_op_c6((g52f2 ? (p14 + p4) : (p12 + p4)), 1, (g52f2 != 0 ? (p12 + p4) : -1));
	goto L8803;
L87c7:
	drv_op_c6((((g52f2 + anim_phase) % 2) ? (p18 + p4) : (p16 + p4)), 1, (((g52f2 + anim_phase) % 2) ? (p16 + p4) : -1));
L8803:
	;
}
