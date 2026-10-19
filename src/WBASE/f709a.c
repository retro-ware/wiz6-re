#asm
	extrn do_game_configuration_:near
	extrn start_game_:near
#endasm
extern char roster_slot_used[];
extern int anim_phase;
extern int bottom_line_win;
extern int camp_anim_tick;
extern int cur_member;
extern int g4fb8;
extern int g4fba;
extern int game_state;
extern int member_pcfile_index[];
extern int party_count;
extern int return_cmd;
extern int roster_slot_count;
/* Master options menu: add/review/dismiss member, new or saved game, character menu, configuration, title, quit. */
do_master_options()
{
	int win;
	int i;
	char x4[2];
	int choice;
	int sel;
	char x10[10];
	int l22;
	int enabled[9];
	get_message(1000, 20582);
	load_monster_pic_slot(8, 4);
	camp_anim_tick = 0;
	anim_phase = 0;
	defer_window_draw(g4fba);
	defer_window_draw(g4fb8);
	if (party_count <= 0) goto L70fc;
	cur_member = 0;
	goto L70f3;
L70e7:
	draw_member_panel(cur_member);
	cur_member++;
L70f3:
	if (cur_member < party_count) goto L70e7;
L70fc:
	resume_window_draw(g4fba);
	resume_window_draw(g4fb8);
	init_camp_scene();
	sel = (party_count < 6 ? 0 : 3);
	game_state = -1;
	if (game_state >= 0) goto L7341;
	show_message_line(1001);
	erase_window(bottom_line_win, 0);
	win = create_window(0, 19, 40, 5, 15, -1, 0, 0);
	fill_window(win, 32, 3, 0);
	choice = 0;
L7185:
	enabled[choice] = 1;
	choice++;
	if (choice <= 8) goto L7185;
	l22 = -1;
	if (party_count >= 1) goto L71b4;
	enabled[1] = 0;
	enabled[2] = 0;
L71b4:
	if (party_count >= 2) goto L71c0;
	enabled[3] = 0;
L71c0:
	enabled[0] = 0;
	i = 0;
	goto L71de;
L71cc:
	if (roster_slot_used[i] != 1) goto L71db;
	enabled[0] = 1;
L71db:
	i++;
L71de:
	if (i < roster_slot_count) goto L71cc;
	if (party_count <= 5) goto L71f3;
	enabled[0] = 0;
L71f3:
	if (party_count <= 0) goto L71ff;
	enabled[4] = 0;
L71ff:
	sel = count_enabled_items(enabled, sel);
	choice = run_menu(win, 1002, enabled, 2, 1, 19, 4, 5, sel);
	destroy_window(win, 0);
	sel = (party_count < 6 ? 0 : 3);
#asm
	db 08bh,046h,0f8h,0e9h,0d6h,000h
#endasm
	add_party_member();
	if (party_count != 6) goto L726a;
	sel = 3;
L726a:
	;
#asm
l726a:
	db 0e9h,0d1h,000h
#endasm
	cur_member = choose_party_member(1202);
	if (cur_member == -1) goto L7289;
	game_state = 17;
	return_cmd = 4;
L7289:
	sel = 1;
#asm
	db 0e9h,0adh,000h
#endasm
	cur_member = choose_party_member(1203);
	if (cur_member == -1) goto L72a6;
	remove_party_member(cur_member);
L72a6:
	if (party_count <= 0) goto L72b2;
	sel = 2;
L72b2:
	;
#asm
l72b2:
	db 0e9h,089h,000h
#endasm
	remove_all_members();
	game_state = 16;
#asm
	db 0e9h,07dh,000h
#endasm
	i = 0;
	goto L72db;
L72c8:
	roster_slot_used[member_pcfile_index[i]] = 1;
	i++;
L72db:
	if (i < party_count) goto L72c8;
#asm
	db 0b8h,000h,000h,050h
	call start_game_
	db 059h,0ebh,050h,0b8h,001h,000h,050h
	call start_game_
	db 059h,0ebh,046h
#endasm
	return_cmd = 4;
#asm
	call do_game_configuration_
	db 0ebh,03bh
#endasm
	remove_all_members();
	close_game_windows();
	game_state = 1;
#asm
	db 0ebh,02dh
#endasm
	remove_all_members();
	close_game_windows();
	game_state = 3;
#asm
	db 0ebh,01fh,05bh,072h,06dh,072h,091h,072h,0c1h,072h,0eeh,072h,0b5h,072h,0f8h,072h
	db 003h,073h,011h,073h
l7331:
	db 03dh,009h,000h,073h,008h,093h,0d1h,0e3h,02eh,0ffh,0a7h,01fh,073h
l733e:
	db 0e9h,0e4h,0fdh
#endasm
L7341:
	;
}
