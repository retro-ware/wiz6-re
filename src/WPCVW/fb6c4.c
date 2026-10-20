/* Show an item's description window: type, damage, classes, spells. */
#asm
	public show_item_info_
	extrn access_scenario_record_:near
	extrn check_screen_click_:near
	extrn create_window_:near
	extrn defer_window_draw_:near
	extrn destroy_window_:near
	extrn fb139_:near
	extrn fb659_:near
	extrn fill_window_:near
	extrn get_key_:near
	extrn get_message_:near
	extrn int_to_string_:near
	extrn key_available_:near
	extrn print_int_:near
	extrn print_string_:near
	extrn print_string_hi_:near
	extrn put_char_:near
	extrn put_char_hi_:near
	extrn put_icon_at2_:near
	extrn refresh_window_:near
	extrn resume_window_draw_:near
	extrn set_cursor_:near
	extrn strlen_:near
	extrn test_bit_:near
show_item_info_:
	db 055h,08bh,0ech,081h,0c4h,056h,0ffh,0b8h,000h,000h,050h,0b8h,0b0h,001h,0f7h,06eh
	db 006h,08bh,04eh,008h,0d1h,0e1h,0d1h,0e1h,0d1h,0e1h,003h,0c1h,08bh,0d8h,0ffh,0b7h
	db 028h,044h,08dh,046h,0b0h,050h,0b8h,001h,000h,050h
	call access_scenario_record_
	db 083h,0c4h,008h,0b8h,000h,000h,050h,050h,0b8h,0ffh,0ffh,050h,0b8h,019h,000h,050h
	db 0b8h,00ch,000h,050h,0b8h,014h,000h,050h,0b8h,008h,000h,050h,0b8h,014h,000h,050h
	call create_window_
	db 083h,0c4h,010h,089h,046h,0fah,0b8h,000h,000h,050h,0b8h,001h,000h,050h,0b8h,000h
	db 000h,050h,0ffh,076h,0fah
	call fill_window_
	db 083h,0c4h,008h,0b8h,015h,000h,050h,0b8h,000h,000h,050h,050h,0ffh,076h,0fah
	call fb139_
	db 083h,0c4h,008h,0b8h,008h,000h,050h,0b8h,000h,000h,050h,0b8h,013h,000h,050h,0ffh
	db 076h,0fah
	call fb139_
	db 083h,0c4h,008h,0b8h,00bh,000h,050h,050h,0b8h,000h,000h,050h,0ffh,076h,0fah
	call fb139_
	db 083h,0c4h,008h,0b8h,008h,000h,050h,0b8h,00bh,000h,050h,0b8h,013h,000h,050h,0ffh
	db 076h,0fah
	call fb139_
	db 083h,0c4h,008h,0c7h,046h,0feh,001h,000h
lb782:
	db 0b8h,007h,000h,050h,0b8h,000h,000h,050h,0ffh,076h,0feh,0ffh,076h,0fah
	call fb139_
	db 083h,0c4h,008h,0b8h,012h,000h,050h,0b8h,002h,000h,050h,0ffh,076h,0feh,0ffh,076h
	db 0fah
	call fb139_
	db 083h,0c4h,008h,0b8h,007h,000h,050h,0b8h,00bh,000h,050h,0ffh,076h,0feh,0ffh,076h
	db 0fah
	call fb139_
	db 083h,0c4h,008h,0ffh,046h,0feh,08bh,046h,0feh,03dh,013h,000h,07ch,0b9h,0c7h,046h
	db 0feh,002h,000h
lb7ce:
	db 0b8h,00dh,000h,050h,0ffh,076h,0feh,0b8h,000h,000h,050h,0ffh,076h,0fah
	call fb139_
	db 083h,0c4h,008h,0b8h,005h,000h,050h,0ffh,076h,0feh,0b8h,013h,000h,050h,0ffh,076h
	db 0fah
	call fb139_
	db 083h,0c4h,008h,0ffh,046h,0feh,08bh,046h,0feh,03dh,00bh,000h,07ch,0cdh,0b8h,024h
	db 000h,050h,0b8h,002h,000h,050h,0b8h,000h,000h,050h,0ffh,076h,0fah
	call fb139_
	db 083h,0c4h,008h,0b8h,013h,000h,050h,0b8h,002h,000h,050h,0b8h,013h,000h,050h,0ffh
	db 076h,0fah
	call fb139_
	db 083h,0c4h,008h,0b8h,00fh,000h,050h,0b8h,005h,000h,050h,0b8h,000h,000h,050h,0ffh
	db 076h,0fah
	call fb139_
	db 083h,0c4h,008h,0b8h,00fh,000h,050h,0b8h,007h,000h,050h,0b8h,000h,000h,050h,0ffh
	db 076h,0fah
	call fb139_
	db 083h,0c4h,008h,0b8h,00fh,000h,050h,0b8h,009h,000h,050h,0b8h,000h,000h,050h,0ffh
	db 076h,0fah
	call fb139_
	db 083h,0c4h,008h,0b8h,005h,000h,050h,0b8h,001h,000h,050h,0b8h,000h,000h,050h,0ffh
	db 076h,0fah
	call fb139_
	db 083h,0c4h,008h,0ffh,076h,0fah
	call defer_window_draw_
	db 059h,0b8h,001h,000h,050h,050h,0ffh,076h,0fah
	call set_cursor_
	db 083h,0c4h,006h,0c7h,046h,0feh,001h,000h
lb899:
	db 0b8h,003h,000h,050h,0b8h,020h,000h,050h,0ffh,076h,0fah
	call put_char_hi_
	db 083h,0c4h,006h,0ffh,046h,0feh,08bh,046h,0feh,03dh,014h,000h,07ch,0e4h,08ah,046h
	db 0edh,02ah,0e4h,040h,050h,0b8h,001h,000h,050h,050h,0ffh,076h,0fah
	call put_icon_at2_
	db 083h,0c4h,008h,08ah,046h,0edh,02ah,0e4h,040h,050h,0b8h,001h,000h,050h,0b8h,012h
	db 000h,050h,0ffh,076h,0fah
	call put_icon_at2_
	db 083h,0c4h,008h,0b8h,001h,000h,050h,08dh,046h,0b0h,050h
	call strlen_
	db 059h,040h,0b9h,002h,000h,099h,0f7h,0f9h,08bh,0c8h,0b8h,00ah,000h,02bh,0c1h,050h
	db 0ffh,076h,0fah
	call set_cursor_
	db 083h,0c4h,006h,0b8h,003h,000h,050h,08dh,046h,0b0h,050h,0ffh,076h,0fah
	call print_string_hi_
	db 083h,0c4h,006h,0c7h,046h,0ach,000h,000h,0c7h,046h,0aah,000h,000h,0c7h,046h,0a8h
	db 000h,000h,0c7h,046h,0a6h,000h,000h,0c7h,046h,0a4h,000h,000h,0c7h,046h,0a2h,000h
	db 000h,0c7h,046h,0a0h,000h,000h,0c7h,046h,09eh,000h,000h,0c7h,046h,09ch,000h,000h
	db 0c7h,046h,096h,000h,000h,0c7h,046h,092h,000h,000h,0c7h,046h,094h,000h,000h,0c7h
	db 046h,09ah,001h,000h,0c7h,046h,098h,007h,000h,08ah,046h,0ech,02ah,0e4h,0e9h,0d0h
	db 000h,0c7h,046h,0ach,001h,000h,0c7h,046h,0a6h,001h,000h,0c7h,046h,0a2h,001h,000h
	db 0c7h,046h,0a0h,001h,000h,0c7h,046h,096h,001h,000h,0c7h,046h,092h,001h,000h,0c7h
	db 046h,094h,001h,000h,0e9h,0b7h,000h,0c7h,046h,0aah,001h,000h,0c7h,046h,096h,001h
	db 000h,0c7h,046h,092h,001h,000h,0e9h,0a5h,000h,0c7h,046h,0a8h,001h,000h,0c7h,046h
	db 098h,003h,000h,0c7h,046h,09eh,001h,000h,0c7h,046h,094h,001h,000h,0e9h,08eh,000h
	db 0c7h,046h,0a8h,001h,000h,0c7h,046h,0a4h,001h,000h,0c7h,046h,09eh,001h,000h,0c7h
	db 046h,094h,001h,000h,0ebh,078h,0c7h,046h,0a8h,001h,000h,0c7h,046h,09eh,001h,000h
	db 0c7h,046h,094h,001h,000h,0ebh,067h,0c7h,046h,09ah,000h,000h,0c7h,046h,0ach,001h
	db 000h,0c7h,046h,09ch,001h,000h,0c7h,046h,0a0h,001h,000h,0ebh,051h,0c7h,046h,09ah
	db 000h,000h,0c7h,046h,0aah,001h,000h,0c7h,046h,09ch,001h,000h,0ebh,040h,0c7h,046h
	db 0aah,001h,000h,0c7h,046h,0a0h,001h,000h,0c7h,046h,094h,001h,000h,0ebh,02fh,065h
	db 0b9h,065h,0b9h,065h,0b9h,065h,0b9h,08bh,0b9h,09dh,0b9h,0b4h,0b9h,0b4h,0b9h,0b4h
	db 0b9h,0b4h,0b9h,0b4h,0b9h,0cah,0b9h,0dbh,0b9h,0f1h,0b9h,002h,0bah,002h,0bah,0dbh
	db 0b9h
lba35:
	db 03dh,011h,000h,073h,008h,093h,0d1h,0e3h,02eh,0ffh,0a7h,013h,0bah
lba42:
	db 083h,07eh,00ah,000h,074h,003h,0e9h,0deh,005h
lba4b:
	db 0b8h,08eh,055h,050h,08ah,046h,0ech,02ah,0e4h,005h,00eh,006h,050h
	call get_message_
	db 083h,0c4h,004h,0b8h,003h,000h,050h,0b8h,08eh,055h,050h
	call strlen_
	db 059h,040h,0b9h,002h,000h,099h,0f7h,0f9h,08bh,0c8h,0b8h,00ah,000h,02bh,0c1h,050h
	db 0ffh,076h,0fah
	call set_cursor_
	db 083h,0c4h,006h,0b8h,001h,000h,050h,0b8h,08eh,055h,050h,0ffh,076h,0fah
	call print_string_
	db 083h,0c4h,006h,083h,07eh,09ah,000h,075h,003h,0e9h,00eh,001h
lba9c:
	db 0b8h,004h,000h,050h,0b8h,003h,000h,050h,0ffh,076h,0fah
	call set_cursor_
	db 083h,0c4h,006h,0b8h,08eh,055h,050h,0b8h,0c6h,001h,050h
	call get_message_
	db 083h,0c4h,004h,0c7h,046h,0feh,000h,000h
lbac0:
	db 0ffh,076h,0feh,08dh,046h,0e8h,050h
	call test_bit_
	db 083h,0c4h,004h,03dh,001h,000h,075h,005h,0b8h,006h,000h,0ebh,003h
lbad7:
	db 0b8h,00bh,000h
lbada:
	db 050h,08bh,05eh,0feh,08ah,087h,08eh,055h,02ah,0e4h,050h,0ffh,076h,0fah
	call put_char_
	db 083h,0c4h,006h,0ffh,046h,0feh,08bh,046h,0feh,03dh,00bh,000h,07ch,0c7h,08bh,05eh
	db 0fah,0feh,047h,006h,0b8h,08eh,055h,050h,0b8h,0c7h,001h,050h
	call get_message_
	db 083h,0c4h,004h,0c7h,046h,0feh,000h,000h
lbb12:
	db 0ffh,076h,0feh,08dh,046h,0eah,050h
	call test_bit_
	db 083h,0c4h,004h,03dh,001h,000h,075h,005h,0b8h,006h,000h,0ebh,003h
lbb29:
	db 0b8h,00bh,000h
lbb2c:
	db 050h,08bh,05eh,0feh,08ah,087h,08eh,055h,02ah,0e4h,050h,0ffh,076h,0fah
	call put_char_
	db 083h,0c4h,006h,0ffh,046h,0feh,08bh,046h,0feh,03dh,002h,000h,07ch,0c7h,0b8h,005h
	db 000h,050h,0b8h,003h,000h,050h,0ffh,076h,0fah
	call set_cursor_
	db 083h,0c4h,006h,0b8h,08eh,055h,050h,0b8h,0c8h,001h,050h
	call get_message_
	db 083h,0c4h,004h,0c7h,046h,0feh,000h,000h
lbb6f:
	db 0ffh,076h,0feh,08dh,046h,0e6h,050h
	call test_bit_
	db 083h,0c4h,004h,03dh,001h,000h,075h,005h,0b8h,006h,000h,0ebh,003h
lbb86:
	db 0b8h,00bh,000h
lbb89:
	db 050h,08bh,05eh,0feh,08ah,087h,08eh,055h,02ah,0e4h,050h,0ffh,076h,0fah
	call put_char_
	db 083h,0c4h,006h,0ffh,046h,0feh,08bh,046h,0feh,03dh,00eh,000h,07ch,0c7h,0ebh,05eh
lbbaa:
	db 083h,07eh,09ch,000h,074h,058h,083h,07eh,0cch,000h,074h,052h,08bh,046h,0cch,0b9h
	db 000h,001h,099h,0f7h,0f9h,089h,056h,082h,0b8h,08eh,055h,050h,081h,0c2h,0a0h,00fh
	db 08bh,0c2h,050h
	call get_message_
	db 083h,0c4h,004h,0b8h,005h,000h,050h,0b8h,08eh,055h,050h
	call strlen_
	db 059h,040h,0b9h,002h,000h,099h,0f7h,0f9h,08bh,0c8h,0b8h,00ah,000h,02bh,0c1h,050h
	db 0ffh,076h,0fah
	call set_cursor_
	db 083h,0c4h,006h,0b8h,004h,000h,050h,0b8h,08eh,055h,050h,0ffh,076h,0fah
	call print_string_
	db 083h,0c4h,006h
lbc08:
	db 083h,07eh,0a2h,000h,075h,003h,0e9h,0b2h,001h
lbc11:
	db 08ah,046h,0edh,02ah,0e4h,0e9h,0dah,000h,0c7h,046h,084h,000h,000h,0e9h,0e9h,000h
	db 0c7h,046h,084h,001h,000h,0e9h,0e1h,000h,0c7h,046h,084h,002h,000h,0e9h,0d9h,000h
	db 0c7h,046h,084h,003h,000h,0e9h,0d1h,000h,0c7h,046h,084h,004h,000h,0e9h,0c9h,000h
	db 0c7h,046h,084h,007h,000h,0e9h,0c1h,000h,0c7h,046h,084h,006h,000h,0e9h,0b9h,000h
	db 0c7h,046h,084h,008h,000h,0e9h,0b1h,000h,0c7h,046h,084h,005h,000h,0e9h,0a9h,000h
	db 000h,000h,001h,000h,002h,000h,003h,000h,004h,000h,005h,000h,006h,000h,007h,000h
	db 008h,000h,009h,000h,00ah,000h,00bh,000h,00ch,000h,00dh,000h,00eh,000h,00fh,000h
	db 010h,000h,011h,000h,012h,000h,013h,000h,014h,000h,015h,000h,018h,000h,026h,000h
	db 033h,000h,034h,000h,035h,000h,036h,000h,037h,000h,038h,000h,039h,000h,03ah,000h
	db 03bh,000h,059h,000h,05ah,000h,062h,000h,019h,0bch,021h,0bch,029h,0bch,029h,0bch
	db 031h,0bch,031h,0bch,031h,0bch,039h,0bch,039h,0bch,039h,0bch,039h,0bch,041h,0bch
	db 041h,0bch,049h,0bch,021h,0bch,021h,0bch,021h,0bch,039h,0bch,019h,0bch,039h,0bch
	db 059h,0bch,059h,0bch,051h,0bch,051h,0bch,021h,0bch,031h,0bch,021h,0bch,031h,0bch
	db 021h,0bch,031h,0bch,039h,0bch,021h,0bch,021h,0bch,019h,0bch,039h,0bch,031h,0bch
	db 00ah,0bdh
lbcf3:
	db 006h,08ch,0c9h,08eh,0c1h,057h,0bfh,061h,0bch,0b9h,025h,000h,0fch,0f2h,0afh,026h
	db 08bh,04dh,046h,05fh,007h,0ffh,0e1h
lbd0a:
	db 0b8h,0b0h,001h,0f7h,06eh,006h,08bh,0d8h,08ah,087h,085h,045h,02ah,0e4h,050h,08dh
	db 046h,0e8h,050h
	call test_bit_
	db 083h,0c4h,004h,03dh,001h,000h,075h,03ch,0b8h,0b0h,001h,0f7h,06eh,006h,08bh,0d8h
	db 08ah,087h,087h,045h,02ah,0e4h,050h,08dh,046h,0e6h,050h
	call test_bit_
	db 083h,0c4h,004h,03dh,001h,000h,075h,01eh,0b8h,0b0h,001h,0f7h,06eh,006h,08bh,0d8h
	db 08ah,087h,086h,045h,02ah,0e4h,050h,08dh,046h,0eah,050h
	call test_bit_
	db 083h,0c4h,004h,03dh,001h,000h,074h,015h
lbd64:
	db 0b8h,08eh,055h,050h,0b8h,01fh,006h,050h
	call get_message_
	db 083h,0c4h,004h,0c7h,046h,0feh,009h,000h,0ebh,016h
lbd79:
	db 0b8h,08eh,055h,050h,08bh,046h,084h,005h,07ch,015h,050h
	call get_message_
	db 083h,0c4h,004h,0c7h,046h,0feh,002h,000h
lbd8f:
	db 0b8h,006h,000h,050h,0b8h,08eh,055h,050h
	call strlen_
	db 059h,040h,0b9h,002h,000h,099h,0f7h,0f9h,08bh,0c8h,0b8h,00ah,000h,02bh,0c1h,050h
	db 0ffh,076h,0fah
	call set_cursor_
	db 083h,0c4h,006h,0ffh,076h,0feh,0b8h,08eh,055h,050h,0ffh,076h,0fah
	call print_string_
	db 083h,0c4h,006h
lbdc3:
	db 083h,07eh,0a0h,000h,075h,003h,0e9h,0ach,000h
lbdcc:
	db 080h,07eh,0ech,003h,075h,032h,0b8h,08eh,055h,050h,0b8h,0f2h,00bh,050h
	call get_message_
	db 083h,0c4h,004h,0b8h,007h,000h,050h,0b8h,003h,000h,050h,0ffh,076h,0fah
	call set_cursor_
	db 083h,0c4h,006h,0b8h,005h,000h,050h,0b8h,08eh,055h,050h,0ffh,076h,0fah
	call print_string_
	db 083h,0c4h,006h,0ebh,074h
lbe04:
	db 0c7h,046h,0fch,000h,000h,0c7h,046h,0feh,000h,000h
lbe0e:
	db 0ffh,076h,0feh,08dh,046h,0f8h,050h
	call test_bit_
	db 083h,0c4h,004h,03dh,001h,000h,075h,04dh,08bh,046h,0fch,0b9h,003h,000h,099h,0f7h
	db 0f9h,08bh,0c2h,005h,007h,000h,050h,08bh,046h,0fch,099h,0f7h,0f9h,0d1h,0e0h,0d1h
	db 0e0h,0d1h,0e0h,040h,040h,040h,050h,0ffh,076h,0fah
	call set_cursor_
	db 083h,0c4h,006h,0b8h,08eh,055h,050h,08bh,046h,0feh,005h,0eah,00bh,050h
	call get_message_
	db 083h,0c4h,004h,0b8h,005h,000h,050h,0b8h,08eh,055h,050h,0ffh,076h,0fah
	call print_string_
	db 083h,0c4h,006h,0ffh,046h,0fch
lbe6d:
	db 0ffh,046h,0feh,08bh,046h,0feh,03dh,008h,000h,07ch,096h
lbe78:
	db 0b8h,00ah,000h,050h,0b8h,001h,000h,050h,0ffh,076h,0fah
	call set_cursor_
	db 083h,0c4h,006h,083h,07eh,0ach,000h,075h,006h,083h,07eh,0aah,000h,074h,05fh
lbe95:
	db 0b8h,08eh,055h,050h,0b8h,0c3h,001h,050h
	call get_message_
	db 083h,0c4h,004h,0b8h,00eh,000h,083h,07eh,0ach,000h,074h,003h,0b8h,006h,000h
lbeaf:
	db 050h,0a0h,08eh,055h,02ah,0e4h,050h,0ffh,076h,0fah
	call put_char_
	db 083h,0c4h,006h,0b8h,00eh,000h,050h,0b8h,02fh,000h,050h,0ffh,076h,0fah
	call put_char_
	db 083h,0c4h,006h,08ah,046h,0ebh,02ah,0e4h,0a9h,008h,000h,074h,005h,0b8h,006h,000h
	db 0ebh,003h
lbedf:
	db 0b8h,00eh,000h
lbee2:
	db 050h,0a0h,08fh,055h,02ah,0e4h,050h,0ffh,076h,0fah
	call put_char_
	db 083h,0c4h,006h,0ebh,056h
lbef4:
	db 083h,07eh,0a8h,000h,074h,050h,0b8h,08eh,055h,050h,0b8h,0c4h,001h,050h
	call get_message_
	db 083h,0c4h,004h,08bh,046h,098h,005h,008h,000h,050h,0b8h,08eh,055h,050h,0ffh,076h
	db 0fah
	call print_string_
	db 083h,0c4h,006h,08bh,05eh,0fah,0feh,047h,006h,0b8h,08eh,055h,050h,0b8h,000h,000h
	db 050h,08ah,046h,0f6h,098h,08bh,0c8h,058h,02bh,0c1h,050h
	call int_to_string_
	db 083h,0c4h,004h,0ffh,076h,098h,0b8h,08eh,055h,050h,0ffh,076h,0fah
	call print_string_
	db 083h,0c4h,006h
lbf4a:
	db 083h,07eh,0a6h,000h,074h,041h,0b8h,08eh,055h,050h,08ah,046h,0ebh,02ah,0e4h,0a9h
	db 004h,000h,074h,005h,0b8h,0cah,001h,0ebh,003h
lbf63:
	db 0b8h,0c9h,001h
lbf66:
	db 050h
	call get_message_
	db 083h,0c4h,004h,0b8h,00ah,000h,050h,0b8h,008h,000h,050h,0ffh,076h,0fah
	call set_cursor_
	db 083h,0c4h,006h,0b8h,004h,000h,050h,0b8h,08eh,055h,050h,0ffh,076h,0fah
	call print_string_
	db 083h,0c4h,006h,0ebh,03bh
lbf91:
	db 083h,07eh,0a4h,000h,074h,035h,0b8h,08eh,055h,050h,08ah,046h,0ech,02ah,0e4h,005h
	db 0c6h,001h,050h
	call get_message_
	db 083h,0c4h,004h,0b8h,00ah,000h,050h,0b8h,008h,000h,050h,0ffh,076h,0fah
	call set_cursor_
	db 083h,0c4h,006h,0b8h,004h,000h,050h,0b8h,08eh,055h,050h,0ffh,076h,0fah
	call print_string_
	db 083h,0c4h,006h
lbfcc:
	db 0b8h,00ah,000h,050h,0b8h,00eh,000h,050h,0ffh,076h,0fah
	call set_cursor_
	db 083h,0c4h,006h,0b8h,009h,000h,050h,0b8h,003h,000h,050h,08bh,046h,0ceh,0b9h,00ah
	db 000h,099h,0f7h,0f9h,050h,0ffh,076h,0fah
	call print_int_
	db 083h,0c4h,008h,0b8h,009h,000h,050h,0b8h,02eh,000h,050h,0ffh,076h,0fah
	call put_char_
	db 083h,0c4h,006h,0b8h,009h,000h,050h,0b8h,001h,000h,050h,08bh,046h,0ceh,0b9h,00ah
	db 000h,099h,0f7h,0f9h,08bh,0c2h,050h,0ffh,076h,0fah
	call print_int_
	db 083h,0c4h,008h,0e9h,038h,006h
lc029:
	db 08bh,046h,00ah,08bh,0d0h,0d1h,0e0h,003h,0c2h,050h,08ah,046h,0eeh,02ah,0e4h,08bh
	db 0c8h,058h,03bh,0c1h,07fh,003h,0e9h,0dch,005h
lc042:
	db 0c7h,086h,058h,0ffh,003h,000h,083h,07eh,096h,000h,075h,003h,0e9h,084h,001h
lc051:
	db 0b8h,003h,000h,050h,0b8h,001h,000h,050h,0ffh,076h,0fah
	call set_cursor_
	db 083h,0c4h,006h,0b8h,08eh,055h,050h,0b8h,0d2h,001h,050h
	call get_message_
	db 083h,0c4h,004h,0b8h,00eh,000h,050h,0b8h,08eh,055h,050h,0ffh,076h,0fah
	call print_string_
	db 083h,0c4h,006h,0b8h,08eh,055h,050h,08ah,046h,0cah,02ah,0e4h,050h
	call int_to_string_
	db 083h,0c4h,004h,0b8h,090h,057h,050h,08ah,046h,0cbh,02ah,0e4h,050h
	call int_to_string_
	db 083h,0c4h,004h,08dh,086h,05ah,0ffh,050h,0ffh,076h,0c8h
	call int_to_string_
	db 083h,0c4h,004h,0b8h,003h,000h,050h,0b8h,08eh,055h,050h
	call strlen_
	db 059h,050h,0b8h,090h,057h,050h
	call strlen_
	db 059h,08bh,0c8h,058h,003h,0c1h,050h,08dh,086h,05ah,0ffh,050h
	call strlen_
	db 059h,08bh,0c8h,058h,003h,0c1h,08bh,0c8h,040h,040h,08bh,0c8h,0b8h,013h,000h,02bh
	db 0c1h,050h,0ffh,076h,0fah
	call set_cursor_
	db 083h,0c4h,006h,0b8h,005h,000h,050h,0b8h,08eh,055h,050h,0ffh,076h,0fah
	call print_string_
	db 083h,0c4h,006h,0b8h,08eh,055h,050h,0b8h,0deh,001h,050h
	call get_message_
	db 083h,0c4h,004h,0b8h,005h,000h,050h,0b8h,08eh,055h,050h,0ffh,076h,0fah
	call print_string_
	db 083h,0c4h,006h,0b8h,005h,000h,050h,0b8h,090h,057h,050h,0ffh,076h,0fah
	call print_string_
	db 083h,0c4h,006h,0b8h,005h,000h,050h,0b8h,02bh,000h,050h,0ffh,076h,0fah
	call put_char_
	db 083h,0c4h,006h,0b8h,005h,000h,050h,08dh,086h,05ah,0ffh,050h,0ffh,076h,0fah
	call print_string_
	db 083h,0c4h,006h,080h,07eh,0f7h,000h,074h,078h,0b8h,004h,000h,050h,0b8h,001h,000h
	db 050h,0ffh,076h,0fah
	call set_cursor_
	db 083h,0c4h,006h,0b8h,08eh,055h,050h,0b8h,0d3h,001h,050h
	call get_message_
	db 083h,0c4h,004h,0b8h,00eh,000h,050h,0b8h,08eh,055h,050h,0ffh,076h,0fah
	call print_string_
	db 083h,0c4h,006h,0b8h,004h,000h,050h,0b8h,007h,000h,050h,0ffh,076h,0fah
	call set_cursor_
	db 083h,0c4h,006h,0b8h,08eh,055h,050h,08ah,046h,0f7h,098h,050h
	call int_to_string_
	db 083h,0c4h,004h,080h,07eh,0f7h,000h,07ch,011h,0b8h,005h,000h,050h,0b8h,02bh,000h
	db 050h,0ffh,076h,0fah
	call put_char_
	db 083h,0c4h,006h
lc1be:
	db 0b8h,005h,000h,050h,0b8h,08eh,055h,050h,0ffh,076h,0fah
	call print_string_
	db 083h,0c4h,006h
lc1cf:
	db 0c7h,086h,058h,0ffh,005h,000h
lc1d5:
	db 083h,07eh,094h,000h,075h,003h,0e9h,0b8h,000h
lc1de:
	db 08ah,046h,0f2h,02ah,0e4h,050h,08ah,046h,0f3h,02ah,0e4h,08bh,0c8h,058h,02bh,0c1h
	db 075h,003h,0e9h,0a3h,000h
lc1f3:
	db 0b8h,003h,000h,083h,07eh,096h,000h,074h,003h,0b8h,004h,000h
lc1ff:
	db 089h,086h,058h,0ffh,050h,0b8h,00bh,000h,050h,0ffh,076h,0fah
	call set_cursor_
	db 083h,0c4h,006h,0b8h,08eh,055h,050h,0b8h,0d4h,001h,050h
	call get_message_
	db 083h,0c4h,004h,0b8h,00eh,000h,050h,0b8h,08eh,055h,050h,0ffh,076h,0fah
	call print_string_
	db 083h,0c4h,006h,0ffh,0b6h,058h,0ffh,0b8h,011h,000h,050h,0ffh,076h,0fah
	call set_cursor_
	db 083h,0c4h,006h,0b8h,08eh,055h,050h,08ah,046h,0f2h,02ah,0e4h,050h,08ah,046h,0f3h
	db 02ah,0e4h,08bh,0c8h,058h,02bh,0c1h,050h
	call int_to_string_
	db 083h,0c4h,004h,08ah,046h,0f2h,02ah,0e4h,050h,08ah,046h,0f3h,02ah,0e4h,08bh,0c8h
	db 058h,02bh,0c1h,07ch,011h,0b8h,005h,000h,050h,0b8h,02bh,000h,050h,0ffh,076h,0fah
	call put_char_
	db 083h,0c4h,006h
lc27f:
	db 0b8h,005h,000h,050h,0b8h,08eh,055h,050h,0ffh,076h,0fah
	call print_string_
	db 083h,0c4h,006h,0c7h,086h,058h,0ffh,005h,000h
lc296:
	db 080h,07eh,0efh,000h,074h,058h,0ffh,0b6h,058h,0ffh,0b8h,001h,000h,050h,0ffh,076h
	db 0fah
	call set_cursor_
	db 083h,0c4h,006h,0b8h,08eh,055h,050h,0b8h,0d1h,001h,050h
	call get_message_
	db 083h,0c4h,004h,0b8h,003h,000h,050h,0b8h,08eh,055h,050h,0ffh,076h,0fah
	call print_string_
	db 083h,0c4h,006h,0ffh,0b6h,058h,0ffh,0b8h,00fh,000h,050h,0ffh,076h,0fah
	call set_cursor_
	db 083h,0c4h,006h,0b8h,001h,000h,050h,08ah,046h,0efh,02ah,0e4h,050h,0ffh,076h,0fah
	call fb659_
	db 083h,0c4h,006h,0ffh,086h,058h,0ffh
lc2f4:
	db 083h,07eh,0cch,000h,075h,003h,0e9h,0bah,000h
lc2fd:
	db 08bh,046h,0cch,0b9h,000h,001h,099h,0f7h,0f9h,089h,056h,082h,0b8h,08eh,055h,050h
	db 081h,0c2h,0a0h,00fh,08bh,0c2h,050h
	call get_message_
	db 083h,0c4h,004h,0ffh,0b6h,058h,0ffh,0b8h,001h,000h,050h,0ffh,076h,0fah
	call set_cursor_
	db 083h,0c4h,006h,0b8h,004h,000h,050h,0b8h,08eh,055h,050h,0ffh,076h,0fah
	call print_string_
	db 083h,0c4h,006h,0ffh,0b6h,058h,0ffh,0b8h,010h,000h,050h,0ffh,076h,0fah
	call set_cursor_
	db 083h,0c4h,006h,0b8h,0b0h,001h,0f7h,06eh,006h,08bh,04eh,008h,0d1h,0e1h,0d1h,0e1h
	db 0d1h,0e1h,003h,0c1h,08bh,0d8h,080h,0bfh,02eh,044h,000h,075h,021h,0b8h,08eh,055h
	db 050h,0b8h,0e0h,001h,050h
	call get_message_
	db 083h,0c4h,004h,0b8h,001h,000h,050h,0b8h,08eh,055h,050h,0ffh,076h,0fah
	call print_string_
	db 083h,0c4h,006h,0ebh,02bh
lc388:
	db 0b8h,001h,000h,050h,0b8h,003h,000h,050h,0b8h,0b0h,001h,0f7h,06eh,006h,08bh,04eh
	db 008h,0d1h,0e1h,0d1h,0e1h,0d1h,0e1h,003h,0c1h,08bh,0d8h,08ah,087h,02eh,044h,02ah
	db 0e4h,050h,0ffh,076h,0fah
	call print_int_
	db 083h,0c4h,008h
lc3b3:
	db 0ffh,086h,058h,0ffh
lc3b7:
	db 083h,0beh,058h,0ffh,003h,07eh,00bh,083h,0beh,058h,0ffh,008h,07dh,004h,0ffh,086h
	db 058h,0ffh
lc3c9:
	db 080h,07eh,0f4h,000h,074h,058h,0b8h,08eh,055h,050h,0b8h,0d5h,001h,050h
	call get_message_
	db 083h,0c4h,004h,0ffh,0b6h,058h,0ffh,0b8h,001h,000h,050h,0ffh,076h,0fah
	call set_cursor_
	db 083h,0c4h,006h,0b8h,007h,000h,050h,0b8h,08eh,055h,050h,0ffh,076h,0fah
	call print_string_
	db 083h,0c4h,006h,0ffh,0b6h,058h,0ffh,0b8h,00fh,000h,050h,0ffh,076h,0fah
	call set_cursor_
	db 083h,0c4h,006h,0b8h,001h,000h,050h,08ah,046h,0f4h,02ah,0e4h,050h,0ffh,076h,0fah
	call fb659_
	db 083h,0c4h,006h,0ffh,086h,058h,0ffh
lc427:
	db 083h,07eh,092h,000h,074h,071h,0c7h,046h,0fch,000h,000h,0c7h,046h,0feh,000h,000h
lc437:
	db 08bh,05eh,0feh,003h,0ddh,080h,07fh,0deh,000h,076h,04eh,08bh,046h,0fch,0b9h,003h
	db 000h,099h,0f7h,0f9h,08bh,0c2h,003h,086h,058h,0ffh,050h,08bh,046h,0fch,099h,0f7h
	db 0f9h,0d1h,0e0h,0d1h,0e0h,0d1h,0e0h,040h,040h,040h,050h,0ffh,076h,0fah
	call set_cursor_
	db 083h,0c4h,006h,0b8h,08eh,055h,050h,08bh,046h,0feh,005h,0d6h,001h,050h
	call get_message_
	db 083h,0c4h,004h,0b8h,005h,000h,050h,0b8h,08eh,055h,050h,0ffh,076h,0fah
	call print_string_
	db 083h,0c4h,006h,0ffh,046h,0fch
lc490:
	db 0ffh,046h,0feh,08bh,046h,0feh,03dh,008h,000h,07ch,09ch,0e9h,07eh,001h
lc49e:
	db 083h,07eh,09eh,000h,075h,003h,0e9h,075h,001h
lc4a7:
	db 08ah,046h,0d1h,02ah,0e4h,050h,08ah,046h,0d2h,02ah,0e4h,08bh,0c8h,058h,003h,0c1h
	db 0b9h,002h,000h,099h,0f7h,0f9h,089h,046h,086h,08ah,046h,0d3h,02ah,0e4h,050h,08ah
	db 046h,0d4h,02ah,0e4h,08bh,0c8h,058h,003h,0c1h,0b9h,002h,000h,099h,0f7h,0f9h,089h
	db 046h,088h,08ah,046h,0d5h,02ah,0e4h,050h,08ah,046h,0d6h,02ah,0e4h,08bh,0c8h,058h
	db 003h,0c1h,0b9h,002h,000h,099h,0f7h,0f9h,089h,046h,08ah,08ah,046h,0d7h,02ah,0e4h
	db 050h,08ah,046h,0d8h,02ah,0e4h,08bh,0c8h,058h,003h,0c1h,0b9h,002h,000h,099h,0f7h
	db 0f9h,089h,046h,08ch,08ah,046h,0d9h,02ah,0e4h,050h,08ah,046h,0dah,02ah,0e4h,08bh
	db 0c8h,058h,003h,0c1h,0b9h,002h,000h,099h,0f7h,0f9h,089h,046h,08eh,08ah,046h,0dbh
	db 02ah,0e4h,050h,08ah,046h,0dch,02ah,0e4h,08bh,0c8h,058h,003h,0c1h,0b9h,002h,000h
	db 099h,0f7h,0f9h,089h,046h,090h,0c7h,046h,0feh,000h,000h
lc542:
	db 08bh,046h,0feh,0d1h,0e0h,08bh,0d8h,003h,0ddh,083h,07fh,086h,063h,07eh,005h,0b8h
	db 063h,000h,0ebh,003h
lc556:
	db 08bh,047h,086h
lc559:
	db 089h,047h,086h,08bh,046h,0feh,0b9h,003h,000h,099h,0f7h,0f9h,08bh,0c2h,003h,086h
	db 058h,0ffh,050h,08bh,046h,0feh,099h,0f7h,0f9h,08bh,0d0h,0b1h,003h,0d3h,0e0h,003h
	db 0c2h,040h,050h,0ffh,076h,0fah
	call set_cursor_
	db 083h,0c4h,006h,0b8h,08eh,055h,050h,08bh,046h,0feh,005h,06eh,00fh,050h
	call get_message_
	db 083h,0c4h,004h,08bh,046h,0feh,0d1h,0e0h,08bh,0d8h,0ffh,0b7h,004h,000h,0b8h,08eh
	db 055h,050h,0ffh,076h,0fah
	call print_string_
	db 083h,0c4h,006h,08bh,046h,0feh,0b9h,003h,000h,099h,0f7h,0f9h,08bh,0c2h,003h,086h
	db 058h,0ffh,050h,08bh,046h,0feh,099h,0f7h,0f9h,08bh,0d0h,0b1h,003h,0d3h,0e0h,003h
	db 0c2h,005h,007h,000h,050h,0ffh,076h,0fah
	call set_cursor_
	db 083h,0c4h,006h,0b8h,001h,000h,050h,0b8h,002h,000h,050h,08bh,046h,0feh,0d1h,0e0h
	db 08bh,0d8h,003h,0ddh,0ffh,077h,086h,0ffh,076h,0fah
	call print_int_
	db 083h,0c4h,008h,08bh,046h,0feh,0d1h,0e0h,08bh,0d8h,0ffh,0b7h,004h,000h,0b8h,025h
	db 000h,050h,0ffh,076h,0fah
	call put_char_
	db 083h,0c4h,006h,0ffh,046h,0feh,08bh,046h,0feh,03dh,006h,000h,07dh,003h,0e9h,026h
	db 0ffh
lc61c:
	db 0ebh,043h
lc61e:
	db 0b8h,08eh,055h,050h,0b8h,0e2h,001h,050h
	call get_message_
	db 083h,0c4h,004h,0b8h,004h,000h,050h,0b8h,08eh,055h,050h
	call strlen_
	db 059h,040h,0b9h,002h,000h,099h,0f7h,0f9h,08bh,0c8h,0b8h,00ah,000h,02bh,0c1h,050h
	db 0ffh,076h,0fah
	call set_cursor_
	db 083h,0c4h,006h,0b8h,001h,000h,050h,0b8h,08eh,055h,050h,0ffh,076h,0fah
	call print_string_
	db 083h,0c4h,006h
lc661:
	db 0ffh,076h,0fah
	call resume_window_draw_
	db 059h,0b8h,000h,000h,050h,0b8h,003h,000h,050h,0b8h,020h,000h,050h,0ffh,076h,004h
	call fill_window_
	db 083h,0c4h,008h,0ffh,076h,004h
	call defer_window_draw_
	db 059h,0b8h,08eh,055h,050h,0b8h,061h,002h,050h
	call get_message_
	db 083h,0c4h,004h,0b8h,001h,000h,050h,0b8h,08eh,055h,050h
	call strlen_
	db 059h,040h,0b9h,002h,000h,099h,0f7h,0f9h,08bh,0c8h,0b8h,014h,000h,02bh,0c1h,050h
	db 0ffh,076h,004h
	call set_cursor_
	db 083h,0c4h,006h,0b8h,003h,000h,050h,0b8h,08eh,055h,050h,0ffh,076h,004h
	call print_string_hi_
	db 083h,0c4h,006h,0ffh,076h,004h
	call resume_window_draw_
	db 059h,0ffh,076h,0fah
	call refresh_window_
	db 059h,0ffh,076h,004h
	call refresh_window_
	db 059h,0c7h,086h,056h,0ffh,001h,000h
lc6e2:
	call check_screen_click_
	db 085h,0c0h,074h,006h,0c7h,086h,056h,0ffh,000h,000h
lc6ef:
	db 0b8h,001h,000h,050h
	call key_available_
	db 059h,03dh,001h,000h,075h,012h,0b8h,001h,000h,050h
	call get_key_
	db 059h,03ch,00dh,075h,006h,0c7h,086h,056h,0ffh,000h,000h
lc70e:
	db 083h,0beh,056h,0ffh,000h,075h,0cdh,0b8h,000h,000h,050h,0ffh,076h,0fah
	call destroy_window_
	db 083h,0c4h,004h,08bh,0e5h,05dh,0c3h
#endasm
