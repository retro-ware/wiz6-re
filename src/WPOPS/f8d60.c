extern char *g4fa8;
extern int game_state_arg;
find_set_bit_from(p4, p6, p8, p10)
{
	register int rsi;
	rsi = p10;
	goto L8dc4;
L8d69:
	if ((unsigned char)(g4fa8 + rsi)[1296] == p8) goto L8d80;
	return -1;
L8d80:
	if ((unsigned char)(g4fa8 + rsi)[1008] != p4) goto L8dc3;
	if ((unsigned char)(g4fa8 + rsi)[1152] != p6) goto L8dc3;
	if ((unsigned)(g4fa8 + rsi)[864] <= 0) goto L8dc3;
	if (test_bit(((game_state_arg * 10) + 20204), (unsigned char)(g4fa8 + rsi)[1440])) goto L8dc3;
	return rsi;
L8dc3:
	rsi++;
L8dc4:
	if (rsi < 144) goto L8d69;
	return -1;
}
