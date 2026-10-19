extern int game_state_arg;
/* Clear one level flag and set another; the order is swapped when p8 is nonzero. */
swap_level_flags(flag_a, flag_b, swap)
{
	int clear_flag;
	int set_flag;
	clear_flag = (swap == 0 ? flag_a : flag_b);
	set_flag = (swap == 0 ? flag_b : flag_a);
	if (!clear_flag) goto Lbc4d;
	set_bit(((game_state_arg * 10) + 20204), clear_flag, 0);
	set_bit(((game_state_arg * 10) + 13304), clear_flag, 0);
Lbc4d:
	if (!set_flag) goto Lbc8f;
	set_bit(((game_state_arg * 10) + 20204), set_flag, 1);
	set_bit(((game_state_arg * 10) + 13304), set_flag, 1);
Lbc8f:
	;
}
