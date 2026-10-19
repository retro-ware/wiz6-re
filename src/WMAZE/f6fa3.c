f6fa3(p4, p6, p8, p10)
char p10;
{
	int l2;
	set_cursor(p4, p6, p8);
	for (l2 = 0; l2 < 4; l2++) {
	put_char_hi(p4, (unsigned char)(((unsigned char)p10 + l2)), 2);
	}
	set_cursor(p4, p6, (p8 + 1));
	for (l2 = 0; l2 < 4; l2++) {
	put_char_hi(p4, (unsigned char)((((unsigned char)p10 + l2) + 4)), 2);
	}
}
