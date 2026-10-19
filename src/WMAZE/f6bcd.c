extern int bottom_line_win;
extern int g503c;
extern int game_state;
extern int main_window;
extern int return_cmd;
disk_options_menu()
{
	char x0[4];
	int l6;
	char x6[16];
	int l24;
	char x24[4];
	int l30;
	int l36[3];
	int l38;
	l38 = create_window(0, 19, 40, 5, 20, -1, 0, 0);
	fill_window(l38, 32, 3, 0);
	erase_window(main_window, 0);
	erase_window(bottom_line_win, 0);
	refresh_all_windows();
	g503c = 1;
	show_maze_message(2200);
	l6 = 0;
L6c40:
	l36[l6] = 1;
	l6++;
	if (l6 <= 5) goto L6c40;
	l30 = 0;
	l24 = -1;
	l6 = maze_menu_select(l38, 2201, l36, 1, 1, 20, 3, 5, 0);
	destroy_window(l38, 0);
	switch (l6) {
case 0:
	save_game();
	goto L6ce6;
case 1:
	if (save_game() == -1) goto L6cb1;
	game_state = 7;
L6cb1:
	goto L6ce6;
case 2:
	game_state = 7;
	goto L6ce6;
case 3:
	goto L6ce6;
case 4:
	game_state = 24;
	return_cmd = 25;
	goto L6ce6;
case 5:
	goto L6ce6;
	}
L6ce6:
	f0a42(bottom_line_win, 0);
}
