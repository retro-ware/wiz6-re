extern char cfg_delay;
extern char cfg_gmode;
extern char cfg_input;
extern char cfg_level;
extern char sound_mode;
/* Draw the value of setting item at row in colour. */
draw_setting_value(win, item, row, color)
{
	int x;
	int width;
	char text[80];
	x = (item < 5 ? 7 : 19);
	width = (item != 1 ? (item < 5 ? 10 : 20) : 3);
	clear_window_area(win, x, row, ((width + x) - 1), row);
	switch (item) {
case 0:
	get_message(((unsigned char)sound_mode + 2350), text);
	goto L7684;
case 1:
	int_to_string((unsigned char)cfg_delay, text);
	goto L7684;
case 2:
	get_message(((unsigned char)cfg_level + 2357), text);
	goto L7684;
case 3:
	get_message(((unsigned char)cfg_input + 2360), text);
	goto L7684;
case 4:
	get_message(((unsigned char)cfg_gmode + 2363), text);
	goto L7684;
case 5:
	strcpy(text, 13692);
	goto L7684;
case 6:
	strcpy(text, 13632);
	goto L7684;
case 7:
	strcpy(text, 13652);
	goto L7684;
	}
L7684:
	if (text[0]) goto L7692;
	text[0] = 32;
	text[(0 + 1)] = 0;
L7692:
	set_cursor(win, x, row);
	print_string(win, text, color);
}
