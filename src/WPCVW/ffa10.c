extern int bottom_line_win;
extern int g4fb0;
extern int game_state;
extern int main_window;
extern int party_count;
extern int party_picture_win;
extern int return_cmd;
level_up_entry()
{
	int l2;
	int l4;
	return_cmd = 5;
	game_state = 5;
	get_message(300, 21822);
	for (l2 = 0; l2 < party_count; l2++) {
	check_level_up(l2);
	}
	resume_window_draw(g4fb0);
	resume_window_draw(main_window);
	resume_window_draw(bottom_line_win);
	erase_window(main_window, 0);
	fill_window(party_picture_win, 26, 3, 0);
	defer_window_draw(party_picture_win);
	for (l4 = 0; l4 < 5; l4++) {
	set_cursor(party_picture_win, 19, l4);
	put_char_hi(party_picture_win, 27, 3);
	}
	resume_window_draw(party_picture_win);
	f0a42(bottom_line_win, 0);
}
