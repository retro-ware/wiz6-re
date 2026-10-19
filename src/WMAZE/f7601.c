extern int game_state_arg;
extern int maze_data;
extern int party_cell_x;
extern int party_cell_y;
extern int party_level;
extern int party_x;
extern int party_y;
can_enter_cell(p4, p6)
{
	int l2;
	int l4;
	int l6;
	int l8;
	int l10;
	register int rsi;
	register int rdi;
	rsi = (((party_level << 6) + (party_cell_y << 3)) + party_cell_x);
	if (((l6 = get_bitfield((maze_data + 504), rsi, 4)) != 1) && (l6 != 2)) goto L7664;
	if (get_bitfield((maze_data + 888), rsi, 2) != p4) goto L7664;
	return 1;
L7664:
	l8 = party_x;
	l10 = party_y;
	step_position(p4, 1);
	if (!move_to_maze_cell_m(20384, 20382, 20380, party_x, party_y)) goto L76ac;
	set_map_offset(l8, l10);
	return 1;
L76ac:
	rsi = (((party_level << 6) + (party_cell_y << 3)) + party_cell_x);
	if ((test_bit(p6, rsi) != 1) && (test_bit(19976, rsi) != 1)) goto L76f9;
	set_map_offset(l8, l10);
	return 1;
L76f9:
	l2 = test_bit((maze_data + 1082), rsi);
	l4 = test_bit((maze_data + 1178), rsi);
	if (l2 != 1) goto L776f;
	switch (game_state_arg) {
case 0:
case 1:
case 2:
case 3:
case 4:
case 6:
case 8:
case 10:
case 12:
	if ((game_state_arg == 12) && (party_level >= 9)) goto L7746;
	set_map_offset(l8, l10);
	return 1;
L7746:
	goto L776f;
	}
L776f:
	if (l4 != 1) goto L7791;
	switch (game_state_arg) {
case 2:
	set_map_offset(l8, l10);
	return 1;
	}
L7791:
	;
#asm
l7791:
	db 08bh,01eh,0a8h,04fh,08bh,03eh,09ch,04fh,08ah,081h,0c0h,006h,02ah,0e4h,0a3h,0e8h
	db 04eh
#endasm
	return 0;
}
