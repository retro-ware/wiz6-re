draw_spell_list_frame(p4, p6)
{
	register int rsi;
	fill_window(p4, 32, 3, 0);
	defer_window_draw(p4);
	put_glyph_at(p4, 0, 0, 69);
	rsi = 1;
L71d4:
	put_glyph_at(p4, 0, rsi, 71);
	rsi++;
	if (rsi < 6) goto L71d4;
	put_glyph_at(p4, 0, 6, 70);
	resume_window_draw(p4);
	if (!p6) goto L7215;
	refresh_window(p4);
L7215:
	;
}
