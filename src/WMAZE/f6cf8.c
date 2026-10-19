extern char *g4f84;
extern char *main_window;
extern char pc_item_count[];
extern int cur_member;
extern int g4338;
extern int g4354;
extern int g4fb0;
extern int g503c;
extern int game_state;
extern int party_count;
extern int party_level;
extern int return_cmd;
maze_party_menu()
{
	char x0[4];
	int l6;
	char x6[10];
	int l18;
	char x18[6];
	int l26;
	int l36[5];
	int l38;
	char x38[20];
	defer_window_draw(g4fb0);
	l38 = create_window(0, 19, 19, 5, 20, -4, 0, 0);
	fill_window(l38, 32, 3, 0);
	erase_window(main_window, 0);
	f0a42(main_window, 0);
	refresh_all_windows();
	g503c = 1;
	set_cursor(main_window, 3, 0);
	print_message(2002, main_window, 18);
	main_window[6]++;
	l6 = 0;
L6d93:
	l36[l6] = 1;
	l6++;
	if (l6 <= 8) goto L6d93;
	if (party_count >= 2) goto L6db8;
	l26 = 0;
L6db8:
	l18 = -1;
	l6 = maze_menu_select(l38, 2005, l36, 1, 1, 7, 3, 5, 0);
	destroy_window(l38, 0);
	switch (l6) {
case 0:
	search_cell();
	tick_effect_timers(1);
	goto L6f16;
case 1:
	cur_member = choose_party_member_m(2026, 1);
	if (cur_member == -1) goto L6e31;
	tick_effect_timers(1);
	game_state = 17;
	return_cmd = 5;
L6e31:
	goto L6f16;
case 2:
	cur_member = choose_party_member_m(2029, 1);
	if (cur_member == -1) goto L6e67;
	if (!is_member_able(cur_member)) goto L6e67;
	tick_effect_timers(1);
	game_state = 19;
	return_cmd = 5;
L6e67:
	goto L6f16;
case 3:
	cur_member = choose_party_member_m(2031, 1);
	if (cur_member == -1) goto L6ead;
	if (!is_member_able(cur_member)) goto L6ead;
	if ((unsigned)pc_item_count[(432 * cur_member)] <= 0) goto L6ead;
	tick_effect_timers(1);
	game_state = 20;
	return_cmd = 5;
L6ead:
	goto L6f16;
case 4:
	handle_locked_door();
	tick_effect_timers(1);
	goto L6f16;
case 5:
	reorder_party();
	goto L6f16;
case 6:
	if (rest_party() != 1) goto L6eee;
	*(int *)g4f84 = f467b(f46e8(party_level));
	g4338 = 0;
	g4354 = 0;
	game_state = 10;
L6eee:
	goto L6f16;
case 7:
	disk_options_menu();
	goto L6f16;
case 8:
	goto L6f16;
	}
L6f16:
	resume_window_draw(g4fb0);
	erase_window(main_window, 0);
}
