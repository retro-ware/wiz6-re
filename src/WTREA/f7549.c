draw_chest_list_box(p4, p6)
{
	register int rsi;
	fill_window(p4, 32, 3, 0);
	defer_window_draw(p4);
	put_glyph_at_c2(p4, 1, 0, 69);
	rsi = 1;
L7581:
	put_glyph_at_c2(p4, 1, rsi, 71);
	rsi++;
	if (rsi < 4) goto L7581;
	put_glyph_at_c2(p4, 1, 4, 70);
	resume_window_draw(p4);
	if (!p6) goto L75c2;
	refresh_window(p4);
L75c2:
	;
}
