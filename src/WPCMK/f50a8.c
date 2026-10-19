put_glyph_at_c4(p4, p6, p8, p10)
char p10;
{
	set_cursor(p4, p6, p8);
	put_char_hi(p4, (unsigned char)p10, 4);
}
