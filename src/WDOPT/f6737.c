/* Draw char ch at x, y. */
draw_char_at(win, x, y, ch)
char ch;
{
	set_cursor(win, x, y);
	put_char(win, (unsigned char)ch, 5);
}
