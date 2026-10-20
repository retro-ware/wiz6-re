extern char *main_window;
extern int bottom_line_win;
extern int menu_clicked;
extern int mouse_present;
extern int party_count;
/* Let the player pick a party member under title msg; return it or -1. */
choose_party_member(msg)
{
	int choice;
	char *win;
	int sel;
	char x6[78];
	int title;
	char x86[8];
	int cancel_text;
	char x96[8];
	int cancel_hilite;
	int cancel_x;
	int cancel_y;
	int x;
	int y;
	register int rsi;
	if (party_count >= 2) goto L6c41;
	return 0;
L6c41:
	win = create_window(0, 19, 19, 5, 25, -4, 0, 0);
	fill_window(win, 32, 3, 0);
	get_message(2027, &cancel_text);
	get_message(2028, &cancel_hilite);
	get_message(msg, &title);
	show_title_text(&title, (10 - ((strlen(&title) + 6) / 2)));
	cancel_x = (unsigned char)main_window[6];
	cancel_y = (unsigned char)main_window[7];
	f0a42(bottom_line_win, 0);
	refresh_all_windows();
	set_cursor(main_window, cancel_x, cancel_y);
	if (mouse_present == 1) {
	print_string_hi(main_window, &cancel_text, 3);
	} else {
	print_string(main_window, &cancel_hilite, -5);
	}
	for (rsi = 0; rsi < party_count; rsi++) {
	x = (((rsi % 2) * 9) + 2);
	y = ((rsi / 2) + 1);
	set_cursor(win, x, y);
	print_string_hi(win, ((432 * rsi) + 17384), 3);
	set_click_region(rsi, ((unsigned char)win[2] + x), ((unsigned char)win[3] + y), (((strlen(((432 * rsi) + 17384)) + (unsigned char)win[2]) + x) - 1), ((unsigned char)win[3] + y));
	}
	set_click_region(party_count, ((unsigned char)main_window[2] + cancel_x), ((unsigned char)main_window[3] + cancel_y), (((strlen(&cancel_hilite) + (unsigned char)main_window[2]) + cancel_x) - 1), ((unsigned char)main_window[3] + cancel_y));
	set_click_region((party_count + 1), 255, 0, 0, 0);
	sel = -1;
L6e1b:
	if (mouse_present) goto L6e8a;
	if (sel != -1) goto L6e4c;
	set_cursor(main_window, cancel_x, cancel_y);
	print_string(main_window, &cancel_hilite, -5);
	goto L6e8a;
L6e4c:
	set_cursor(win, (((sel % 2) * 9) + 2), ((sel / 2) + 1));
	print_string(win, ((432 * sel) + 17384), -5);
L6e8a:
	choice = get_menu_choice_animated(20582, 13720);
	if (menu_clicked != 1) goto L6ebb;
	sel = (choice < party_count ? choice : -1);
	choice = 5;
	goto L6faa;
L6ebb:
	switch (choice) {
case 1:
	if ((sel == -1) || ((sel % 2) <= 0)) goto L6ee6;
	draw_member_name(win, sel);
	sel--;
L6ee6:
	goto L6faa;
case 2:
	if (sel == -1) goto L6f0c;
	draw_member_name(win, sel);
	if ((sel - 2) < 0) goto L6f07;
	sel = (sel - 2);
	goto L6f0c;
L6f07:
	sel = -1;
L6f0c:
	goto L6faa;
case 3:
	if (((sel == -1) || ((sel % 2) >= 1)) || ((sel + 1) >= party_count)) goto L6f3d;
	draw_member_name(win, sel);
	sel++;
L6f3d:
	goto L6faa;
case 4:
	if (sel == -1) {
	set_cursor(main_window, cancel_x, cancel_y);
	print_string_hi(main_window, &cancel_text, 3);
	sel = 0;
	} else {
	if ((sel + 2) < party_count) {
	draw_member_name(win, sel);
	sel += 2;
	}
	}
	goto L6faa;
	}
L6faa:
	if (choice != 5) goto L6e1b;
	destroy_window(win, 0);
	f0a42(bottom_line_win, 0);
	return sel;
}
