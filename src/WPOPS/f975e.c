extern char g507c[];
extern char g50e4[];
extern int anim_phase;
extern int g0052[];
extern int g363e;
extern int g5088[];
extern int g50f0[];
extern int g5254;
extern int g5256;
draw_wall_column(p4, p6, p8, p10, p12, p14, p16, p18, p20, p22, p24, p26, p28, p30, p32, p34, p36, p38, p40, p42, p44, p46, p48, p50, p52, p54, p56, p58, p60, p62, p64, p66, p68, p70, p72)
{
	if (!g507c[((p4 * 3) + p8)]) {
	drv_op_c6((g5254 ? (p16 + p4) : (p14 + p4)), 1, (g5254 != 0 ? (p14 + p4) : -1));
	}
	if (p4 >= 3) goto L9bbb;
	if ((p6 != 2) && (p6 < 7)) goto L97ed;
	drv_op_c6((g5256 ? (p20 + p4) : (p18 + p4)), 1, (g5256 != 0 ? (p18 + p4) : -1));
L97ed:
	switch (p6) {
case 1:
case 3:
case 4:
	if (p6 != 3) goto L9889;
	if (p8 != 1) goto L9860;
	if ((p4) || (g363e <= 0)) goto L9830;
	add_view_object(2, 0, 0, (g363e + 15), p10, p12, p4);
	goto L985e;
L9830:
	if ((p4 <= 0) && (g363e)) goto L985e;
	add_view_object(255, (p22 + p4), -1, 0, -1, -1, p4);
L985e:
	goto L9887;
L9860:
	if (p4 <= 0) goto L9887;
	add_view_object(255, (p22 + p4), -1, 0, -1, -1, p4);
L9887:
	goto L98d1;
L9889:
	if ((p6 != 4) || ((p4 <= 0) && (p8 != 1))) goto L98d1;
	add_view_object(2, *(int *)((char *)g0052 + ((p4 * 6) + (p8 << 1))), 0, (p4 + 10), p10, p12, p4);
L98d1:
	add_view_object(255, (p24 + p4), (p28 + p4), 0, (p26 + p4), (p30 + p4), p4);
	add_view_object(255, (p32 + p4), (p36 + p4), 0, (p34 + p4), (p38 + p4), p4);
	if ((p4 <= 0) && (p8 != 1)) goto L996f;
	add_view_object(2, *(int *)((char *)g0052 + ((p4 * 6) + (p8 << 1))), 0, (p4 + 13), p10, p12, (p4 + 1));
L996f:
	goto L9bbb;
case 5:
	drv_op_c6((g5256 ? (p42 + p4) : (p40 + p4)), 1, (g5256 != 0 ? (p40 + p4) : -1));
	goto L9bbb;
case 6:
	drv_op_c6((g5256 ? (p46 + p4) : (p44 + p4)), 1, (g5256 != 0 ? (p44 + p4) : -1));
	goto L9bbb;
case 7:
	drv_op_c6((g5256 ? (p50 + p4) : (p48 + p4)), 0, -1);
	goto L9bbb;
case 8:
	if ((p4 <= 0) && (p8 != 1)) goto L9a60;
	add_view_object(1, *(int *)((char *)g0052 + ((p4 * 6) + (p8 << 1))), 0, (((((g5256) && (p4 < 2) ? 18 : 0) + (p4 << 1)) + anim_phase) + 1), p10, p12, p4);
L9a60:
	goto L9bbb;
case 9:
	if ((p4 <= 0) && (p8 != 1)) goto L9aa3;
	add_view_object(2, *(int *)((char *)g0052 + ((p4 * 6) + (p8 << 1))), 0, (p4 + 1), p10, p12, p4);
L9aa3:
	goto L9bbb;
case 10:
case 11:
case 12:
case 13:
	drv_op_c6((g5256 ? (p54 + p4) : (p52 + p4)), 0, (g5256 != 0 ? (p52 + p4) : -1));
	if (p6 != 11) goto L9b10;
	drv_op_c6((g5256 ? (p58 + p4) : (p56 + p4)), 0, (g5256 != 0 ? (p56 + p4) : -1));
	goto L9b64;
L9b10:
	if (p6 != 12) goto L9b49;
	drv_op_c6((g5256 ? (p62 + p4) : (p60 + p4)), 0, (g5256 != 0 ? (p60 + p4) : -1));
	goto L9b64;
L9b49:
	if (p6 != 13) goto L9b64;
	drv_op_c6((p64 + p4), 0, -1);
L9b64:
	goto L9bbb;
case 14:
	if ((p4) || (p8 != 1)) goto L9b8e;
	drv_op_c6(344, 0, (g5256 != 0 ? 344 : -1));
L9b8e:
	goto L9bbb;
	}
L9bbb:
	if (g50e4[((p4 * 3) + p8)]) goto L9ca2;
	if (*(int *)((char *)g5088 + ((p4 * 6) + (p8 << 1)))) goto L9c66;
	drv_op_c6((g5254 ? (p68 + p4) : (p66 + p4)), 1, (g5254 != 0 ? (p66 + p4) : -1));
	if (((p4 != 1) || (p8 != 1)) || (*(int *)((char *)g50f0 + ((p4 * 6) + (p8 << 1))) != 1)) goto L9c64;
	drv_op_c6(345, 0, (g5254 != 0 ? 345 : -1));
L9c64:
	goto L9ca2;
L9c66:
	drv_op_c6((((g5254 + anim_phase) % 2) ? (p72 + p4) : (p70 + p4)), 1, (((g5254 + anim_phase) % 2) ? (p70 + p4) : -1));
L9ca2:
	;
}
