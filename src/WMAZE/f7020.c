extern char *g4f84;
extern char *g4fa8;
extern char g450c[];
extern char g450d[];
extern char g458d[];
extern char pc_condition[];
extern int cell_event_index;
extern int g4338;
extern int g4354;
extern int g4eca;
extern int g4f88;
extern int g4f8a;
extern int g4fb0;
extern int g5032;
extern int g5034;
extern int g5036;
extern int g503c;
extern int g503e;
extern int game_state;
extern int game_state_arg;
extern int main_window;
extern int maze_data;
extern int party_cell_x;
extern int party_cell_y;
extern int party_count;
extern int party_facing;
extern int party_level;
extern int pc_stamina[];
extern int return_cmd;
extern long g4f80;
/* Main maze loop: read input, move, run cell events until game state leaves 5. */
maze_main_loop()
{
	int l2;
	int l4;
	char x4[2];
	int l8;
	int l10;
	int l12;
	int l14;
	if ((cell_event_index >= 0) && ((unsigned char)(g4fa8 + party_level)[1728] > cell_event_index)) {
	cell_event_index = (unsigned char)(g4fa8 + party_level)[1728];
	}
	if (return_cmd != 23) {
	flood_mark_cells(party_level, party_cell_x, party_cell_y, 0);
	}
	init_maze_screen();
	refresh_all_windows();
	return_cmd = 5;
	game_state = 5;
	g503e = 1;
L707a:
	if (g5032 == 1) {
	redraw_maze_view();
	}
	if ((l10 = test_bit(19976, (((party_level << 6) + (party_cell_y << 3)) + party_cell_x))) != 1) goto L70d9;
	*(int *)g4f84 = f467b(f46e8(party_level));
	g4338 = l10;
	g4354 = 0;
	game_state = 10;
	return;
L70d9:
	if ((test_bit(20072, (((party_level << 6) + (party_cell_y << 3)) + party_cell_x)) != 1) || (g5034 != 1)) goto L7114;
	run_cell_events();
	if (game_state == 5) goto L7114;
	return;
L7114:
	g4f80 += 1L;
	if ((g4f80 % 10L) == 5L) goto L713b;
	goto L71d7;
L713b:
	l4 = 0;
	goto L71cb;
L7143:
	if ((unsigned)pc_condition[(432 * l4)] >= 3) goto L71c8;
	l8 = (((g4f80 % 60L) / 10L) == (long)l4 ? 1 : 0);
	if (!l8) goto L71b3;
	*(int *)((char *)pc_stamina + (432 * l4)) -= ((unsigned char)g458d[(432 * l4)] + 1);
	if (*(int *)((char *)pc_stamina + (432 * l4)) >= 0) goto L71b3;
	*(int *)((char *)pc_stamina + (432 * l4)) = 0;
L71b3:
	heal_member(l4, 0, 0, 1, l8);
L71c8:
	l4++;
L71cb:
	if (l4 < party_count) goto L7143;
L71d7:
	l12 = 0;
	l14 = 0;
	l4 = 0;
	goto L720e;
L71e8:
	if (!pc_condition[(432 * l4)]) {
	l12++;
	}
	if (((unsigned)g450c[(432 * l4)] > 0) || ((unsigned)g450d[(432 * l4)] > 0)) {
	l14++;
	}
	l4++;
L720e:
	if (l4 < party_count) goto L71e8;
	if (l12) goto L7226;
	game_state = 8;
	return;
L7226:
	if ((l14 != party_count) || (rest_party() != 1)) goto L725f;
	*(int *)g4f84 = f467b(f46e8(party_level));
	g4338 = 0;
	g4354 = 0;
	game_state = 10;
	return;
L725f:
	g5032 = 0;
	g5034 = 0;
	if (random(1000) < 995) goto L72a0;
	*(int *)g4f84 = f467b(f46e8(party_level));
	g4338 = 0;
	g4354 = 0;
	game_state = 10;
	return;
L72a0:
	if (g503c == 1) {
	refresh_all_windows();
	g503c = 0;
	}
	if (((game_state_arg != 5) && ((game_state_arg != 12) || (party_level <= 8))) || (test_bit((maze_data + 1082), (((party_level << 6) + (party_cell_y << 3)) + party_cell_x)) != 1)) goto L7311;
	erase_window(main_window, 1);
	delay_long();
	show_maze_message(2023);
	g503e = 1;
	goto L735b;
L7311:
	if ((game_state_arg != 8) || (g4eca != 1)) goto L7340;
	erase_window(main_window, 1);
	delay_long();
	show_maze_message(2054);
	g503e = 1;
	goto L735b;
L7340:
	if (g503e != 1) goto L735b;
	erase_window(main_window, 1);
	g503e = 0;
L735b:
	set_click_region(0, 33, 20, 34, 21);
	set_click_region(1, 36, 22, 37, 23);
	set_click_region(2, 32, 22, 35, 23);
	set_click_region(3, 30, 22, 31, 23);
	set_click_region(4, 21, 20, 27, 23);
	set_click_region(5, 255, 0, 0, 0);
	l2 = get_maze_input(20510, 13720);
	switch (l2) {
case 0:
	g5036 = 0;
	move_party(0);
	tick_effect_timers(1);
	goto L75ca;
case 1:
case 3:
	g5036 = 0;
	if (!g4f88) {
	party_facing = ((party_facing + l2) % 4);
	g5032 = 1;
	if (party_facing == g4f8a) {
	g5034 = 1;
	cell_event_index = (unsigned char)(g4fa8 + party_level)[1728];
	}
	} else {
	move_party((l2 == 3 ? -1 : 1));
	}
	tick_effect_timers(1);
	goto L75ca;
case 2:
	g4f88 = ((g4f88 + 1) % 2);
	defer_window_draw(g4fb0);
	if (!g4f88) {
	f6f30(g4fb0, 13, 1, 5, 6, 7, 8);
	f6f30(g4fb0, 10, 3, 1, 13, 3, 14);
	f6fa3(g4fb0, 12, 3, 17);
	f6f30(g4fb0, 16, 3, 15, 10, 16, 12);
	} else {
	f6f30(g4fb0, 13, 1, 5, 6, 7, 8);
	f6f30(g4fb0, 10, 3, 1, 2, 3, 4);
	f6fa3(g4fb0, 12, 3, 25);
	f6f30(g4fb0, 16, 3, 9, 10, 11, 12);
	}
	resume_window_draw(g4fb0);
	refresh_window(g4fb0);
	g5032 = 1;
	goto L75ca;
case 4:
	maze_party_menu();
	goto L75ca;
	}
L75ca:
	if (game_state == 5) goto L707a;
	return;
}
