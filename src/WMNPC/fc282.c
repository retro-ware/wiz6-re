fc282(p4, p6)
char *p4;
{
	int l2;
	l2 = 0;
Lc28e:
	if ((!*(p4 + (l2 + p6))) || (*(p4 + (l2 + p6)) == 32)) goto Lc2a9;
	l2++;
	goto Lc28e;
Lc2a9:
	if (l2) goto Lc2b7;
	return -1;
Lc2b7:
	return (p6 + l2);
}
