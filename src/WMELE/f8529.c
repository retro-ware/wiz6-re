extern int anim_phase;
extern int g52f2;
/* Draw the front wall pieces of one depth row. */
draw_front_walls(p4, p6, p8, p10, p12, p14, p16, p18, p20, p22, p24, p26, p28, p30, p32, p34)
{
	if (((p4 == 3) && (p6)) || ((p6 == 2) || (p6 >= 7))) {
	drv_op_c6((g52f2 ? (p14 + p4) : (p12 + p4)), 1, (g52f2 != 0 ? (p12 + p4) : -1));
	}
	if (p4 >= 3) goto L8714;
	switch (p6) {
case 1:
case 3:
case 4:
	drv_op_c6((g52f2 ? (p18 + p4) : (p16 + p4)), 1, (g52f2 != 0 ? (p16 + p4) : -1));
	if (p6 == 3) {
	drv_op_c6((p20 + p4), (p4 < 3 ? 0 : 1), -1);
	} else {
	if (p6 == 4) {
	drv_op_c6((p22 + p4), (p4 < 3 ? 0 : 1), -1);
	}
	}
	break;
case 5:
case 6:
	drv_op_c6((g52f2 ? (p26 + p4) : (p24 + p4)), 1, (g52f2 != 0 ? (p24 + p4) : -1));
	break;
case 7:
	drv_op_c6((g52f2 ? (p30 + p4) : (p28 + p4)), 0, (g52f2 != 0 ? (p28 + p4) : -1));
	break;
case 8:
	queue_view_glyph(1, 0, 0, (((p4 << 1) + p8) + anim_phase), 72, 248, p4);
	break;
case 9:
	queue_view_glyph(2, 0, 0, (p4 + p10), 72, 248, p4);
	break;
case 10:
case 11:
case 12:
case 13:
	drv_op_c6((g52f2 ? (p34 + p4) : (p32 + p4)), 0, (g52f2 != 0 ? (p32 + p4) : -1));
	break;
	}
L8714:
	;
}
