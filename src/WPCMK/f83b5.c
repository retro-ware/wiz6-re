extern char g55c2[];
f83b5(p4)
char *p4;
{
	int l2;
	register int rsi;
	l2 = 0;
L83c1:
	g55c2[l2] = 0;
	rsi = l2;
	f837b(rsi, ((*(p4 + rsi) << 2) + -260));
	l2++;
	if (l2 < 14) goto L83c1;
}
