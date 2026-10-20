/* Count enabled entries before index n; 0 if a -1 end mark comes first. */
count_enabled_items(enabled, n)
char *enabled;
{
	int i;
	int count;
	register int rsi;
	i = 0;
	count = 0;
L706c:
	if (i == n) goto L7095;
	rsi = (i << 1);
	if (*(int *)(enabled + rsi) != -1) goto L7088;
	return 0;
L7088:
	if (*(int *)(enabled + rsi) == 1) {
	count++;
	}
	i++;
	goto L706c;
L7095:
	return count;
}
