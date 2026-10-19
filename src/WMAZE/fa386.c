extern char *g4fa8;
extern int cell_event_index;
extern int g4f8a;
extern int game_state;
extern int party_facing;
extern int treasure_id;
do_message_event()
{
	int l2;
	char x2[2];
	l2 = *(int *)((g4fa8 + (cell_event_index << 1)) + 576);
	if (extract_bits(l2, 14, 1) != 1) goto La3d4;
	g4f8a = extract_bits(l2, 12, 2);
	if (g4f8a == party_facing) goto La3d4;
	return;
La3d4:
	if (*(int *)(g4fa8 + (cell_event_index << 1)) <= 0) goto La3f0;
	show_message_text_m(*(int *)(g4fa8 + (cell_event_index << 1)), 0);
La3f0:
	if (extract_bits(l2, 8, 1) != 1) goto La408;
	return;
La408:
	treasure_id = (unsigned char)(g4fa8 + cell_event_index)[1584];
	game_state = 21;
	return;
}
