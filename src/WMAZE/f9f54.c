f9f54(p4)
char *p4;
{
	int l2;
	l2 = random(4);
L9f66:
	if (*(int *)(p4 + (l2 << 1))) goto L9f84;
	l2 = ((l2 + 1) % 4);
	goto L9f66;
L9f84:
	return l2;
}
