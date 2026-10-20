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
	if (*(int *)((rsi = (l2 << 1), p4) + rsi) != -1) goto L5c12;
	return 0;
L5c12:
	;
#asm
l5c12:
	db 083h,038h,001h,075h,003h
#endasm
	l4++;
L5c1a:
	l2++;
	goto L5bf6;
L5c1f:
	return l4;
}
