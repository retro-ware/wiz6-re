extern char char_class;
extern char char_race;
extern char char_sex;
extern char roster_slot_used[];
extern int g5750[];
extern int g5770[];
extern int g5790[];
extern int g57b0[];
extern int menu_clicked;
extern int roster_slot_count;
select_roster_character(win, list_win, title_msg)
char *win;
char *list_win;
{
	int l2;
	int count;
	int sel;
	int on_cancel;
	int n;
	char x10[8];
	int cancel_text;
	count = 0;
	l2 = 0;
	goto L9c75;
L9c16:
	if (roster_slot_used[l2] == 1) {
	access_roster_record(21616, l2, 0);
	strcpy(((count << 3) + 22224), 21616);
	g5750[count] = (unsigned char)char_sex;
	g5770[count] = (unsigned char)char_race;
	g5790[count] = (unsigned char)char_class;
	g57b0[count] = l2;
	count++;
	}
	l2++;
L9c75:
	if (l2 < roster_slot_count) goto L9c16;
	if (count >= 1) goto L9c88;
	return;
L9c88:
	n = count;
	fill_window(win, 32, 3, 0);
	fill_window(list_win, 32, 3, 0);
	defer_window_draw(win);
	get_message(title_msg, 22048);
	set_cursor(win, (20 - ((strlen(22048) + 1) / 2)), 1);
	print_string_hi(win, 22048, 3);
	resume_window_draw(win);
	draw_list_box(list_win, 0);
	refresh_all_windows();
	get_message(1124, &cancel_text);
	sel = 0;
	on_cancel = 0;
	set_click_region(0, ((unsigned char)list_win[2] + 1), ((unsigned char)list_win[3] + 3), ((unsigned char)list_win[2] + 19), ((unsigned char)list_win[3] + 3));
	set_click_region(1, (unsigned char)list_win[2], (unsigned char)list_win[3], (unsigned char)list_win[2], (unsigned char)list_win[3]);
	set_click_region(2, (unsigned char)list_win[2], ((unsigned char)list_win[3] + 6), (unsigned char)list_win[2], ((unsigned char)list_win[3] + 6));
	set_click_region(3, ((unsigned char)win[2] + 17), ((unsigned char)win[3] + 3), ((strlen(&cancel_text) + (unsigned char)win[2]) + 16), ((unsigned char)win[3] + 3));
	set_click_region(4, 255, 0, 0, 0);
L9e02:
	if (on_cancel == 1) {
	set_cursor(win, 17, 3);
	print_string(win, &cancel_text, -5);
	draw_roster_list(list_win, sel, 0, n);
	} else {
	set_cursor(win, 17, 3);
	print_string_hi(win, &cancel_text, 3);
	draw_roster_list(list_win, sel, 1, n);
	}
	l2 = get_menu_input(21534, 13720);
	if (menu_clicked != 1) goto L9ec3;
	switch (l2) {
case 0:
	l2 = 5;
	goto L9ec3;
case 1:
	l2 = 2;
	goto L9ec3;
case 2:
	l2 = 4;
	goto L9ec3;
case 3:
	on_cancel = 1;
	l2 = 5;
	goto L9ec3;
	}
L9ec3:
	switch (l2) {
case 1:
	if (on_cancel != 1) {
	on_cancel = 1;
	}
	goto L9f29;
case 2:
	if (on_cancel == 1) {
	on_cancel = 0;
	} else {
	if (sel > 0) {
	sel--;
	}
	}
	goto L9f29;
case 3:
	if (on_cancel == 1) {
	on_cancel = 0;
	}
	goto L9f29;
case 4:
	if (on_cancel == 1) {
	on_cancel = 0;
	} else {
	if ((sel + 1) < n) {
	sel++;
	}
	}
	goto L9f29;
	}
L9f29:
	if (l2 != 5) goto L9e02;
	if (on_cancel) goto L9f3e;
	return sel;
L9f3e:
	return -1;
}
