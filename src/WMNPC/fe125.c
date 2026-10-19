extern int game_state_arg;
extern int maze_data;
extern int party_facing;
fe125(p4, p6, p8, p10, p12, p14)
{
	int l2;
	int l4;
	register int rsi;
	register int rdi;
	if (!p14) goto Le174;
	if (!fdafe(&p4, &p6, &p8, &p10, &p12, p14, 0)) goto Le174;
	if (game_state_arg == 10) goto Le166;
	if (game_state_arg != 12) goto Le16f;
Le166:
	return 0;
Le16f:
	return 2;
Le174:
	rsi = (((p12 << 6) + (p10 << 3)) + p8);
	if (test_bit((maze_data + 1082), rsi) != 1) goto Le1ce;
	switch (game_state_arg) {
case 0:
case 4:
case 5:
case 12:
	if (game_state_arg != 12) goto Le1b3;
	if (p12 <= 8) goto Le1b8;
Le1b3:
	return 0;
Le1b8:
	goto Le1ce;
	}
Le1ce:
	rdi = 0;
	switch (party_facing) {
case 0:
	rdi = get_bitfield((maze_data + 288), rsi, 2);
	goto Le248;
case 1:
	rdi = fda34(p4, p6, p8, p10, p12);
	goto Le248;
case 2:
	rdi = fda99(p4, p6, p8, p10, p12);
	goto Le248;
case 3:
	rdi = get_bitfield((maze_data + 96), rsi, 2);
	goto Le248;
	}
Le248:
	l2 = get_bitfield((maze_data + 504), rsi, 4);
	l4 = ((get_bitfield((maze_data + 888), rsi, 2) + 3) % 4);
	if (l4 != party_facing) goto Le2df;
	switch (l2) {
case 1:
	rdi = 5;
	goto Le2df;
case 2:
	rdi = 6;
	goto Le2df;
case 3:
	rdi = 8;
	goto Le2df;
case 4:
	rdi = 9;
	goto Le2df;
case 7:
	rdi = 4;
	goto Le2df;
case 8:
	rdi = 7;
	goto Le2df;
case 9:
	rdi = 10;
	goto Le2df;
case 10:
	rdi = 11;
	goto Le2df;
case 11:
	rdi = 12;
	goto Le2df;
case 12:
	rdi = 13;
	goto Le2df;
	}
Le2df:
	return rdi;
}
