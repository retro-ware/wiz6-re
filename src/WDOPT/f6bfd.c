extern char g00df[];
extern char g00e0[];
extern char g00e2[];
extern char g503a;
extern char g503b;
extern char g5052;
extern char g5053;
extern int g502e;
extern int g5030;
extern int g5032;
extern int g5034;
extern int g5036;
extern int g5038;
extern int g51b6;
extern int menu_clicked;
extern int pc_level[];
extern int pc_spell_pts[];
extern int realm_colors[];
/* Spell book: pick realm, spell and power level; return (level<<8)+spell or -1. */
choose_spell(info_win, member)
{
	char *win;
	char *list_win;
	int choice;
	char x6[2];
	int count;
	int spells[20];
	int spell;
	int level;
	int max_level;
	int sel;
	int back;
	char x60[2];
	int realm;
	int cost;
	char x66[4];
	int redraw;
	int x;
	int y;
	win = create_window(0, 18, 23, 7, 25, -1, 0, 0);
	list_win = create_window(22, 19, 18, 6, 26, -5, 0, 0);
	draw_spell_points(win, member);
	draw_list_frame_dopt(list_win, 1);
	realm = 0;
	choice = 0;
L6c72:
	x = (((choice / 3) * 6) + 1);
	y = (((choice % 3) << 1) + 1);
	set_click_region(choice, ((unsigned char)win[2] + x), ((unsigned char)win[3] + y), ((unsigned char)win[2] + x), ((unsigned char)win[3] + y));
	choice++;
	if (choice < 6) goto L6c72;
	set_click_region(6, ((unsigned char)win[2] + 13), ((unsigned char)win[3] + 3), ((unsigned char)win[2] + 13), ((unsigned char)win[3] + 3));
L6cf7:
	set_click_region(7, 255, 0, 0, 0);
	redraw = 1;
	g5034 = win;
L6d16:
	if (redraw != 1) goto L6e78;
	g502e = 1;
	if (realm != -1) goto L6da0;
	g5032 = 13;
	g5030 = 3;
	clear_window_area(win, 13, 1, 20, 1);
	set_cursor(win, 13, 1);
	print_message(3956, win, 9);
	clear_window_area(win, 18, 5, 20, 5);
	count = -1;
	draw_list_frame_dopt(list_win, 1);
	goto L6e4f;
L6da0:
	g5032 = (((realm / 3) * 6) + 1);
	g5030 = (((realm % 3) << 1) + 1);
	clear_window_area(win, 13, 1, 20, 1);
	set_cursor(win, 13, 1);
	print_message((realm + 3950), win, realm_colors[realm]);
	clear_window_area(win, 18, 5, 20, 5);
	count = count_known_spells(member, realm, spells);
	draw_spell_list(list_win, member, realm, 0, 0, count, spells);
L6e4f:
	g5052 = 99;
	g5053 = 0;
	g5038 = 5;
	g503a = (char)(realm + 35);
	g503b = 0;
	g5036 = 17;
	redraw = 0;
L6e78:
	choice = get_menu_choice_blink(20668, 13720);
	if (menu_clicked != 1) goto L6ed2;
	if (choice != realm) goto L6e9c;
	choice = 5;
	goto L6eca;
L6e9c:
	draw_realm_icon(win, realm);
	if (choice >= 6) goto L6ebb;
	realm = choice;
	choice = 0;
	goto L6eca;
L6ebb:
	realm = -1;
	choice = 5;
	count = -1;
L6eca:
	redraw = 1;
	goto L6fb8;
L6ed2:
	switch (choice) {
case 1:
	if (realm != -1) goto L6ef6;
	draw_realm_icon(win, realm);
	realm = 4;
	redraw = 1;
	goto L6f13;
L6ef6:
	if ((realm - 3) < 0) goto L6f13;
	draw_realm_icon(win, realm);
	realm += -3;
	redraw = 1;
L6f13:
	goto L6fb8;
case 2:
	if (realm == -1) goto L6f40;
	if ((realm % 3) <= 0) goto L6f40;
	draw_realm_icon(win, realm);
	realm--;
	redraw = 1;
L6f40:
	goto L6fb8;
case 3:
	if (realm == -1) goto L6f6f;
	draw_realm_icon(win, realm);
	redraw = 1;
	if ((realm + 3) >= 6) goto L6f6a;
	realm = (realm + 3);
	goto L6f6f;
L6f6a:
	realm = -1;
L6f6f:
	goto L6fb8;
case 4:
	if (realm == -1) goto L6f9c;
	if (((realm % 3) + 1) >= 3) goto L6f9c;
	draw_realm_icon(win, realm);
	realm++;
	redraw = 1;
L6f9c:
	goto L6fb8;
	}
L6fb8:
	if (choice != 5) goto L6d16;
	if (!count) goto L6d16;
	if (realm != -1) goto L6ff7;
	g502e = -1;
	destroy_window(win, 0);
	destroy_window(list_win, 0);
	return -1;
L6ff7:
	draw_realm_icon(win, realm);
	sel = 0;
	back = 0;
	g5034 = list_win;
	g5032 = 2;
	g5030 = 2;
	strcpy(20538, 20484);
	g5036 = 0;
	set_click_region(7, ((unsigned char)list_win[2] + 1), (unsigned char)list_win[3], ((unsigned char)list_win[2] + 1), (unsigned char)list_win[3]);
	set_click_region(8, ((unsigned char)list_win[2] + 1), ((unsigned char)list_win[3] + 4), ((unsigned char)list_win[2] + 1), ((unsigned char)list_win[3] + 4));
	set_click_region(9, ((unsigned char)list_win[2] + 2), ((unsigned char)list_win[3] + 2), ((unsigned char)list_win[2] + 19), ((unsigned char)list_win[3] + 2));
	set_click_region(10, 255, 0, 0, 0);
L70c9:
	g502e = 1;
	get_message((spells[sel] + 4000), 20562);
	g5038 = realm_colors[realm];
	draw_spell_list(list_win, member, realm, sel, 1, count, spells);
	cost = (unsigned char)g00e0[(spells[sel] * 6)];
	set_cursor(win, 18, 5);
	if (*(int *)((char *)pc_spell_pts + ((432 * member) + (realm << 2))) >= cost) goto L7178;
	print_string(win, 20500, realm_colors[realm]);
	goto L7193;
L7178:
	print_int(win, cost, 3, realm_colors[realm]);
L7193:
	choice = get_menu_choice_blink(20668, 13720);
	if (menu_clicked != 1) goto L7216;
	switch (choice) {
case 0:
case 1:
case 2:
case 3:
case 4:
case 5:
	realm = choice;
	choice = 1;
	goto L7216;
case 6:
	g502e = -1;
	destroy_window(win, 0);
	destroy_window(list_win, 0);
	return -1;
case 7:
	choice = 2;
	goto L7216;
case 8:
	choice = 4;
	goto L7216;
case 9:
	choice = 5;
	goto L7216;
	}
L7216:
	switch (choice) {
case 1:
	back = 1;
	goto L724a;
case 2:
	if (sel <= 0) goto L722b;
	sel--;
L722b:
	goto L724a;
case 4:
	if ((sel + 1) >= count) goto L7239;
	sel++;
L7239:
	goto L724a;
	}
L724a:
	if (choice == 5) goto L7259;
	if (back != 1) goto L70c9;
L7259:
	if (back == 1) goto L6cf7;
	spell = spells[sel];
	draw_list_frame_dopt(list_win, 0);
	defer_window_draw(list_win);
	set_cursor(list_win, 2, 2);
	print_message((spell + 4000), list_win, 18);
	resume_window_draw(list_win);
	refresh_window(list_win);
	g5034 = win;
	level = 1;
	max_level = ((*(int *)((char *)pc_level + (432 * member)) - (unsigned char)g00df[(spell * 6)]) + 1);
#asm
	db 0b8h,001h,000h,08bh,04eh,0c8h,083h,0f9h,001h,07ch,00ch,08bh,0c1h,050h,03dh,006h
	db 000h,058h,07eh,003h,0b8h,006h,000h
#endasm
L7300:
	;
#asm
l7300:
	db 089h,046h,0c8h
#endasm
	choice = 0;
	goto L7343;
L730a:
	set_click_region(choice, (((unsigned char)win[2] + choice) + 15), ((unsigned char)win[3] + 3), (((unsigned char)win[2] + choice) + 15), ((unsigned char)win[3] + 3));
	choice++;
L7343:
	if (choice < max_level) goto L730a;
	set_click_region(max_level, ((unsigned char)win[2] + 13), ((unsigned char)win[3] + 3), ((unsigned char)win[2] + 13), ((unsigned char)win[3] + 3));
	set_click_region((max_level + 1), 255, 0, 0, 0);
	redraw = 1;
L7395:
	cost = ((unsigned char)g00e0[(spell * 6)] * level);
	if (redraw != 1) goto L74e1;
	redraw = 0;
	g502e = 1;
	if (level) goto L744e;
	g5032 = 13;
	g5030 = 3;
	g5052 = 99;
	g5053 = 0;
	g5038 = 5;
	g503a = 34;
	g503b = 0;
	g5036 = 17;
	clear_window_area(win, 13, 1, 20, 1);
	set_cursor(win, 13, 1);
	print_message(3956, win, 9);
	clear_window_area(win, 18, 5, 20, 5);
	goto L74e1;
L744e:
	g5032 = (level + 14);
	g5030 = 3;
	g5052 = (char)(level + 23);
	g5053 = 0;
	g5038 = 7;
	g503a = 32;
	g503b = 0;
	g5036 = 0;
	set_cursor(win, 18, 5);
	if (*(int *)((char *)pc_spell_pts + ((432 * member) + (realm << 2))) >= cost) goto L74c6;
	print_string(win, 20504, realm_colors[realm]);
	goto L74e1;
L74c6:
	print_int(win, cost, 3, realm_colors[realm]);
L74e1:
	choice = get_menu_choice_blink(20668, 13720);
	if (menu_clicked != 1) goto L7558;
	if ((choice + 1) != level) goto L7506;
	choice = 5;
	goto L7550;
L7506:
	set_cursor(win, (level + 14), 3);
	put_char(win, (unsigned char)((level + 23)), 5);
	level = (choice < max_level ? (choice + 1) : 0);
	choice = (level == 0 ? 5 : 0);
L7550:
	redraw = 1;
	goto L7649;
L7558:
	switch (choice) {
case 1:
	if (level <= 0) goto L7596;
	set_cursor(win, (level + 14), 3);
	put_char(win, (unsigned char)((level + 23)), 5);
	level--;
	redraw = 1;
L7596:
	goto L7649;
case 3:
	if (level) goto L75fd;
	draw_realm_icon(win, -1);
	clear_window_area(win, 13, 1, 20, 1);
	set_cursor(win, 13, 1);
	print_message((realm + 3950), win, realm_colors[realm]);
	level = 1;
	redraw = 1;
	goto L7637;
L75fd:
	if (level >= max_level) goto L7637;
	set_cursor(win, (level + 14), 3);
	put_char(win, (unsigned char)((level + 23)), 5);
	level++;
	redraw = 1;
L7637:
	goto L7649;
	}
L7649:
	if (choice != 5) goto L7395;
	if (*(int *)((char *)pc_spell_pts + ((432 * member) + (realm << 2))) < cost) goto L7395;
	g502e = -1;
	destroy_window(win, 0);
	destroy_window(list_win, 0);
	if (level) goto L769b;
	return -1;
L769b:
	if (g00e2[(spell * 6)] != 1) goto L76c8;
	refresh_all_windows();
	if ((g51b6 = choose_target_member(2030)) != -1) goto L76c8;
	return -1;
L76c8:
	return ((level << 8) + spell);
}
