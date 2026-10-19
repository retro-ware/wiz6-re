f5176(p4, p6, p8)
{
	int l2;
	l2 = 72;
	f030b(p4, p6, p8);
	f23e3(p4, (unsigned char)*(char *)&l2, 2);
	f23e3(p4, (unsigned char)((l2 + 1)), 2);
	f23e3(p4, (unsigned char)((l2 + 2)), 2);
	f030b(p4, p6, (p8 + 1));
	f23e3(p4, (unsigned char)((l2 + 3)), 2);
	f23e3(p4, (unsigned char)((l2 + 4)), 2);
	f23e3(p4, (unsigned char)((l2 + 5)), 2);
	f030b(p4, p6, (p8 + 2));
	f23e3(p4, (unsigned char)((l2 + 6)), 2);
	f23e3(p4, (unsigned char)((l2 + 7)), 2);
	f23e3(p4, (unsigned char)((l2 + 8)), 2);
}
