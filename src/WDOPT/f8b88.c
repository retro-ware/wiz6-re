extern char g5414[];
extern char g547c[];
extern int anim_phase;
extern int char_hp[];
extern int g0052[];
extern int g363e;
extern int g5420[];
extern int g55ec;
extern int g55ee;
f8b88(p4, p6, p8, p10, p12, p14, p16, p18, p20, p22, p24, p26, p28, p30, p32, p34, p36, p38, p40, p42, p44, p46, p48, p50, p52, p54, p56, p58, p60, p62, p64, p66, p68, p70, p72)
{
	if (g5414[((p4 * 3) + p8)]) goto L8bd1;
	drv_op_c6((g55ec ? (p16 + p4) : (p14 + p4)), 1, (g55ec != 0 ? (p14 + p4) : -1));
L8bd1:
	if (p4 >= 3) goto L8fe5;
	if ((p6 != 2) && (p6 < 7)) goto L8c17;
	drv_op_c6((g55ee ? (p20 + p4) : (p18 + p4)), 1, (g55ee != 0 ? (p18 + p4) : -1));
L8c17:
	switch (p6) {
case 1:
case 3:
case 4:
	if (p6 != 3) goto L8cb3;
	if (p8 != 1) goto L8c8a;
	if ((p4) || (g363e <= 0)) goto L8c5a;
	queue_view_glyph_dopt(2, 0, 0, (g363e + 15), p10, p12, p4);
	goto L8c88;
L8c5a:
	if ((p4 <= 0) && (g363e)) goto L8c88;
	queue_view_glyph_dopt(255, (p22 + p4), -1, 0, -1, -1, p4);
L8c88:
	goto L8cb1;
L8c8a:
	if (p4 <= 0) goto L8cb1;
	queue_view_glyph_dopt(255, (p22 + p4), -1, 0, -1, -1, p4);
L8cb1:
	goto L8cfb;
L8cb3:
	if ((p6 != 4) || ((p4 <= 0) && (p8 != 1))) goto L8cfb;
	queue_view_glyph_dopt(2, *(int *)((char *)g0052 + ((p4 * 6) + (p8 << 1))), 0, (p4 + 10), p10, p12, p4);
L8cfb:
	queue_view_glyph_dopt(255, (p24 + p4), (p28 + p4), 0, (p26 + p4), (p30 + p4), p4);
	queue_view_glyph_dopt(255, (p32 + p4), (p36 + p4), 0, (p34 + p4), (p38 + p4), p4);
	if ((p4 <= 0) && (p8 != 1)) goto L8d99;
	queue_view_glyph_dopt(2, *(int *)((char *)g0052 + ((p4 * 6) + (p8 << 1))), 0, (p4 + 13), p10, p12, (p4 + 1));
L8d99:
	goto L8fe5;
case 5:
	drv_op_c6((g55ee ? (p42 + p4) : (p40 + p4)), 1, (g55ee != 0 ? (p40 + p4) : -1));
	goto L8fe5;
case 6:
	drv_op_c6((g55ee ? (p46 + p4) : (p44 + p4)), 1, (g55ee != 0 ? (p44 + p4) : -1));
	goto L8fe5;
case 7:
	drv_op_c6((g55ee ? (p50 + p4) : (p48 + p4)), 0, -1);
	goto L8fe5;
case 8:
	if ((p4 <= 0) && (p8 != 1)) goto L8e8a;
	queue_view_glyph_dopt(1, *(int *)((char *)g0052 + ((p4 * 6) + (p8 << 1))), 0, (((((g55ee) && (p4 < 2) ? 18 : 0) + (p4 << 1)) + anim_phase) + 1), p10, p12, p4);
L8e8a:
	goto L8fe5;
case 9:
	if ((p4 <= 0) && (p8 != 1)) goto L8ecd;
	queue_view_glyph_dopt(2, *(int *)((char *)g0052 + ((p4 * 6) + (p8 << 1))), 0, (p4 + 1), p10, p12, p4);
L8ecd:
	goto L8fe5;
case 10:
case 11:
case 12:
case 13:
	drv_op_c6((g55ee ? (p54 + p4) : (p52 + p4)), 0, (g55ee != 0 ? (p52 + p4) : -1));
	if (p6 != 11) goto L8f3a;
	drv_op_c6((g55ee ? (p58 + p4) : (p56 + p4)), 0, (g55ee != 0 ? (p56 + p4) : -1));
	goto L8f8e;
L8f3a:
	if (p6 != 12) goto L8f73;
	drv_op_c6((g55ee ? (p62 + p4) : (p60 + p4)), 0, (g55ee != 0 ? (p60 + p4) : -1));
	goto L8f8e;
L8f73:
	if (p6 != 13) goto L8f8e;
	drv_op_c6((p64 + p4), 0, -1);
L8f8e:
	goto L8fe5;
case 14:
	if ((p4) || (p8 != 1)) goto L8fb8;
	drv_op_c6(344, 0, (g55ee != 0 ? 344 : -1));
L8fb8:
	goto L8fe5;
	}
L8fe5:
	if (g547c[((p4 * 3) + p8)]) goto L90cc;
	if (*(int *)((char *)g5420 + ((p4 * 6) + (p8 << 1)))) goto L9090;
	drv_op_c6((g55ec ? (p68 + p4) : (p66 + p4)), 1, (g55ec != 0 ? (p66 + p4) : -1));
	if (((p4 != 1) || (p8 != 1)) || (*(int *)((char *)char_hp + ((p4 * 6) + (p8 << 1))) != 1)) goto L908e;
	drv_op_c6(345, 0, (g55ec != 0 ? 345 : -1));
L908e:
	goto L90cc;
L9090:
	drv_op_c6((((g55ec + anim_phase) % 2) ? (p72 + p4) : (p70 + p4)), 1, (((g55ec + anim_phase) % 2) ? (p70 + p4) : -1));
L90cc:
	;
}
