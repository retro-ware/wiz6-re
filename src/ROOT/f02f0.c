clear_window(win, redraw)
{
	blank_window(win);
	if (!redraw) goto L0307;
	refresh_window(win);
L0307:
	;
}
