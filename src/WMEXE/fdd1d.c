extern int game_state_arg;
extern int maze_data;
extern int party_facing;
fdd1d(p4, p6, p8, p10, p12, p14)
{
	int l2;
	int l4;
	register int rsi;
	register int rdi;
	if ((!p14) || (!fd6f6(&p4, &p6, &p8, &p10, &p12, p14, 0))) goto Ldd6c;
	if ((game_state_arg != 10) && (game_state_arg != 12)) goto Ldd67;
	return 0;
Ldd67:
	return 2;
Ldd6c:
	rsi = (((p12 << 6) + (p10 << 3)) + p8);
	if (test_bit((maze_data + 1082), rsi) != 1) goto Lddc6;
	switch (game_state_arg) {
case 0:
case 4:
case 5:
case 12:
	if ((game_state_arg == 12) && (p12 <= 8)) goto Lddb0;
	return 0;
Lddb0:
	goto Lddc6;
	}
Lddc6:
	rdi = 0;
	switch (party_facing) {
case 0:
	rdi = get_bitfield((maze_data + 288), rsi, 2);
	goto Lde40;
case 1:
	rdi = fd62c(p4, p6, p8, p10, p12);
	goto Lde40;
case 2:
	rdi = fd691(p4, p6, p8, p10, p12);
	goto Lde40;
case 3:
	rdi = get_bitfield((maze_data + 96), rsi, 2);
	goto Lde40;
	}
Lde40:
	l2 = get_bitfield((maze_data + 504), rsi, 4);
	l4 = ((get_bitfield((maze_data + 888), rsi, 2) + 3) % 4);
	if (l4 != party_facing) goto Lded7;
	switch (l2) {
case 1:
	rdi = 5;
	goto Lded7;
case 2:
	rdi = 6;
	goto Lded7;
case 3:
	rdi = 8;
	goto Lded7;
case 4:
	rdi = 9;
	goto Lded7;
case 7:
	rdi = 4;
	goto Lded7;
case 8:
	rdi = 7;
	goto Lded7;
case 9:
	rdi = 10;
	goto Lded7;
case 10:
	rdi = 11;
	goto Lded7;
case 11:
	rdi = 12;
	goto Lded7;
case 12:
	rdi = 13;
	goto Lded7;
	}
Lded7:
	return rdi;
}
