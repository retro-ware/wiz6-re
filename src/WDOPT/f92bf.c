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
	drv_op_c6((g55ec ? (p14 + p4) : (p12 + p4)), 1, (g55ec != 0 ? (p12 + p4) : -1));
	goto L93aa;
L936e:
	drv_op_c6((((g55ec + anim_phase) % 2) ? (p18 + p4) : (p16 + p4)), 1, (((g55ec + anim_phase) % 2) ? (p16 + p4) : -1));
L93aa:
	;
}
