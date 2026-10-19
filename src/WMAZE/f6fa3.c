f6fa3(p4, p6, p8, p10)
char p10;
{
	int l2;
	f030b(p4, p6, p8);
	l2 = 0;
L6fbd:
	f23e3(p4, (unsigned char)(((unsigned char)p10 + l2)), 2);
	l2++;
	if (l2 < 4) goto L6fbd;
	f030b(p4, p6, (p8 + 1));
	l2 = 0;
L6ff6:
	f23e3(p4, (unsigned char)((((unsigned char)p10 + l2) + 4)), 2);
	l2++;
	if (l2 < 4) goto L6ff6;
}
