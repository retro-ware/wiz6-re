extern int g500a;
extern int monster_groups[];
f83f3(p4, p6, p8, p10, p12, p14, p16, p18, p20, p22, p24, p26, p28, p30, p32)
{
	int l2;
	int l4;
	int l6;
	int l8;
	int l10;
	int l12;
	int l14;
	int l16;
	g500a = 4;
	if (p16 > 0) {
	l10 = f80cc(p4, p10, p16);
	} else {
	l10 = p16;
	}
	if (p18 > 0) {
	l12 = f80cc(p4, p10, p18);
	} else {
	l12 = p18;
	}
	if (p24 > 0) {
	l14 = f80cc(p4, p10, p24);
	} else {
	l14 = p24;
	}
	if (p26 > 0) {
	l16 = f80cc(p4, p10, p26);
	} else {
	l16 = p26;
	}
	if ((((l10 == p16) && (l12 == p18)) && (l14 == p24)) && (l16 == p26)) goto L84a7;
	show_combat_msg(3213);
L84a7:
	if (p6 < 0) goto L853d;
	if (f7ddc(p4, p6, l10, l12, p12, p10, p14) <= 0) goto L8527;
	if (p22 != 1) goto L84fe;
	do_damage_effect(p4, p6, p8, p10, p20, p14, p30, p32, 3408, 0);
	goto L8527;
L84fe:
	do_status_effect(p4, p6, p8, p10, p20, p14, l14, l16, p28, 3408, 0);
L8527:
	if (!p4) {
	draw_member_card_x(p6, 0);
	}
	goto L861a;
L853d:
	l4 = (unsigned char)(*(char **)((char *)monster_groups + (p4 << 1)))[413];
	l6 = (p6 < 0 ? -p6 : p6);
	if (l6 > l4) {
	l6 = l4;
	}
	l8 = random((l4 - l6));
	l2 = l8;
	goto L860c;
L857f:
	if (f7ddc(p4, l2, l10, l12, p12, p10, p14) <= 0) goto L85f6;
	if (p22 != 1) goto L85cd;
	do_damage_effect(p4, l2, p8, p10, p20, p14, p30, p32, 3408, 0);
	goto L85f6;
L85cd:
	do_status_effect(p4, l2, p8, p10, p20, p14, l14, l16, p28, 3408, 0);
L85f6:
	if (!p4) {
	draw_member_card_x(l2, 0);
	}
	l2++;
L860c:
	if ((l8 + l6) > l2) goto L857f;
L861a:
	;
}
