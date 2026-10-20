#asm
	extrn put_combat_glyph_at_:near
	extrn set_cursor_:near
#endasm
extern int pc_spell_pts[];
extern int realm_colors[];
draw_combat_spell_window(p4, p6)
{
	register int rsi;
	defer_window_draw(p4);
	fill_window(p4, 0, 1, 0);
	draw_spell_frame(p4);
	put_combat_glyph_at(p4, 1, 1, 35);
	put_combat_glyph_at(p4, 1, 3, 36);
	put_combat_glyph_at(p4, 1, 5, 37);
	put_combat_glyph_at(p4, 7, 1, 38);
	put_combat_glyph_at(p4, 7, 3, 39);
	put_combat_glyph_at(p4, 7, 5, 40);
#asm
	db 0b8h,022h,000h,050h,0b8h,003h,000h,050h,0b8h,00dh,000h,050h,0ffh,076h,004h
	call put_combat_glyph_at_
	db 083h,0c4h,008h,0beh,000h,000h
#endasm
L625a:
	set_cursor(p4, (rsi < 3 ? 3 : 9), (((rsi % 3) << 1) + 1));
	print_int(p4, *(int *)((char *)pc_spell_pts + ((432 * p6) + (rsi << 2))), 3, realm_colors[rsi]);
	rsi++;
	if (rsi < 6) goto L625a;
	for (rsi = 0; rsi < 6; rsi++) {
	put_char_at_c5(p4, (rsi + 15), 3, (rsi + 24));
	}
	set_cursor(p4, 13, 5);
	print_message(3957, p4, 18);
#asm
	db 0b8h,006h,000h,050h,0b8h,00dh,000h,050h,0ffh,076h,004h
	call set_cursor_
	db 083h,0c4h,006h,0beh,000h,000h
#endasm
L6305:
	put_char_hi(p4, 32, 3);
	rsi++;
	if (rsi < 4) goto L6305;
	resume_window_draw(p4);
	refresh_window(p4);
}
