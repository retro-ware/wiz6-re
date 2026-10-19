extern char g019d[];
extern char g505c;
extern int g4354;
extern int g435c;
extern int g435e;
extern int g4fc8;
extern int group_monster_rec[];
extern int monster_group_count;
extern int monster_groups[];
do_run_away(p4)
char *p4;
{
	int l2;
	int l4;
	l4 = (*(int *)p4 + 90);
	for (l2 = 1; l2 <= monster_group_count; l2++) {
	l4 = ((l4 - ((unsigned char)(*(char **)((char *)group_monster_rec + (l2 << 1)))[122] * (unsigned char)g019d[monster_groups[l2]])) - (((unsigned char)(*(char **)((char *)group_monster_rec + (l2 << 1)))[137] - (unsigned char)(*(char **)((char *)group_monster_rec + (g435e << 1)))[137]) << 1));
	}
	if (g4354 != 1) goto Lc273;
	l4 = 0;
Lc273:
	get_combatant_name(20492, g435e, g435c);
	get_message(3517, 20652);
	g505c = 0;
	print_combat_line(20492, 20652, 20572, (g435e == 0 ? 1 : 6), 14, 0);
	combat_delay((g4fc8 / 4));
	if (random(100) >= l4) goto Lc2f6;
	p4[43] = 2;
	print_msg_centered(3522, 6, 2);
	goto Lc308;
Lc2f6:
	print_msg_centered(3523, 6, 2);
Lc308:
	combat_delay((g4fc8 / 4));
}
