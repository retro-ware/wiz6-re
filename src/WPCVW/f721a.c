draw_spell_window(p4)
{
	register int rsi;
	defer_window_draw(p4);
	fill_window(p4, 0, 1, 0);
	put_frame_char(p4, 0, 0, 14);
	put_frame_char(p4, 19, 0, 10);
	put_frame_char(p4, 0, 2, 21);
	put_frame_char(p4, 19, 2, 8);
	for (rsi = 1; rsi < 19; rsi++) {
	put_frame_char(p4, rsi, 0, 12);
	put_frame_char(p4, rsi, 2, 7);
	}
	put_frame_char(p4, 0, 1, 13);
	put_frame_char(p4, 19, 1, 5);
	set_cursor(p4, 1, 1);
	print_message(700, p4, 18);
	put_icon_at(p4, 2, 1, 34);
	put_icon_at(p4, 17, 1, 34);
	for (rsi = 3; rsi < 9; rsi++) {
	put_frame_char(p4, 0, rsi, 5);
	}
	put_frame_char(p4, 0, 9, 10);
	put_frame_char(p4, 0, 10, 5);
	put_frame_char(p4, 0, 11, 22);
	put_frame_char(p4, 0, 12, 13);
	put_frame_char(p4, 0, 13, 23);
	put_frame_char(p4, 0, 14, 5);
	put_frame_char(p4, 0, 15, 8);
	put_frame_char(p4, 1, 11, 18);
	put_frame_char(p4, 1, 13, 7);
	put_frame_char(p4, 2, 11, 34);
	put_frame_char(p4, 2, 12, 13);
	put_frame_char(p4, 2, 13, 11);
	for (rsi = 3; rsi < 6; rsi++) {
	put_frame_char(p4, rsi, 11, 18);
	put_frame_char(p4, rsi, 13, 7);
	}
	for (rsi = 6; rsi < 9; rsi++) {
	put_frame_char(p4, rsi, 11, 18);
	put_frame_char(p4, rsi, 13, 12);
	put_frame_char(p4, rsi, 15, 7);
	}
	for (rsi = 11; rsi < 19; rsi++) {
	put_frame_char(p4, rsi, 11, 18);
	put_frame_char(p4, rsi, 13, 7);
	}
	put_frame_char(p4, 5, 13, 24);
	put_frame_char(p4, 5, 14, 4);
	put_frame_char(p4, 5, 15, 6);
	put_frame_char(p4, 9, 11, 19);
	put_frame_char(p4, 9, 12, 5);
	put_frame_char(p4, 9, 13, 10);
	put_frame_char(p4, 9, 14, 5);
	put_frame_char(p4, 9, 15, 8);
	put_frame_char(p4, 10, 11, 17);
	put_frame_char(p4, 10, 12, 4);
	put_frame_char(p4, 10, 13, 6);
	put_frame_char(p4, 19, 11, 19);
	put_frame_char(p4, 19, 12, 5);
	put_frame_char(p4, 19, 13, 8);
	put_glyph_at(p4, 1, 12, 34);
	for (rsi = 0; rsi < 6; rsi++) {
	put_char_at(p4, (rsi + 3), 12, (rsi + 24));
	}
	set_cursor(p4, 1, 14);
	print_message(3957, p4, 18);
	set_cursor(p4, 10, 14);
	for (rsi = 0; rsi < 10; rsi++) {
	put_char_hi(p4, 32, 3);
	}
	set_cursor(p4, 1, 15);
	for (rsi = 0; rsi < 4; rsi++) {
	put_char_hi(p4, 32, 3);
	}
	set_cursor(p4, 10, 15);
	for (rsi = 0; rsi < 10; rsi++) {
	put_char_hi(p4, 32, 3);
	}
	resume_window_draw(p4);
	refresh_window(p4);
}
