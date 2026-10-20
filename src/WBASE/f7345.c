extern int g4fa8;
extern int g4fb0;
extern int g4fb8;
extern int g4fba;
extern int game_state;
extern int maze_data;
extern int party_count;
extern int party_picture_win;
/* Free buffers and clear the party windows, then go back to the camp menu. */
reset_party_screen()
{
	if (g4fa8) {
	free(g4fa8);
	}
	if (maze_data) {
	free(maze_data);
	}
	destroy_window(g4fb0, 0);
	fill_window(g4fba, 32, 3, 0);
	fill_window(g4fb8, 32, 3, 0);
	fill_window(party_picture_win, 26, 3, 0);
	party_count = 0;
	game_state = 4;
}
