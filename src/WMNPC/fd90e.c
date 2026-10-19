extern char *maze_data;
extern int g4fa6;
fd90e(p4, p6, p8, p10, p12)
char *p4;
char *p6;
char *p8;
{
	register int rsi;
	register int rdi;
	if (((rdi = fd8d1(*(int *)p8, p10, p12)) != -1) || ((rdi = fd8d1(g4fa6, p10, p12)) != -1)) goto Ld987;
	rsi = ((*(int *)p8 + 1) % 12);
Ld954:
	if ((rdi = fd8d1(rsi, p10, p12)) != -1) goto Ld987;
	rsi = ((rsi + 1) % 12);
	if (rsi != *(int *)p8) goto Ld985;
	return 1;
Ld985:
	goto Ld954;
Ld987:
	*(int *)p4 = (p10 - (unsigned char)(maze_data + rdi)[480]);
	*(int *)p6 = (p12 - (unsigned char)(maze_data + rdi)[492]);
	*(int *)p8 = rdi;
	g4fa6 = rdi;
	return 0;
}
