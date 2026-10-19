f6fa3(p4, p6, p8, p10)
char p10;
{
	int l2;
	set_cursor(p4, p6, p8);
	l2 = 0;
L6fbd:
	put_char_hi(p4, (unsigned char)(((unsigned char)p10 + l2)), 2);
	l2++;
	if (l2 < 4) goto L6fbd;
	set_cursor(p4, p6, (p8 + 1));
	l2 = 0;
L6ff6:
	put_char_hi(p4, (unsigned char)((((unsigned char)p10 + l2) + 4)), 2);
	l2++;
	if (l2 < 4) goto L6ff6;
}
