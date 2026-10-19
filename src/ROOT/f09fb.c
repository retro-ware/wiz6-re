extern int main_window;
erase_window(win, no_defer)
{
	if (no_defer) goto L0a0b;
	defer_window_draw(win);
L0a0b:
	fill_window(win, (unsigned char)((win == main_window ? (char)28 : (char)30)), 3, 0);
	refresh_window(win);
	if (no_defer) goto L0a3e;
	resume_window_draw(win);
L0a3e:
	;
}
