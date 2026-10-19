extern int cur_member;
extern int g553c;
extern int game_state;
ovmain()
{
	g553c = -1;
	if (game_state != 17) goto L4587;
	view_character(cur_member);
L4587:
	if (game_state != 22) goto L4591;
	level_up_entry();
L4591:
	return 0;
}
