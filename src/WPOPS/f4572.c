extern int game_state;
ovmain()
{
	if (game_state == 12) {
	start_combat_round();
	}
	return 0;
}
