extern int game_state_arg;
extern int maze_data;
extern int party_facing;
get_left_wall_m(p4, p6, p8, p10, p12, p14)
{
	int l2;
	int l4;
	register int rsi;
	register int rdi;
	if ((!p14) || (!step_relative_m(&p4, &p6, &p8, &p10, &p12, p14, 0))) goto L81c4;
	if ((game_state_arg != 10) && (game_state_arg != 12)) goto L81bf;
	return 0;
L81bf:
	return 2;
L81c4:
	rsi = (((p12 << 6) + (p10 << 3)) + p8);
	if (test_bit((maze_data + 1082), rsi) != 1) goto L821e;
	switch (game_state_arg) {
case 0:
case 4:
case 5:
case 12:
	if ((game_state_arg == 12) && (p12 <= 8)) goto L8208;
	return 0;
L8208:
	goto L821e;
	}
L821e:
	rdi = 0;
	switch (party_facing) {
case 0:
	rdi = f7ca6(p4, p6, p8, p10, p12);
	goto L8298;
case 1:
	rdi = get_bitfield((maze_data + 96), rsi, 2);
	goto L8298;
case 2:
	rdi = get_bitfield((maze_data + 288), rsi, 2);
	goto L8298;
case 3:
	rdi = f7c41(p4, p6, p8, p10, p12);
	goto L8298;
	}
L8298:
	l2 = get_bitfield((maze_data + 504), rsi, 4);
	l4 = ((get_bitfield((maze_data + 888), rsi, 2) + 1) % 4);
	if (l4 != party_facing) goto L832d;
	switch (l2) {
case 1:
	rdi = 5;
	goto L832d;
case 2:
	rdi = 6;
	goto L832d;
case 3:
	rdi = 8;
	goto L832d;
case 4:
	rdi = 9;
	goto L832d;
case 7:
	rdi = 4;
	goto L832d;
case 8:
	rdi = 7;
	goto L832d;
case 9:
	rdi = 10;
	goto L832d;
case 10:
	rdi = 11;
	goto L832d;
case 11:
	rdi = 12;
	goto L832d;
case 12:
	rdi = 13;
	goto L832d;
	}
L832d:
	return rdi;
}
