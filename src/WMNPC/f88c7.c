f88c7(p4, p6)
{
	register int rsi;
	fill_window(p4, 32, 3, 0);
	defer_window_draw(p4);
	f884b(p4, 1, 0, 69);
	rsi = 1;
L88ff:
	f884b(p4, 1, rsi, 71);
	rsi++;
	if (rsi < 4) goto L88ff;
	f884b(p4, 1, 4, 70);
	resume_window_draw(p4);
	if (!p6) goto L8940;
	refresh_window(p4);
L8940:
	;
}
