#asm
	extrn move_to_maze_cell_m_:near
#endasm
extern char *g4fa8;
extern char *maze_data;
extern int cell_event_index;
extern int g4eca;
extern int g5032;
extern int game_state_arg;
extern int party_cell_x;
extern int party_cell_y;
extern int party_level;
extern int party_x;
extern int party_y;
try_move(p4)
{
	int l2;
	int l4;
	int l6;
	register int rsi;
	save_position();
	rsi = (((party_level << 6) + (party_cell_y << 3)) + party_cell_x);
	g5032 = 1;
	if ((((l6 = get_bitfield((maze_data + 504), rsi, 4)) == 1) || (l6 == 2)) && (get_bitfield((maze_data + 888), rsi, 2) == p4)) {
	g5032 = 0;
	}
	step_position(p4, 1);
	if (!move_to_maze_cell_m(20384, 20382, 20380, party_x, party_y)) goto L57b5;
	if ((game_state_arg != 10) && (game_state_arg != 12)) goto L57a2;
	restore_position();
	return 0;
L57a2:
	kill_party(2022, 4);
	return 1;
L57b5:
	rsi = (((party_level << 6) + (party_cell_y << 3)) + party_cell_x);
	l2 = test_bit((maze_data + 1082), rsi);
	l4 = test_bit((maze_data + 1178), rsi);
	if ((g4eca == 1) && (!l2)) {
	g4eca = 0;
	}
	if (l2 != 1) goto L590e;
	switch (game_state_arg) {
case 0:
case 2:
case 3:
case 4:
case 6:
case 11:
	kill_party(10000, 4);
	return 1;
case 1:
	if (party_level != 10) goto L58af;
	redraw_maze_view();
	play_sound(8);
	if (party_cell_x < 4) {
	party_level = 4;
	party_cell_x += 4;
	party_cell_y += 3;
	} else {
	party_level = 5;
	party_cell_x += -4;
	party_cell_y += 3;
	}
	party_x = ((unsigned char)(maze_data + party_level)[480] + party_cell_x);
#asm
	db 08ah,081h,0ech,001h,02ah,0e4h,003h,006h,09eh,04fh,0a3h,0a2h,04fh,050h,0ffh,036h
	db 0a4h,04fh,0b8h,09ch,04fh,050h,0b8h,09eh,04fh,050h,0b8h,0a0h,04fh,050h
	call move_to_maze_cell_m_
	db 083h,0c4h,00ah
#endasm
	l2 = 0;
	l4 = 0;
	save_position();
	goto L58c3;
L58af:
	kill_party(10000, 4);
	return 1;
L58c3:
	goto L590e;
case 5:
	goto L590e;
case 8:
case 10:
case 12:
	if (((game_state_arg == 12) && (party_level >= 9)) || (g4eca)) goto L58e5;
	restore_position();
	return 0;
L58e5:
	goto L590e;
	}
L590e:
	if (l4 != 1) goto L5932;
	switch (game_state_arg) {
case 2:
	kill_party(2022, 4);
	return 1;
	}
L5932:
	cell_event_index = (unsigned char)(g4fa8 + party_level)[1728];
	return 0;
}
