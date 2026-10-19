/* Ask the player for a word and compare it with the accepted answers; sets event flags on a match. */
#asm
	public riddle_event_
	extrn create_window_:near
	extrn defer_window_draw_:near
	extrn destroy_window_:near
	extrn extract_bits_:near
	extrn get_message_:near
	extrn input_text_m_:near
	extrn print_message_:near
	extrn refresh_all_windows_:near
	extrn resume_window_draw_:near
	extrn set_cursor_:near
	extrn set_event_flags_:near
	extrn show_message_text_m_:near
	extrn strcmp_:near
	extrn strcpy_:near
	extrn string_index_:near
	extrn swap_level_flags_:near
riddle_event_:
	db 055h,08bh,0ech,081h,0c4h,054h,0ffh,056h,0a1h,0e8h,04eh,0d1h,0e0h,08bh,0f0h,08bh
	db 01eh,0a8h,04fh,08bh,080h,040h,002h,089h,046h,0fah,0b8h,001h,000h,050h,0b8h,00bh
	db 000h,050h,0ffh,076h,0fah
	call extract_bits_
	db 083h,0c4h,006h,03dh,001h,000h,075h,01fh,0b8h,002h,000h,050h,0b8h,009h,000h,050h
	db 0ffh,076h,0fah
	call extract_bits_
	db 083h,0c4h,006h,0a3h,08ah,04fh,03bh,006h,09ah,04fh,074h,005h
lc1cc:
	db 05eh,08bh,0e5h,05dh,0c3h
lc1d1:
	db 0b8h,000h,000h,050h,0a1h,0e8h,04eh,0d1h,0e0h,08bh,0f0h,08bh,01eh,0a8h,04fh,0ffh
	db 030h
	call show_message_text_m_
	db 083h,0c4h,004h,0b8h,001h,000h,050h,0b8h,008h,000h,050h,0ffh,076h,0fah
	call extract_bits_
	db 083h,0c4h,006h,089h,086h,054h,0ffh,0b8h,008h,000h,050h,0b8h,000h,000h,050h,0ffh
	db 076h,0fah
	call extract_bits_
	db 083h,0c4h,006h,08bh,00eh,0e8h,04eh,0d1h,0e1h,08bh,0f1h,08bh,01eh,0a8h,04fh,08bh
	db 008h,003h,0c1h,089h,046h,0f8h,0ffh,036h,042h,033h
	call defer_window_draw_
	db 059h,0ffh,036h,0b2h,04fh
	call defer_window_draw_
	db 059h,0b8h,000h,000h,050h,050h,0b8h,0ffh,0ffh,050h,0b8h,014h,000h,050h,0b8h,005h
	db 000h,050h,0b8h,028h,000h,050h,0b8h,013h,000h,050h,0b8h,000h,000h,050h
	call create_window_
	db 083h,0c4h,010h,0a3h,02ah,052h
	call refresh_all_windows_
	db 0b8h,000h,000h,050h,0b8h,002h,000h,050h,0ffh,036h,02ah,052h
	call set_cursor_
	db 083h,0c4h,006h,0b8h,001h,000h,050h,0ffh,036h,02ah,052h,0b8h,0f7h,007h,050h
	call print_message_
	db 083h,0c4h,006h,0b8h,000h,000h,050h,0b8h,006h,000h,050h,0b8h,014h,000h,050h,08dh
	db 046h,0a8h,050h,0ffh,036h,02ah,052h
	call input_text_m_
	db 083h,0c4h,00ah,0c7h,086h,056h,0ffh,001h,000h,08dh,086h,058h,0ffh,050h,0ffh,076h
	db 0f8h
	call get_message_
	db 083h,0c4h,004h
lc2ac:
	db 083h,03eh,042h,030h,000h,075h,05fh,080h,0beh,058h,0ffh,024h,075h,02ch,08dh,086h
	db 059h,0ffh,050h,08dh,086h,058h,0ffh,050h
	call strcpy_
	db 083h,0c4h,004h,08dh,086h,058h,0ffh,050h,08dh,046h,0a8h,050h
	call string_index_
	db 083h,0c4h,004h,03dh,0ffh,0ffh,074h,006h,0c7h,086h,056h,0ffh,000h,000h
lc2e4:
	db 0ebh,019h
lc2e6:
	db 08dh,086h,058h,0ffh,050h,08dh,046h,0a8h,050h
	call strcmp_
	db 083h,0c4h,004h,085h,0c0h,075h,006h,0c7h,086h,056h,0ffh,000h,000h
lc2ff:
	db 0ffh,046h,0f8h,08dh,086h,058h,0ffh,050h,0ffh,076h,0f8h
	call get_message_
	db 083h,0c4h,004h,0ebh,09ah
lc312:
	db 0ffh,0b6h,056h,0ffh,08bh,036h,0e8h,04eh,08bh,01eh,0a8h,04fh,08ah,080h,030h,006h
	db 02ah,0e4h,050h,0d1h,0e6h,0ffh,0b0h,020h,001h
	call swap_level_flags_
	db 083h,0c4h,006h,083h,0beh,056h,0ffh,000h,075h,00ah,08bh,086h,054h,0ffh,040h,050h
	call set_event_flags_
	db 059h
lc342:
	db 0b8h,000h,000h,050h,0ffh,036h,02ah,052h
	call destroy_window_
	db 083h,0c4h,004h,0ffh,036h,042h,033h
	call resume_window_draw_
	db 059h,0ffh,036h,0b2h,04fh
	call resume_window_draw_
	db 059h,0e9h,069h,0feh
#endasm
