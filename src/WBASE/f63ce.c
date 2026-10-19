/* Draw frame glyph ch at x, y. */
draw_frame_glyph(win, x, y, ch)
char ch;
{
	set_cursor(win, x, y);
	put_char_hi(win, (unsigned char)ch, 2);
}
