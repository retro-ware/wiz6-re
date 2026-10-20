extern char g5284[];
extern char g52ec[];
extern int anim_phase;
extern int g5290[];
extern int g545c;
draw_floor_ceiling_t(p4, p6, p8, p10, p12, p14, p16, p18)
{
	if (!g5284[((p4 * 3) + p6)]) {
	drv_op_c6((g545c ? (p10 + p4) : (p8 + p4)), 1, (g545c != 0 ? (p8 + p4) : -1));
	}
	if (g52ec[((p4 * 3) + p6)]) goto Lafaa;
	if (*(int *)((char *)g5290 + ((p4 * 6) + (p6 << 1)))) goto Laf6e;
	drv_op_c6((g545c ? (p14 + p4) : (p12 + p4)), 1, (g545c != 0 ? (p12 + p4) : -1));
	goto Lafaa;
Laf6e:
	drv_op_c6((((g545c + anim_phase) % 2) ? (p18 + p4) : (p16 + p4)), 1, (((g545c + anim_phase) % 2) ? (p16 + p4) : -1));
Lafaa:
	;
}
