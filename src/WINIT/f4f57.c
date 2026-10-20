extern int fullscreen_win;
extern int game_state;
extern int video_flags;
/* Play the title page sequence (sounds, scrolling text); a key or Enter skips it. */
show_title_sequence()
{
	int frame;
	int fd;
	int i;
	int y;
	int glyph[10];
	int glyph_x[10];
	int start[10];
	int glyph_y[10];
	int min_y[10];
	int animating;
	int key;
	int skipped;
	flush_keys();
	load_sound(39);
	if ((fd = open(make_data_path(20794, 1), 0)) == -1) {
	exit_game(9);
	}
	drv_op_ae(fd, 0L, 20906L, 0);
	close(fd);
	if (!(video_flags & 1)) goto L4fcd;
	load_fullscreen_pic(20806, 0);
	goto L501d;
L4fcd:
	if (!(video_flags & 2)) goto L4fe5;
	load_fullscreen_pic(20819, 0);
	goto L501d;
L4fe5:
	if (!(video_flags & 4)) goto L4ffd;
	load_fullscreen_pic(20832, 0);
	goto L501d;
L4ffd:
	if (!(video_flags & 8)) goto L5015;
	load_fullscreen_pic(20845, 0);
	goto L501d;
L5015:
	exit_game(12);
L501d:
	skipped = 0;
	play_sound(4);
	if (!skipped) {
	skipped += wait_enter_key(2);
	}
	play_sound(13);
	drv_op_be(fullscreen_win, 0);
	draw_big_char(13, 91, 52);
	draw_big_char(9, 107, 82);
	drv_op_c2(fullscreen_win);
	if (!skipped) {
	skipped += wait_enter_key(72);
	}
	key = 0;
	drv_op_b6(-1);
	drv_op_c2(fullscreen_win);
	play_sound(14);
	if (!skipped) {
	skipped += wait_enter_key(10);
	}
	play_sound(6);
	draw_big_char(7, 76, 67);
	draw_big_char(8, 76, 99);
	drv_op_c2(fullscreen_win);
	play_sound(7);
	if (!skipped) {
	skipped += wait_enter_key(10);
	}
	glyph[0] = 7;
	glyph_x[0] = 76;
	start[0] = 0;
	glyph_y[0] = 67;
	min_y[0] = 3;
	glyph[1] = 8;
	glyph_x[1] = 76;
	start[1] = 0;
	glyph_y[1] = 99;
	min_y[1] = 35;
	glyph[2] = 12;
	glyph_x[2] = 8;
	start[2] = 0;
	glyph_y[2] = 13;
	min_y[2] = 13;
	glyph[3] = 1;
	glyph_x[3] = 20;
	start[3] = 4;
	glyph_y[3] = 144;
	min_y[3] = 13;
	glyph[4] = 2;
	glyph_x[4] = 20;
	start[4] = 36;
	glyph_y[4] = 144;
	min_y[4] = 13;
	glyph[5] = 3;
	glyph_x[5] = 20;
	start[5] = 60;
	glyph_y[5] = 144;
	min_y[5] = 13;
	glyph[6] = 4;
	glyph_x[6] = 20;
	start[6] = 88;
	glyph_y[6] = 144;
	min_y[6] = 13;
	glyph[7] = 5;
	glyph_x[7] = 20;
	start[7] = 120;
	glyph_y[7] = 144;
	min_y[7] = 13;
	glyph[8] = 6;
	glyph_x[8] = 14;
	start[8] = 152;
	glyph_y[8] = 144;
	min_y[8] = 80;
	animating = (skipped == 0 ? 1 : 0);
	frame = 0;
	goto L52bd;
L5201:
	drv_op_b6(-1);
	i = 8;
L520e:
	if (start[i] > frame) goto L5280;
	y = (glyph_y[i] - (frame - start[i]));
	if (((i >= 3) && (i != 8)) || (min_y[i] <= y)) goto L5253;
	y = min_y[i];
L5253:
	if (min_y[i] > y) goto L5280;
	draw_big_char(glyph[i], glyph_x[i], y);
L5280:
	if (--i >= 0) goto L520e;
	drv_op_c2(fullscreen_win);
	if (check_screen_click()) {
	animating = 0;
	}
	if (key_available(1)) {
	key = (unsigned char)(get_key(1));
	animating = 0;
	}
	frame += 2;
L52bd:
	if ((animating) && (((start[7] + glyph_y[7]) - min_y[7]) > frame)) goto L5201;
	drv_op_b6(-1);
	draw_big_char(7, 76, 3);
	draw_big_char(8, 76, 35);
	draw_big_char(6, 14, 80);
	drv_op_c2(fullscreen_win);
	destroy_window(fullscreen_win, 0);
	game_state = 2;
	if (!animating) goto L534b;
L5334:
	if ((key_available(1)) || (check_screen_click())) goto L5349;
	goto L5334;
L5349:
	goto L5353;
L534b:
	wait_seconds_or_enter(28);
L5353:
	flush_keys();
}
