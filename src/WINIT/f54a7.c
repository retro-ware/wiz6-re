extern char g4326[];
extern char g4330[];
extern char pic_slot_loaded[];
extern char pic_slot_monster[];
extern int bottom_line_win;
extern int fullscreen_win;
extern int g433a;
extern int g4fac;
extern int g4fb8;
extern int g4fba;
extern int game_state;
extern int main_window;
extern int member_pcfile_index[];
extern int msg_block_num;
extern int party_count;
extern int party_picture_win;
extern int picture_win;
extern int video_flags;
/* Load monster pictures and the DRAGONSC screen and create the main game windows. */
init_main_screen()
{
	char x0[2];
	int i;
	int j;
	stop_sound();
	for (j = 0; j < 10; j++) {
	pic_slot_monster[j] = -1;
	pic_slot_loaded[j] = 0;
	}
	load_monster_pic(3, 0);
	load_monster_pic(1, 1);
	load_monster_pic(2, 2);
	load_monster_pic(7, 3);
	load_monster_pic(4, 7);
	load_monster_pic(5, 8);
	load_monster_pic(6, 9);
	if (!(video_flags & 1)) goto L5541;
	load_fullscreen_pic(20910, 0);
	goto L5591;
L5541:
	if (!(video_flags & 2)) goto L5559;
	load_fullscreen_pic(20923, 0);
	goto L5591;
L5559:
	if (!(video_flags & 4)) goto L5571;
	load_fullscreen_pic(20936, 0);
	goto L5591;
L5571:
	if (!(video_flags & 8)) goto L5589;
	load_fullscreen_pic(20949, 0);
	goto L5591;
L5589:
	exit_game(13);
L5591:
	party_picture_win = create_window(0, 19, 40, 5, 4, -1, 0, 0);
	fill_window(party_picture_win, 26, 3, 0);
	g4fba = create_window(1, 5, 7, 12, 6, -2, 0, 0);
	fill_window(g4fba, 32, 3, 0);
	g4fb8 = create_window(32, 5, 7, 12, 7, -3, 0, 0);
	fill_window(g4fb8, 32, 3, 0);
	main_window = create_window(0, 18, 40, 1, 14, -1, 0, 0);
	erase_window(main_window, 0);
	bottom_line_win = create_window(0, 24, 40, 1, 3, -1, 0, 0);
	erase_window(bottom_line_win, 0);
	picture_win = create_window(9, 4, 22, 14, 2, -1, 2, 0);
	g4fac = create_window(2, 0, 36, 3, 5, -1, 2, 0);
	msg_block_num = -1;
	party_count = 0;
	for (i = 0; i < 6; i++) {
	member_pcfile_index[i] = -1;
	}
	for (j = 0; j < 3; j++) {
	g4330[j] = -1;
	g4326[j] = 0;
	}
	g433a = 0;
	game_state = 4;
	drv_op_c2(fullscreen_win);
}
