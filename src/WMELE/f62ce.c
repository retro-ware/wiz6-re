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
#asm
	db 0a1h,03ah,043h,03dh,080h,000h,074h,00ah,03dh,097h,000h,074h,005h,03dh,099h,000h
	db 075h,006h
#endasm
L62f3:
	g4354 = 1;
L62f9:
	clear_combat_groups();
	generate_monster_group(g433a, 1);
	treasure_id = (unsigned char)(g43b8 + g4338)[162];
	check_group_surprise();
	fill_party_group();
}
