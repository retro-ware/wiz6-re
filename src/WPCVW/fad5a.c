extern char pc_item_count[];
extern char pc_item_flags[];
extern int bottom_line_win;
extern int cur_member;
extern int g43ca;
extern int g5752;
extern int g57fc;
extern int game_state;
extern int party_count;
extern int pc_gold[];
extern int return_cmd;
/* Character sheet main loop: inventory, use, drop, cast, trade, merge, swag, skills, modify, other member. */
view_character(member)
{
	int sheet;
	int menu;
	int choice;
	char x6[4];
	int l12;
	char x12[2];
	int l16;
	int enabled[10];
	int l38;
	register int rsi;
	game_state = return_cmd;
	get_message(300, 21822);
	g5752 = create_window(20, 4, 20, 16, 26, -1, 0, 0);
	fill_window(g5752, 32, 3, 0);
	defer_window_draw(g5752);
	draw_portrait_frame(g5752);
	sheet = create_window(0, 0, 40, 20, 20, -1, 0, 0);
	menu = create_window(0, 20, 40, 4, 15, -1, 0, 0);
	resume_window_draw(bottom_line_win);
	erase_window(bottom_line_win, 0);
	g57fc = 0;
Lae23:
	draw_sheet(sheet, menu, member);
	l38 = 1;
	for (rsi = 0; rsi <= 11; rsi++) {
	enabled[rsi] = 1;
	}
	if (return_cmd != 4) goto Lae8f;
	for (rsi = 0; rsi < 11; rsi++) {
	enabled[rsi] = 0;
	}
	enabled[0] = 1;
	enabled[3] = 1;
	enabled[8] = 1;
	l16 = 1;
	enabled[1] = 1;
	enabled[4] = 1;
	l38 = 0;
	goto Laecf;
Lae8f:
	if (return_cmd != 13) goto Laecf;
	for (rsi = 0; rsi < 11; rsi++) {
	enabled[rsi] = 0;
	}
	enabled[0] = 1;
	enabled[7] = 1;
	enabled[3] = 1;
	enabled[8] = 1;
	enabled[1] = 1;
	enabled[4] = 1;
	l38 = 0;
Laecf:
	if (party_count >= 2) goto Laee0;
	l16 = 0;
	enabled[2] = 0;
Laee0:
	if (pc_item_count[(432 * member)]) goto Laefe;
	enabled[3] = 0;
	enabled[7] = 0;
	enabled[6] = 0;
Laefe:
	if ((unsigned)pc_item_count[(432 * member)] >= 2) goto Laf0a;
	enabled[5] = 0;
Laf0a:
	if ((*(long *)((char *)pc_gold + (432 * member)) != 0L) || (pc_item_count[(432 * member)])) goto Laf24;
	enabled[2] = 0;
Laf24:
	if (is_member_able(member)) goto Laf39;
	enabled[1] = 0;
	enabled[6] = 0;
Laf39:
	l12 = -1;
	flush_keys();
	choice = run_menu(menu, 301, enabled, 2, 1, 6, 2, 5, count_enabled_before(enabled, 11));
	switch (choice) {
case 0:
	do_equip_items(sheet, menu, member);
	goto Lb111;
case 1:
	do_cast_menu(sheet, menu, member, l38);
	goto Lb111;
case 2:
	do_trade_items(sheet, menu, member);
	goto Lb111;
case 3:
	if ((g43ca = choose_item(sheet, menu, 450, member, 0)) == -1) goto Lafe7;
	show_item_info(menu, member, g43ca, 0);
Lafe7:
	goto Lb111;
case 7:
	if ((g43ca = choose_item(sheet, menu, 402, member, 0)) == -1) goto Lb049;
	if (((!((unsigned char)pc_item_flags[((432 * member) + (g43ca << 3))] & 1)) && (!((unsigned char)pc_item_flags[((432 * member) + (g43ca << 3))] & 2))) && (!((unsigned char)pc_item_flags[((432 * member) + (g43ca << 3))] & 64))) goto Lb03c;
	play_sound(0);
	goto Lb049;
Lb03c:
	remove_item(member, g43ca);
Lb049:
	goto Lb111;
case 6:
	if ((g43ca = choose_item(sheet, menu, 400, member, 0)) == -1) goto Lb07b;
	do_use_item(sheet, menu, member, g43ca);
Lb07b:
	goto Lb111;
case 5:
	do_merge_items(sheet, menu, member);
	goto Lb111;
case 9:
	do_modify_menu(sheet, menu, member);
	goto Lb111;
case 4:
	do_swag_menu(sheet, menu, member);
	goto Lb111;
case 8:
	do_skills_menu(menu, member);
	goto Lb111;
case 10:
	if ((cur_member = choose_member(sheet, menu, 500, member)) == -1) goto Lb0e6;
	member = cur_member;
	g57fc = 0;
	goto Lb0ec;
Lb0e6:
	cur_member = member;
Lb0ec:
	goto Lb111;
	}
Lb111:
	if (choice != 11) goto Lae23;
	destroy_window(g5752, 0);
	close_sheet(menu, sheet);
}
