f705b(p4, p6)
char *p4;
{
	int l2;
	int l4;
	register int rsi;
	l2 = 0;
	l4 = 0;
L706c:
	if (l2 == p6) goto L7095;
	rsi = (l2 << 1);
	if (*(int *)(p4 + rsi) != -1) goto L7088;
	return 0;
L7088:
	if (*(int *)(p4 + rsi) != 1) goto L7090;
	l4++;
L7090:
	l2++;
	goto L706c;
L7095:
	return l4;
}
