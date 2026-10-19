extern int bottom_line_win;
extern int g5268[];
extern int g5274[];
extern int loot_count;
extern int loot_item[];
extern int main_window;
extern int menu_clicked;
extern int message_delay;
extern int mouse_present;
/* Let the player hand out the found items to party members. */
distribute_loot()
{
	int l2;
	char x2[2];
	int member;
	int l8;
	int sel;
	char *win;
	char *list_win;
	int l16;
	int l18;
	char x18[8];
	int l28;
	char x28[2];
	int l32;
	resume_window_draw(main_window);
	resume_window_draw(bottom_line_win);
	f0a42(bottom_line_win, 0);
	win = create_window(0, 19, 19, 5, 20, -4, 0, 0);
	fill_window(win, 32, 3, 0);
	list_win = create_window(20, 19, 20, 5, 21, -5, 0, 0);
	fill_window(list_win, 32, 3, 0);
	defer_window_draw(win);
	set_cursor(win, 2, 1);
	print_message(5102, win, 18);
	win[6]++;
	l16 = (unsigned char)win[6];
	l18 = (unsigned char)win[7];
	get_message(5103, &l28);
	print_string_hi(win, &l28, 3);
	put_glyph_c1(win, 1, 2, 17);
	put_glyph_c1(win, 18, 2, 19);
	put_glyph_c1(win, 1, 4, 6);
	put_glyph_c1(win, 18, 4, 8);
	for (l2 = 2; l2 < 18; l2++) {
	put_glyph_c1(win, l2, 2, 18);
	put_glyph_c1(win, l2, 4, 7);
	}
	put_glyph_c1(win, 1, 3, 4);
	put_glyph_c1(win, 18, 3, 5);
	clear_window_area(win, 2, 3, 17, 3);
	resume_window_draw(win);
	sel = 0;
L8b25:
	if (sel < loot_count) goto L8b33;
	sel--;
	goto L8b25;
L8b33:
	print_chest_prompt(5101, 2);
	defer_window_draw(list_win);
	fill_window(list_win, 32, 3, 0);
	for (l2 = 0; l2 < loot_count; l2++) {
	draw_loot_line(list_win, l2);
	set_click_region(l2, ((unsigned char)list_win[2] + 1), ((unsigned char)list_win[3] + l2), ((unsigned char)list_win[2] + 19), ((unsigned char)list_win[3] + l2));
	}
	resume_window_draw(list_win);
	set_click_region(loot_count, ((unsigned char)win[2] + l16), ((unsigned char)win[3] + l18), (((strlen(&l28) + (unsigned char)win[2]) + l16) - 1), ((unsigned char)win[3] + l18));
	set_click_region((loot_count + 1), 255, 0, 0, 0);
	refresh_all_windows();
L8c09:
	if (sel != -1) goto L8c52;
	if (mouse_present) goto L8c36;
	set_cursor(win, l16, l18);
	print_string(win, &l28, -3);
L8c36:
	clear_window_area(win, 2, 3, 17, 3);
	goto L8d0c;
L8c52:
	set_cursor(list_win, 21, sel);
	print_string(list_win, ((sel * 18) + 20974), -3);
	set_cursor(win, 2, 3);
	print_message(5104, win, 11);
	set_cursor(win, 12, 3);
	print_int(win, (g5268[sel] / 10), 4, 3);
	put_char(win, 46, 3);
	print_int(win, (g5268[sel] % 10), 1, 3);
L8d0c:
	l8 = get_chest_input(20670, 13720);
	if (menu_clicked != 1) goto L8d65;
	if (l8 != sel) goto L8d30;
	l8 = 5;
	goto L8d62;
L8d30:
	if (sel == -1) goto L8d42;
	draw_loot_line(list_win, sel);
L8d42:
	sel = (l8 < loot_count ? l8 : -1);
	l8 = (sel == -1 ? 5 : 0);
L8d62:
	goto L8e6a;
L8d65:
	switch (l8) {
case 1:
	if (sel == -1) goto L8d82;
	draw_loot_line(list_win, sel);
	sel = -1;
L8d82:
	goto L8e6a;
case 2:
	if (sel != -1) goto L8db2;
	set_cursor(win, l16, l18);
	print_string_hi(win, &l28, 3);
	sel = 0;
	goto L8dce;
L8db2:
	draw_loot_line(list_win, sel);
	if (sel <= 0) goto L8dc9;
	sel--;
	goto L8dce;
L8dc9:
	sel = -1;
L8dce:
	goto L8e6a;
case 3:
	if (sel != -1) goto L8dfc;
	set_cursor(win, l16, l18);
	print_string_hi(win, &l28, 3);
	sel = 0;
L8dfc:
	goto L8e6a;
case 4:
	if (sel != -1) goto L8e2b;
	set_cursor(win, l16, l18);
	print_string_hi(win, &l28, 3);
	sel = 0;
	goto L8e4b;
L8e2b:
	draw_loot_line(list_win, sel);
	if ((sel + 1) >= loot_count) goto L8e46;
	sel++;
	goto L8e4b;
L8e46:
	sel = -1;
L8e4b:
	goto L8e6a;
	}
L8e6a:
	if (l8 != 5) goto L8c09;
	if (((sel == -1) || ((member = choose_party_member(5105, 0)) == -1)) || (loot_item[sel] <= 0)) goto L8edd;
	if (give_item_to_member(member, sel) == -1) goto L8eb7;
	remove_loot_entry(sel);
	goto L8edd;
L8eb7:
	print_chest_prompt(5108, 6);
	refresh_window(main_window);
	play_sound(0);
	wait_animating(message_delay);
L8edd:
	if (sel != -1) goto L8f3a;
	l32 = 0;
	l2 = 0;
	goto L8f05;
L8eef:
	if (g5274[l2] != 1) goto L8f02;
	l32 = 1;
L8f02:
	l2++;
L8f05:
	if (l2 < loot_count) goto L8eef;
	if (l32 != 1) goto L8f3a;
	print_chest_prompt(5109, 1);
	refresh_window(main_window);
	play_sound(0);
	wait_animating(message_delay);
L8f3a:
	if ((loot_count > 0) && ((sel != -1) || (l32 == 1))) goto L8b25;
	destroy_window(list_win, 0);
	destroy_window(win, 0);
	defer_window_draw(main_window);
	defer_window_draw(bottom_line_win);
}
