extern int g4fc8;
extern int g500a;
extern int monster_groups[];
f86aa(p4, p6, p8, p10, p12, p14, p16, p18, p20, p22, p24)
{
	int l2;
	int l4;
	int l6;
	g500a = 2;
	l4 = 0;
	if ((p10 != 3) || (p14 != 1)) goto L872d;
	if ((p8 != 5) || (((unsigned char)(*(char **)((char *)monster_groups + (p4 << 1)))[399] / 5) <= p16)) goto L8717;
	clear_msg_line(2);
	print_msg_centered(3212, 5, 2);
	combat_delay((g4fc8 / 2));
	return;
L8717:
	if (p8 == 5) {
	l4 = 2;
	}
	if (p8 != 11) goto L872d;
	l4 = 3;
L872d:
	for (l2 = 0; (unsigned char)(*(char **)((char *)monster_groups + (p4 << 1)))[413] > l2; l2++) {
	l6 = p12;
	if ((l4 > 0) && (*(int *)((char *)monster_groups[p4] + (44 * l2)) > (p16 * l4))) {
	l6 = -100;
	}
	f825f(p4, l2, p6, p8, p10, l6, p14, p16, p18, p20, p22, p24);
	}
	return;
}
