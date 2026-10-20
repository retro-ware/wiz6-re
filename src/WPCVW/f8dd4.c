#asm
	extrn put_frame_char_:near
#endasm
draw_text_frame(p4)
{
	register int rsi;
	fill_window(p4, 0, 1, 0);
	put_frame_char(p4, 0, 0, 9);
	put_frame_char(p4, 39, 0, 10);
	put_frame_char(p4, 0, 15, 6);
#asm
	db 0b8h,008h,000h,050h,0b8h,00fh,000h,050h,0b8h,027h,000h,050h,0ffh,076h,004h
	call put_frame_char_
	db 083h,0c4h,008h,0beh,001h,000h
#endasm
L8e41:
	put_frame_char(p4, rsi, 0, 12);
	put_frame_char(p4, rsi, 15, 7);
	rsi++;
	if (rsi < 39) goto L8e41;
	for (rsi = 1; rsi < 15; rsi++) {
	put_frame_char(p4, 0, rsi, 4);
	put_frame_char(p4, 39, rsi, 5);
	}
	refresh_window(p4);
}
