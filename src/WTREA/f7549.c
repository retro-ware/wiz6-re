draw_chest_list_box(p4, p6)
{
	register int rsi;
	fill_window(p4, 32, 3, 0);
	defer_window_draw(p4);
	put_glyph_at_c2(p4, 1, 0, 69);
	for (rsi = 1; rsi < 4; rsi++) {
	put_glyph_at_c2(p4, 1, rsi, 71);
	}
	put_glyph_at_c2(p4, 1, 4, 70);
	resume_window_draw(p4);
	if (p6) {
	refresh_window(p4);
	}
}
