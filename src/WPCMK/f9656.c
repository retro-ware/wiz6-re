extern char *prompt_win;
extern int g56ce;
extern int sheet_win;
do_create_character()
{
	int l2;
	int l4;
	int l6;
	char x6[8];
	int l16;
	draw_creation_screen(sheet_win, prompt_win);
	l2 = find_free_roster_slot();
	if (l2 != -1) goto L9679;
	return;
L9679:
	set_cursor(prompt_win, 1, 1);
	print_message(1100, prompt_win, 18);
	l4 = (unsigned char)prompt_win[6];
	l6 = (unsigned char)prompt_win[7];
	clear_window_area(prompt_win, l4, l6, (l4 + 7), l6);
	set_cursor(prompt_win, l4, l6);
	input_text(prompt_win, &l16, 7, 5, 0);
	g56ce = 0;
	if (!*(char *)&l16) goto L9727;
	if (is_name_taken(&l16) != -1) goto L971a;
	show_error_msg(1102, 6, 2);
	goto L9727;
L971a:
	create_character(&l16, l2);
L9727:
	return;
}
