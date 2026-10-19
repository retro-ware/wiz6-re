extern int g5750[];
extern int g5770[];
extern int g5790[];
draw_roster_list(win, top, highlight, count)
char *win;
{
	char x0[16];
	char l17;
	char x17[1];
	int l20;
	register int rsi;
	draw_list_box(win, 0);
	defer_window_draw(win);
	rsi = -3;
L99ef:
	if (((top + rsi) < 0) || ((top + rsi) >= count)) goto L9be8;
	set_cursor(win, 1, (rsi + 3));
	if ((highlight != 1) || (rsi)) goto L9b0d;
	print_string(win, (((top + rsi) << 3) + 22224), 5);
L9a40:
	if ((unsigned)win[6] >= 9) goto L9a5a;
	put_char(win, 32, 1);
	goto L9a40;
L9a5a:
	get_message((g5750[(top + rsi)] + 140), &l20);
	put_char(win, (unsigned char)*(char *)&l20, 7);
	put_char(win, 45, 9);
	get_message((g5770[(top + rsi)] + 100), &l20);
	l17 = 0;
	print_string(win, &l20, 6);
	put_char(win, 32, 1);
	get_message((g5790[(top + rsi)] + 120), &l20);
	l17 = 0;
	print_string(win, &l20, 3);
	goto L9be8;
L9b0d:
	print_string_hi(win, (((top + rsi) << 3) + 22224), 3);
L9b29:
	if ((unsigned)win[6] >= 9) goto L9b43;
	put_char_hi(win, 32, 3);
	goto L9b29;
L9b43:
	get_message((g5750[(top + rsi)] + 140), &l20);
	put_char_hi(win, (unsigned char)*(char *)&l20, 3);
	put_char_hi(win, 45, 3);
	get_message((g5770[(top + rsi)] + 100), &l20);
	l17 = 0;
	print_string_hi(win, &l20, 3);
	win[6]++;
	get_message((g5790[(top + rsi)] + 120), &l20);
	l17 = 0;
	print_string_hi(win, &l20, 3);
L9be8:
	rsi++;
	if (rsi <= 3) goto L99ef;
	resume_window_draw(win);
	refresh_window(win);
}
