extern int g4fd0;
extern long g4fd4;
f459a(p4, p6, p8)
{
	int l2;
	f3640();
	l2 = open(f0cd6(20462, 0), 2);
	lseek(l2, ((long)(p6 * g4fd0) + g4fd4), 0);
	if (p8) goto L45f6;
	read(l2, p4, g4fd0);
	goto L460c;
L45f6:
	if (p8 != 1) goto L460c;
	write(l2, p4, g4fd0);
L460c:
	close(l2);
}
