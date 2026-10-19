extern int game_state_arg;
extern int maze_data;
f7652(p4, p6, p8, p10, p12)
{
	if (!next_sprite_slot(&p8, &p10, &p12, p4, (p6 - 1))) goto L768d;
	return ((game_state_arg != 10) && (game_state_arg != 12) ? 2 : 0);
L768d:
	get_bitfield((maze_data + 96), (((p12 << 6) + (p10 << 3)) + p8), 2);
	return;
}
