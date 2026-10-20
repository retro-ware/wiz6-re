extern int game_state;
extern int game_state_arg;
ovmain()
{
	if (game_state == 23) {
	flee_party((random(10) + 4));
	}
	if (game_state == 6) {
	load_maze_level(game_state_arg);
	}
	if (game_state == 5) {
	maze_main_loop();
	}
	return 0;
}
