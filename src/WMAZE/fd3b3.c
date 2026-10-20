/* Tumbler mini-game for picking a lock; trains the skill and returns 0 on success. */
#asm
	public pick_lock_
	extrn check_screen_click_:near
	extrn clear_click_flag_:near
	extrn create_window_:near
	extrn defer_window_draw_:near
	extrn destroy_window_:near
	extrn erase_window_:near
	extrn extract_bits_:near
	extrn fce13_:near
	extrn fce81_:near
	extrn fceb2_:near
	extrn fill_window_:near
	extrn get_key_:near
	extrn get_message_:near
	extrn key_available_:near
	extrn print_int_:near
	extrn print_string_:near
	extrn print_string_hi_:near
	extrn put_char_hi_:near
	extrn random_:near
	extrn refresh_window_:near
	extrn resume_window_draw_:near
	extrn set_cursor_:near
	extrn strlen_:near
	extrn try_skill_gain_:near
	extrn wait_animating_m_:near
pick_lock_:
	db 055h,08bh,0ech,083h,0c4h,0b6h,056h
	call clear_click_flag_
	db 0b8h,000h,000h,050h,050h,0b8h,0ffh,0ffh,050h,0b8h,014h,000h,050h,0b8h,005h,000h
	db 050h,0b8h,014h,000h,050h,0b8h,013h,000h,050h,0b8h,014h,000h,050h
	call create_window_
	db 083h,0c4h,010h,089h,046h,0f4h,0b8h,000h,000h,050h,0b8h,001h,000h,050h,0b8h,020h
	db 000h,050h,0ffh,076h,0f4h
	call fill_window_
	db 083h,0c4h,008h,0b8h,011h,000h,050h,0b8h,000h,000h,050h,050h,0ffh,076h,0f4h
	call fceb2_
	db 083h,0c4h,008h,0b8h,013h,000h,050h,0b8h,000h,000h,050h,0b8h,012h,000h,050h,0ffh
	db 076h,0f4h
	call fceb2_
	db 083h,0c4h,008h,0b8h,004h,000h,050h,0b8h,001h,000h,050h,0b8h,000h,000h,050h,0ffh
	db 076h,0f4h
	call fceb2_
	db 083h,0c4h,008h,0b8h,005h,000h,050h,0b8h,001h,000h,050h,0b8h,012h,000h,050h,0ffh
	db 076h,0f4h
	call fceb2_
	db 083h,0c4h,008h,0b8h,009h,000h,050h,0b8h,002h,000h,050h,0b8h,000h,000h,050h,0ffh
	db 076h,0f4h
	call fceb2_
	db 083h,0c4h,008h,0b8h,00ah,000h,050h,0b8h,002h,000h,050h,0b8h,012h,000h,050h,0ffh
	db 076h,0f4h
	call fceb2_
	db 083h,0c4h,008h,0b8h,004h,000h,050h,0b8h,003h,000h,050h,0b8h,000h,000h,050h,0ffh
	db 076h,0f4h
	call fceb2_
	db 083h,0c4h,008h,0b8h,005h,000h,050h,0b8h,003h,000h,050h,0b8h,012h,000h,050h,0ffh
	db 076h,0f4h
	call fceb2_
	db 083h,0c4h,008h,0b8h,006h,000h,050h,0b8h,004h,000h,050h,0b8h,000h,000h,050h,0ffh
	db 076h,0f4h
	call fceb2_
	db 083h,0c4h,008h,0b8h,008h,000h,050h,0b8h,004h,000h,050h,0b8h,012h,000h,050h,0ffh
	db 076h,0f4h
	call fceb2_
	db 083h,0c4h,008h,0c7h,046h,0feh,001h,000h
ld4cc:
	db 0b8h,012h,000h,050h,0b8h,000h,000h,050h,0ffh,076h,0feh,0ffh,076h,0f4h
	call fceb2_
	db 083h,0c4h,008h,0b8h,00ch,000h,050h,0b8h,002h,000h,050h,0ffh,076h,0feh,0ffh,076h
	db 0f4h
	call fceb2_
	db 083h,0c4h,008h,0b8h,007h,000h,050h,0b8h,004h,000h,050h,0ffh,076h,0feh,0ffh,076h
	db 0f4h
	call fceb2_
	db 083h,0c4h,008h,0ffh,046h,0feh,08bh,046h,0feh,03dh,012h,000h,07ch,0b9h,0c7h,046h
	db 0feh,003h,000h
ld518:
	db 0b8h,022h,000h,050h,0b8h,000h,000h,050h,0ffh,076h,0feh,0ffh,076h,0f4h
	call fceb2_
	db 083h,0c4h,008h,0b8h,00dh,000h,050h,0b8h,001h,000h,050h,0ffh,076h,0feh,0ffh,076h
	db 0f4h
	call fceb2_
	db 083h,0c4h,008h,0b8h,010h,000h,050h,0b8h,002h,000h,050h,0ffh,076h,0feh,0ffh,076h
	db 0f4h
	call fceb2_
	db 083h,0c4h,008h,0b8h,00dh,000h,050h,0b8h,003h,000h,050h,0ffh,076h,0feh,0ffh,076h
	db 0f4h
	call fceb2_
	db 083h,0c4h,008h,0b8h,00bh,000h,050h,0b8h,004h,000h,050h,0ffh,076h,0feh,0ffh,076h
	db 0f4h
	call fceb2_
	db 083h,0c4h,008h,083h,046h,0feh,003h,083h,07eh,0feh,012h,07ch,092h,0ffh,076h,0f4h
	call defer_window_draw_
	db 059h,0c7h,046h,0feh,000h,000h
ld592:
	db 0ffh,076h,0feh,0b8h,013h,000h,050h,0ffh,076h,0f4h
	call set_cursor_
	db 083h,0c4h,006h,0b8h,003h,000h,050h,0b8h,020h,000h,050h,0ffh,076h,0f4h
	call put_char_hi_
	db 083h,0c4h,006h,0ffh,046h,0feh,08bh,046h,0feh,03dh,005h,000h,07ch,0d4h,0ffh,076h
	db 0f4h
	call resume_window_draw_
	db 059h,08bh,046h,006h,0d1h,0e0h,08bh,0f0h,08bh,01eh,0a8h,04fh,08bh,080h,020h,001h
	db 089h,046h,0f6h,08bh,076h,006h,08ah,080h,030h,006h,02ah,0e4h,089h,046h,0fch,0b8h
	db 005h,000h,050h,0b8h,000h,000h,050h,0ffh,076h,0fch
	call extract_bits_
	db 083h,0c4h,006h,089h,046h,0f8h,0b8h,0b0h,001h,0f7h,06eh,004h,08bh,0d8h,08bh,087h
	db 00ch,044h,050h,08ah,087h,02bh,045h,02ah,0e4h,08bh,0c8h,058h,003h,0c1h,089h,046h
	db 0fah,03dh,05fh,000h,07eh,005h,0c7h,046h,0fah,05fh,000h
ld61c:
	db 08bh,046h,0f8h,0b9h,003h,000h,099h,0f7h,0f9h,040h,089h,046h,0bch,03dh,006h,000h
	db 07eh,005h,0c7h,046h,0bch,006h,000h
ld633:
	db 0c7h,046h,0bah,000h,000h,08bh,046h,006h,0d1h,0e0h,08bh,0f0h,08bh,01eh,0a8h,04fh
	db 08bh,080h,040h,002h,089h,046h,0fch,0b8h,002h,000h,050h,0a1h,09ah,04fh,0d1h,0e0h
	db 050h,0ffh,076h,0fch
	call extract_bits_
	db 083h,0c4h,006h,03dh,002h,000h,075h,01ch,0a1h,0a4h,04fh,003h,006h,0a2h,04fh,099h
	db 0f7h,07eh,0bch,08bh,0c2h,0d1h,0e0h,08bh,0d8h,0c7h,087h,034h,052h,064h,000h,0c7h
	db 046h,0bah,001h,000h
ld67e:
	db 08dh,046h,0cch,050h,0b8h,03fh,008h,050h
	call get_message_
	db 083h,0c4h,004h,0b8h,000h,000h,050h,0b8h,015h,000h,050h,0ffh,036h,042h,033h
	call set_cursor_
	db 083h,0c4h,006h,0b8h,003h,000h,050h,08dh,046h,0cch,050h,0ffh,036h,042h,033h
	call print_string_hi_
	db 083h,0c4h,006h,0c6h,046h,0cch,063h,0c6h,046h,0cdh,063h,0c6h,046h,0ceh,000h,0c7h
	db 046h,0b6h,001h,000h
ld6c1:
	db 0c7h,046h,0cah,000h,000h,0ffh,076h,0f4h
	call defer_window_draw_
	db 059h,0c7h,046h,0feh,000h,000h,0e9h,0a1h,000h
ld6d5:
	db 0ffh,076h,0fah
	call random_
	db 059h,08bh,04eh,0feh,0d1h,0e1h,08bh,0d9h,003h,0ddh,089h,047h,0beh,0b8h,003h,000h
	db 050h,08bh,046h,0feh,08bh,0d0h,0d1h,0e0h,003h,0c2h,040h,050h,0ffh,076h,0f4h
	call set_cursor_
	db 083h,0c4h,006h,0b8h,001h,000h,050h,0b8h,002h,000h,050h,08bh,046h,0feh,0d1h,0e0h
	db 08bh,0d8h,003h,0ddh,0ffh,077h,0beh,0ffh,076h,0f4h
	call print_int_
	db 083h,0c4h,008h,0b8h,001h,000h,050h,08bh,046h,0feh,08bh,0d0h,0d1h,0e0h,003h,0c2h
	db 040h,050h,0ffh,076h,0f4h
	call set_cursor_
	db 083h,0c4h,006h,08bh,046h,0feh,0d1h,0e0h,08bh,0d8h,003h,0ddh,08bh,047h,0beh,08bh
	db 04eh,0feh,0d1h,0e1h,08bh,0d9h,08bh,08fh,034h,052h,03bh,0c1h,07eh,007h,0c7h,046h
	db 0b8h,006h,000h,0ebh,00ch
ld757:
	db 0c7h,046h,0b8h,00ch,000h,08bh,046h,0bah,040h,089h,046h,0cah
ld763:
	db 0ffh,076h,0b8h,08dh,046h,0cch,050h,0ffh,076h,0f4h
	call print_string_
	db 083h,0c4h,006h,0ffh,046h,0feh
ld776:
	db 08bh,046h,0feh,03bh,046h,0bch,07dh,003h,0e9h,054h,0ffh
ld781:
	db 0ffh,076h,0f4h
	call resume_window_draw_
	db 059h,0ffh,076h,0f4h
	call refresh_window_
	db 059h,0b8h,001h,000h,050h
	call key_available_
	db 059h,085h,0c0h,074h,011h,0b8h,001h,000h,050h
	call get_key_
	db 059h,03ch,00dh,075h,005h,0c7h,046h,0b6h,000h,000h
ld7ac:
	db 083h,07eh,0b6h,001h,075h,00ah
	call check_screen_click_
	db 085h,0c0h,075h,003h,0e9h,005h,0ffh
ld7bc:
	db 083h,07eh,0cah,000h,074h,044h,083h,07eh,0cah,001h,075h,029h,0b8h,0b0h,001h,0f7h
	db 06eh,004h,08bh,0d8h,08ah,087h,087h,045h,03ch,003h,074h,008h,03ch,006h,074h,004h
	db 03ch,00dh,075h,011h
ld7e0:
	db 0b8h,001h,000h,050h,0b8h,00fh,000h,050h,0ffh,076h,004h
	call try_skill_gain_
	db 083h,0c4h,006h
ld7f1:
	db 0b8h,003h,000h,050h
	call random_
	db 059h,085h,0c0h,075h,007h,0ffh,076h,006h
	call fce13_
	db 059h
ld804:
	db 0ebh,030h
ld806:
	db 0ffh,076h,006h
	call fce81_
	db 059h,0b8h,0b0h,001h,0f7h,06eh,004h,08bh,0d8h,08ah,087h,087h,045h,03ch,003h,074h
	db 008h,03ch,006h,074h,004h,03ch,00dh,075h,011h
ld825:
	db 0b8h,004h,000h,050h,0b8h,00fh,000h,050h,0ffh,076h,004h
	call try_skill_gain_
	db 083h,0c4h,006h
ld836:
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
	db 083h,0c4h,004h,08bh,046h,0cah,05eh,08bh,0e5h,05dh,0c3h
#endasm
