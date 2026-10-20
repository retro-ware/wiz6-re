extern char *main_window;
extern int menu_clicked;
extern int mouse_present;
extern int party_count;
/* Let the player pick a target party member under title msg; return it or -1. */
choose_target_member(msg)
{
	int choice;
	char *win;
	int sel;
	char x6[8];
	int cancel_text;
	char x16[8];
	int cancel_hilite;
	int cancel_x;
	int cancel_y;
	int x;
	int y;
	register int rsi;
	if (party_count >= 2) goto L48f6;
	return 0;
L48f6:
	win = create_window(0, 19, 19, 5, 25, -4, 0, 0);
	fill_window(win, 32, 3, 0);
	get_message(2027, &cancel_text);
	get_message(2028, &cancel_hilite);
	get_message(msg, 20588);
	show_title_text_dopt(20588, (10 - ((strlen(20588) + 6) / 2)));
	cancel_x = (unsigned char)main_window[6];
	cancel_y = (unsigned char)main_window[7];
	refresh_window(main_window);
	refresh_window(win);
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
L4acb:
	if (mouse_present) goto L4b3a;
	if (sel != -1) goto L4afc;
	set_cursor(main_window, cancel_x, cancel_y);
	print_string(main_window, &cancel_hilite, -5);
	goto L4b3a;
L4afc:
	set_cursor(win, (((sel % 2) * 9) + 2), ((sel / 2) + 1));
	print_string(win, ((432 * sel) + 17384), -5);
L4b3a:
	choice = get_menu_choice_blink(20668, 13720);
	if (menu_clicked != 1) goto L4b6b;
	sel = (choice < party_count ? choice : -1);
	choice = 5;
	goto L4c5a;
L4b6b:
	switch (choice) {
case 1:
	if ((sel == -1) || ((sel % 2) <= 0)) goto L4b96;
	draw_member_name_dopt(win, sel);
	sel--;
L4b96:
	goto L4c5a;
case 2:
	if (sel == -1) goto L4bbc;
	draw_member_name_dopt(win, sel);
	if ((sel - 2) < 0) goto L4bb7;
	sel = (sel - 2);
	goto L4bbc;
L4bb7:
	sel = -1;
L4bbc:
	goto L4c5a;
case 3:
	if (((sel == -1) || ((sel % 2) >= 1)) || ((sel + 1) >= party_count)) goto L4bed;
	draw_member_name_dopt(win, sel);
	sel++;
L4bed:
	goto L4c5a;
case 4:
	if (sel == -1) {
	set_cursor(main_window, cancel_x, cancel_y);
	print_string_hi(main_window, &cancel_text, 3);
	sel = 0;
	} else {
	if ((sel + 2) < party_count) {
	draw_member_name_dopt(win, sel);
	sel += 2;
	}
	}
	goto L4c5a;
	}
L4c5a:
	if (choice != 5) goto L4acb;
	destroy_window(win, 0);
	return sel;
}
