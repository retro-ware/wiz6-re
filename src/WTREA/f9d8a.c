extern char *g4fa8;
extern int game_state_arg;
f9d8a(p4, p6, p8, p10)
{
	register int rsi;
	rsi = p10;
	goto L9dee;
L9d93:
	if ((unsigned char)(g4fa8 + rsi)[1296] == p8) goto L9daa;
	return -1;
L9daa:
	if (((((unsigned char)(g4fa8 + rsi)[1008] != p4) || ((unsigned char)(g4fa8 + rsi)[1152] != p6)) || ((unsigned)(g4fa8 + rsi)[864] <= 0)) || (test_bit(((game_state_arg * 10) + 20204), (unsigned char)(g4fa8 + rsi)[1440]))) goto L9ded;
	return rsi;
L9ded:
	rsi++;
L9dee:
	if (rsi < 144) goto L9d93;
	return -1;
}
