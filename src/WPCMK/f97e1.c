extern char *g56ca;
extern char g4fd8[];
f97e1(p4)
{
	char x0[34];
	int l36;
	int l38;
	int l40;
	int l42;
	int l44;
	f972a(p4);
	l40 = 1;
	l38 = 1;
	l36 = -1;
	f030b(g56ca, 5, 1);
	f083f(1125, g56ca, 18);
	l42 = f4800(g56ca, 1126, &l40, ((unsigned char)g56ca[6] + 1), 1, 4, 1, 5, 1);
	if (l42) goto L9897;
	g4fd8[p4] = 0;
	f3640();
	l44 = open(f0cd6(21513, 0), 2);
	write(l44, 20432, 24);
	close(l44);
L9897:
	;
}
