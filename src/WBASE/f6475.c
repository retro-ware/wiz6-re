extern int pclist_class[];
extern int pclist_race[];
extern int pclist_sex[];
/* Draw five rows of the character list around top, highlighting the middle one. */
draw_pcfile_list(win, top, highlight, count)
char *win;
{
	char x0[16];
	char l17;
	char x17[1];
	int text;
	register int row;
	draw_list_frame(win, 0);
	defer_window_draw(win);
	row = -2;
L6493:
	if ((top + row) < 0) goto L668b;
	if ((top + row) >= count) goto L668b;
	set_cursor(win, 2, (row + 2));
	if (highlight != 1) goto L65b0;
	if (row) goto L65b0;
	print_string(win, (((top + row) << 3) + 20602), 5);
L64e3:
	if ((unsigned)win[6] >= 10) goto L64fd;
	put_char(win, 32, 1);
	goto L64e3;
L64fd:
	get_message((pclist_sex[(top + row)] + 140), &text);
	put_char(win, (unsigned char)*(char *)&text, 7);
	put_char(win, 45, 9);
	get_message((pclist_race[(top + row)] + 100), &text);
	l17 = 0;
	print_string(win, &text, 6);
	put_char(win, 32, 1);
	get_message((pclist_class[(top + row)] + 120), &text);
	l17 = 0;
	print_string(win, &text, 3);
	goto L668b;
L65b0:
	print_string_hi(win, (((top + row) << 3) + 20602), 3);
L65cc:
	if ((unsigned)win[6] >= 10) goto L65e6;
	put_char_hi(win, 32, 3);
	goto L65cc;
L65e6:
	get_message((pclist_sex[(top + row)] + 140), &text);
	put_char_hi(win, (unsigned char)*(char *)&text, 3);
	put_char_hi(win, 45, 3);
	get_message((pclist_race[(top + row)] + 100), &text);
	l17 = 0;
	print_string_hi(win, &text, 3);
	win[6]++;
	get_message((pclist_class[(top + row)] + 120), &text);
	l17 = 0;
	print_string_hi(win, &text, 3);
L668b:
	row++;
	if (row <= 2) goto L6493;
	resume_window_draw(win);
	refresh_window(win);
}
