/* Multi-choice puzzle from message text; correct answer sequence sets level flags. */
#asm
	public puzzle_event_
	extrn char_index_:near
	extrn create_window_:near
	extrn defer_window_draw_:near
	extrn destroy_window_:near
	extrn erase_window_:near
	extrn extract_bits_:near
	extrn f0a42_:near
	extrn fill_window_:near
	extrn get_message_:near
	extrn maze_menu_select_:near
	extrn play_sound_:near
	extrn print_string_hi_:near
	extrn refresh_all_windows_:near
	extrn refresh_window_:near
	extrn resume_window_draw_:near
	extrn set_bit_:near
	extrn set_cursor_:near
	extrn show_message_text_m_:near
	extrn strlen_:near
	extrn swap_level_flags_:near
puzzle_event_:
	db 055h,08bh,0ech,081h,0c4h,022h,0ffh,056h,08bh,01eh,0a8h,04fh,08bh,036h,0e8h,04eh
	db 080h,0b8h,030h,006h,000h,076h,01fh,0b8h,000h,000h,050h,0d1h,0e6h,08bh,000h,050h
	db 08bh,036h,0e8h,04eh,08ah,080h,030h,006h,02ah,0e4h,08bh,0c8h,058h,003h,0c1h,050h
	call show_message_text_m_
	db 083h,0c4h,004h
lbcc9:
	db 0a1h,0e8h,04eh,0d1h,0e0h,08bh,0f0h,08bh,01eh,0a8h,04fh,08bh,080h,040h,002h,089h
	db 046h,0f8h,0b8h,004h,000h,050h,0b8h,000h,000h,050h,0ffh,076h,0f8h
	call extract_bits_
	db 083h,0c4h,006h,089h,046h,0f4h,0b8h,004h,000h,050h,050h,0ffh,076h,0f8h
	call extract_bits_
	db 083h,0c4h,006h,089h,046h,0f2h,0b8h,004h,000h,050h,0b8h,008h,000h,050h,0ffh,076h
	db 0f8h
	call extract_bits_
	db 083h,0c4h,006h,089h,046h,0f0h,0b8h,001h,000h,050h,0b8h,00ch,000h,050h,0ffh,076h
	db 0f8h
	call extract_bits_
	db 083h,0c4h,006h,089h,046h,0eeh,0b8h,001h,000h,050h,0b8h,00dh,000h,050h,0ffh,076h
	db 0f8h
	call extract_bits_
	db 083h,0c4h,006h,089h,046h,0ech,0b8h,001h,000h,050h,0b8h,00eh,000h,050h,0ffh,076h
	db 0f8h
	call extract_bits_
	db 083h,0c4h,006h,089h,046h,0eah,0b8h,001h,000h,050h,0b8h,00fh,000h,050h,0ffh,076h
	db 0f8h
	call extract_bits_
	db 083h,0c4h,006h,089h,046h,0e4h,0c7h,006h,030h,052h,001h,000h,0a1h,0e8h,04eh,0d1h
	db 0e0h,08bh,0f0h,08bh,01eh,0a8h,04fh,08bh,000h,089h,046h,0f6h,0b8h,000h,000h,050h
	db 0ffh,036h,042h,033h
	call erase_window_
	db 083h,0c4h,004h,0ffh,036h,042h,033h
	call defer_window_draw_
	db 059h,083h,07eh,0ech,001h,075h,010h,08dh,046h,094h,050h,0b8h,0f6h,007h,050h
	call get_message_
	db 083h,0c4h,004h,0ebh,010h
lbda6:
	db 08dh,046h,094h,050h,0ffh,076h,0f6h
	call get_message_
	db 083h,0c4h,004h,0ffh,046h,0f6h
lbdb6:
	db 0b8h,000h,000h,050h,08dh,046h,094h,050h
	call strlen_
	db 059h,040h,0b9h,002h,000h,099h,0f7h,0f9h,08bh,0c8h,0b8h,014h,000h,02bh,0c1h,050h
	db 0ffh,036h,042h,033h
	call set_cursor_
	db 083h,0c4h,006h,0b8h,003h,000h,050h,08dh,046h,094h,050h,0ffh,036h,042h,033h
	call print_string_hi_
	db 083h,0c4h,006h,0ffh,036h,042h,033h
	call resume_window_draw_
	db 059h,0b8h,000h,000h,050h,050h,0b8h,0ffh,0ffh,050h,0b8h,014h,000h,050h,0b8h,005h
	db 000h,050h,0b8h,028h,000h,050h,0b8h,013h,000h,050h,0b8h,000h,000h,050h
	call create_window_
	db 083h,0c4h,010h,0a3h,02ah,052h,0b8h,000h,000h,050h,0b8h,003h,000h,050h,0b8h,020h
	db 000h,050h,0ffh,036h,02ah,052h
	call fill_window_
	db 083h,0c4h,008h,0b8h,000h,000h,050h,0ffh,036h,0b2h,04fh
	call erase_window_
	db 083h,0c4h,004h
	call refresh_all_windows_
	db 08dh,046h,094h,050h,0ffh,076h,0f6h
	call get_message_
	db 083h,0c4h,004h,0ffh,046h,0f6h,0c7h,046h,0feh,000h,000h,0ebh,012h
lbe59:
	db 08bh,046h,0feh,0d1h,0e0h,08bh,0d8h,003h,0ddh,0c7h,087h,024h,0ffh,001h,000h,0ffh
	db 046h,0feh
lbe6b:
	db 08bh,046h,0feh,03bh,046h,0f4h,07ch,0e6h,08bh,046h,0f4h,0d1h,0e0h,08bh,0d8h,003h
	db 0ddh,0c7h,087h,024h,0ffh,0ffh,0ffh,083h,07eh,0ech,001h,074h,003h,0e9h,0a2h,000h
lbe8b:
	db 08dh,086h,044h,0ffh,050h,0ffh,076h,0f6h
	call get_message_
	db 083h,0c4h,004h,0b8h,000h,000h,050h,0b8h,005h,000h,050h,0b8h,004h,000h,050h,0b8h
	db 014h,000h,050h,0b8h,001h,000h,050h,08dh,086h,044h,0ffh,050h
	call strlen_
	db 059h,040h,0b9h,002h,000h,099h,0f7h,0f9h,08bh,0c8h,0b8h,014h,000h,02bh,0c1h,050h
	db 08dh,086h,024h,0ffh,050h,0ffh,076h,0f6h,0ffh,036h,02ah,052h
	call maze_menu_select_
	db 083h,0c4h,012h,089h,046h,0fah,0d1h,0e0h,08bh,0d8h,003h,0ddh,08ah,047h,094h,02ah
	db 0e4h,08bh,0d0h,0d1h,0e0h,0d1h,0e0h,003h,0c2h,0d1h,0e0h,050h,08ah,047h,095h,02ah
	db 0e4h,08bh,0c8h,058h,003h,0c1h,005h,0f0h,0fdh,089h,086h,022h,0ffh,03dh,000h,000h
	db 07eh,024h,03dh,050h,000h,07dh,01fh,0b8h,000h,000h,050h,0ffh,0b6h,022h,0ffh,0a1h
	db 03ch,036h,08bh,0d0h,0d1h,0e0h,0d1h,0e0h,003h,0c2h,0d1h,0e0h,005h,0ech,04eh,050h
	call set_bit_
	db 083h,0c4h,006h
lbf2a:
	db 0e9h,063h,001h
lbf2d:
	db 0c7h,046h,0e8h,000h,000h,0c7h,046h,0e6h,000h,000h,0c7h,046h,0feh,000h,000h,0e9h
	db 004h,001h
lbf3f:
	db 0b8h,000h,000h,050h,0b8h,003h,000h,050h,0b8h,020h,000h,050h,0ffh,036h,02ah,052h
	call fill_window_
	db 083h,0c4h,008h,0ffh,036h,02ah,052h
	call refresh_window_
	db 059h,08dh,086h,044h,0ffh,050h,0ffh,076h,0f6h
	call get_message_
	db 083h,0c4h,004h,0b8h,000h,000h,050h,0b8h,005h,000h,050h,08bh,046h,0f4h,048h,0b9h
	db 002h,000h,099h,0f7h,0f9h,040h,050h,08dh,086h,044h,0ffh,050h
	call strlen_
	db 059h,040h,040h,040h,050h,0b8h,001h,000h,050h,08dh,086h,044h,0ffh,050h
	call strlen_
	db 059h,0d1h,0e0h,005h,004h,000h,0b9h,002h,000h,099h,0f7h,0f9h,08bh,0c8h,0b8h,014h
	db 000h,02bh,0c1h,050h,08dh,086h,024h,0ffh,050h,0ffh,076h,0f6h,0ffh,036h,02ah,052h
	call maze_menu_select_
	db 083h,0c4h,012h,089h,046h,0fah,083h,07eh,0eah,001h,075h,00ch,0d1h,0e0h,08bh,0d8h
	db 003h,0ddh,0c7h,087h,024h,0ffh,000h,000h
lbfd3:
	db 08bh,046h,0f4h,048h,03bh,046h,0fah,075h,013h,08bh,046h,0f2h,089h,046h,0feh,083h
	db 07eh,0e8h,000h,075h,005h,0c7h,046h,0e6h,001h,000h
lbfed:
	db 0ebh,051h
lbfef:
	db 083h,07eh,0f0h,000h,07eh,007h,0ffh,076h,0f0h
	call play_sound_
	db 059h
lbffc:
	db 08bh,046h,0fah,005h,030h,000h,02ah,0e4h,050h,08dh,046h,094h,050h
	call char_index_
	db 083h,0c4h,004h,089h,046h,0fch,03dh,0ffh,0ffh,074h,018h,083h,07eh,0eeh,000h,075h
	db 023h,08bh,05eh,0feh,003h,0ddh,08ah,047h,094h,02ah,0e4h,005h,0d0h,0ffh,03bh,046h
	db 0fah,074h,011h
lc02f:
	db 0c7h,046h,0e8h,001h,000h,083h,07eh,0e4h,001h,075h,006h,08bh,046h,0f2h,089h,046h
	db 0feh
lc040:
	db 0ffh,046h,0feh
lc043:
	db 08bh,046h,0feh,03bh,046h,0f2h,07dh,003h,0e9h,0f1h,0feh
lc04e:
	db 083h,07eh,0e6h,000h,075h,03ch,0a1h,0e8h,04eh,0d1h,0e0h,08bh,0f0h,08bh,01eh,0a8h
	db 04fh,08bh,080h,020h,001h,089h,046h,0f8h,0ffh,076h,0e8h,0b8h,008h,000h,050h,050h
	db 0ffh,076h,0f8h
	call extract_bits_
	db 083h,0c4h,006h,050h,0b8h,008h,000h,050h,0b8h,000h,000h,050h,0ffh,076h,0f8h
	call extract_bits_
	db 083h,0c4h,006h,050h
	call swap_level_flags_
	db 083h,0c4h,006h
lc090:
	db 0b8h,000h,000h,050h,0ffh,036h,042h,033h
	call erase_window_
	db 083h,0c4h,004h,0b8h,000h,000h,050h,0ffh,036h,02ah,052h
	call destroy_window_
	db 083h,0c4h,004h,0b8h,000h,000h,050h,0ffh,036h,0b2h,04fh
	call f0a42_
	db 083h,0c4h,004h,05eh,08bh,0e5h,05dh,0c3h
#endasm
