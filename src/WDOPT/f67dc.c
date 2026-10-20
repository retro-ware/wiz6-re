#asm
	extrn draw_glyph_at_dopt_:near
#endasm
/* Draw the border of a scrolling list window. */
draw_list_frame_dopt(win, show)
{
	register int y;
	fill_window(win, 32, 3, 0);
	defer_window_draw(win);
#asm
	db 0b8h,045h,000h,050h,0b8h,000h,000h,050h,0b8h,001h,000h,050h,0ffh,076h,004h
	call draw_glyph_at_dopt_
	db 083h,0c4h,008h,0beh,001h,000h
#endasm
L6814:
	draw_glyph_at_dopt(win, 1, y, 71);
	y++;
	if (y < 4) goto L6814;
	draw_glyph_at_dopt(win, 1, 4, 70);
	resume_window_draw(win);
	if (show) {
	refresh_window(win);
	}
}
