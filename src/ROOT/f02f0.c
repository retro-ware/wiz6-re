clear_window(win, redraw)
{
	blank_window(win);
	if (redraw) {
	refresh_window(win);
	}
}
