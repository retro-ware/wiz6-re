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
	if (*(int *)((rsi = (i << 1), flags) + rsi) != -1) goto L47ee;
	return 0;
L47ee:
	;
#asm
l47ee:
	db 083h,038h,001h,075h,003h
#endasm
	n++;
L47f6:
	i++;
	goto L47d2;
L47fb:
	return n;
}
