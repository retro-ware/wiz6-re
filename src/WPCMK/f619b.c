#asm
	extrn put_glyph_at_:near
#endasm
draw_list_box(p4, p6)
{
	register int rsi;
	fill_window(p4, 32, 3, 0);
	defer_window_draw(p4);
#asm
	db 0b8h,045h,000h,050h,0b8h,000h,000h,050h,050h,0ffh,076h,004h
	call put_glyph_at_
	db 083h,0c4h,008h,0beh,001h,000h
#endasm
L61d0:
	put_glyph_at(p4, 0, rsi, 71);
	rsi++;
	if (rsi < 6) goto L61d0;
	put_glyph_at(p4, 0, 6, 70);
	resume_window_draw(p4);
	if (p6) {
	refresh_window(p4);
	}
}
