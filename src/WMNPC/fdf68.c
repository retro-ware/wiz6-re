extern int game_state_arg;
extern int maze_data;
extern int party_facing;
fdf68(p4, p6, p8, p10, p12, p14)
{
	int l2;
	int l4;
	register int rsi;
	register int rdi;
	if (!p14) goto Ldfb7;
	if (!fdafe(&p4, &p6, &p8, &p10, &p12, p14, 0)) goto Ldfb7;
	if (game_state_arg == 10) goto Ldfa9;
	if (game_state_arg != 12) goto Ldfb2;
Ldfa9:
	return 0;
Ldfb2:
	return 2;
Ldfb7:
	rsi = (((p12 << 6) + (p10 << 3)) + p8);
	if (test_bit((maze_data + 1082), rsi) != 1) goto Le011;
	switch (game_state_arg) {
case 0:
case 4:
case 5:
case 12:
	if (game_state_arg != 12) goto Ldff6;
	if (p12 <= 8) goto Ldffb;
Ldff6:
	return 0;
Ldffb:
	goto Le011;
	}
Le011:
	rdi = 0;
	switch (party_facing) {
case 0:
	rdi = fda99(p4, p6, p8, p10, p12);
	goto Le08b;
case 1:
	rdi = get_bitfield((maze_data + 96), rsi, 2);
	goto Le08b;
case 2:
	rdi = get_bitfield((maze_data + 288), rsi, 2);
	goto Le08b;
case 3:
	rdi = fda34(p4, p6, p8, p10, p12);
	goto Le08b;
	}
Le08b:
	l2 = get_bitfield((maze_data + 504), rsi, 4);
	l4 = ((get_bitfield((maze_data + 888), rsi, 2) + 1) % 4);
	if (l4 != party_facing) goto Le120;
	switch (l2) {
case 1:
	rdi = 5;
	goto Le120;
case 2:
	rdi = 6;
	goto Le120;
case 3:
	rdi = 8;
	goto Le120;
case 4:
	rdi = 9;
	goto Le120;
case 7:
	rdi = 4;
	goto Le120;
case 8:
	rdi = 7;
	goto Le120;
case 9:
	rdi = 10;
	goto Le120;
case 10:
	rdi = 11;
	goto Le120;
case 11:
	rdi = 12;
	goto Le120;
case 12:
	rdi = 13;
	goto Le120;
	}
Le120:
	return rdi;
}
