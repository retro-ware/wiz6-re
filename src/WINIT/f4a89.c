extern char g3569;
extern char g356a;
extern char cfg_delay;
extern char cfg_gmode;
extern char cfg_input;
extern char g3568;
extern int click_flag;
extern int copy_protection_ok;
extern int far_buffers_a[];
extern int far_buffers_b[];
extern int fullscreen_win;
extern int g4fc2;
extern int g4fc8;
extern int g4fcc;
extern int game_state;
extern int main_window;
extern int message_delay;
extern int mouse_present;
extern int msg_block_num;
extern int msg_cache_ids[];
extern int msg_cache_next;
extern int msg_fd;
extern int scenario_fd;
extern int scenario_hdr_fd;
extern int video_flags;
long alloc_far();
/* Read SCENARIO.HDR, load fonts and maze graphics for the video mode, open the header and DBS files. */
init_game_data()
{
	int l2;
	char x2[2];
	int l6;
	char x6[2];
	int l10;
	int l12;
	char x12[3086];
	fullscreen_win = 0;
	main_window = 0;
	g4fcc = 0;
	if ((scenario_hdr_fd = open(20508, 0)) == -1) {
	exit_game(1);
	}
	read(scenario_hdr_fd, 13304, 414);
	close(scenario_hdr_fd);
	message_delay = 16;
	g4fc8 = (unsigned char)cfg_delay;
	switch ((unsigned char)cfg_gmode) {
case 255:
	exit_game(2);
	goto L4b7b;
case 0:
	l2 = 1;
	goto L4b7b;
case 1:
	l2 = 1;
	goto L4b7b;
case 2:
	l2 = 2;
	goto L4b7b;
case 3:
	l2 = 8;
	goto L4b7b;
case 4:
	l2 = 4;
	goto L4b7b;
case 5:
	l2 = 1;
	goto L4b7b;
case 6:
	l2 = 2;
	goto L4b7b;
case 7:
	l2 = 1;
	goto L4b7b;
case 8:
	l2 = 1;
	goto L4b7b;
	}
L4b7b:
	stop_sound();
	l10 = (unsigned char)g3568;
	l12 = (l10 ? (((unsigned char)g3569 << 8) + (unsigned char)g356a) : 0);
	start_sound(-1, l12, 0, ((l10 << 8) + 255));
	video_flags = init_video(l2);
	g4fc2 = stop_sound();
	if (((video_flags & 4096)) && (cfg_input == 1)) {
	drv_op_96();
	mouse_present = 1;
	} else {
	mouse_present = 0;
	}
	click_flag = 0;
	if (!(video_flags & 1)) goto L4c51;
	f45a3(20521, 0);
	f45a3(20532, 1);
	f45a3(20543, 2);
	f45a3(20554, 3);
	f45a3(20565, 4);
	f45e5(20576);
	goto L4d09;
L4c51:
	if (!(video_flags & 6)) goto L4ca9;
	f45a3(20589, 0);
	f45a3(20600, 1);
	f45a3(20611, 2);
	f45a3(20622, 3);
	f45a3(20633, 4);
	f45e5(20644);
	goto L4d09;
L4ca9:
	if (!(video_flags & 8)) goto L4d01;
	f45a3(20657, 0);
	f45a3(20668, 1);
	f45a3(20679, 2);
	f45a3(20690, 3);
	f45a3(20701, 4);
	f45e5(20712);
	goto L4d09;
L4d01:
	exit_game(5);
L4d09:
	show_credits();
	read_file_bytes(20725, 13056, 66);
	read_file_bytes(20736, 12356, 700);
	read_file_bytes(20745, 2120, 5102);
	read_file_bytes(20753, 20432, 24);
	f46e4(20764);
	if ((msg_fd = open(make_data_path(20773, 0), 0)) == -1) {
	exit_game(7);
	}
	msg_block_num = -1;
	for (msg_cache_next = 0; msg_cache_next < 4; msg_cache_next++) {
	msg_cache_ids[msg_cache_next] = -1;
	}
	msg_cache_next = 0;
	if ((scenario_fd = open(make_data_path(20781, 0), 0)) == -1) {
	exit_game(8);
	}
	load_sounds(14);
	l6 = 0;
L4de0:
	*(long *)((char *)far_buffers_a + (l6 << 2)) = alloc_far(1346);
	if (*(long *)((char *)far_buffers_a + (l6 << 2)) == 0L) {
	exit_game(20);
	} else {
	*(long *)((char *)far_buffers_b + (l6 << 2)) = alloc_far(1740);
	if (*(long *)((char *)far_buffers_b + (l6 << 2)) == 0L) {
	exit_game(20);
	}
	}
	l6++;
	if (l6 < 14) goto L4de0;
	copy_protection_ok = 0;
	game_state = 1;
}
