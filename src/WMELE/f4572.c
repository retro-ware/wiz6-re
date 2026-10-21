extern int g500e;
extern int g5010;
extern int g5012;
extern int game_state;
/* WMELE entry: start an encounter, end a combat round, or redraw the combat screen. */
ovmain()
{
	g500e = 0;
	g5010 = 0;
	g5012 = 0;
	if (game_state == 10) {
	f72d1();
	}
	if (game_state == 14) {
	end_combat_round();
	}
	if (game_state == 11) {
	redraw_combat_screen();
	}
	return 0;
}
