f88c7(p4, p6)
{
	register int rsi;
	fill_window(p4, 32, 3, 0);
	defer_window_draw(p4);
	f884b(p4, 1, 0, 69);
	for (rsi = 1; rsi < 4; rsi++) {
	f884b(p4, 1, rsi, 71);
	}
	f884b(p4, 1, 4, 70);
	resume_window_draw(p4);
	if (p6) {
	refresh_window(p4);
	}
}
