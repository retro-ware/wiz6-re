extern int g500a;
extern int monster_groups[];
f825f(p4, p6, p8, p10, p12, p14, p16, p18, p20, p22, p24, p26)
{
	int l2;
	int l4;
	int l6;
	int l8;
	int l10;
	int l12;
	g500a = 2;
	if (p18 > 0) {
	l10 = f80cc(p4, p10, p18);
	} else {
	l10 = p18;
	}
	if (p20 > 0) {
	l12 = f80cc(p4, p10, p20);
	} else {
	l12 = p20;
	}
	if ((l10 == p18) && (l12 == p20)) goto L82c3;
	show_combat_msg(3213);
L82c3:
	if (p6 < 0) goto L8336;
	if (p16 == 1) {
	do_damage_effect(p4, p6, p8, p10, p12, p14, p24, p26, 3402, 1);
	} else {
	do_status_effect(p4, p6, p8, p10, p12, p14, l10, l12, p22, 3402, 1);
	}
	if (!p4) {
	draw_member_card_x(p6, 0);
	}
	goto L83ef;
L8336:
	l4 = (unsigned char)(*(char **)((char *)monster_groups + (p4 << 1)))[413];
	l6 = (p6 < 0 ? -p6 : p6);
	if (l6 > l4) {
	l6 = l4;
	}
	l8 = random((l4 - l6));
	l2 = l8;
	goto L83e4;
L8377:
	if (p16 == 1) {
	do_damage_effect(p4, l2, p8, p10, p12, p14, p24, p26, 3402, 1);
	} else {
	do_status_effect(p4, l2, p8, p10, p12, p14, l10, l12, p22, 3402, 1);
	}
	if (!p4) {
	draw_member_card_x(l2, 0);
	}
	l2++;
L83e4:
	if ((l8 + l6) > l2) goto L8377;
L83ef:
	;
}
