/* Draw eight consecutive glyphs from first as a 4x2 block at x, y. */
draw_glyph_4x2(win, x, y, first)
char first;
{
	int i;
	set_cursor(win, x, y);
	for (i = 0; i < 4; i++) {
	put_char_hi(win, (unsigned char)(((unsigned char)first + i)), 2);
	}
	set_cursor(win, x, (y + 1));
	for (i = 0; i < 4; i++) {
	put_char_hi(win, (unsigned char)((((unsigned char)first + i) + 4)), 2);
	}
}
