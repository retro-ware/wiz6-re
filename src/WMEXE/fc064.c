extern char g019d[];
extern char g4515[];
extern char g452c[];
extern char g505c;
extern int g435c;
extern int g435e;
extern int g4fc8;
extern int group_monster_rec[];
extern int monster_group_count;
extern int monster_groups[];
extern int party_count;
extern int pc_level[];
do_hide(p4)
char *p4;
{
	int l2;
	int l4;
	int l6;
	if (g435e) goto Lc0db;
	l6 = ((*(int *)((char *)pc_level + (432 * g435c)) + (unsigned char)g452c[(432 * g435c)]) + 50);
	for (l2 = 1; l2 <= monster_group_count; l2++) {
	l6 -= (((unsigned char)g019d[monster_groups[l2]] + (unsigned char)(*(char **)((char *)group_monster_rec + (l2 << 1)))[122]) + (unsigned char)(*(char **)((char *)group_monster_rec + (l2 << 1)))[135]);
	}
	goto Lc12b;
Lc0db:
	l6 = ((*(int *)p4 * 5) + 50);
	l4 = (party_count > 3 ? 3 : party_count);
	for (l2 = 0; l2 < l4; l2++) {
	l6 -= (*(int *)((char *)pc_level + (432 * l2)) + (unsigned char)g4515[(432 * l2)]);
	}
Lc12b:
	get_combatant_name(20492, g435e, g435c);
	get_message(3515, 20652);
	g505c = 0;
	print_combat_line(20492, 20652, 20572, (g435e == 0 ? 1 : 6), 14, 0);
	combat_delay((g4fc8 / 4));
	if (random(100) >= l6) goto Lc1c0;
	p4[43] = 1;
	try_raise_skill(g435c, 16, 1);
	print_msg_centered(3520, 6, 2);
	goto Lc1d2;
Lc1c0:
	print_msg_centered(3521, 6, 2);
Lc1d2:
	combat_delay((g4fc8 / 4));
}
