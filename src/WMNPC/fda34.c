extern int game_state_arg;
extern int maze_data;
fda34(p4, p6, p8, p10, p12)
{
	if (!fd90e(&p8, &p10, &p12, p4, (p6 - 1))) goto Lda6f;
	return ((game_state_arg != 10) && (game_state_arg != 12) ? 2 : 0);
Lda6f:
	get_bitfield((maze_data + 96), (((p12 << 6) + (p10 << 3)) + p8), 2);
	return;
}
