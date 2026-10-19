extern int g4fbe;
f4e5b(p4, p6)
{
	int l2;
	g4fbe = f011a(0, 0, 40, 25, 1, -1, 2, 0);
	f3640();
	l2 = open(f0cd6(p4, 1), 0);
	if (l2 != -1) goto L4eb2;
	f00d5(12);
L4eb2:
	f3694(g4fbe, 0);
	f367c(l2);
	close(l2);
	if (!p6) goto L4edc;
	f36a0(g4fbe);
L4edc:
	;
}
