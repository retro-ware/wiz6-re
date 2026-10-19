extern char char_race;
extern int menu_win;
extern int prompt_win;
extern int sheet_win;
choose_race()
{
	int l2;
	int l4;
	char x4[16];
	int l22;
	int l44[11];
	for (l4 = 0; l4 <= 10; l4++) {
	l44[l4] = 1;
	}
	l22 = -1;
	fill_window(prompt_win, 32, 3, 0);
	refresh_window(prompt_win);
	set_cursor(prompt_win, 9, 1);
	print_message(1104, prompt_win, 18);
	fill_window(menu_win, 32, 3, 0);
	refresh_window(menu_win);
	print_status_centered(1116);
	l2 = menu_select(menu_win, 100, l44, 1, 1, 10, 11, 5, 0);
	clear_status_line();
	fill_window(menu_win, 32, 3, 0);
	refresh_window(menu_win);
	char_race = *(char *)&l2;
	set_cursor(sheet_win, 15, 1);
	print_msg_color(((unsigned char)char_race + 100), sheet_win, 1);
	apply_race_base_stats(l2);
	draw_stats();
}
