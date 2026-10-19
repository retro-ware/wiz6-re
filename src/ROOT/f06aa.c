extern int g0844;
extern int g1c36[];
extern int g303e;
extern int g3040;
f06aa(p4)
{
	register int rsi;
	rsi = 0;
L06b1:
	if (g1c36[rsi] != p4) goto L06e4;
	movmem(((rsi << 10) + 8254), 7230, 1024);
	g303e = p4;
	return;
L06e4:
	rsi++;
	if (rsi < 4) goto L06b1;
	f3640();
	lseek(g0844, ((long)p4 << 10), 0);
	read(g0844, 7230, 1024);
	g303e = p4;
	movmem(7230, ((g3040 << 10) + 8254), 1024);
	g1c36[g3040] = p4;
	g3040 = ((g3040 + 1) % 4);
	return;
}
