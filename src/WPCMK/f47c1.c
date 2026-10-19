f47c1(p4, p6)
char *p4;
{
	int l2;
	int l4;
	register int rsi;
	l2 = 0;
	l4 = 0;
L47d2:
	if (l2 == p6) goto L47fb;
	rsi = (l2 << 1);
	if (*(int *)(p4 + rsi) != -1) goto L47ee;
	return 0;
L47ee:
	if (*(int *)(p4 + rsi) != 1) goto L47f6;
	l4++;
L47f6:
	l2++;
	goto L47d2;
L47fb:
	return l4;
}
