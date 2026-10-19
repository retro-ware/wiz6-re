extern int pc_spell_pts[];
extern int realm_colors[];
draw_chest_spell_window(p4, p6)
{
	register int rsi;
	defer_window_draw(p4);
	fill_window(p4, 0, 1, 0);
	draw_chest_spell_frame(p4);
	put_glyph_at_c2(p4, 1, 1, 35);
	put_glyph_at_c2(p4, 1, 3, 36);
	put_glyph_at_c2(p4, 1, 5, 37);
	put_glyph_at_c2(p4, 7, 1, 38);
	put_glyph_at_c2(p4, 7, 3, 39);
	put_glyph_at_c2(p4, 7, 5, 40);
	put_glyph_at_c2(p4, 13, 3, 34);
	rsi = 0;
L777a:
	set_cursor(p4, (rsi < 3 ? 3 : 9), (((rsi % 3) << 1) + 1));
	print_int(p4, *(int *)((char *)pc_spell_pts + ((432 * p6) + (rsi << 2))), 3, realm_colors[rsi]);
	rsi++;
	if (rsi < 6) goto L777a;
	rsi = 0;
L77d0:
	put_char_at_c5(p4, (rsi + 15), 3, (rsi + 24));
	rsi++;
	if (rsi < 6) goto L77d0;
	set_cursor(p4, 13, 5);
	print_message(3957, p4, 18);
	set_cursor(p4, 13, 6);
	rsi = 0;
L7825:
	put_char_hi(p4, 32, 3);
	rsi++;
	if (rsi < 4) goto L7825;
	resume_window_draw(p4);
	refresh_window(p4);
}
