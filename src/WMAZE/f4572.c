extern int game_state;
extern int game_state_arg;
ovmain()
{
	if (game_state != 23) goto L4589;
	flee_party((random(10) + 4));
L4589:
	if (game_state != 6) goto L4598;
	load_maze_level(game_state_arg);
L4598:
	if (game_state != 5) goto L45a2;
	maze_main_loop();
L45a2:
	return 0;
}
