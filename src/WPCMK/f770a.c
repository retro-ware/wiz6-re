extern char char_sex;
extern int menu_win;
extern int prompt_win;
extern int sheet_win;
choose_sex()
{
	int l2;
	int l4;
	char x4[78];
	int l84;
	char x84[34];
	int l120;
	int l124[2];
	for (l4 = 0; l4 <= 1; l4++) {
	l124[l4] = 1;
	}
	l120 = -1;
	fill_window(prompt_win, 32, 3, 0);
	refresh_window(prompt_win);
	set_cursor(prompt_win, 10, 1);
	print_message(1105, prompt_win, 18);
	fill_window(menu_win, 32, 3, 0);
	refresh_window(menu_win);
	print_status_centered(1117);
	l2 = menu_select(menu_win, 140, l124, 1, 1, 10, 11, 5, 0);
	clear_status_line();
	fill_window(menu_win, 32, 3, 0);
	refresh_window(menu_win);
	char_sex = *(char *)&l2;
	set_cursor(sheet_win, 13, 1);
	get_message(((unsigned char)char_sex + 140), &l84);
	put_char(sheet_win, (unsigned char)*(char *)&l84, 1);
	put_char(sheet_win, 45, 1);
	apply_sex_modifiers(l2);
	draw_stats();
}
