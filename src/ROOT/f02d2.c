/* Unlink and free a window, optionally refreshing the screen. */
destroy_window(win, refresh)
{
	unlink_window(win);
	free(win);
	if (refresh) {
	refresh_all_windows();
	}
}
