extern int bottom_line_win;
extern int g4fb0;
extern int g5024;
extern int g502c;
extern int g50c8;
extern int g5280;
extern int main_window;
extern int party_picture_win;
extern int return_cmd;
extern int treasure_id;
extern long combat_gold;
treasure_after_combat()
{
	char x0[2];
	g5024 = -1;
	g5280 = 2;
	g50c8 = 2;
	get_message(5000, 20590);
	get_message(5100, 20670);
	g502c = 0;
	flush_keys();
	defer_window_draw(g4fb0);
	defer_window_draw(main_window);
	defer_window_draw(bottom_line_win);
	clear_window(party_picture_win, 0);
	refresh_all_windows();
	show_centered_line(party_picture_win, 0, 20590, 1, 3);
	if (combat_gold > 0L) {
	share_combat_gold();
	}
	if (treasure_id != -1) {
	return_cmd = 15;
	open_treasure();
	}
}
