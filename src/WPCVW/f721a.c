#asm
	extrn put_frame_char_:near
	extrn put_glyph_at_:near
	extrn put_icon_at_:near
	extrn set_cursor_:near
#endasm
draw_spell_window(p4)
{
	register int rsi;
	defer_window_draw(p4);
	fill_window(p4, 0, 1, 0);
	put_frame_char(p4, 0, 0, 14);
	put_frame_char(p4, 19, 0, 10);
	put_frame_char(p4, 0, 2, 21);
#asm
	db 0b8h,008h,000h,050h,0b8h,002h,000h,050h,0b8h,013h,000h,050h,0ffh,076h,004h
	call put_frame_char_
	db 083h,0c4h,008h,0beh,001h,000h
#endasm
L728e:
	put_frame_char(p4, rsi, 0, 12);
	put_frame_char(p4, rsi, 2, 7);
	rsi++;
	if (rsi < 19) goto L728e;
	put_frame_char(p4, 0, 1, 13);
	put_frame_char(p4, 19, 1, 5);
	set_cursor(p4, 1, 1);
	print_message(700, p4, 18);
	put_icon_at(p4, 2, 1, 34);
#asm
	db 0b8h,022h,000h,050h,0b8h,001h,000h,050h,0b8h,011h,000h,050h,0ffh,076h,004h
	call put_icon_at_
	db 083h,0c4h,008h,0beh,003h,000h
#endasm
L732e:
	put_frame_char(p4, 0, rsi, 5);
	rsi++;
	if (rsi < 9) goto L732e;
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
#asm
	db 0b8h,00bh,000h,050h,0b8h,00dh,000h,050h,0b8h,002h,000h,050h,0ffh,076h,004h
	call put_frame_char_
	db 083h,0c4h,008h,0beh,003h,000h
#endasm
L7445:
	put_frame_char(p4, rsi, 11, 18);
	put_frame_char(p4, rsi, 13, 7);
	rsi++;
	if (rsi < 6) goto L7445;
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
#asm
	db 0b8h,022h,000h,050h,0b8h,00ch,000h,050h,0b8h,001h,000h,050h,0ffh,076h,004h
	call put_glyph_at_
	db 083h,0c4h,008h,0beh,000h,000h
#endasm
L7619:
	put_char_at(p4, (rsi + 3), 12, (rsi + 24));
	rsi++;
	if (rsi < 6) goto L7619;
	set_cursor(p4, 1, 14);
	print_message(3957, p4, 18);
#asm
	db 0b8h,00eh,000h,050h,0b8h,00ah,000h,050h,0ffh,076h,004h
	call set_cursor_
	db 083h,0c4h,006h,0beh,000h,000h
#endasm
L766e:
	put_char_hi(p4, 32, 3);
	rsi++;
	if (rsi < 10) goto L766e;
#asm
	db 0b8h,00fh,000h,050h,0b8h,001h,000h,050h,0ffh,076h,004h
	call set_cursor_
	db 083h,0c4h,006h,0beh,000h,000h
#endasm
L7699:
	put_char_hi(p4, 32, 3);
	rsi++;
	if (rsi < 4) goto L7699;
#asm
	db 0b8h,00fh,000h,050h,0b8h,00ah,000h,050h,0ffh,076h,004h
	call set_cursor_
	db 083h,0c4h,006h,0beh,000h,000h
#endasm
L76c4:
	put_char_hi(p4, 32, 3);
	rsi++;
	if (rsi < 10) goto L76c4;
	resume_window_draw(p4);
	refresh_window(p4);
}
