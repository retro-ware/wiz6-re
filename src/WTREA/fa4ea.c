extern int game_state_arg;
extern int maze_data;
extern int party_facing;
get_right_wall_t(p4, p6, p8, p10, p12, p14)
{
	int l2;
	int l4;
	register int rsi;
	register int rdi;
	if ((!p14) || (!step_relative_t(&p4, &p6, &p8, &p10, &p12, p14, 0))) goto La539;
	if ((game_state_arg != 10) && (game_state_arg != 12)) goto La534;
	return 0;
La534:
	return 2;
La539:
	rsi = (((p12 << 6) + (p10 << 3)) + p8);
	if (test_bit((maze_data + 1082), rsi) != 1) goto La593;
	switch (game_state_arg) {
case 0:
case 4:
case 5:
case 12:
	if ((game_state_arg == 12) && (p12 <= 8)) goto La57d;
	return 0;
La57d:
	goto La593;
	}
La593:
	rdi = 0;
	switch (party_facing) {
case 0:
	rdi = get_bitfield((maze_data + 288), rsi, 2);
	goto La60d;
case 1:
	rdi = get_west_wall_t(p4, p6, p8, p10, p12);
	goto La60d;
case 2:
	rdi = get_south_wall_t(p4, p6, p8, p10, p12);
	goto La60d;
case 3:
	rdi = get_bitfield((maze_data + 96), rsi, 2);
	goto La60d;
	}
La60d:
	l2 = get_bitfield((maze_data + 504), rsi, 4);
	l4 = ((get_bitfield((maze_data + 888), rsi, 2) + 3) % 4);
	if (l4 != party_facing) goto La6a4;
	switch (l2) {
case 1:
	rdi = 5;
	goto La6a4;
case 2:
	rdi = 6;
	goto La6a4;
case 3:
	rdi = 8;
	goto La6a4;
case 4:
	rdi = 9;
	goto La6a4;
case 7:
	rdi = 4;
	goto La6a4;
case 8:
	rdi = 7;
	goto La6a4;
case 9:
	rdi = 10;
	goto La6a4;
case 10:
	rdi = 11;
	goto La6a4;
case 11:
	rdi = 12;
	goto La6a4;
case 12:
	rdi = 13;
	goto La6a4;
	}
La6a4:
	return rdi;
}
