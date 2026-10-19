extern char *g4f84;
extern char *g4fa8;
extern int cell_event_index;
extern int g4338;
extern int g4f8a;
extern int game_state;
extern int party_facing;
npc_event()
{
	int l2;
	l2 = *(int *)((g4fa8 + (cell_event_index << 1)) + 576);
	if (extract_bits(l2, 2, 1) != 1) goto Lb2a0;
	if ((g4f8a = extract_bits(l2, 0, 2)) == party_facing) goto Lb2a0;
	return;
Lb2a0:
	*(int *)g4f84 = (unsigned char)(g4fa8 + cell_event_index)[1584];
	g4338 = 1;
	game_state = 18;
	cell_event_index++;
	return;
}
