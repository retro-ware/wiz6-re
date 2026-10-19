/* Set a window's cursor column/row (wrapped to window size). */
set_cursor(win, col, row)
char *win;
{
	win[6] = (char)(col % (unsigned char)*win);
	win[7] = (char)(row % (unsigned char)win[1]);
}
