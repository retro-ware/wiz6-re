extern int g50c6[];
extern int g50f8;
extern int g50fc;
extern int g50fe[];
extern int g5130;
extern int g5132[];
extern int g5164;
extern int g5166;
extern int g5168;
extern int g516a;
extern int g516c;
extern int g516e;
extern int g5170;
extern int g5172;
extern int g5174;
extern int g5176;
extern int game_state_arg;
extern int maze_data;
extern int party_cell_x;
extern int party_cell_y;
extern int party_level;
extern int pclist_sex;
/* Fill the overhead map cell at col, row from maze cell x, y. */
map_cell(x, y, col, row)
{
	int l2;
	int l4;
	char x4[2];
	int l8;
	int l10;
	int l12;
	int l14;
	int l16;
	int l18;
	int l20;
	register int rsi;
	l14 = -1;
	l8 = party_cell_x;
	l10 = party_cell_y;
	l12 = party_level;
	if (!next_sprite_slot_dopt(&l8, &l10, &l12, x, y)) goto L5509;
	if ((game_state_arg != 10) && (game_state_arg != 12)) goto L54d8;
	*(int *)((char *)g50c6 + ((col * 10) + (row << 1))) = g50f8;
	return;
L54d8:
	*(int *)((char *)g50c6 + ((col * 10) + (row << 1))) = pclist_sex;
	*(int *)((char *)g50fe + ((col * 10) + (row << 1))) = g50fc;
	*(int *)((char *)g5132 + ((col * 10) + (row << 1))) = g5130;
	return;
L5509:
	rsi = (((l12 << 6) + (l10 << 3)) + l8);
	if (get_bitfield((maze_data + 504), rsi, 4) == 1) {
	l20 = get_bitfield((maze_data + 888), rsi, 2);
	mark_map_neighbor(l20, g5164, col, row);
	}
	if (get_bitfield((maze_data + 504), rsi, 4) == 2) {
	l20 = get_bitfield((maze_data + 888), rsi, 2);
	mark_map_neighbor(l20, g5166, col, row);
	}
	if (get_bitfield((maze_data + 504), rsi, 4) == 13) {
	l14 = g50f8;
	}
	if (get_bitfield((maze_data + 504), rsi, 4) == 14) {
	l14 = g5168;
	}
	if ((l2 = test_bit((maze_data + 1082), rsi)) == 1) {
	l14 = g516a;
	}
	if ((l4 = test_bit((maze_data + 1178), rsi)) == 1) {
	l14 = pclist_sex;
	}
	if (l2 != 1) goto L5676;
	switch (game_state_arg) {
case 0:
case 4:
case 5:
case 12:
	if ((game_state_arg == 12) && (l12 < 9)) {
	l14 = g50f8;
	} else {
	l14 = g516a;
	}
	goto L5676;
case 1:
	l14 = g5168;
	goto L5676;
case 2:
case 3:
case 6:
case 11:
	l14 = g5168;
	goto L5676;
case 8:
case 10:
	l14 = g50f8;
	goto L5676;
	}
L5676:
	if (l4 != 1) goto L56aa;
	switch (game_state_arg) {
case 0:
case 1:
case 3:
case 4:
case 6:
case 8:
case 10:
case 11:
case 12:
	goto L56aa;
	}
L56aa:
	if (l14 != -1) {
	*(int *)((char *)g50c6 + ((col * 10) + (row << 1))) = l14;
	}
	l16 = -1;
	l18 = get_wall_in_direction(0, l12, l8, l10, x, y);
	switch (l18) {
case 1:
	l16 = g516c;
	goto L571b;
case 2:
	l16 = g50fc;
	goto L571b;
case 3:
	l16 = g516e;
	goto L571b;
	}
L571b:
	if ((get_bitfield((maze_data + 504), rsi, 4) == 7) && (!get_bitfield((maze_data + 888), rsi, 2))) {
	l16 = g5170;
	}
	if (l16 != -1) {
	*(int *)((char *)g50fe + ((col * 10) + (row << 1))) = l16;
	}
	l16 = -1;
	l18 = get_wall_in_direction(3, l12, l8, l10, x, y);
	switch (l18) {
case 1:
	l16 = g5172;
	goto L57bf;
case 2:
	l16 = g5130;
	goto L57bf;
case 3:
	l16 = g5174;
	goto L57bf;
	}
L57bf:
	if ((get_bitfield((maze_data + 504), rsi, 4) == 7) && (get_bitfield((maze_data + 888), rsi, 2) == 3)) {
	l16 = g5176;
	}
	if (l16 != -1) {
	*(int *)((char *)g5132 + ((col * 10) + (row << 1))) = l16;
	}
	return;
}
