#asm
	extrn draw_setting_value_:near
	extrn input_text_:near
	extrn play_sound_:near
#endasm
extern char *main_window;
extern char cfg_delay;
extern char cfg_input;
extern char cfg_level;
extern char sound_mode;
extern int bottom_line_win;
extern int g4fc8;
extern int menu_clicked;
extern int mouse_present;
extern int return_cmd;
extern int scenario_hdr_fd;
extern int video_flags;
/* Game configuration menu (sound, delay, level, input, gmode, drives); saves to SCENARIO.HDR. */
do_game_configuration()
{
	int i;
	int l4;
	char *win;
	int sel;
	int prev_sel;
	int choice;
	int written;
	char x14[8];
	int done_text;
	char x24[8];
	int done_hilite;
	int done_x;
	int done_y;
	int x;
	char x40[2];
	int width;
	char x44[4];
	int changed;
	char x50[58];
	int l110;
	get_message(1000, 20582);
	changed = 0;
	win = create_window(0, 19, 40, 5, 22, -1, 0, 0);
	fill_window(win, 32, 3, 0);
	erase_window(main_window, 0);
	erase_window(bottom_line_win, 0);
	get_message(2308, &done_text);
	get_message(2309, &done_hilite);
	show_message_line(2307);
	done_x = (unsigned char)main_window[6];
	done_y = (unsigned char)main_window[7];
	defer_window_draw(win);
	for (i = 0; i < 5; i++) {
	set_cursor(win, 1, i);
	print_message((i + 2300), win, 18);
	draw_setting_value(win, i, i, (i < 2 ? 5 : 6));
	x = (i != 1 ? (i < 5 ? 7 : 19) : 9);
	width = (i != 1 ? (i < 5 ? 10 : 20) : 1);
	set_click_region(i, ((unsigned char)win[2] + x), ((unsigned char)win[3] + i), ((((unsigned char)win[2] + x) + width) - 1), ((unsigned char)win[3] + i));
	}
	set_cursor(win, 22, 0);
	print_message(2305, win, 18);
	clear_window_area(win, 19, 1, 38, 1);
	draw_setting_value(win, 5, 1, 7);
	set_click_region(5, ((unsigned char)win[2] + 19), ((unsigned char)win[3] + 1), ((unsigned char)win[2] + 38), ((unsigned char)win[3] + 1));
	set_cursor(win, 22, 2);
	print_message(2306, win, 18);
	clear_window_area(win, 19, 3, 38, 3);
	draw_setting_value(win, 6, 3, 4);
	set_click_region(6, ((unsigned char)win[2] + 19), ((unsigned char)win[3] + 3), ((unsigned char)win[2] + 38), ((unsigned char)win[3] + 3));
	clear_window_area(win, 19, 4, 38, 4);
	draw_setting_value(win, 7, 4, 4);
	set_click_region(7, ((unsigned char)win[2] + 19), ((unsigned char)win[3] + 4), ((unsigned char)win[2] + 38), ((unsigned char)win[3] + 4));
	set_click_region(8, ((unsigned char)win[2] + 7), ((unsigned char)win[3] + 1), ((unsigned char)win[2] + 8), ((unsigned char)win[3] + 1));
	set_click_region(9, ((unsigned char)main_window[2] + done_x), ((unsigned char)main_window[3] + done_y), (((strlen(&done_hilite) + (unsigned char)main_window[2]) + done_x) - 1), ((unsigned char)main_window[3] + done_y));
	set_click_region(10, 255, 0, 0, 0);
	resume_window_draw(win);
	refresh_all_windows();
	if (mouse_present) goto L7a2b;
	set_cursor(main_window, done_x, done_y);
	print_string(main_window, &done_hilite, -5);
	goto L7a4d;
L7a2b:
	set_cursor(main_window, done_x, done_y);
	print_string_hi(main_window, &done_text, 3);
L7a4d:
	sel = -1;
L7a52:
	if (mouse_present) goto L7ac2;
	if (sel != -1) goto L7a83;
	set_cursor(main_window, done_x, done_y);
	print_string(main_window, &done_hilite, -5);
	goto L7abf;
L7a83:
	if (sel >= 5) goto L7a9e;
	draw_setting_value(win, sel, sel, -5);
	goto L7abf;
L7a9e:
	;
#asm
l7a9e:
	db 0b8h,0fbh,0ffh,050h,0b9h,003h,000h,08bh,046h,0f8h,03dh,005h,000h,075h,003h,0b9h
	db 004h,000h
#endasm
L7ab0:
	;
#asm
l7ab0:
	db 02bh,0c1h,050h,0ffh,076h,0f8h,0ffh,076h,0fah
	call draw_setting_value_
	db 083h,0c4h,008h
#endasm
L7abf:
	goto L7b39;
L7ac2:
	if (sel != -1) goto L7aec;
	set_cursor(main_window, done_x, done_y);
	print_string_hi(main_window, &done_text, 3);
	goto L7b39;
L7aec:
	if (sel >= 5) goto L7b0e;
	draw_setting_value(win, sel, sel, (sel < 2 ? 5 : 6));
	goto L7b39;
L7b0e:
	draw_setting_value(win, sel, (sel - (sel == 5 ? 4 : 3)), (sel == 5 ? 7 : 4));
L7b39:
	prev_sel = sel;
	if (return_cmd != 25) goto L7b59;
	choice = get_menu_choice(20582, 13720);
	goto L7b6a;
L7b59:
	choice = get_menu_choice_animated(20582, 13720);
L7b6a:
	if (menu_clicked != 1) goto L7ba1;
	if (choice != 8) goto L7b83;
	sel = 1;
	choice = 1;
	goto L7ba1;
L7b83:
	sel = (choice < 8 ? choice : -1);
	choice = (sel == -1 ? 5 : 3);
L7ba1:
	switch (choice) {
case 2:
	if (sel != -1) goto L7bb4;
	sel = 7;
	goto L7bb7;
L7bb4:
	sel--;
L7bb7:
	goto L7d10;
case 4:
	if (sel != -1) goto L7bc7;
	sel = 0;
	goto L7bd7;
L7bc7:
	if (sel >= 7) goto L7bd2;
	sel++;
	goto L7bd7;
L7bd2:
	sel = -1;
L7bd7:
	goto L7d10;
case 1:
case 3:
	changed = 1;
	i = (choice == 1 ? -1 : 1);
#asm
	db 08bh,046h,0f8h,0e9h,0edh,000h
#endasm
	sound_mode = (char)((((unsigned char)sound_mode + i) + 6) % 6);
	goto L7cee;
	if (((l4 = ((unsigned char)cfg_delay + i)) < 0) || (l4 > 255)) goto L7c2a;
	cfg_delay = *(char *)&l4;
#asm
	db 0ebh,008h
#endasm
L7c2a:
	play_sound(0);
L7c32:
	g4fc8 = (unsigned char)cfg_delay;
	goto L7cee;
	cfg_level = (char)((((unsigned char)cfg_level + i) + 3) % 3);
#asm
	db 0e9h,098h,000h
#endasm
	cfg_input = (char)((((unsigned char)cfg_input + i) + 2) % 2);
#asm
	db 0e9h,080h,000h,0b8h,000h,000h,050h
	call play_sound_
	db 059h,0ebh,076h
#endasm
	clear_window_area(win, 19, 1, 38, 1);
	set_cursor(win, 19, 1);
#asm
	db 0b8h,000h,000h,050h,0b8h,007h,000h,050h,0b8h,013h,000h,050h,0b8h,07ch,035h,050h
	db 0ffh,076h,0fah
	call input_text_
	db 083h,0c4h,00ah,0ebh,031h,0b8h,000h,000h,050h
	call play_sound_
	db 059h,0ebh,027h,0b8h,000h,000h,050h
	call play_sound_
	db 059h,0ebh,01dh,0f4h,07bh,00dh,07ch,03dh,07ch,056h,07ch,06eh,07ch,078h,07ch,0bdh
	db 07ch,0c7h,07ch
l7ce1:
	db 03dh,008h,000h,073h,008h,093h,0d1h,0e3h,02eh,0ffh,0a7h,0d1h,07ch
#endasm
L7cee:
	goto L7d10;
	}
L7d10:
	if ((mouse_present) || (prev_sel == sel)) goto L7d9b;
	if (prev_sel != -1) goto L7d4e;
	set_cursor(main_window, done_x, done_y);
	print_string_hi(main_window, &done_text, 3);
	goto L7d9b;
L7d4e:
	if (prev_sel >= 5) goto L7d70;
	draw_setting_value(win, prev_sel, prev_sel, (prev_sel < 2 ? 5 : 6));
	goto L7d9b;
L7d70:
	draw_setting_value(win, prev_sel, (prev_sel - (prev_sel == 5 ? 4 : 3)), (prev_sel == 5 ? 7 : 4));
L7d9b:
	if ((choice != 5) || (sel != -1)) goto L7a52;
	stop_sound();
	if (changed != 1) goto L7e36;
	get_message(2258, &l110);
	if ((scenario_hdr_fd = open(make_data_path(20552, 0), 2)) != -1) goto L7df0;
	exit_game(19);
L7df0:
	lseek(scenario_hdr_fd, 0L, 0);
	if ((written = write(scenario_hdr_fd, 13304, 414)) != -1) goto L7e2e;
	show_error_text(&l110, 0);
L7e2e:
	close(scenario_hdr_fd);
L7e36:
	g4fc8 = (unsigned char)cfg_delay;
	if ((!(video_flags & 4096)) || (cfg_input != 1)) goto L7e5f;
	if (mouse_present) goto L7e57;
	drv_op_96();
L7e57:
	mouse_present = 1;
	goto L7e6f;
L7e5f:
	if (mouse_present != 1) goto L7e69;
	drv_mouse_shutdown();
L7e69:
	mouse_present = 0;
L7e6f:
	clear_click_flag();
	destroy_window(win, 0);
	erase_window(main_window, 0);
	f0a42(bottom_line_win, 0);
}
