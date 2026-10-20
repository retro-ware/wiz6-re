extern char *g43b8;
extern int combat_gold;
extern int g4338;
extern int g433a;
extern int g4354;
extern int g43c8;
extern int treasure_id;
/* Set up a new encounter: clear groups, generate monsters, roll surprise, fill party group. */
start_encounter()
{
	char x0[4];
	g43c8 = 0;
	combat_gold = 0;
	if (((g433a == 128) || (g433a == 151)) || (g433a == 153)) {
	g4354 = 1;
	}
	clear_combat_groups();
	generate_monster_group(g433a, 1);
	treasure_id = (unsigned char)(g43b8 + g4338)[162];
	check_group_surprise();
	fill_party_group();
}
