extern int g0846;
extern int g3596;
f0bd8(p4)
{
	int l2;
	l2 = 0;
	f0bd1();
	if (g0846 != 1) goto L0c06;
	l2 = f36d0(p4);
	g3596 = (l2 < 0 ? 1 : 0);
L0c06:
	return (l2 < 0 ? -l2 : l2);
}
