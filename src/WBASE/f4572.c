extern int game_state;
extern int return_cmd;
/* WBASE entry: 7 reset party screen, 4 master options menu, 24 game configuration. */
ovmain()
{
	if (game_state == 7) {
	reset_party_screen();
	}
	if (game_state == 4) {
	do_master_options();
	}
	if (game_state == 24) {
	do_game_configuration();
	game_state = return_cmd;
	}
	return 0;
}
