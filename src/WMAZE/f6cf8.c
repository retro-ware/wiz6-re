#asm
	extrn destroy_window_:near
	extrn disk_options_menu_:near
	extrn reorder_party_:near
	extrn tick_effect_timers_:near
#endasm
extern char *g4f84;
extern char *main_window;
extern char pc_item_count[];
extern int cur_member;
extern int g4338;
extern int g4354;
extern int g4fb0;
extern int g503c;
extern int game_state;
extern int party_count;
extern int party_level;
extern int return_cmd;
maze_party_menu()
{
	char x0[4];
	int l6;
	char x6[10];
	int l18;
	char x18[6];
	int l26;
	int l36[5];
	int l38;
	char x38[20];
	defer_window_draw(g4fb0);
	l38 = create_window(0, 19, 19, 5, 20, -4, 0, 0);
	fill_window(l38, 32, 3, 0);
	erase_window(main_window, 0);
	f0a42(main_window, 0);
	refresh_all_windows();
	g503c = 1;
	set_cursor(main_window, 3, 0);
	print_message(2002, main_window, 18);
	main_window[6]++;
	l6 = 0;
L6d93:
	l36[l6] = 1;
	l6++;
	if (l6 <= 8) goto L6d93;
	if (party_count >= 2) goto L6db8;
	l26 = 0;
L6db8:
	l18 = -1;
	l6 = maze_menu_select(l38, 2005, l36, 1, 1, 7, 3, 5, 0);
#asm
	db 0b8h,000h,000h,050h,0ffh,076h,0dah
	call destroy_window_
	db 083h,0c4h,004h,08bh,046h,0fah,0e9h,010h,001h
#endasm
	search_cell();
	tick_effect_timers(1);
	goto L6f16;
	if ((cur_member = choose_party_member_m(2026, 1)) == -1) goto L6e31;
	tick_effect_timers(1);
	game_state = 17;
	return_cmd = 5;
L6e31:
	goto L6f16;
	if ((cur_member = choose_party_member_m(2029, 1)) == -1) goto L6e67;
	if (!is_member_able(cur_member)) goto L6e67;
	tick_effect_timers(1);
	game_state = 19;
	return_cmd = 5;
L6e67:
	goto L6f16;
	if ((cur_member = choose_party_member_m(2031, 1)) == -1) goto L6ead;
	if (!is_member_able(cur_member)) goto L6ead;
	if ((unsigned)pc_item_count[(432 * cur_member)] <= 0) goto L6ead;
	tick_effect_timers(1);
	game_state = 20;
	return_cmd = 5;
L6ead:
	goto L6f16;
	handle_locked_door();
#asm
	db 0b8h,001h,000h,050h
	call tick_effect_timers_
	db 059h,0ebh,05ah
	call reorder_party_
	db 0ebh,055h
#endasm
	if (rest_party() != 1) goto L6eee;
	*(int *)g4f84 = f467b(f46e8(party_level));
	g4338 = 0;
	g4354 = 0;
	game_state = 10;
L6eee:
	goto L6f16;
#asm
	call disk_options_menu_
	db 0ebh,021h,0ebh,01fh,0f9h,06dh,007h,06eh,034h,06eh,06ah,06eh,0afh,06eh,0bch,06eh
	db 0c1h,06eh,0f0h,06eh,0f5h,06eh
l6f09:
	db 03dh,009h,000h,073h,008h,093h,0d1h,0e3h,02eh,0ffh,0a7h,0f7h,06eh
#endasm
L6f16:
	resume_window_draw(g4fb0);
	erase_window(main_window, 0);
}
