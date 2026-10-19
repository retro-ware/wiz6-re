/* Ask for a new name (7 chars) for member p6. */
do_rename(win, member)
char *win;
{
	char x0[8];
	int l10;
	int l12;
	int l14;
	fill_window(win, 32, 3, 0);
	refresh_all_windows();
	set_cursor(win, 1, 1);
	print_message(1128, win, 18);
	l12 = (unsigned char)win[6];
	l14 = (unsigned char)win[7];
	clear_window_area(win, l12, l14, (l12 + 7), l14);
	set_cursor(win, l12, l14);
	input_line(win, &l10, 7, 5, 0);
	if (!*(char *)&l10) goto Lac7f;
	strcpy(((432 * member) + 17384), &l10);
Lac7f:
	;
}
