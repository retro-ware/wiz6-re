draw_spell_window(p4)
{
	register int rsi;
	defer_window_draw(p4);
	fill_window(p4, 0, 1, 0);
	set_frame_glyph(p4, 0, 0, 14);
	set_frame_glyph(p4, 19, 0, 10);
	set_frame_glyph(p4, 0, 2, 21);
	set_frame_glyph(p4, 19, 2, 8);
	rsi = 1;
L628a:
	set_frame_glyph(p4, rsi, 0, 12);
	set_frame_glyph(p4, rsi, 2, 7);
	rsi++;
	if (rsi < 19) goto L628a;
	set_frame_glyph(p4, 0, 1, 13);
	set_frame_glyph(p4, 19, 1, 5);
	set_cursor(p4, 1, 1);
	print_message(700, p4, 18);
	put_glyph_at_c4(p4, 2, 1, 34);
	put_glyph_at_c4(p4, 17, 1, 34);
	rsi = 3;
L632a:
	set_frame_glyph(p4, 0, rsi, 5);
	rsi++;
	if (rsi < 9) goto L632a;
	set_frame_glyph(p4, 0, 9, 10);
	set_frame_glyph(p4, 0, 10, 5);
	set_frame_glyph(p4, 0, 11, 22);
	set_frame_glyph(p4, 0, 12, 13);
	set_frame_glyph(p4, 0, 13, 23);
	set_frame_glyph(p4, 0, 14, 5);
	set_frame_glyph(p4, 0, 15, 8);
	set_frame_glyph(p4, 1, 11, 18);
	set_frame_glyph(p4, 1, 13, 7);
	set_frame_glyph(p4, 2, 11, 34);
	set_frame_glyph(p4, 2, 12, 13);
	set_frame_glyph(p4, 2, 13, 11);
	rsi = 3;
L6441:
	set_frame_glyph(p4, rsi, 11, 18);
	set_frame_glyph(p4, rsi, 13, 7);
	rsi++;
	if (rsi < 6) goto L6441;
	rsi = 6;
L646e:
	set_frame_glyph(p4, rsi, 11, 18);
	set_frame_glyph(p4, rsi, 13, 12);
	set_frame_glyph(p4, rsi, 15, 7);
	rsi++;
	if (rsi < 9) goto L646e;
	rsi = 11;
L64ad:
	set_frame_glyph(p4, rsi, 11, 18);
	set_frame_glyph(p4, rsi, 13, 7);
	rsi++;
	if (rsi < 19) goto L64ad;
	set_frame_glyph(p4, 5, 13, 24);
	set_frame_glyph(p4, 5, 14, 4);
	set_frame_glyph(p4, 5, 15, 6);
	set_frame_glyph(p4, 9, 11, 19);
	set_frame_glyph(p4, 9, 12, 5);
	set_frame_glyph(p4, 9, 13, 10);
	set_frame_glyph(p4, 9, 14, 5);
	set_frame_glyph(p4, 9, 15, 8);
	set_frame_glyph(p4, 10, 11, 17);
	set_frame_glyph(p4, 10, 12, 4);
	set_frame_glyph(p4, 10, 13, 6);
	set_frame_glyph(p4, 19, 11, 19);
	set_frame_glyph(p4, 19, 12, 5);
	set_frame_glyph(p4, 19, 13, 8);
	put_glyph_at(p4, 1, 12, 34);
	rsi = 0;
L6615:
	put_char_at(p4, (rsi + 3), 12, (rsi + 24));
	rsi++;
	if (rsi < 6) goto L6615;
	set_cursor(p4, 1, 14);
	print_message(3957, p4, 18);
	set_cursor(p4, 10, 14);
	rsi = 0;
L666a:
	put_char_hi(p4, 32, 3);
	rsi++;
	if (rsi < 10) goto L666a;
	set_cursor(p4, 1, 15);
	rsi = 0;
L6695:
	put_char_hi(p4, 32, 3);
	rsi++;
	if (rsi < 4) goto L6695;
	set_cursor(p4, 10, 15);
	rsi = 0;
L66c0:
	put_char_hi(p4, 32, 3);
	rsi++;
	if (rsi < 10) goto L66c0;
	resume_window_draw(p4);
	refresh_window(p4);
}
