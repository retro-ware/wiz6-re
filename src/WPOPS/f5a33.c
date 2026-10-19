extern char *main_window;
extern int menu_clicked;
extern int mouse_present;
extern int party_count;
select_party_member(msg)
{
	int key;
	char *win;
	int sel;
	char x6[38];
	int l46;
	char x46[48];
	int l96;
	char x96[8];
	int l106;
	int l108;
	int l110;
	int l112;
	int l114;
	register int rsi;
	if (party_count >= 2) goto L5a49;
	return 0;
L5a49:
	win = create_window(0, 19, 19, 5, 25, -4, 0, 0);
	fill_window(win, 32, 3, 0);
	get_message(3607, &l96);
	get_message(3608, &l106);
	get_message(msg, &l46);
	print_combat_prompt(&l46, 5);
	main_window[6]++;
	l108 = (unsigned char)main_window[6];
	l110 = (unsigned char)main_window[7];
	refresh_window(main_window);
	refresh_window(win);
	set_cursor(main_window, l108, l110);
	if (mouse_present != 1) goto L5b0a;
	print_string_hi(main_window, &l96, 3);
	goto L5b1c;
L5b0a:
	print_string(main_window, &l106, -5);
L5b1c:
	for (rsi = 0; rsi < party_count; rsi++) {
	l112 = (((rsi % 2) * 9) + 2);
	l114 = ((rsi / 2) + 1);
	set_cursor(win, l112, l114);
	print_string_hi(win, ((432 * rsi) + 17384), 3);
	set_click_region(rsi, ((unsigned char)win[2] + l112), ((unsigned char)win[3] + l114), (((strlen(((432 * rsi) + 17384)) + (unsigned char)win[2]) + l112) - 1), ((unsigned char)win[3] + l114));
	}
	set_click_region(party_count, ((unsigned char)main_window[2] + l108), ((unsigned char)main_window[3] + l110), (((strlen(&l106) + (unsigned char)main_window[2]) + l108) - 1), ((unsigned char)main_window[3] + l110));
	set_click_region((party_count + 1), 255, 0, 0, 0);
	sel = -1;
L5c10:
	if (mouse_present) goto L5c7f;
	if (sel != -1) goto L5c41;
	set_cursor(main_window, l108, l110);
	print_string(main_window, &l106, -5);
	goto L5c7f;
L5c41:
	set_cursor(win, (((sel % 2) * 9) + 2), ((sel / 2) + 1));
	print_string(win, ((432 * sel) + 17384), -5);
L5c7f:
	key = get_combat_input(17270, 13720);
	if (menu_clicked != 1) goto L5cb0;
	sel = (key < party_count ? key : -1);
	key = 5;
	goto L5d9f;
L5cb0:
	switch (key) {
case 1:
	if ((sel == -1) || ((sel % 2) <= 0)) goto L5cdb;
	draw_member_name(win, sel);
	sel--;
L5cdb:
	goto L5d9f;
case 2:
	if (sel == -1) goto L5d01;
	draw_member_name(win, sel);
	if ((sel - 2) < 0) goto L5cfc;
	sel = (sel - 2);
	goto L5d01;
L5cfc:
	sel = -1;
L5d01:
	goto L5d9f;
case 3:
	if (((sel == -1) || ((sel % 2) >= 1)) || ((sel + 1) >= party_count)) goto L5d32;
	draw_member_name(win, sel);
	sel++;
L5d32:
	goto L5d9f;
case 4:
	if (sel != -1) goto L5d63;
	set_cursor(main_window, l108, l110);
	print_string_hi(main_window, &l96, 3);
	sel = 0;
	goto L5d80;
L5d63:
	if ((sel + 2) >= party_count) goto L5d80;
	draw_member_name(win, sel);
	sel += 2;
L5d80:
	goto L5d9f;
	}
L5d9f:
	if (key != 5) goto L5c10;
	destroy_window(win, 0);
	return sel;
}
