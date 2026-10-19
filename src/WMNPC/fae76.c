fae76(p4, p6)
char *p4;
{
	int l2;
	int l4;
	l2 = 0;
	l4 = 0;
Lae87:
	if (l2 == p6) goto Laeb0;
	if (*(int *)(p4 + (l2 << 1)) != -1) goto Laea3;
	return 0;
Laea3:
	if (*(int *)(p4 + (l2 << 1)) != 1) goto Laeab;
	l4++;
Laeab:
	l2++;
	goto Lae87;
Laeb0:
	return l4;
}
