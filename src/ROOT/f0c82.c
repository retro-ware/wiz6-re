copy_through_char(p4, p6, p8)
char *p4;
char *p6;
char p8;
{
	int l2;
	int l4;
	l2 = 0;
	l4 = 0;
L0c93:
	if ((!*(p6 + l2)) || (l4)) goto L0cc8;
	*(p4 + l2) = *(p6 + l2);
	l4 = (*(p6 + l2) == p8 ? 1 : 0);
	l2++;
	goto L0c93;
L0cc8:
	*(p4 + l2) = 0;
}
