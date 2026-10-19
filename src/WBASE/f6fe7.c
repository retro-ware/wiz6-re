extern int bottom_line_win;
extern int fullscreen_win;
extern int g4fac;
extern int g4fb8;
extern int g4fba;
extern int main_window;
extern int party_picture_win;
extern int picture_win;
/* Close all game windows. */
close_game_windows()
{
	destroy_window(g4fac, 0);
	destroy_window(picture_win, 0);
	destroy_window(fullscreen_win, 0);
	destroy_window(party_picture_win, 0);
	destroy_window(g4fba, 0);
	destroy_window(g4fb8, 0);
	destroy_window(main_window, 0);
	destroy_window(bottom_line_win, 0);
	stop_sound();
}
