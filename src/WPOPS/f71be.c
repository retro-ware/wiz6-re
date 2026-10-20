extern char *monster_groups;
extern char g00cc[];
extern char g00e2[];
extern char pc_item_count[];
extern char pc_item_qty[];
extern char pc_item_type[];
extern int menu_clicked;
extern int pc_item_id[];
choose_combat_item(win, member)
{
	char *l2;
	char *l4;
	int l6;
	int pos;
	int on_cancel;
	char x10[44];
	int l56;
	char x56[26];
	int item;
	char l264[180];
	char x264[8];
	int l274;
	int l276;
	int l278;
	int l280;
	int l282;
	l2 = create_window(0, 19, 19, 5, 12, -4, 0, 0);
	fill_window(l2, 32, 3, 0);
	l4 = create_window(20, 19, 20, 5, 20, -5, 0, 0);
	fill_window(l4, 32, 3, 0);
	defer_window_draw(l2);
	set_cursor(l2, 2, 1);
	print_message(3504, l2, 18);
	resume_window_draw(l2);
	draw_combat_list_box(l4, 0);
	refresh_all_windows();
	pos = 0;
	goto L7316;
L7281:
	access_scenario_record(1, &item, *(int *)((char *)pc_item_id + ((432 * member) + (pos << 3))), 0);
	strcpy(((pos << 4) + ((char *)l264 + 20)), &item);
	if (g00cc[(unsigned char)pc_item_type[((432 * member) + (pos << 3))]] == 1) {
	*(int *)(l264 + (pos << 1)) = (unsigned char)pc_item_qty[((432 * member) + (pos << 3))];
	} else {
	*(int *)(l264 + (pos << 1)) = 0;
	}
	pos++;
L7316:
	if ((unsigned char)pc_item_count[(432 * member)] > pos) goto L7281;
	get_message(3505, &l274);
	pos = 0;
	on_cancel = 0;
	set_click_region(0, ((unsigned char)l4[2] + 2), ((unsigned char)l4[3] + 2), ((unsigned char)l4[2] + 19), ((unsigned char)l4[3] + 2));
	set_click_region(1, ((unsigned char)l4[2] + 1), (unsigned char)l4[3], ((unsigned char)l4[2] + 1), (unsigned char)l4[3]);
	set_click_region(2, ((unsigned char)l4[2] + 1), ((unsigned char)l4[3] + 4), ((unsigned char)l4[2] + 1), ((unsigned char)l4[3] + 4));
	set_click_region(3, ((unsigned char)l2[2] + 7), ((unsigned char)l2[3] + 3), ((strlen(&l274) + (unsigned char)l2[2]) + 6), ((unsigned char)l2[3] + 3));
	set_click_region(4, 255, 0, 0, 0);
L741b:
	if (on_cancel == 1) {
	set_cursor(l2, 7, 3);
	print_string(l2, &l274, -3);
	draw_item_list(l4, member, pos, 0, ((char *)l264 + 20), l264);
	} else {
	set_cursor(l2, 7, 3);
	print_string_hi(l2, &l274, 3);
	draw_item_list(l4, member, pos, 1, ((char *)l264 + 20), l264);
	}
	l6 = get_combat_input(17270, 13720);
	if (menu_clicked != 1) goto L74f2;
	switch (l6) {
case 0:
	l6 = 5;
	goto L74f2;
case 1:
	l6 = 2;
	goto L74f2;
case 2:
	l6 = 4;
	goto L74f2;
case 3:
	on_cancel = 1;
	l6 = 5;
	goto L74f2;
	}
L74f2:
	switch (l6) {
case 1:
	if (on_cancel != 1) {
	on_cancel = 1;
	}
	goto L7565;
case 2:
	if (on_cancel == 1) {
	on_cancel = 0;
	} else {
	if (pos > 0) {
	pos--;
	}
	}
	goto L7565;
case 3:
	if (on_cancel == 1) {
	on_cancel = 0;
	}
	goto L7565;
case 4:
	if (on_cancel == 1) {
	on_cancel = 0;
	} else {
	if ((unsigned char)pc_item_count[(432 * member)] > (pos + 1)) {
	pos++;
	}
	}
	goto L7565;
	}
L7565:
	if (l6 != 5) goto L741b;
	destroy_window(l2, 0);
	destroy_window(l4, 0);
	if (on_cancel != 1) goto L7596;
	return -1;
L7596:
	access_scenario_record(1, &item, *(int *)((char *)pc_item_id + ((432 * member) + (pos << 3))), 0);
	if (!l56) goto L7690;
	l278 = (l56 / 256);
	l276 = (l56 % 256);
	if (g00e2[(l276 * 6)] != 1) goto L7642;
	fill_window(win, 32, 3, 0);
	refresh_all_windows();
	(monster_groups + (44 * member))[31] = 0;
	if ((l282 = select_party_member(3610)) != -1) goto L762b;
	return -1;
L762b:
	(monster_groups + (44 * member))[32] = *(char *)&l282;
	goto L7690;
L7642:
	if (g00e2[(l276 * 6)] != 2) goto L7690;
	if ((l280 = select_monster_group(win, 3604, 3, 0)) != -1) goto L767b;
	return -1;
L767b:
	(monster_groups + (44 * member))[31] = *(char *)&l280;
L7690:
	return pos;
}
