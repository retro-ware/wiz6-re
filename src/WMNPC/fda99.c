extern int game_state_arg;
extern int maze_data;
fda99(p4, p6, p8, p10, p12)
{
	if (!fd90e(&p8, &p10, &p12, (p4 - 1), p6)) goto Ldad4;
	return ((game_state_arg != 10) && (game_state_arg != 12) ? 2 : 0);
Ldad4:
	get_bitfield((maze_data + 288), (((p12 << 6) + (p10 << 3)) + p8), 2);
	return;
}
