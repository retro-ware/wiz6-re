extern char g6aa6[];
extern char g6b0e[];
extern int anim_phase;
extern int g6ab2[];
extern int g6c7e;
feafa(p4, p6, p8, p10, p12, p14, p16, p18)
{
	if (g6aa6[((p4 * 3) + p6)]) goto Leb43;
	drv_op_c6((g6c7e ? (p10 + p4) : (p8 + p4)), 1, (g6c7e != 0 ? (p8 + p4) : -1));
Leb43:
	if (g6b0e[((p4 * 3) + p6)]) goto Lebe5;
	if (*(int *)((char *)g6ab2 + ((p4 * 6) + (p6 << 1)))) goto Leba9;
	drv_op_c6((g6c7e ? (p14 + p4) : (p12 + p4)), 1, (g6c7e != 0 ? (p12 + p4) : -1));
	goto Lebe5;
Leba9:
	drv_op_c6((((g6c7e + anim_phase) % 2) ? (p18 + p4) : (p16 + p4)), 1, (((g6c7e + anim_phase) % 2) ? (p16 + p4) : -1));
Lebe5:
	;
}
