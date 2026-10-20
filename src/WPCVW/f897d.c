extern int g5752;
extern int menu_clicked;
extern int mouse_present;
extern int party_count;
/* Let the player pick a party member by name; returns index or -1. */
choose_member(p4, win, title_msg, sel)
char *win;
{
	int l2;
	char x2[8];
	int l12;
	int l14;
	int l16;
	int l18;
	int l20;
	register int rsi;
	if (party_count >= 2) goto L8993;
	return 0;
L8993:
	defer_window_draw(g5752);
	for (rsi = 0; rsi < party_count; rsi++) {
	draw_member_card(g5752, rsi);
	}
	resume_window_draw(g5752);
	fill_window(win, 32, 3, 0);
	refresh_all_windows();
	get_message(title_msg, 21902);
	set_cursor(win, (10 - ((strlen(21902) + 1) / 2)), 1);
	print_string_hi(win, 21902, 3);
	l14 = 8;
	l16 = 3;
	get_message(503, &l12);
	set_cursor(win, l14, l16);
	if ((!mouse_present) && (sel == -1)) {
	print_string(win, &l12, -5);
	} else {
	print_string_hi(win, &l12, 3);
	}
	for (rsi = 0; rsi < party_count; rsi++) {
	l18 = (((rsi % 2) * 9) + 22);
	l20 = ((rsi / 2) + 1);
	set_cursor(win, l18, l20);
	if ((!mouse_present) && (rsi == sel)) {
	print_string(win, ((432 * rsi) + 17384), -5);
	} else {
	print_string_hi(win, ((432 * rsi) + 17384), 3);
	}
	set_click_region(rsi, ((unsigned char)win[2] + l18), ((unsigned char)win[3] + l20), (((strlen(((432 * rsi) + 17384)) + (unsigned char)win[2]) + l18) - 1), ((unsigned char)win[3] + l20));
	}
	set_click_region(party_count, ((unsigned char)win[2] + l14), ((unsigned char)win[3] + l16), (((strlen(&l12) + (unsigned char)win[2]) + l14) - 1), ((unsigned char)win[3] + l16));
	set_click_region((party_count + 1), 255, 0, 0, 0);
L8b7e:
	if (mouse_present) goto L8bec;
	if (sel != -1) goto L8bad;
	set_cursor(win, l14, l16);
	print_string(win, &l12, -5);
	goto L8bec;
L8bad:
	set_cursor(win, (((sel % 2) * 9) + 22), ((sel / 2) + 1));
	print_string(win, ((432 * sel) + 17384), -5);
L8bec:
	l2 = get_menu_input(21822, 13720);
	if (menu_clicked != 1) goto L8c1d;
	sel = (l2 < party_count ? l2 : -1);
	l2 = 5;
	goto L8d0e;
L8c1d:
	switch (l2) {
case 1:
	if (sel == -1) goto L8c4f;
	draw_member_name(win, sel);
	if ((sel % 2) <= 0) goto L8c4a;
	sel--;
	goto L8c4f;
L8c4a:
	sel = -1;
L8c4f:
	goto L8d0e;
case 2:
	if ((sel != -1) && ((sel - 2) >= 0)) {
	draw_member_name(win, sel);
	sel -= 2;
	}
	goto L8d0e;
case 3:
	if (sel == -1) {
	set_cursor(win, l14, l16);
	print_string_hi(win, &l12, 3);
	sel = 0;
	} else {
	if (((sel % 2) < 1) && ((sel + 1) < party_count)) {
	draw_member_name(win, sel);
	sel++;
	}
	}
	goto L8d0e;
case 4:
	if ((sel != -1) && ((sel + 2) < party_count)) {
	draw_member_name(win, sel);
	sel += 2;
	}
	goto L8d0e;
	}
L8d0e:
	if (l2 != 5) goto L8b7e;
	fill_window(win, 32, 3, 0);
	defer_window_draw(g5752);
	return sel;
}
