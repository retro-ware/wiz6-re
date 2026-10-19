count_enabled_before(p4, p6)
char *p4;
{
	int l2;
	int l4;
	register int rsi;
	l2 = 0;
	l4 = 0;
L5bf6:
	if (l2 == p6) goto L5c1f;
	rsi = (l2 << 1);
	if (*(int *)(p4 + rsi) != -1) goto L5c12;
	return 0;
L5c12:
	if (*(int *)(p4 + rsi) != 1) goto L5c1a;
	l4++;
L5c1a:
	l2++;
	goto L5bf6;
L5c1f:
	return l4;
}
