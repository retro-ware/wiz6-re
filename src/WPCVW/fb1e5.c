/* Draw armor class, equipped slots and the inventory list of member p6. */
#asm
	public draw_inventory_panel_
	extrn access_scenario_record_:near
	extrn clear_window_area_:near
	extrn get_load_category_:near
	extrn pad_to_column_:near
	extrn print_int_:near
	extrn print_msg2_:near
	extrn print_string_:near
	extrn put_char_:near
	extrn put_char_hi_:near
	extrn set_cursor_:near
	extrn strcpy_:near
draw_inventory_panel_:
	db 055h,08bh,0ech,081h,0c4h,04ch,0ffh,057h,056h,0ffh,076h,006h
	call get_load_category_
	db 059h,08bh,0f0h,08dh,0beh,04eh,0ffh,08ch,0d9h,08eh,0c1h,0b9h,007h,000h,0f3h,0a5h
	db 0b8h,0b0h,001h,0f7h,06eh,006h,08bh,0d8h,08ah,087h,049h,045h,098h,003h,086h,04eh
	db 0ffh,089h,086h,04ch,0ffh,0b8h,005h,000h,050h,0b8h,015h,000h,050h,0ffh,076h,004h
	call set_cursor_
	db 083h,0c4h,006h,0b8h,00fh,000h,050h,0ffh,076h,004h,0b8h,0d9h,000h,050h
	call print_msg2_
	db 083h,0c4h,006h,08bh,05eh,004h,0feh,047h,006h,0b8h,004h,000h,050h,0b8h,002h,000h
	db 050h,0b8h,0b0h,001h,0f7h,06eh,006h,08bh,0d8h,08ah,087h,048h,045h,098h,003h,086h
	db 04ch,0ffh,050h,0ffh,076h,004h
	call print_int_
	db 083h,0c4h,008h,0b8h,00fh,000h,050h,0b8h,092h,051h,050h,0ffh,076h,004h
	call print_string_
	db 083h,0c4h,006h,083h,0beh,04ch,0ffh,000h,07ch,034h,0b8h,004h,000h,083h,0beh,04ch
	db 0ffh,000h,075h,003h,0b8h,009h,000h
lb289:
	db 089h,046h,0a6h,050h,0b8h,02bh,000h,050h,0ffh,076h,004h
	call put_char_
	db 083h,0c4h,006h,0ffh,076h,0a6h,0b8h,001h,000h,050h,0ffh,0b6h,04ch,0ffh,0ffh,076h
	db 004h
	call print_int_
	db 083h,0c4h,008h,0ebh,015h
lb2b0:
	db 0b8h,006h,000h,050h,0b8h,002h,000h,050h,0ffh,0b6h,04ch,0ffh,0ffh,076h,004h
	call print_int_
	db 083h,0c4h,008h
lb2c5:
	db 0b8h,00fh,000h,050h,0b8h,029h,000h,050h,0ffh,076h,004h
	call put_char_
	db 083h,0c4h,006h,0b8h,006h,000h,050h,0b8h,015h,000h,050h,0ffh,076h,004h
	call set_cursor_
	db 083h,0c4h,006h,0c7h,046h,0feh,000h,000h
lb2ec:
	db 0b8h,003h,000h,050h,0b8h,020h,000h,050h,0ffh,076h,004h
	call put_char_hi_
	db 083h,0c4h,006h,0b8h,0b0h,001h,0f7h,06eh,006h,003h,046h,0feh,08bh,0d8h,08ah,087h
	db 0fah,044h,02ah,0e4h,03dh,0ffh,000h,074h,027h,0b8h,0b0h,001h,0f7h,06eh,006h,050h
	db 08ah,087h,0fah,044h,02ah,0e4h,08bh,0c8h,0d1h,0e0h,0d1h,0e0h,0d1h,0e0h,08bh,0c8h
	db 058h,003h,0c1h,08bh,0d8h,08ah,087h,02dh,044h,02ah,0e4h,089h,046h,0fah,0ebh,012h
lb33a:
	db 0b8h,078h,000h,083h,07eh,0feh,000h,074h,006h,08bh,046h,0feh,005h,078h,000h
lb349:
	db 089h,046h,0fah
lb34c:
	db 0b8h,004h,000h,050h,08bh,046h,0fah,040h,02ah,0e4h,050h,0ffh,076h,004h
	call put_char_hi_
	db 083h,0c4h,006h,083h,07eh,0feh,005h,07dh,013h,0b8h,001h,000h,050h,0b8h,01ch,000h
	db 050h,0ffh,076h,004h
	call put_char_hi_
	db 083h,0c4h,006h,0ebh,011h
lb379:
	db 0b8h,003h,000h,050h,0b8h,020h,000h,050h,0ffh,076h,004h
	call put_char_hi_
	db 083h,0c4h,006h
lb38a:
	db 0ffh,046h,0feh,08bh,046h,0feh,03dh,006h,000h,07dh,003h,0e9h,054h,0ffh
lb398:
	db 0c7h,046h,0a6h,00bh,000h,0c7h,046h,0feh,000h,000h
lb3a2:
	db 0b8h,000h,000h,083h,07eh,0feh,000h,074h,011h,0b8h,0b0h,001h,0f7h,06eh,006h,08bh
	db 0d8h,08ah,087h,04ah,045h,098h,003h,086h,04ch,0ffh
lb3bc:
	db 089h,046h,0f8h,0b8h,007h,000h,050h,08bh,046h,0feh,08bh,0d0h,0d1h,0e0h,003h,0c2h
	db 005h,015h,000h,050h,0ffh,076h,004h
	call set_cursor_
	db 083h,0c4h,006h,08bh,046h,0a6h,005h,008h,000h,0b9h,010h,000h,099h,0f7h,0f9h,08bh
	db 0c2h,050h,0b8h,003h,000h,050h,0b8h,0b0h,001h,0f7h,06eh,006h,003h,046h,0feh,08bh
	db 0d8h,08ah,087h,04ah,045h,098h,003h,046h,0f8h,050h,0ffh,076h,004h
	call print_int_
	db 083h,0c4h,008h,0c7h,046h,0a6h,00fh,000h,0ffh,046h,0feh,08bh,046h,0feh,03dh,006h
	db 000h,07ch,089h,0c7h,046h,0feh,000h,000h,0e9h,0a7h,001h
lb421:
	db 083h,03eh,0fch,057h,000h,075h,041h,0b8h,000h,000h,050h,0b8h,0b0h,001h,0f7h,06eh
	db 006h,08bh,04eh,0feh,0d1h,0e1h,0d1h,0e1h,0d1h,0e1h,003h,0c1h,08bh,0d8h,0ffh,0b7h
	db 028h,044h,08dh,086h,05ch,0ffh,050h,0b8h,001h,000h,050h
	call access_scenario_record_
	db 083h,0c4h,008h,08dh,086h,05ch,0ffh,050h,08bh,046h,0feh,0b9h,004h,000h,0d3h,0e0h
	db 005h,0deh,055h,050h
	call strcpy_
	db 083h,0c4h,004h
lb469:
	db 0c7h,046h,0fah,020h,000h,0c7h,046h,0a6h,009h,000h,0c7h,046h,0fch,000h,000h
lb478:
	db 0b8h,0b0h,001h,0f7h,06eh,006h,003h,046h,0fch,08bh,0d8h,08ah,087h,0f8h,044h,02ah
	db 0e4h,03bh,046h,0feh,075h,01eh,0c7h,046h,0fah,017h,000h,0b8h,006h,000h,08bh,04eh
	db 0fch,083h,0f9h,002h,07ch,00bh,0b8h,007h,000h,083h,0f9h,002h,075h,003h,0b8h,003h
	db 000h
lb4a9:
	db 089h,046h,0a6h
lb4ac:
	db 0ffh,046h,0fch,08bh,046h,0fch,03dh,008h,000h,07ch,0c1h,08bh,046h,0feh,005h,009h
	db 000h,050h,0b8h,015h,000h,050h,0ffh,076h,004h
	call set_cursor_
	db 083h,0c4h,006h,0b8h,004h,000h,050h,08ah,046h,0fah,02ah,0e4h,050h,0ffh,076h,004h
	call put_char_
	db 083h,0c4h,006h,08bh,046h,0a6h,08bh,04eh,0feh,0d1h,0e1h,08bh,0d9h,089h,087h,07eh
	db 056h,050h,08bh,046h,0feh,0b9h,004h,000h,0d3h,0e0h,005h,0deh,055h,050h,0ffh,076h
	db 004h
	call print_string_
	db 083h,0c4h,006h,0b8h,000h,000h,050h,0b8h,022h,000h,050h,0ffh,076h,004h
	call pad_to_column_
	db 083h,0c4h,006h,0b8h,0b0h,001h,0f7h,06eh,006h,08bh,04eh,0feh,0d1h,0e1h,0d1h,0e1h
	db 0d1h,0e1h,003h,0c1h,08bh,0d8h,08ah,087h,02ch,044h,02ah,0e4h,08bh,0d8h,080h,0bfh
	db 0cch,000h,001h,075h,041h,08bh,046h,0feh,005h,009h,000h,050h,0b8h,022h,000h,050h
	db 0ffh,076h,004h
	call set_cursor_
	db 083h,0c4h,006h,0b8h,001h,000h,050h,0b8h,003h,000h,050h,0b8h,0b0h,001h,0f7h,06eh
	db 006h,08bh,04eh,0feh,0d1h,0e1h,0d1h,0e1h,0d1h,0e1h,003h,0c1h,08bh,0d8h,08ah,087h
	db 02eh,044h,02ah,0e4h,050h,0ffh,076h,004h
	call print_int_
	db 083h,0c4h,008h,0ebh,011h
lb576:
	db 0b8h,000h,000h,050h,0b8h,025h,000h,050h,0ffh,076h,004h
	call pad_to_column_
	db 083h,0c4h,006h
lb587:
	db 08bh,046h,0feh,005h,009h,000h,050h,0b8h,026h,000h,050h,0ffh,076h,004h
	call set_cursor_
	db 083h,0c4h,006h,0b8h,004h,000h,050h,0b8h,0b0h,001h,0f7h,06eh,006h,08bh,04eh,0feh
	db 0d1h,0e1h,0d1h,0e1h,0d1h,0e1h,003h,0c1h,08bh,0d8h,08ah,087h,02dh,044h,02ah,0e4h
	db 040h,02ah,0e4h,050h,0ffh,076h,004h
	call put_char_hi_
	db 083h,0c4h,006h,0ffh,046h,0feh
lb5c8:
	db 0b8h,0b0h,001h,0f7h,06eh,006h,08bh,0d8h,08ah,087h,094h,045h,02ah,0e4h,03bh,046h
	db 0feh,07eh,003h,0e9h,043h,0feh
lb5de:
	db 0b8h,0b0h,001h,0f7h,06eh,006h,08bh,0d8h,080h,0bfh,094h,045h,00ah,073h,01fh,0b8h
	db 012h,000h,050h,0b8h,024h,000h,050h,08ah,087h,094h,045h,02ah,0e4h,005h,009h,000h
	db 050h,0b8h,015h,000h,050h,0ffh,076h,004h
	call clear_window_area_
	db 083h,0c4h,00ah
lb60c:
	db 0b8h,0b0h,001h,0f7h,06eh,006h,08bh,0d8h,08ah,087h,094h,045h,02ah,0e4h,089h,046h
	db 0feh,0ebh,028h
lb61f:
	db 08bh,046h,0feh,005h,009h,000h,050h,0b8h,026h,000h,050h,0ffh,076h,004h
	call set_cursor_
	db 083h,0c4h,006h,0b8h,003h,000h,050h,0b8h,020h,000h,050h,0ffh,076h,004h
	call put_char_hi_
	db 083h,0c4h,006h,0ffh,046h,0feh
lb647:
	db 083h,07eh,0feh,00ah,07ch,0d2h,0c7h,006h,0fch,057h,001h,000h,05eh,05fh,08bh,0e5h
	db 05dh,0c3h
#endasm
