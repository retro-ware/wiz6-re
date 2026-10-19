/* Draw eight consecutive glyphs from first as a 4x2 block at x, y. */
draw_glyph_4x2(win, x, y, first)
char first;
{
	int i;
	set_cursor(win, x, y);
	i = 0;
L4b4f:
	put_char_hi(win, (unsigned char)(((unsigned char)first + i)), 2);
	i++;
	if (i < 4) goto L4b4f;
	set_cursor(win, x, (y + 1));
	i = 0;
L4b88:
	put_char_hi(win, (unsigned char)((((unsigned char)first + i) + 4)), 2);
	i++;
	if (i < 4) goto L4b88;
}
