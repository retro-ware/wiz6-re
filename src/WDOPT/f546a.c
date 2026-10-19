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
	if (game_state_arg == 10) goto L54b2;
	if (game_state_arg != 12) goto L54d8;
L54b2:
	*(int *)((char *)g50c6 + ((col * 10) + (row << 1))) = g50f8;
	return;
L54d8:
	*(int *)((char *)g50c6 + ((col * 10) + (row << 1))) = pclist_sex;
	*(int *)((char *)g50fe + ((col * 10) + (row << 1))) = g50fc;
	*(int *)((char *)g5132 + ((col * 10) + (row << 1))) = g5130;
	return;
L5509:
	rsi = (((l12 << 6) + (l10 << 3)) + l8);
	if (get_bitfield((maze_data + 504), rsi, 4) != 1) goto L5560;
	l20 = get_bitfield((maze_data + 888), rsi, 2);
	mark_map_neighbor(l20, g5164, col, row);
L5560:
	if (get_bitfield((maze_data + 504), rsi, 4) != 2) goto L559d;
	l20 = get_bitfield((maze_data + 888), rsi, 2);
	mark_map_neighbor(l20, g5166, col, row);
L559d:
	if (get_bitfield((maze_data + 504), rsi, 4) != 13) goto L55ba;
	l14 = g50f8;
L55ba:
	if (get_bitfield((maze_data + 504), rsi, 4) != 14) goto L55d7;
	l14 = g5168;
L55d7:
	if ((l2 = test_bit((maze_data + 1082), rsi)) != 1) goto L55f3;
	l14 = g516a;
L55f3:
	if ((l4 = test_bit((maze_data + 1178), rsi)) != 1) goto L560f;
	l14 = pclist_sex;
L560f:
	if (l2 != 1) goto L5676;
	switch (game_state_arg) {
case 0:
case 4:
case 5:
case 12:
	if (game_state_arg != 12) goto L562f;
	if (l12 >= 9) goto L562f;
	l14 = g50f8;
	goto L5635;
L562f:
	l14 = g516a;
L5635:
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
	if (l14 == -1) goto L56d1;
	*(int *)((char *)g50c6 + ((col * 10) + (row << 1))) = l14;
L56d1:
	l16 = -1;
	l18 = get_wall_in_direction(0, l12, l8, l10, x, y);
	goto L570c;
	l16 = g516c;
#asm
	db 0ebh,01fh
#endasm
	l16 = g50fc;
#asm
	db 0ebh,017h
#endasm
	l16 = g516e;
#asm
	db 0ebh,00fh
#endasm
L570c:
	;
#asm
l570c:
	db 03dh,001h,000h,074h,0e3h,03dh,002h,000h,074h,0e6h,03dh,003h,000h,074h,0e9h
#endasm
L571b:
	if (get_bitfield((maze_data + 504), rsi, 4) != 7) goto L574e;
	if (get_bitfield((maze_data + 888), rsi, 2)) goto L574e;
	l16 = g5170;
L574e:
	if (l16 == -1) goto L5775;
	*(int *)((char *)g50fe + ((col * 10) + (row << 1))) = l16;
L5775:
	l16 = -1;
	l18 = get_wall_in_direction(3, l12, l8, l10, x, y);
	goto L57b0;
	l16 = g5172;
#asm
	db 0ebh,01fh
#endasm
	l16 = g5130;
#asm
	db 0ebh,017h
#endasm
	l16 = g5174;
#asm
	db 0ebh,00fh
#endasm
L57b0:
	;
#asm
l57b0:
	db 03dh,001h,000h,074h,0e3h,03dh,002h,000h,074h,0e6h,03dh,003h,000h,074h,0e9h
#endasm
L57bf:
	if (get_bitfield((maze_data + 504), rsi, 4) != 7) goto L57f3;
	if (get_bitfield((maze_data + 888), rsi, 2) != 3) goto L57f3;
	l16 = g5176;
L57f3:
	if (l16 == -1) goto L581a;
	*(int *)((char *)g5132 + ((col * 10) + (row << 1))) = l16;
L581a:
	return;
}
