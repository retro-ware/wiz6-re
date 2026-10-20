extern char g5284[];
extern char g52ec[];
extern int anim_phase;
extern int g0052[];
extern int g363e;
extern int g5290[];
extern int g52f8[];
extern int g545c;
extern int g545e;
draw_wall_column_t(p4, p6, p8, p10, p12, p14, p16, p18, p20, p22, p24, p26, p28, p30, p32, p34, p36, p38, p40, p42, p44, p46, p48, p50, p52, p54, p56, p58, p60, p62, p64, p66, p68, p70, p72)
{
	if (!g5284[((p4 * 3) + p8)]) {
	drv_op_c6((g545c ? (p16 + p4) : (p14 + p4)), 1, (g545c != 0 ? (p14 + p4) : -1));
	}
	if (p4 >= 3) goto Labe5;
	if ((p6 == 2) || (p6 >= 7)) {
	drv_op_c6((g545e ? (p20 + p4) : (p18 + p4)), 1, (g545e != 0 ? (p18 + p4) : -1));
	}
	switch (p6) {
case 1:
case 3:
case 4:
	if (p6 == 3) {
	if (p8 == 1) {
	if ((!p4) && (g363e > 0)) {
	add_view_object_t(2, 0, 0, (g363e + 15), p10, p12, p4);
	} else {
	if ((p4 > 0) || (!g363e)) {
	add_view_object_t(255, (p22 + p4), -1, 0, -1, -1, p4);
	}
	}
	} else {
	if (p4 > 0) {
	add_view_object_t(255, (p22 + p4), -1, 0, -1, -1, p4);
	}
	}
	} else {
	if ((p6 == 4) && ((p4 > 0) || (p8 == 1))) {
	add_view_object_t(2, *(int *)((char *)g0052 + ((p4 * 6) + (p8 << 1))), 0, (p4 + 10), p10, p12, p4);
	}
	}
	add_view_object_t(255, (p24 + p4), (p28 + p4), 0, (p26 + p4), (p30 + p4), p4);
	add_view_object_t(255, (p32 + p4), (p36 + p4), 0, (p34 + p4), (p38 + p4), p4);
	if ((p4 > 0) || (p8 == 1)) {
	add_view_object_t(2, *(int *)((char *)g0052 + ((p4 * 6) + (p8 << 1))), 0, (p4 + 13), p10, p12, (p4 + 1));
	}
	goto Labe5;
case 5:
	drv_op_c6((g545e ? (p42 + p4) : (p40 + p4)), 1, (g545e != 0 ? (p40 + p4) : -1));
	goto Labe5;
case 6:
	drv_op_c6((g545e ? (p46 + p4) : (p44 + p4)), 1, (g545e != 0 ? (p44 + p4) : -1));
	goto Labe5;
case 7:
	drv_op_c6((g545e ? (p50 + p4) : (p48 + p4)), 0, -1);
	goto Labe5;
case 8:
	if ((p4 > 0) || (p8 == 1)) {
	add_view_object_t(1, *(int *)((char *)g0052 + ((p4 * 6) + (p8 << 1))), 0, (((((g545e) && (p4 < 2) ? 18 : 0) + (p4 << 1)) + anim_phase) + 1), p10, p12, p4);
	}
	goto Labe5;
case 9:
	if ((p4 > 0) || (p8 == 1)) {
	add_view_object_t(2, *(int *)((char *)g0052 + ((p4 * 6) + (p8 << 1))), 0, (p4 + 1), p10, p12, p4);
	}
	goto Labe5;
case 10:
case 11:
case 12:
case 13:
	drv_op_c6((g545e ? (p54 + p4) : (p52 + p4)), 0, (g545e != 0 ? (p52 + p4) : -1));
	if (p6 != 11) goto Lab3a;
	drv_op_c6((g545e ? (p58 + p4) : (p56 + p4)), 0, (g545e != 0 ? (p56 + p4) : -1));
	goto Lab8e;
Lab3a:
	if (p6 != 12) goto Lab73;
	drv_op_c6((g545e ? (p62 + p4) : (p60 + p4)), 0, (g545e != 0 ? (p60 + p4) : -1));
	goto Lab8e;
Lab73:
	if (p6 != 13) goto Lab8e;
	drv_op_c6((p64 + p4), 0, -1);
Lab8e:
	goto Labe5;
case 14:
	if ((!p4) && (p8 == 1)) {
	drv_op_c6(344, 0, (g545e != 0 ? 344 : -1));
	}
	goto Labe5;
	}
Labe5:
	if (g52ec[((p4 * 3) + p8)]) goto Laccc;
	if (*(int *)((char *)g5290 + ((p4 * 6) + (p8 << 1)))) goto Lac90;
	drv_op_c6((g545c ? (p68 + p4) : (p66 + p4)), 1, (g545c != 0 ? (p66 + p4) : -1));
	if (((p4 == 1) && (p8 == 1)) && (*(int *)((char *)g52f8 + ((p4 * 6) + (p8 << 1))) == 1)) {
	drv_op_c6(345, 0, (g545c != 0 ? 345 : -1));
	}
	goto Laccc;
Lac90:
	drv_op_c6((((g545c + anim_phase) % 2) ? (p72 + p4) : (p70 + p4)), 1, (((g545c + anim_phase) % 2) ? (p70 + p4) : -1));
Laccc:
	;
}
