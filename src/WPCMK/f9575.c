extern char g4fd8[];
extern int g4fd2;
f9575(p4)
{
	char x0[430];
	int l432;
	register int rsi;
	rsi = 0;
	goto L95b4;
L9582:
	if ((unsigned)g4fd8[rsi] <= 0) goto L95b3;
	f457f(&l432, rsi, 0);
	if (strcmp(p4, &l432)) goto L95b3;
	return -1;
L95b3:
	rsi++;
L95b4:
	if (rsi < g4fd2) goto L9582;
	return 0;
}
