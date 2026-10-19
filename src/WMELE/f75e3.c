extern char *g4fa8;
extern int game_state_arg;
f75e3(p4, p6, p8, p10)
{
	register int rsi;
	rsi = p10;
	goto L7647;
L75ec:
	if ((unsigned char)(g4fa8 + rsi)[1296] == p8) goto L7603;
	return -1;
L7603:
	if (((((unsigned char)(g4fa8 + rsi)[1008] != p4) || ((unsigned char)(g4fa8 + rsi)[1152] != p6)) || ((unsigned)(g4fa8 + rsi)[864] <= 0)) || (test_bit(((game_state_arg * 10) + 20204), (unsigned char)(g4fa8 + rsi)[1440]))) goto L7646;
	return rsi;
L7646:
	rsi++;
L7647:
	if (rsi < 144) goto L75ec;
	return -1;
}
