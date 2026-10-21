extern int bottom_line_win;
extern int cell_event_index;
extern int g4fb0;
extern int g5024;
extern int g502c;
extern int g50c8;
extern int g5280;
extern int main_window;
extern int party_picture_win;
extern int return_cmd;
extern int treasure_id;
treasure_found()
{
	char x0[2];
	g5024 = -1;
	g5280 = 2;
	g50c8 = 1;
	get_message(5100, 20670);
	g502c = 0;
	flush_keys();
	defer_window_draw(g4fb0);
	defer_window_draw(main_window);
	defer_window_draw(bottom_line_win);
	clear_window(party_picture_win, 0);
	if (treasure_id != -1) {
	return_cmd = 21;
	open_treasure();
	}
	cell_event_index++;
}
