count_enabled_options(flags, count)
char *flags;
{
	int i;
	int n;
	i = 0;
	n = 0;
L47d2:
	if (i == count) goto L47fb;
	if (*(int *)(flags + (i << 1)) != -1) goto L47ee;
	return 0;
L47ee:
	if (*(int *)(flags + (i << 1)) != 1) goto L47f6;
	n++;
L47f6:
	i++;
	goto L47d2;
L47fb:
	return n;
}
