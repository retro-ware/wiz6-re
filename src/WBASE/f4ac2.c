/* Draw four glyphs as a 2x2 block at x, y. */
draw_glyph_2x2(win, x, y, p10, p12, p14, p16)
char p10;
char p12;
char p14;
char p16;
{
	set_cursor(win, x, y);
	put_char_hi(win, (unsigned char)p10, 2);
	put_char_hi(win, (unsigned char)p12, 2);
	set_cursor(win, x, (y + 1));
	put_char_hi(win, (unsigned char)p14, 2);
	put_char_hi(win, (unsigned char)p16, 2);
}
