/* Draw the border of a scrolling list window. */
draw_list_frame(win, show)
{
	register int y;
	fill_window(win, 32, 3, 0);
	defer_window_draw(win);
	draw_frame_glyph(win, 1, 0, 69);
	y = 1;
L642f:
	draw_frame_glyph(win, 1, y, 71);
	y++;
	if (y < 4) goto L642f;
	draw_frame_glyph(win, 1, 4, 70);
	resume_window_draw(win);
	if (!show) goto L6470;
	refresh_window(win);
L6470:
	;
}
