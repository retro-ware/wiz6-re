extern char *prompt_win;
extern char char_portrait;
extern int menu_clicked;
extern int menu_win;
extern int sheet_win;
choose_portrait()
{
	int l2;
	int l4;
	fill_window(menu_win, 32, 3, 0);
	refresh_window(menu_win);
	fill_window(prompt_win, 32, 3, 0);
	refresh_window(prompt_win);
	set_cursor(prompt_win, 9, 1);
	print_message(1112, prompt_win, 18);
	set_cursor(prompt_win, 12, 2);
	print_message(1113, prompt_win, 18);
	l4 = -1;
	print_status_centered(1119);
	set_click_region(0, ((unsigned char)prompt_win[2] + 9), ((unsigned char)prompt_win[3] + 1), ((unsigned char)prompt_win[2] + 9), ((unsigned char)prompt_win[3] + 1));
	set_click_region(1, ((unsigned char)prompt_win[2] + 10), ((unsigned char)prompt_win[3] + 1), ((unsigned char)prompt_win[2] + 10), ((unsigned char)prompt_win[3] + 1));
	set_click_region(2, ((unsigned char)prompt_win[2] + 18), ((unsigned char)prompt_win[3] + 2), ((unsigned char)prompt_win[2] + 18), ((unsigned char)prompt_win[3] + 2));
	set_click_region(3, 255, 0, 0, 0);
L9248:
	if ((unsigned char)char_portrait != l4) {
	load_portrait((unsigned char)char_portrait);
	l4 = (unsigned char)char_portrait;
	}
	draw_portrait(menu_win, 8, 3);
	l2 = get_menu_input(21534, 13720);
	if (menu_clicked != 1) goto L92af;
	switch (l2) {
case 0:
	l2 = 1;
	goto L92af;
case 1:
	l2 = 3;
	goto L92af;
case 2:
	l2 = 5;
	goto L92af;
	}
L92af:
	switch (l2) {
case 1:
	char_portrait = (char)(((unsigned char)char_portrait + 41) % 42);
	goto L92e6;
case 3:
	char_portrait = (char)(((unsigned char)char_portrait + 1) % 42);
	goto L92e6;
	}
L92e6:
	if (l2 != 5) goto L9248;
	clear_status_line();
	fill_window(menu_win, 32, 3, 0);
	refresh_window(menu_win);
	fill_window(prompt_win, 32, 3, 0);
	refresh_window(prompt_win);
	draw_portrait(sheet_win, 1, 1);
}
