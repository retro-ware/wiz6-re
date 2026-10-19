extern char *g4fa8;
extern int cell_event_index;
extern int game_state;
extern int party_facing;
extern int treasure_id;
check_locked_door_at(event)
{
	int l2;
	l2 = *(int *)((g4fa8 + (event << 1)) + 576);
	if ((extract_bits(l2, 14, 1) != 1) || (extract_bits(l2, 12, 2) == party_facing)) goto Ldae4;
	return 0;
Ldae4:
	if (extract_bits(l2, 8, 1)) goto Ldafe;
	return 0;
Ldafe:
	cell_event_index = event;
	treasure_id = (unsigned char)(g4fa8 + cell_event_index)[1584];
	game_state = 21;
	return 1;
}
