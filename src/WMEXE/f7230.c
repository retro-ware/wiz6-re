extern int game_state;
ovmain()
{
	if (game_state == 13) {
	run_combat_round();
	}
	return 0;
}
