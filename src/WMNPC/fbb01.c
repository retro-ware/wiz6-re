fbb01(p4, p6)
char *p4;
{
	int l2;
	l2 = 0;
	goto Lbb1b;
Lbb0f:
	*(p4 + l2) = 120;
	l2++;
Lbb1b:
	if (l2 < p6) goto Lbb0f;
}
