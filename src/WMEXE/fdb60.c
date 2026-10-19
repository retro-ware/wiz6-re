extern int game_state_arg;
extern int maze_data;
extern int party_facing;
fdb60(p4, p6, p8, p10, p12, p14)
{
	int l2;
	int l4;
	register int rsi;
	register int rdi;
	if ((!p14) || (!fd6f6(&p4, &p6, &p8, &p10, &p12, p14, 0))) goto Ldbaf;
	if ((game_state_arg != 10) && (game_state_arg != 12)) goto Ldbaa;
	return 0;
Ldbaa:
	return 2;
Ldbaf:
	rsi = (((p12 << 6) + (p10 << 3)) + p8);
	if (test_bit((maze_data + 1082), rsi) != 1) goto Ldc09;
	switch (game_state_arg) {
case 0:
case 4:
case 5:
case 12:
	if ((game_state_arg == 12) && (p12 <= 8)) goto Ldbf3;
	return 0;
Ldbf3:
	goto Ldc09;
	}
Ldc09:
	rdi = 0;
	switch (party_facing) {
case 0:
	rdi = fd691(p4, p6, p8, p10, p12);
	goto Ldc83;
case 1:
	rdi = get_bitfield((maze_data + 96), rsi, 2);
	goto Ldc83;
case 2:
	rdi = get_bitfield((maze_data + 288), rsi, 2);
	goto Ldc83;
case 3:
	rdi = fd62c(p4, p6, p8, p10, p12);
	goto Ldc83;
	}
Ldc83:
	l2 = get_bitfield((maze_data + 504), rsi, 4);
	l4 = ((get_bitfield((maze_data + 888), rsi, 2) + 1) % 4);
	if (l4 != party_facing) goto Ldd18;
	switch (l2) {
case 1:
	rdi = 5;
	goto Ldd18;
case 2:
	rdi = 6;
	goto Ldd18;
case 3:
	rdi = 8;
	goto Ldd18;
case 4:
	rdi = 9;
	goto Ldd18;
case 7:
	rdi = 4;
	goto Ldd18;
case 8:
	rdi = 7;
	goto Ldd18;
case 9:
	rdi = 10;
	goto Ldd18;
case 10:
	rdi = 11;
	goto Ldd18;
case 11:
	rdi = 12;
	goto Ldd18;
case 12:
	rdi = 13;
	goto Ldd18;
	}
Ldd18:
	return rdi;
}
