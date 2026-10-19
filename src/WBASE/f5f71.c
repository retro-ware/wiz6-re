extern int game_state;
extern int game_state_arg;
/* Check copy protection, load the game and switch to the maze. */
start_game(resume)
{
	if (check_magic_word() != -1) goto L5f89;
	close_game_windows();
	game_state = 3;
	return;
L5f89:
	if (load_game(resume) != -1) goto L5f97;
	return;
L5f97:
	ensure_disk_for(0, game_state_arg);
	setup_game_windows();
	game_state = 6;
	return;
}
