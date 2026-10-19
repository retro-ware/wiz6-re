extern char char_sex;
extern char g55a3;
extern int prompt_win;
extern int sheet_win;
roll_karma()
{
	int l2;
	fill_window(prompt_win, 32, 3, 0);
	refresh_window(prompt_win);
	set_cursor(prompt_win, 9, 1);
	print_message(1111, prompt_win, 18);
	l2 = 1;
L7de8:
	g55a3 = (char)random(19);
	if (char_sex != 1) goto L7dfe;
	g55a3++;
L7dfe:
	set_cursor(sheet_win, 5, 12);
	print_int(sheet_win, (unsigned char)g55a3, 2, 1);
	if (!check_screen_click()) goto L7e34;
	l2 = 0;
L7e34:
	if ((key_available(1) != 1) || ((char)get_key(1) != 13)) goto L7e52;
	l2 = 0;
L7e52:
	if (l2) goto L7de8;
	draw_stats();
}
