extern int game_state;
ovmain()
{
	if (game_state != 12) goto L457c;
	start_combat_round();
L457c:
	return 0;
}
