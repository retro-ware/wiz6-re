draw_text_frame(p4)
{
	register int rsi;
	fill_window(p4, 0, 1, 0);
	put_frame_char(p4, 0, 0, 9);
	put_frame_char(p4, 39, 0, 10);
	put_frame_char(p4, 0, 15, 6);
	put_frame_char(p4, 39, 15, 8);
	for (rsi = 1; rsi < 39; rsi++) {
	put_frame_char(p4, rsi, 0, 12);
	put_frame_char(p4, rsi, 15, 7);
	}
	for (rsi = 1; rsi < 15; rsi++) {
	put_frame_char(p4, 0, rsi, 4);
	put_frame_char(p4, 39, rsi, 5);
	}
	refresh_window(p4);
}
