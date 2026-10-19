extern int game_state_arg;
extern int maze_data;
get_south_wall(p4, p6, p8, p10, p12)
{
	if (!move_to_maze_cell(&p8, &p10, &p12, (p4 - 1), p6)) goto L8e6f;
	return ((game_state_arg != 10) && (game_state_arg != 12) ? 2 : 0);
L8e6f:
	get_bitfield((maze_data + 288), (((p12 << 6) + (p10 << 3)) + p8), 2);
	return;
}
