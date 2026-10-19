#asm
	extrn do_cast_menu_:near
	extrn do_merge_items_:near
	extrn do_modify_menu_:near
	extrn do_skills_menu_:near
	extrn do_swag_menu_:near
	extrn do_trade_items_:near
#endasm
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
	rsi = 0;
Lae3a:
	enabled[rsi] = 1;
	rsi++;
	if (rsi <= 11) goto Lae3a;
	if (return_cmd != 4) goto Lae8f;
	rsi = 0;
Lae57:
	enabled[rsi] = 0;
	rsi++;
	if (rsi < 11) goto Lae57;
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
	rsi = 0;
Lae99:
	enabled[rsi] = 0;
	rsi++;
	if (rsi < 11) goto Lae99;
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
	if (*(long *)((char *)pc_gold + (432 * member)) != 0L) goto Laf24;
	if (pc_item_count[(432 * member)]) goto Laf24;
	enabled[2] = 0;
Laf24:
	if (is_member_able(member)) goto Laf39;
	enabled[1] = 0;
	enabled[6] = 0;
Laf39:
	l12 = -1;
	flush_keys();
	choice = run_menu(menu, 301, enabled, 2, 1, 6, 2, 5, count_enabled_before(enabled, 11));
#asm
	db 0e9h,089h,001h
#endasm
	do_equip_items(sheet, menu, member);
	goto Lb111;
#asm
	db 0ffh,076h,0dah,0ffh,076h,004h,0ffh,076h,0fch,0ffh,076h,0feh
	call do_cast_menu_
	db 083h,0c4h,008h,0e9h,06fh,001h,0ffh,076h,004h,0ffh,076h,0fch,0ffh,076h,0feh
	call do_trade_items_
	db 083h,0c4h,006h,0e9h,05dh,001h
#endasm
	if ((g43ca = choose_item(sheet, menu, 450, member, 0)) == -1) goto Lafe7;
	show_item_info(menu, member, g43ca, 0);
Lafe7:
	goto Lb111;
	if ((g43ca = choose_item(sheet, menu, 402, member, 0)) == -1) goto Lb049;
	if (((unsigned char)pc_item_flags[((432 * member) + (g43ca << 3))] & 1)) goto Lb032;
	if (((unsigned char)pc_item_flags[((432 * member) + (g43ca << 3))] & 2)) goto Lb032;
	if (!((unsigned char)pc_item_flags[((432 * member) + (g43ca << 3))] & 64)) goto Lb03c;
Lb032:
	play_sound(0);
	goto Lb049;
Lb03c:
	remove_item(member, g43ca);
Lb049:
	goto Lb111;
	if ((g43ca = choose_item(sheet, menu, 400, member, 0)) == -1) goto Lb07b;
	do_use_item(sheet, menu, member, g43ca);
Lb07b:
	goto Lb111;
#asm
	db 0ffh,076h,004h,0ffh,076h,0fch,0ffh,076h,0feh
	call do_merge_items_
	db 083h,0c4h,006h,0e9h,081h,000h,0ffh,076h,004h,0ffh,076h,0fch,0ffh,076h,0feh
	call do_modify_menu_
	db 083h,0c4h,006h,0ebh,070h,0ffh,076h,004h,0ffh,076h,0fch,0ffh,076h,0feh
	call do_swag_menu_
	db 083h,0c4h,006h,0ebh,05fh,0ffh,076h,004h,0ffh,076h,0fch
	call do_skills_menu_
	db 083h,0c4h,004h,0ebh,051h
#endasm
	if ((cur_member = choose_member(sheet, menu, 500, member)) == -1) goto Lb0e6;
	member = cur_member;
	g57fc = 0;
#asm
	db 0ebh,006h
#endasm
Lb0e6:
	cur_member = member;
Lb0ec:
	goto Lb111;
#asm
	db 07bh,0afh,08dh,0afh,0a2h,0afh,0b4h,0afh,0a1h,0b0h,07eh,0b0h,04ch,0b0h,0eah,0afh
	db 0b2h,0b0h,090h,0b0h,0c0h,0b0h
lb104:
	db 03dh,00bh,000h,073h,008h,093h,0d1h,0e3h,02eh,0ffh,0a7h,0eeh,0b0h
#endasm
Lb111:
	if (choice != 11) goto Lae23;
	destroy_window(g5752, 0);
	close_sheet(menu, sheet);
}
