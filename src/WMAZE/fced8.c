/* Strength bar mini-game for forcing a door; returns 0 on success. */
#asm
	public force_lock_
	extrn $ldv:near
	extrn check_screen_click_:near
	extrn clear_click_flag_:near
	extrn clear_window_area_:near
	extrn create_window_:near
	extrn defer_window_draw_:near
	extrn destroy_window_:near
	extrn draw_member_status_m_:near
	extrn erase_window_:near
	extrn extract_bits_:near
	extrn fce13_:near
	extrn fce81_:near
	extrn fceb2_:near
	extrn fill_window_:near
	extrn get_key_:near
	extrn get_message_:near
	extrn key_available_:near
	extrn print_string_hi_:near
	extrn put_char_:near
	extrn random_:near
	extrn refresh_window_:near
	extrn resume_window_draw_:near
	extrn set_cursor_:near
	extrn strlen_:near
	extrn wait_animating_m_:near
force_lock_:
	db 055h,08bh,0ech,083h,0c4h,0c2h,056h
	call clear_click_flag_
	db 0b8h,000h,000h,050h,050h,0b8h,0ffh,0ffh,050h,0b8h,014h,000h,050h,0b8h,005h,000h
	db 050h,0b8h,014h,000h,050h,0b8h,013h,000h,050h,0b8h,014h,000h,050h
	call create_window_
	db 083h,0c4h,010h,089h,046h,0f4h,0b8h,000h,000h,050h,0b8h,001h,000h,050h,0b8h,020h
	db 000h,050h,0ffh,076h,0f4h
	call fill_window_
	db 083h,0c4h,008h,0b8h,011h,000h,050h,0b8h,000h,000h,050h,050h,0ffh,076h,0f4h
	call fceb2_
	db 083h,0c4h,008h,0b8h,013h,000h,050h,0b8h,000h,000h,050h,0b8h,013h,000h,050h,0ffh
	db 076h,0f4h
	call fceb2_
	db 083h,0c4h,008h,0b8h,004h,000h,050h,0b8h,001h,000h,050h,0b8h,000h,000h,050h,0ffh
	db 076h,0f4h
	call fceb2_
	db 083h,0c4h,008h,0b8h,005h,000h,050h,0b8h,001h,000h,050h,0b8h,013h,000h,050h,0ffh
	db 076h,0f4h
	call fceb2_
	db 083h,0c4h,008h,0b8h,009h,000h,050h,0b8h,002h,000h,050h,0b8h,000h,000h,050h,0ffh
	db 076h,0f4h
	call fceb2_
	db 083h,0c4h,008h,0b8h,00ah,000h,050h,0b8h,002h,000h,050h,0b8h,013h,000h,050h,0ffh
	db 076h,0f4h
	call fceb2_
	db 083h,0c4h,008h,0b8h,004h,000h,050h,0b8h,003h,000h,050h,0b8h,000h,000h,050h,0ffh
	db 076h,0f4h
	call fceb2_
	db 083h,0c4h,008h,0b8h,005h,000h,050h,0b8h,003h,000h,050h,0b8h,013h,000h,050h,0ffh
	db 076h,0f4h
	call fceb2_
	db 083h,0c4h,008h,0b8h,006h,000h,050h,0b8h,004h,000h,050h,0b8h,000h,000h,050h,0ffh
	db 076h,0f4h
	call fceb2_
	db 083h,0c4h,008h,0b8h,008h,000h,050h,0b8h,004h,000h,050h,0b8h,013h,000h,050h,0ffh
	db 076h,0f4h
	call fceb2_
	db 083h,0c4h,008h,0c7h,046h,0feh,001h,000h
lcff1:
	db 0b8h,012h,000h,050h,0b8h,000h,000h,050h,0ffh,076h,0feh,0ffh,076h,0f4h
	call fceb2_
	db 083h,0c4h,008h,0b8h,00ch,000h,050h,0b8h,002h,000h,050h,0ffh,076h,0feh,0ffh,076h
	db 0f4h
	call fceb2_
	db 083h,0c4h,008h,0b8h,007h,000h,050h,0b8h,004h,000h,050h,0ffh,076h,0feh,0ffh,076h
	db 0f4h
	call fceb2_
	db 083h,0c4h,008h,0ffh,046h,0feh,08bh,046h,0feh,03dh,013h,000h,07ch,0b9h,08bh,046h
	db 006h,0d1h,0e0h,08bh,0f0h,08bh,01eh,0a8h,04fh,08bh,080h,020h,001h,089h,046h,0f6h
	db 08bh,076h,006h,08ah,080h,030h,006h,02ah,0e4h,089h,046h,0fch,0b8h,005h,000h,050h
	db 0b8h,000h,000h,050h,0ffh,076h,0fch
	call extract_bits_
	db 083h,0c4h,006h,089h,046h,0f8h,0c7h,046h,0c4h,000h,000h,08bh,046h,006h,0d1h,0e0h
	db 08bh,0f0h,08bh,01eh,0a8h,04fh,08bh,080h,040h,002h,089h,046h,0fch,0b8h,002h,000h
	db 050h,0a1h,09ah,04fh,0d1h,0e0h,050h,0ffh,076h,0fch
	call extract_bits_
	db 083h,0c4h,006h,03dh,002h,000h,075h,005h,0c7h,046h,0c4h,001h,000h
ld09e:
	db 08dh,046h,0cch,050h,0b8h,040h,008h,050h
	call get_message_
	db 083h,0c4h,004h,0b8h,000h,000h,050h,0b8h,015h,000h,050h,0ffh,036h,042h,033h
	call set_cursor_
	db 083h,0c4h,006h,0b8h,003h,000h,050h,08dh,046h,0cch,050h,0ffh,036h,042h,033h
	call print_string_hi_
	db 083h,0c4h,006h,0b8h,0b0h,001h,0f7h,06eh,004h,08bh,0d8h,08ah,087h,014h,045h,02ah
	db 0e4h,08bh,0c8h,02bh,046h,0f8h,08bh,0c8h,0b8h,012h,000h,02bh,0c1h,003h,046h,0f8h
	db 089h,046h,0c8h,03dh,001h,000h,07dh,005h,0c7h,046h,0c8h,001h,000h
ld0fa:
	db 083h,07eh,0c8h,012h,07eh,005h,0c7h,046h,0c8h,012h,000h
ld105:
	db 083h,07eh,0c4h,000h,074h,005h,0c7h,046h,0c8h,012h,000h
ld110:
	db 0ffh,076h,0f4h
	call defer_window_draw_
	db 059h,0b8h,003h,000h,050h,0b8h,001h,000h,050h,0ffh,076h,0f4h
	call set_cursor_
	db 083h,0c4h,006h,0c7h,046h,0feh,000h,000h,0ebh,014h
ld12f:
	db 0b8h,00ch,000h,050h,0b8h,061h,000h,050h,0ffh,076h,0f4h
	call put_char_
	db 083h,0c4h,006h,0ffh,046h,0feh
ld143:
	db 08bh,046h,0feh,03bh,046h,0c8h,07ch,0e4h,0ffh,076h,0f4h
	call resume_window_draw_
	db 059h,0c7h,046h,0c2h,001h,000h
ld157:
	db 0ffh,076h,0f4h
	call defer_window_draw_
	db 059h,0b8h,0b0h,001h,0f7h,06eh,004h,08bh,0d8h,08bh,087h,004h,044h,0bbh,064h,000h
	db 0f7h,0ebh,050h,052h,0b8h,0b0h,001h,0f7h,06eh,004h,08bh,0d8h,08bh,087h,006h,044h
	db 099h,08bh,0c8h,08bh,0dah,05ah,058h
	call $ldv
	db 050h,052h,0b8h,0b0h,001h,0f7h,06eh,004h,08bh,0d8h,08ah,087h,014h,045h,02ah,0e4h
	db 099h,08bh,0c8h,08bh,0dah,05ah,058h,050h,052h,0f7h,0e3h,08bh,0d8h,058h,0f7h,0e1h
	db 003h,0d8h,058h,0f7h,0e1h,003h,0d3h,0b9h,064h,000h,0bbh,000h,000h
	call $ldv
	db 089h,046h,0fah,03dh,000h,000h,07eh,00ch,0b8h,032h,000h,050h
	call random_
	db 059h,085h,0c0h,075h,05ch
ld1cb:
	db 0b8h,0b0h,001h,0f7h,06eh,004h,08bh,0d8h,0ffh,08fh,004h,044h,083h,07eh,0fah,000h
	db 07eh,007h,083h,0bfh,004h,044h,000h,07fh,03ch
ld1e4:
	db 0b8h,006h,000h,050h
	call random_
	db 059h,005h,006h,000h,050h,0b8h,0b0h,001h,0f7h,06eh,004h,08bh,0d8h,058h,088h,087h
	db 00ch,045h,0c7h,087h,004h,044h,000h,000h,0ffh,076h,004h
	call draw_member_status_m_
	db 059h,0b8h,000h,000h,050h,0ffh,076h,0f4h
	call destroy_window_
	db 083h,0c4h,004h,08bh,046h,0c4h,040h
ld21b:
	db 05eh,08bh,0e5h,05dh,0c3h
ld220:
	db 0ffh,076h,004h
	call draw_member_status_m_
	db 059h
ld227:
	db 0ffh,076h,0fah
	call random_
	db 059h,050h,0ffh,076h,0fah
	call random_
	db 059h,08bh,0c8h,058h,003h,0c1h,050h,0ffh,076h,0fah
	call random_
	db 059h,08bh,0c8h,058h,003h,0c1h,050h,0ffh,076h,0fah
	call random_
	db 059h,08bh,0c8h,058h,003h,0c1h,0b9h,004h,000h,099h,0f7h,0f9h,089h,046h,0c6h,03dh
	db 001h,000h,07dh,005h,0c7h,046h,0c6h,001h,000h
ld268:
	db 083h,07eh,0c6h,012h,07eh,005h,0c7h,046h,0c6h,012h,000h
ld273:
	db 0b8h,001h,000h,050h,050h,0ffh,076h,0f4h
	call set_cursor_
	db 083h,0c4h,006h,0c7h,046h,0feh,000h,000h,0ebh,01dh
ld288:
	db 0b8h,006h,000h,083h,07eh,0c4h,001h,075h,003h,0b8h,004h,000h
ld294:
	db 050h,0b8h,061h,000h,050h,0ffh,076h,0f4h
	call put_char_
	db 083h,0c4h,006h,0ffh,046h,0feh
ld2a5:
	db 08bh,046h,0feh,03bh,046h,0c6h,07ch,0dbh,0b8h,001h,000h,050h,0b8h,012h,000h,050h
	db 0b8h,001h,000h,050h,08bh,05eh,0f4h,08ah,047h,006h,02ah,0e4h,050h,053h
	call clear_window_area_
	db 083h,0c4h,00ah,0ffh,076h,0f4h
	call resume_window_draw_
	db 059h,0ffh,076h,0f4h
	call refresh_window_
	db 059h,0b8h,001h,000h,050h
	call key_available_
	db 059h,085h,0c0h,074h,011h,0b8h,001h,000h,050h
	call get_key_
	db 059h,03ch,00dh,075h,005h,0c7h,046h,0c2h,000h,000h
ld2f4:
	db 083h,07eh,0c2h,001h,075h,00ah
	call check_screen_click_
	db 085h,0c0h,075h,003h,0e9h,053h,0feh
ld304:
	db 0b8h,001h,000h,08bh,04eh,0c6h,03bh,04eh,0c8h,07ch,003h,0b8h,000h,000h
ld312:
	db 089h,046h,0cah,083h,07eh,0c4h,000h,074h,005h,0c7h,046h,0cah,002h,000h
ld320:
	db 083h,07eh,0cah,000h,074h,015h,0b8h,003h,000h,050h
	call random_
	db 059h,085h,0c0h,075h,007h,0ffh,076h,006h
	call fce13_
	db 059h
ld339:
	db 0ebh,007h
ld33b:
	db 0ffh,076h,006h
	call fce81_
	db 059h
ld342:
	db 0b8h,001h,000h,050h,0ffh,036h,042h,033h
	call erase_window_
	db 083h,0c4h,004h,08dh,046h,0cch,050h,08bh,046h,0cah,005h,041h,008h,050h
	call get_message_
	db 083h,0c4h,004h,0b8h,000h,000h,050h,08dh,046h,0cch,050h
	call strlen_
	db 059h,040h,0b9h,002h,000h,099h,0f7h,0f9h,08bh,0c8h,0b8h,014h,000h,02bh,0c1h,050h
	db 0ffh,036h,042h,033h
	call set_cursor_
	db 083h,0c4h,006h,0b8h,003h,000h,050h,08dh,046h,0cch,050h,0ffh,036h,042h,033h
	call print_string_hi_
	db 083h,0c4h,006h,0ffh,036h,0cah,04fh
	call wait_animating_m_
	db 059h,0b8h,000h,000h,050h,0ffh,076h,0f4h
	call destroy_window_
	db 083h,0c4h,004h,08bh,046h,0cah,0e9h,068h,0feh
#endasm
