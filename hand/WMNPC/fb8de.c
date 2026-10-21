extern char g4330[];
extern int g50de[];
extern int g5142;
extern int g5274;
extern int g52cc;
extern int g52ce;
extern int game_state;
extern int sprite_count;
extern int sprite_list[];
extern int view_anim_state;
extern int view_pos_group[];
/* Allocate sprite list, clear combat state and load the NPC record g5274. */
init_npc_encounter()
{
	int l2;
	int l4;
	int l6;
	char x6[24];
	get_message(1500, 21098);
	game_state = 5;
	l2 = 0;
Lb8fd:
	((char *)(sprite_list[l2] = malloc(24)))[20] = -1;
	l2++;
	if (l2 < 12) goto Lb8fd;
	sprite_count = 0;
	view_anim_state = -2;
	for (l4 = 0; l4 < 2; l4++) {
	for (l6 = 0; l6 < 5; l6++) {
	*(int *)((char *)view_pos_group + ((l4 * 10) + (l6 << 1))) = 0;
	}
	}
	for (l2 = 0; l2 < 3; l2++) {
	g4330[l2] = -1;
	}
	for (l4 = 0; l4 < 10; l4++) {
	for (l6 = 0; l6 < 5; l6++) {
	*(int *)((char *)g50de + ((l4 * 10) + (l6 << 1))) = 0;
	}
	}
	g5142 = 0;
	access_scenario_record(5, 20806, g5274, 0);
	movmem(((g5274 << 1) + 13472), 21112, 2);
	g52ce = 0;
	g52cc = 0;
}
