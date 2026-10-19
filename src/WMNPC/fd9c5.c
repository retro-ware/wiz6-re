extern char *g4fa8;
extern int game_state_arg;
fd9c5(p4, p6, p8, p10)
{
	register int rsi;
	rsi = p10;
	goto Lda29;
Ld9ce:
	if ((unsigned char)(g4fa8 + rsi)[1296] == p8) goto Ld9e5;
	return -1;
Ld9e5:
	if ((unsigned char)(g4fa8 + rsi)[1008] != p4) goto Lda28;
	if ((unsigned char)(g4fa8 + rsi)[1152] != p6) goto Lda28;
	if ((unsigned)(g4fa8 + rsi)[864] <= 0) goto Lda28;
	if (test_bit(((game_state_arg * 10) + 20204), (unsigned char)(g4fa8 + rsi)[1440])) goto Lda28;
	return rsi;
Lda28:
	rsi++;
Lda29:
	if (rsi < 144) goto Ld9ce;
	return -1;
}
