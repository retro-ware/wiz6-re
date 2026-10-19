extern int game_state_arg;
extern int maze_data;
f7ca6(p4, p6, p8, p10, p12)
{
	if (!move_to_maze_cell_m(&p8, &p10, &p12, (p4 - 1), p6)) goto L7ce1;
	return ((game_state_arg != 10) && (game_state_arg != 12) ? 2 : 0);
L7ce1:
	get_bitfield((maze_data + 288), (((p12 << 6) + (p10 << 3)) + p8), 2);
	return;
}
