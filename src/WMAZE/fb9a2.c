extern char *g4fa8;
extern int cell_event_index;
extern int game_state_arg;
fb9a2()
{
	int l2;
	int l4;
	int l6;
	int l8;
	int l10;
	wait_animating_m(5);
	l2 = *(int *)((g4fa8 + (cell_event_index << 1)) + 576);
	l4 = extract_bits(l2, 0, 8);
	l6 = (unsigned char)(g4fa8 + cell_event_index)[1584];
	if (l6 <= 0) goto Lb9f2;
	l8 = l6;
	goto Lb9fc;
Lb9f2:
	l8 = random(l4);
Lb9fc:
	l10 = (random(l4) < l8 ? *(int *)(g4fa8 + (cell_event_index << 1)) : *(int *)((g4fa8 + (cell_event_index << 1)) + 288));
	set_bit(((game_state_arg * 10) + 20204), l10, 0);
	if (extract_bits(l2, 8, 1) != 1) goto Lba7b;
	set_bit(((game_state_arg * 10) + 13304), l10, 0);
Lba7b:
	if (game_state_arg != 7) goto Lbac6;
	if (l10 != 24) goto Lbac6;
	set_bit(((game_state_arg * 10) + 20204), 18, 1);
	set_bit(((game_state_arg * 10) + 13304), 18, 1);
Lbac6:
	set_event_flags(extract_bits(*(int *)((g4fa8 + (cell_event_index << 1)) + 576), 9, 2));
}
