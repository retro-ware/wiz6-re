/* Draw the border of a scrolling list window. */
draw_list_frame_dopt(win, show)
{
	register int y;
	fill_window(win, 32, 3, 0);
	defer_window_draw(win);
	draw_glyph_at_dopt(win, 1, 0, 69);
	for (y = 1; y < 4; y++) {
	draw_glyph_at_dopt(win, 1, y, 71);
	}
	draw_glyph_at_dopt(win, 1, 4, 70);
	resume_window_draw(win);
	if (!show) goto L6855;
	refresh_window(win);
L6855:
	;
}
