extern int cur_member;
extern int g502a;
extern int g502c;
extern int g502e;
extern int game_state;
/* WDOPT entry: 19 cast a spell, 20 use an item, for the current member; then back to the maze. */
ovmain()
{
	g502a = 0;
	g502c = 0;
	g502e = -1;
	if (game_state == 19) {
	do_cast_spell(cur_member);
	}
	if (game_state == 20) {
	do_use_item(cur_member);
	}
	game_state = 5;
	return 0;
}
