extern char *main_window;
extern int menu_clicked;
extern int mouse_present;
extern int party_count;
choose_party_member(msg, refresh_all)
{
	int key;
	char *win;
	int sel;
	char x6[8];
	int l16;
	char x16[8];
	int l26;
	char x26[78];
	int l106;
	int l108;
	int l110;
	int l112;
	int l114;
	register int rsi;
	if (party_count >= 2) goto L565f;
	return 0;
L565f:
	win = create_window(0, 19, 19, 5, 25, -4, 0, 0);
	fill_window(win, 32, 3, 0);
	get_message(2027, &l16);
	get_message(2028, &l26);
	get_message(msg, &l106);
	print_chest_prompt(msg, (10 - ((strlen(&l106) + 6) / 2)));
	l108 = (unsigned char)main_window[6];
	l110 = (unsigned char)main_window[7];
	if (!refresh_all) {
	refresh_window(main_window);
	refresh_window(win);
	} else {
	refresh_all_windows();
	}
	set_cursor(main_window, l108, l110);
	if (mouse_present == 1) {
	print_string_hi(main_window, &l16, 3);
	} else {
	print_string(main_window, &l26, -5);
	}
	for (rsi = 0; rsi < party_count; rsi++) {
	l112 = (((rsi % 2) * 9) + 2);
	l114 = ((rsi / 2) + 1);
	set_cursor(win, l112, l114);
	print_string_hi(win, ((432 * rsi) + 17384), 3);
	set_click_region(rsi, ((unsigned char)win[2] + l112), ((unsigned char)win[3] + l114), (((strlen(((432 * rsi) + 17384)) + (unsigned char)win[2]) + l112) - 1), ((unsigned char)win[3] + l114));
	}
	set_click_region(party_count, ((unsigned char)main_window[2] + l108), ((unsigned char)main_window[3] + l110), (((strlen(&l26) + (unsigned char)main_window[2]) + l108) - 1), ((unsigned char)main_window[3] + l110));
	set_click_region((party_count + 1), 255, 0, 0, 0);
	sel = -1;
L583e:
	if (mouse_present) goto L58ad;
	if (sel != -1) goto L586f;
	set_cursor(main_window, l108, l110);
	print_string(main_window, &l26, -5);
	goto L58ad;
L586f:
	set_cursor(win, (((sel % 2) * 9) + 2), ((sel / 2) + 1));
	print_string(win, ((432 * sel) + 17384), -5);
L58ad:
	key = get_chest_input(20670, 13720);
	if (menu_clicked != 1) goto L58de;
	sel = (key < party_count ? key : -1);
	key = 5;
	goto L59cd;
L58de:
	switch (key) {
case 1:
	if ((sel == -1) || ((sel % 2) <= 0)) goto L5909;
	draw_member_name_cell(win, sel);
	sel--;
L5909:
	goto L59cd;
case 2:
	if (sel == -1) goto L592f;
	draw_member_name_cell(win, sel);
	if ((sel - 2) < 0) goto L592a;
	sel = (sel - 2);
	goto L592f;
L592a:
	sel = -1;
L592f:
	goto L59cd;
case 3:
	if (((sel == -1) || ((sel % 2) >= 1)) || ((sel + 1) >= party_count)) goto L5960;
	draw_member_name_cell(win, sel);
	sel++;
L5960:
	goto L59cd;
case 4:
	if (sel != -1) goto L5991;
	set_cursor(main_window, l108, l110);
	print_string_hi(main_window, &l16, 3);
	sel = 0;
	goto L59ae;
L5991:
	if ((sel + 2) >= party_count) goto L59ae;
	draw_member_name_cell(win, sel);
	sel += 2;
L59ae:
	goto L59cd;
	}
L59cd:
	if (key != 5) goto L583e;
	destroy_window(win, 0);
	return sel;
}
