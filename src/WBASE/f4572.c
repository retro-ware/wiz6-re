extern int game_state;
extern int return_cmd;
/* WBASE entry: 7 reset party screen, 4 master options menu, 24 game configuration. */
ovmain()
{
	if (game_state != 7) goto L457c;
	reset_party_screen();
L457c:
	if (game_state != 4) goto L4586;
	do_master_options();
L4586:
	if (game_state != 24) goto L4596;
	do_game_configuration();
	game_state = return_cmd;
L4596:
	return 0;
}
