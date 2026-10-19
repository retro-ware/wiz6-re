draw_portrait(p4, p6, p8)
{
	int l2;
	l2 = 72;
	set_cursor(p4, p6, p8);
	put_char_hi(p4, (unsigned char)*(char *)&l2, 2);
	put_char_hi(p4, (unsigned char)((l2 + 1)), 2);
	put_char_hi(p4, (unsigned char)((l2 + 2)), 2);
	set_cursor(p4, p6, (p8 + 1));
	put_char_hi(p4, (unsigned char)((l2 + 3)), 2);
	put_char_hi(p4, (unsigned char)((l2 + 4)), 2);
	put_char_hi(p4, (unsigned char)((l2 + 5)), 2);
	set_cursor(p4, p6, (p8 + 2));
	put_char_hi(p4, (unsigned char)((l2 + 6)), 2);
	put_char_hi(p4, (unsigned char)((l2 + 7)), 2);
	put_char_hi(p4, (unsigned char)((l2 + 8)), 2);
}
