fae76(p4, p6)
char *p4;
{
	int l2;
	int l4;
	register int rsi;
	l2 = 0;
	l4 = 0;
Lae87:
	if (l2 == p6) goto Laeb0;
	if (*(int *)((rsi = (l2 << 1), p4) + rsi) != -1) goto Laea3;
	return 0;
Laea3:
	;
#asm
laea3:
	db 083h,038h,001h,075h,003h
#endasm
	l4++;
Laeab:
	l2++;
	goto Lae87;
Laeb0:
	return l4;
}
