extern int main_window;
erase_window(win, no_defer)
{
	if (!no_defer) {
	defer_window_draw(win);
	}
	fill_window(win, (unsigned char)((win == main_window ? (char)28 : (char)30)), 3, 0);
	refresh_window(win);
	if (!no_defer) {
	resume_window_draw(win);
	}
}
