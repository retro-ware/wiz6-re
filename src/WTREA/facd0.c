extern int anim_phase;
extern int g545c;
draw_side_walls_t(p4, p6, p8, p10, p12, p14, p16, p18, p20, p22, p24, p26, p28, p30, p32, p34)
{
	if (((p4 != 3) || (!p6)) && ((p6 != 2) && (p6 < 7))) goto Lad1d;
	drv_op_c6((g545c ? (p14 + p4) : (p12 + p4)), 1, (g545c != 0 ? (p12 + p4) : -1));
Lad1d:
	if (p4 >= 3) goto Laebb;
	switch (p6) {
case 1:
case 3:
case 4:
	drv_op_c6((g545c ? (p18 + p4) : (p16 + p4)), 1, (g545c != 0 ? (p16 + p4) : -1));
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
	drv_op_c6((g545c ? (p26 + p4) : (p24 + p4)), 1, (g545c != 0 ? (p24 + p4) : -1));
	break;
case 7:
	drv_op_c6((g545c ? (p30 + p4) : (p28 + p4)), 0, (g545c != 0 ? (p28 + p4) : -1));
	break;
case 8:
	add_view_object_t(1, 0, 0, (((p4 << 1) + p8) + anim_phase), 72, 248, p4);
	break;
case 9:
	add_view_object_t(2, 0, 0, (p4 + p10), 72, 248, p4);
	break;
case 10:
case 11:
case 12:
case 13:
	drv_op_c6((g545c ? (p34 + p4) : (p32 + p4)), 0, (g545c != 0 ? (p32 + p4) : -1));
	break;
	}
Laebb:
	;
}
