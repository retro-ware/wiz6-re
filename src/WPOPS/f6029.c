#asm
	extrn put_combat_glyph_at_:near
#endasm
draw_combat_list_box(p4, p6)
{
	register int rsi;
	fill_window(p4, 32, 3, 0);
	defer_window_draw(p4);
#asm
	db 0b8h,045h,000h,050h,0b8h,000h,000h,050h,0b8h,001h,000h,050h,0ffh,076h,004h
	call put_combat_glyph_at_
	db 083h,0c4h,008h,0beh,001h,000h
#endasm
L6061:
	put_combat_glyph_at(p4, 1, rsi, 71);
	rsi++;
	if (rsi < 4) goto L6061;
	put_combat_glyph_at(p4, 1, 4, 70);
	resume_window_draw(p4);
	if (p6) {
	refresh_window(p4);
	}
}
