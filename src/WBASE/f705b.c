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
	if (*(int *)((rsi = (i << 1), enabled) + rsi) != -1) goto L7088;
	return 0;
L7088:
	;
#asm
l7088:
	db 083h,038h,001h,075h,003h
#endasm
	count++;
L7090:
	i++;
	goto L706c;
L7095:
	return count;
}
