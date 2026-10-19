extern char *g43b8;
extern char g505c;
extern int g435c;
extern int g435e;
extern int g4fc8;
extern int g5114;
extern int group_monster_rec[];
fb85f(p4, p6, p8, p10)
{
	char x0[2];
	get_combatant_name(20492, g435e, g435c);
	get_message(p4, 20652);
	g505c = 0;
	if (p6 < 0) goto Lb89c;
	get_message(p6, 20572);
Lb89c:
	print_combat_line(20492, 20652, 20572, (g435e == 0 ? 1 : 6), p8, p8);
	if (p10 != 1) goto Lb8f7;
	combat_delay(2);
	print_msg_centered(3200, 3, 2);
	combat_delay((g4fc8 / 2));
	return 1;
Lb8f7:
	if (((!g435e) || (((unsigned)g43b8[210] <= 0) || (g43b8[210] == 6))) || ((*(char **)((char *)group_monster_rec + (g435e << 1)))[210] != g43b8[210])) goto Lb92f;
	g5114 = 14;
Lb92f:
	return 0;
}
