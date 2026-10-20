count_enabled_options(flags, count)
char *flags;
{
	int i;
	int n;
	register int rsi;
	i = 0;
	n = 0;
L47d2:
	if (i == count) goto L47fb;
	rsi = (i << 1);
	if (*(int *)(flags + rsi) != -1) goto L47ee;
	return 0;
L47ee:
	if (*(int *)(flags + rsi) == 1) {
	n++;
	}
	i++;
	goto L47d2;
L47fb:
	return n;
}
