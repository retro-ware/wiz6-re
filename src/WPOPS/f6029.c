draw_combat_list_box(p4, p6)
{
	register int rsi;
	fill_window(p4, 32, 3, 0);
	defer_window_draw(p4);
	put_combat_glyph_at(p4, 1, 0, 69);
	rsi = 1;
L6061:
	put_combat_glyph_at(p4, 1, rsi, 71);
	rsi++;
	if (rsi < 4) goto L6061;
	put_combat_glyph_at(p4, 1, 4, 70);
	resume_window_draw(p4);
	if (!p6) goto L60a2;
	refresh_window(p4);
L60a2:
	;
}
