extern int cur_member;
extern int g553c;
extern int game_state;
ovmain()
{
	g553c = -1;
	if (game_state == 17) {
	view_character(cur_member);
	}
	if (game_state == 22) {
	level_up_entry();
	}
	return 0;
}
