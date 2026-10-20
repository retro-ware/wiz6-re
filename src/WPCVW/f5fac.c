/* Let the player pick an item from the inventory (p12 0) or swag (p12 1) list; -1 for none. */
#asm
	public choose_item_
	extrn draw_inventory_panel_:near
	extrn fill_window_:near
	extrn get_menu_input_:near
	extrn get_message_:near
	extrn print_string_:near
	extrn print_string_hi_:near
	extrn refresh_window_:near
	extrn set_click_region_:near
	extrn set_cursor_:near
	extrn strlen_:near
	extrn unhighlight_item_row_:near
choose_item_:
	db 055h,08bh,0ech,081h,0c4h,04eh,0ffh,083h,07eh,00ch,000h,075h,020h,0ffh,076h,00ah
	db 0ffh,076h,004h
	call draw_inventory_panel_
	db 083h,0c4h,004h,0b8h,0b0h,001h,0f7h,06eh,00ah,08bh,0d8h,08ah,087h,094h,045h,02ah
	db 0e4h,089h,086h,04eh,0ffh,0ebh,012h
l5fd9:
	db 0b8h,0b0h,001h,0f7h,06eh,00ah,08bh,0d8h,08ah,087h,095h,045h,02ah,0e4h,089h,086h
	db 04eh,0ffh
l5feb:
	db 0b8h,000h,000h,050h,0b8h,003h,000h,050h,0b8h,020h,000h,050h,0ffh,076h,006h
	call fill_window_
	db 083h,0c4h,008h,0ffh,076h,006h
	call refresh_window_
	db 059h,08dh,046h,0a8h,050h,0ffh,076h,008h
	call get_message_
	db 083h,0c4h,004h,08dh,046h,09eh,050h,0b8h,091h,001h,050h
	call get_message_
	db 083h,0c4h,004h,0b8h,001h,000h,050h,0b8h,002h,000h,050h,0ffh,076h,006h
	call set_cursor_
	db 083h,0c4h,006h,0b8h,003h,000h,050h,08dh,046h,0a8h,050h,0ffh,076h,006h
	call print_string_hi_
	db 083h,0c4h,006h,08bh,05eh,006h,0feh,047h,006h,08bh,05eh,006h,08ah,047h,006h,02ah
	db 0e4h,089h,046h,09ch,08ah,047h,007h,02ah,0e4h,089h,046h,09ah,083h,03eh,046h,008h
	db 001h,075h,011h,0b8h,003h,000h,050h,08dh,046h,09eh,050h,053h
	call print_string_hi_
	db 083h,0c4h,006h,0ebh,011h
l6075:
	db 0b8h,0fbh,0ffh,050h,08dh,046h,09eh,050h,0ffh,076h,006h
	call print_string_
	db 083h,0c4h,006h
l6086:
	db 0c7h,046h,0f8h,0ffh,0ffh,0c7h,046h,0feh,000h,000h,0ebh,076h
l6092:
	db 083h,07eh,00ch,000h,075h,038h,08bh,05eh,004h,08ah,047h,003h,02ah,0e4h,003h,046h
	db 0feh,005h,009h,000h,050h,08ah,047h,002h,02ah,0e4h,005h,025h,000h,050h,08ah,047h
	db 003h,02ah,0e4h,003h,046h,0feh,005h,009h,000h,050h,08ah,047h,002h,02ah,0e4h,005h
	db 016h,000h,050h,0ffh,076h,0feh
	call set_click_region_
	db 083h,0c4h,00ah,0ebh,035h
l60d0:
	db 08bh,05eh,004h,08ah,047h,003h,02ah,0e4h,003h,046h,0feh,040h,040h,040h,050h,08ah
	db 047h,002h,02ah,0e4h,005h,011h,000h,050h,08ah,047h,003h,02ah,0e4h,003h,046h,0feh
	db 040h,040h,040h,050h,08ah,047h,002h,02ah,0e4h,040h,040h,050h,0ffh,076h,0feh
	call set_click_region_
	db 083h,0c4h,00ah
l6105:
	db 0ffh,046h,0feh
l6108:
	db 08bh,046h,0feh,03bh,086h,04eh,0ffh,07ch,081h,08bh,05eh,006h,08ah,047h,003h,02ah
	db 0e4h,003h,046h,09ah,050h,08dh,046h,09eh,050h
	call strlen_
	db 059h,050h,08bh,05eh,006h,08ah,047h,002h,02ah,0e4h,08bh,0c8h,058h,003h,0c1h,003h
	db 046h,09ch,048h,050h,08ah,047h,003h,02ah,0e4h,003h,046h,09ah,050h,003h,04eh,09ch
	db 08bh,0c1h,050h,0ffh,0b6h,04eh,0ffh
	call set_click_region_
	db 083h,0c4h,00ah,0b8h,000h,000h,050h,050h,050h,0b8h,0ffh,000h,050h,08bh,086h,04eh
	db 0ffh,040h,050h
	call set_click_region_
	db 083h,0c4h,00ah
l6167:
	db 083h,03eh,046h,008h,000h,074h,003h,0e9h,08ah,000h
l6171:
	db 083h,07eh,0f8h,0ffh,075h,022h,0ffh,076h,09ah,0ffh,076h,09ch,0ffh,076h,006h
	call set_cursor_
	db 083h,0c4h,006h,0b8h,0fbh,0ffh,050h,08dh,046h,09eh,050h,0ffh,076h,006h
	call print_string_
	db 083h,0c4h,006h,0ebh,062h
l6199:
	db 083h,07eh,00ch,000h,075h,02fh,08bh,046h,0f8h,005h,009h,000h,050h,0b8h,016h,000h
	db 050h,0ffh,076h,004h
	call set_cursor_
	db 083h,0c4h,006h,0b8h,0fbh,0ffh,050h,08bh,046h,0f8h,0b9h,004h,000h,0d3h,0e0h,005h
	db 0deh,055h,050h,0ffh,076h,004h
	call print_string_
	db 083h,0c4h,006h,0ebh,02dh
l61ce:
	db 08bh,046h,0f8h,040h,040h,040h,050h,0b8h,002h,000h,050h,0ffh,076h,004h
	call set_cursor_
	db 083h,0c4h,006h,0b8h,0fbh,0ffh,050h,08bh,046h,0f8h,0b9h,004h,000h,0d3h,0e0h,005h
	db 092h,056h,050h,0ffh,076h,004h
	call print_string_
	db 083h,0c4h,006h
l61fb:
	db 0b8h,098h,035h,050h,0b8h,03eh,055h,050h
	call get_menu_input_
	db 083h,0c4h,004h,089h,046h,0fah,083h,03eh,0c4h,04fh,001h,075h,019h,0b8h,0ffh,0ffh
	db 08bh,04eh,0fah,03bh,08eh,04eh,0ffh,07dh,002h,08bh,0c1h
l6221:
	db 089h,046h,0f8h,0c7h,046h,0fah,005h,000h,0e9h,0c9h,000h
l622c:
	db 08bh,046h,0fah,0e9h,0b6h,000h
l6232:
	db 083h,07eh,0f8h,0ffh,075h,027h,0ffh,076h,09ah,0ffh,076h,09ch,0ffh,076h,006h
	call set_cursor_
	db 083h,0c4h,006h,0b8h,003h,000h,050h,08dh,046h,09eh,050h,0ffh,076h,006h
	call print_string_hi_
	db 083h,0c4h,006h,0c7h,046h,0f8h,000h,000h,0ebh,02ah
l625f:
	db 0ffh,076h,00ch,08bh,046h,0f8h,0d1h,0e0h,08bh,0d8h,0ffh,0b7h,07eh,056h,0ffh,076h
	db 0f8h,0ffh,076h,004h
	call unhighlight_item_row_
	db 083h,0c4h,008h,08bh,046h,0f8h,048h,07ch,005h,0ffh,04eh,0f8h,0ebh,005h
l6284:
	db 0c7h,046h,0f8h,0ffh,0ffh
l6289:
	db 0ebh,06ah
l628b:
	db 083h,07eh,0f8h,0ffh,075h,027h,0ffh,076h,09ah,0ffh,076h,09ch,0ffh,076h,006h
	call set_cursor_
	db 083h,0c4h,006h,0b8h,003h,000h,050h,08dh,046h,09eh,050h,0ffh,076h,006h
	call print_string_hi_
	db 083h,0c4h,006h,0c7h,046h,0f8h,000h,000h,0ebh,02eh
l62b8:
	db 0ffh,076h,00ch,08bh,046h,0f8h,0d1h,0e0h,08bh,0d8h,0ffh,0b7h,07eh,056h,0ffh,076h
	db 0f8h,0ffh,076h,004h
	call unhighlight_item_row_
	db 083h,0c4h,008h,08bh,046h,0f8h,040h,03bh,086h,04eh,0ffh,07dh,005h,0ffh,046h,0f8h
	db 0ebh,005h
l62e1:
	db 0c7h,046h,0f8h,0ffh,0ffh
l62e6:
	db 0ebh,00dh
l62e8:
	db 03dh,002h,000h,075h,003h,0e9h,042h,0ffh
l62f0:
	db 03dh,004h,000h,074h,096h
l62f5:
	db 083h,07eh,0fah,005h,074h,003h,0e9h,069h,0feh
l62fe:
	db 083h,07eh,00ch,000h,075h,00ch,0ffh,076h,00ah,0ffh,076h,004h
	call draw_inventory_panel_
	db 083h,0c4h,004h
l6310:
	db 08bh,046h,0f8h,08bh,0e5h,05dh,0c3h
#endasm
