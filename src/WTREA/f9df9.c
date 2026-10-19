extern int game_state_arg;
extern int maze_data;
get_west_wall_t(p4, p6, p8, p10, p12)
{
	if (!move_to_view_cell(&p8, &p10, &p12, p4, (p6 - 1))) goto L9e34;
	return ((game_state_arg != 10) && (game_state_arg != 12) ? 2 : 0);
L9e34:
	get_bitfield((maze_data + 96), (((p12 << 6) + (p10 << 3)) + p8), 2);
	return;
}
