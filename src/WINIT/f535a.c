extern int bottom_line_win;
extern int fullscreen_win;
extern int g4fa8;
extern int g4fac;
extern int g4fb0;
extern int g4fb8;
extern int g4fba;
extern int game_state;
extern int main_window;
extern int maze_data;
extern int party_count;
extern int party_picture_win;
extern int picture_win;
extern int video_flags;
/* Free the game windows and show the graveyard picture, wait for a key. */
show_graveyard()
{
	if (!g4fa8) goto L5369;
	free(g4fa8);
L5369:
	if (!maze_data) goto L5378;
	free(maze_data);
L5378:
	party_count = 0;
	destroy_window(g4fb0, 0);
	destroy_window(g4fac, 0);
	destroy_window(picture_win, 0);
	destroy_window(fullscreen_win, 0);
	destroy_window(party_picture_win, 0);
	destroy_window(g4fba, 0);
	destroy_window(g4fb8, 0);
	destroy_window(main_window, 0);
	destroy_window(bottom_line_win, 0);
	load_sound(34);
	if (!(video_flags & 1)) goto L541c;
	load_fullscreen_pic(20858, 1);
	goto L546c;
L541c:
	if (!(video_flags & 2)) goto L5434;
	load_fullscreen_pic(20871, 1);
	goto L546c;
L5434:
	if (!(video_flags & 4)) goto L544c;
	load_fullscreen_pic(20884, 1);
	goto L546c;
L544c:
	if (!(video_flags & 8)) goto L5464;
	load_fullscreen_pic(20897, 1);
	goto L546c;
L5464:
	exit_game(12);
L546c:
	play_sound(14);
	stop_sound();
	destroy_window(fullscreen_win, 0);
	game_state = 2;
	flush_keys();
L548e:
	if ((key_available(1)) || (check_screen_click())) goto L54a3;
	goto L548e;
L54a3:
	flush_keys();
}
