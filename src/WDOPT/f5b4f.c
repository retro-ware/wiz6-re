extern char g51b0;
extern int g51ac;
extern int g51ae;
f5b4f(p4, p6)
{
	int l2;
	char l12[10];
	l12[0] = g51b0;
	l12[(0 + 1)] = 0;
	l2 = 0;
	goto L5bd4;
L5b66:
	f3670(4, ((g51ac + l2) << 3), ((g51ae << 3) - 1), 72, 248, 0, 0, l12);
	f3670(4, ((g51ac + l2) << 3), (((p6 << 1) + g51ae) << 3), 72, 248, 0, 0, l12);
	l2++;
L5bd4:
	if ((p4 << 1) > l2) goto L5b66;
}
