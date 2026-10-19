extern char *g4fa8;
extern int cell_event_index;
extern int game_state_arg;
set_flag_event()
{
	int l2;
	int l4;
	int l6;
	int l8;
	if ((unsigned)(g4fa8 + cell_event_index)[1584] <= 0) goto La8ad;
	play_sound((unsigned char)(g4fa8 + cell_event_index)[1584]);
La8ad:
	l2 = *(int *)((g4fa8 + (cell_event_index << 1)) + 576);
	l6 = extract_bits(l2, 15, 1);
	if (test_bit(((game_state_arg * 10) + 20204), *(int *)(g4fa8 + (cell_event_index << 1))) != l6) goto La92f;
	if (test_bit(((game_state_arg * 10) + 20204), *(int *)((g4fa8 + (cell_event_index << 1)) + 288)) == l6) goto La934;
La92f:
	return;
La934:
	l4 = extract_bits(l2, 0, 8);
	l8 = extract_bits(l2, 8, 4);
	switch (extract_bits(l2, 12, 2)) {
case 0:
	set_bit(((l8 * 10) + 20204), l4, 0);
	goto Laa02;
case 1:
	set_bit(((l8 * 10) + 20204), l4, 1);
	goto Laa02;
case 2:
	set_bit(((l8 * 10) + 20204), l4, ((test_bit(((l8 * 10) + 20204), l4) + 1) % 2));
	goto Laa02;
	}
Laa02:
	if (extract_bits(l2, 14, 1) != 1) goto Laa4d;
	set_bit(((l8 * 10) + 13304), l4, test_bit(((l8 * 10) + 20204), l4));
Laa4d:
	return;
}
