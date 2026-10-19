/* Unlink and free a window, optionally refreshing the screen. */
destroy_window(win, refresh)
{
	unlink_window(win);
	free(win);
	if (!refresh) goto L02ec;
	refresh_all_windows();
L02ec:
	;
}
