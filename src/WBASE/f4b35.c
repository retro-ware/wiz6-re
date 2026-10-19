f4b35(p4, p6, p8, p10)
char p10;
{
	int l2;
	f030b(p4, p6, p8);
	l2 = 0;
L4b4f:
	f23e3(p4, (unsigned char)(((unsigned char)p10 + l2)), 2);
	l2++;
	if (l2 < 4) goto L4b4f;
	f030b(p4, p6, (p8 + 1));
	l2 = 0;
L4b88:
	f23e3(p4, (unsigned char)((((unsigned char)p10 + l2) + 4)), 2);
	l2++;
	if (l2 < 4) goto L4b88;
}
