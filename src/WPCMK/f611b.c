put_char_at(p4, p6, p8, p10)
char p10;
{
	set_cursor(p4, p6, p8);
	put_char(p4, (unsigned char)p10, 5);
}
