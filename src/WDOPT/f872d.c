extern int game_state_arg;
extern int maze_data;
extern int party_facing;
f872d(p4, p6, p8, p10, p12, p14)
{
	int l2;
	int l4;
	register int rsi;
	register int rdi;
	if (!p14) goto L877c;
	if (!f82c3(&p4, &p6, &p8, &p10, &p12, p14, 0)) goto L877c;
	if (game_state_arg == 10) goto L876e;
	if (game_state_arg != 12) goto L8777;
L876e:
	return 0;
L8777:
	return 2;
L877c:
	rsi = (((p12 << 6) + (p10 << 3)) + p8);
	if (test_bit((maze_data + 1082), rsi) != 1) goto L87d6;
	switch (game_state_arg) {
case 0:
case 4:
case 5:
case 12:
	if (game_state_arg != 12) goto L87bb;
	if (p12 <= 8) goto L87c0;
L87bb:
	return 0;
L87c0:
	goto L87d6;
	}
L87d6:
	rdi = 0;
	switch (party_facing) {
case 0:
	rdi = f825e(p4, p6, p8, p10, p12);
	goto L8850;
case 1:
	rdi = get_bitfield((maze_data + 96), rsi, 2);
	goto L8850;
case 2:
	rdi = get_bitfield((maze_data + 288), rsi, 2);
	goto L8850;
case 3:
	rdi = f81f9(p4, p6, p8, p10, p12);
	goto L8850;
	}
L8850:
	l2 = get_bitfield((maze_data + 504), rsi, 4);
	l4 = ((get_bitfield((maze_data + 888), rsi, 2) + 1) % 4);
	if (l4 != party_facing) goto L88e5;
	switch (l2) {
case 1:
	rdi = 5;
	goto L88e5;
case 2:
	rdi = 6;
	goto L88e5;
case 3:
	rdi = 8;
	goto L88e5;
case 4:
	rdi = 9;
	goto L88e5;
case 7:
	rdi = 4;
	goto L88e5;
case 8:
	rdi = 7;
	goto L88e5;
case 9:
	rdi = 10;
	goto L88e5;
case 10:
	rdi = 11;
	goto L88e5;
case 11:
	rdi = 12;
	goto L88e5;
case 12:
	rdi = 13;
	goto L88e5;
	}
L88e5:
	return rdi;
}
