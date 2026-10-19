extern int game_state;
ovmain()
{
	if (game_state != 13) goto L723a;
	run_combat_round();
L723a:
	return 0;
}
