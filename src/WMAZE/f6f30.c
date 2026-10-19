f6f30(p4, p6, p8, p10, p12, p14, p16)
char p10;
char p12;
char p14;
char p16;
{
	set_cursor(p4, p6, p8);
	put_char_hi(p4, (unsigned char)p10, 2);
	put_char_hi(p4, (unsigned char)p12, 2);
	set_cursor(p4, p6, (p8 + 1));
	put_char_hi(p4, (unsigned char)p14, 2);
	put_char_hi(p4, (unsigned char)p16, 2);
}
