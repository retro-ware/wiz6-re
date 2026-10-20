extern char g505c;
extern int g435c;
extern int g435e;
extern int g4fc8;
do_advance_retreat(p4, p6)
{
	int l2;
	int l4;
	int l6;
	if (p4 != p6) goto Lc400;
	return;
Lc400:
	if ((p4 % 2) != (p6 % 2)) goto Lc41d;
	l4 = 0;
	goto Lc42d;
Lc41d:
	if ((p6 % 2)) goto Lc428;
	l4 = 1;
	goto Lc42d;
Lc428:
	l4 = -1;
Lc42d:
	get_combatant_name(20492, g435e, g435c);
	if (p4 > p6) {
	get_message(3513, 20652);
	l2 = -2;
	} else {
	get_message(3514, 20652);
	l2 = 2;
	}
	g505c = 0;
	print_combat_line(20492, 20652, 20572, 1, 14, 0);
	combat_delay(3);
Lc49a:
	if ((p6 + l4) == p4) goto Lc4c0;
	l6 = (p4 + l2);
	swap_members(p4, l6);
	p4 += l2;
	goto Lc49a;
Lc4c0:
	if (l4) {
	swap_members((p6 + l4), p6);
	}
	combat_delay((g4fc8 / 2));
	return;
}
