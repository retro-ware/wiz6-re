extern char char_class;
extern int class_eligible[];
extern int menu_win;
extern int prompt_win;
extern int sheet_win;
choose_class()
{
	int l2;
	int l4;
	char x4[10];
	int l16;
	int l44[14];
	compute_eligible_classes();
	l4 = 0;
L7853:
	if (class_eligible[l4] == 1) {
	l44[l4] = 1;
	} else {
	l44[l4] = 0;
	}
	l4++;
	if (l4 <= 13) goto L7853;
	l16 = -1;
	fill_window(prompt_win, 32, 3, 0);
	refresh_window(prompt_win);
	set_cursor(prompt_win, 7, 1);
	print_message(1106, prompt_win, 18);
	fill_window(menu_win, 32, 3, 0);
	refresh_window(menu_win);
	print_status_centered(1118);
	l2 = menu_select(menu_win, 120, l44, 1, 1, 10, 11, 5, 0);
	clear_status_line();
	fill_window(menu_win, 32, 3, 0);
	refresh_window(menu_win);
	char_class = *(char *)&l2;
	print_msg_at(((unsigned char)char_class + 120), sheet_win, 13, 2, 1);
	apply_class_minimums(l2);
	draw_stats();
}
