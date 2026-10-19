extern int anim_phase;
extern int g6c7e;
fe90b(p4, p6, p8, p10, p12, p14, p16, p18, p20, p22, p24, p26, p28, p30, p32, p34)
{
	if (((p4 != 3) || (!p6)) && ((p6 != 2) && (p6 < 7))) goto Le958;
	drv_op_c6((g6c7e ? (p14 + p4) : (p12 + p4)), 1, (g6c7e != 0 ? (p12 + p4) : -1));
Le958:
	if (p4 >= 3) goto Leaf6;
	switch (p6) {
case 1:
case 3:
case 4:
	drv_op_c6((g6c7e ? (p18 + p4) : (p16 + p4)), 1, (g6c7e != 0 ? (p16 + p4) : -1));
	if (p6 != 3) goto Le9be;
	drv_op_c6((p20 + p4), (p4 < 3 ? 0 : 1), -1);
	goto Le9e2;
Le9be:
	if (p6 != 4) goto Le9e2;
	drv_op_c6((p22 + p4), (p4 < 3 ? 0 : 1), -1);
Le9e2:
	break;
case 5:
case 6:
	drv_op_c6((g6c7e ? (p26 + p4) : (p24 + p4)), 1, (g6c7e != 0 ? (p24 + p4) : -1));
	break;
case 7:
	drv_op_c6((g6c7e ? (p30 + p4) : (p28 + p4)), 0, (g6c7e != 0 ? (p28 + p4) : -1));
	break;
case 8:
	fe2e4(1, 0, 0, (((p4 << 1) + p8) + anim_phase), 72, 248, p4);
	break;
case 9:
	fe2e4(2, 0, 0, (p4 + p10), 72, 248, p4);
	break;
case 10:
case 11:
case 12:
case 13:
	drv_op_c6((g6c7e ? (p34 + p4) : (p32 + p4)), 0, (g6c7e != 0 ? (p32 + p4) : -1));
	break;
	}
Leaf6:
	;
}
