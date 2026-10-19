draw_list_box(p4, p6)
{
	register int rsi;
	fill_window(p4, 32, 3, 0);
	defer_window_draw(p4);
	put_glyph_at(p4, 0, 0, 69);
	for (rsi = 1; rsi < 6; rsi++) {
	put_glyph_at(p4, 0, rsi, 71);
	}
	put_glyph_at(p4, 0, 6, 70);
	resume_window_draw(p4);
	if (!p6) goto L6211;
	refresh_window(p4);
L6211:
	;
}
