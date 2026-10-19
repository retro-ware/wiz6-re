extern char g00cc[];
extern char g00e2[];
extern char pc_item_count[];
extern char pc_item_qty[];
extern char pc_item_type[];
extern char pc_swag_count[];
extern int bottom_line_win;
extern int g4eca;
extern int g4fb0;
extern int g502a;
extern int g502c;
extern int g506a;
extern int g51b6;
extern int g51b8;
extern int g51ba[];
extern int g5346[];
extern int game_state_arg;
extern int main_window;
extern int menu_clicked;
extern int pc_item_id[];
/* Use item menu: pick an item of the member and apply its effect. */
do_use_item(member)
{
	char x0[6];
	int l8;
	char *win;
	char *list_win;
	int choice;
	int sel;
	int on_cancel;
	char x18[4];
	char l23;
	char x23[39];
	int l64;
	char l65;
	char l66;
	int l68;
	char x68[22];
	int item;
	char x92[8];
	int cancel_text;
	int spell;
	int level;
	int slot;
	get_message(2001, 20668);
	g506a = 0;
	defer_window_draw(g4fb0);
	win = create_window(0, 19, 19, 5, 10, -4, 0, 0);
	fill_window(win, 32, 3, 0);
	list_win = create_window(20, 19, 20, 5, 20, -5, 0, 0);
	fill_window(list_win, 32, 3, 0);
	copy_name(((432 * member) + 17384), &l8);
	get_message(2033, 20588);
	replace_char_with_string(20588, &l8, 36);
	show_title_text_dopt(20588, (10 - ((strlen(20588) + 1) / 2)));
	f0a42(bottom_line_win, 0);
	defer_window_draw(win);
	set_cursor(win, 2, 1);
	print_message(2034, win, 18);
	resume_window_draw(win);
	draw_list_frame_dopt(list_win, 0);
	refresh_all_windows();
	g51b8 = 0;
	sel = 0;
	goto L7a47;
L79a6:
	access_scenario_record(1, &item, *(int *)((char *)pc_item_id + ((432 * member) + (sel << 3))), 0);
	strcpy(((sel << 4) + 20966), &item);
	if (g00cc[(unsigned char)pc_item_type[((432 * member) + (sel << 3))]] != 1) goto L7a24;
	g5346[sel] = (unsigned char)pc_item_qty[((432 * member) + (sel << 3))];
	goto L7a31;
L7a24:
	g5346[sel] = 0;
L7a31:
	g51ba[g51b8] = sel;
	g51b8++;
	sel++;
L7a47:
	if ((unsigned char)pc_item_count[(432 * member)] > sel) goto L79a6;
	sel = 0;
	goto L7b0f;
L7a65:
	slot = (sel + 10);
	access_scenario_record(1, &item, *(int *)((char *)pc_item_id + ((432 * member) + (slot << 3))), 0);
	strcpy(((slot << 4) + 20966), &item);
	if (g00cc[(unsigned char)pc_item_type[((432 * member) + (slot << 3))]] != 1) goto L7aec;
	g5346[slot] = (unsigned char)pc_item_qty[((432 * member) + (slot << 3))];
	goto L7af9;
L7aec:
	g5346[slot] = 0;
L7af9:
	g51ba[g51b8] = slot;
	g51b8++;
	sel++;
L7b0f:
	if ((unsigned char)pc_swag_count[(432 * member)] > sel) goto L7a65;
	get_message(2035, &cancel_text);
	sel = 0;
	on_cancel = 0;
	set_click_region(0, ((unsigned char)list_win[2] + 2), ((unsigned char)list_win[3] + 2), ((unsigned char)list_win[2] + 19), ((unsigned char)list_win[3] + 2));
	set_click_region(1, ((unsigned char)list_win[2] + 1), (unsigned char)list_win[3], ((unsigned char)list_win[2] + 1), (unsigned char)list_win[3]);
	set_click_region(2, ((unsigned char)list_win[2] + 1), ((unsigned char)list_win[3] + 4), ((unsigned char)list_win[2] + 1), ((unsigned char)list_win[3] + 4));
	set_click_region(3, ((unsigned char)win[2] + 7), ((unsigned char)win[3] + 3), ((strlen(&cancel_text) + (unsigned char)win[2]) + 6), ((unsigned char)win[3] + 3));
	set_click_region(4, 255, 0, 0, 0);
L7c12:
	if (on_cancel != 1) goto L7c4f;
	set_cursor(win, 7, 3);
	print_string(win, &cancel_text, -3);
	draw_item_list(list_win, member, sel, 0);
	goto L7c84;
L7c4f:
	set_cursor(win, 7, 3);
	print_string_hi(win, &cancel_text, 3);
	draw_item_list(list_win, member, sel, 1);
L7c84:
	choice = get_menu_choice_blink(20668, 13720);
	if (menu_clicked != 1) goto L7cd3;
	switch (choice) {
case 0:
	choice = 5;
	goto L7cd3;
case 1:
	choice = 2;
	goto L7cd3;
case 2:
	choice = 4;
	goto L7cd3;
case 3:
	on_cancel = 1;
	choice = 5;
	goto L7cd3;
	}
L7cd3:
	switch (choice) {
case 1:
	if (on_cancel == 1) goto L7ce3;
	on_cancel = 1;
L7ce3:
	goto L7d3a;
case 2:
	if (on_cancel != 1) goto L7cf2;
	on_cancel = 0;
	goto L7cfb;
L7cf2:
	if (sel <= 0) goto L7cfb;
	sel--;
L7cfb:
	goto L7d3a;
case 3:
	if (on_cancel != 1) goto L7d08;
	on_cancel = 0;
L7d08:
	goto L7d3a;
case 4:
	if (on_cancel != 1) goto L7d17;
	on_cancel = 0;
	goto L7d24;
L7d17:
	if ((sel + 1) >= g51b8) goto L7d24;
	sel++;
L7d24:
	goto L7d3a;
	}
L7d3a:
	if (choice != 5) goto L7c12;
	sel = g51ba[sel];
	if (on_cancel) goto L7edf;
	if (check_item_location_event(member, sel)) goto L7ed3;
	access_scenario_record(1, &item, *(int *)((char *)pc_item_id + ((432 * member) + (sel << 3))), 0);
	if (!l64) goto L7dfc;
	level = (l64 / 256);
	spell = (l64 % 256);
	if (g00e2[(spell * 6)] != 1) goto L7dd4;
	refresh_all_windows();
	if ((g51b6 = choose_target_member(2032)) != -1) goto L7dd4;
	spell = -1;
L7dd4:
	if (spell == -1) goto L7df9;
	use_item_charge(member, sel);
	f6054(member, spell, level, g51b6);
L7df9:
	goto L7ed1;
L7dfc:
	if ((l23 != 4) || (game_state_arg != l68)) goto L7ea2;
	set_bit(((l68 * 10) + 20204), (unsigned char)l66, 0);
	set_bit(((l68 * 10) + 13304), (unsigned char)l66, 0);
	set_bit(((l68 * 10) + 20204), (unsigned char)l65, 1);
	set_bit(((l68 * 10) + 13304), (unsigned char)l65, 1);
	use_item_charge(member, sel);
	goto L7ed1;
L7ea2:
	if (l23 != 5) goto L7ec5;
	if (game_state_arg != 8) goto L7eb7;
	g4eca = 1;
	goto L7ec3;
L7eb7:
	g502a = 2055;
	g502c = 1;
L7ec3:
	goto L7ed1;
L7ec5:
	g502a = 2046;
	g502c = 1;
L7ed1:
	goto L7edf;
L7ed3:
	use_item_charge(member, sel);
L7edf:
	destroy_window(win, 0);
	destroy_window(list_win, 0);
	resume_window_draw(g4fb0);
	erase_window(main_window, 0);
	f0a42(bottom_line_win, 0);
	if (g502a <= 0) goto L7f2c;
	show_result_message(g502a);
L7f2c:
	;
}
