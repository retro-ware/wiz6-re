window_newline(win)
char *win;
{
	win[6] = 0;
	win[7] = (char)((unsigned char)(((unsigned char)win[7] + 1)) % (unsigned char)win[1]);
}
