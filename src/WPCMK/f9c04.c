#asm
	public select_roster_character_
	extrn access_roster_record_:near
	extrn defer_window_draw_:near
	extrn draw_list_box_:near
	extrn draw_roster_list_:near
	extrn fill_window_:near
	extrn get_menu_input_:near
	extrn get_message_:near
	extrn print_string_:near
	extrn print_string_hi_:near
	extrn refresh_all_windows_:near
	extrn resume_window_draw_:near
	extrn set_click_region_:near
	extrn set_cursor_:near
	extrn strcpy_:near
	extrn strlen_:near
select_roster_character_:
	db 055h,08bh,0ech,083h,0c4h,0ech,0c7h,046h,0fch,000h,000h,0c7h,046h,0feh,000h,000h
	db 0ebh,05fh
l9c16:
	db 08bh,05eh,0feh,080h,0bfh,0d8h,04fh,001h,075h,052h,0b8h,000h,000h,050h,053h,0b8h
	db 070h,054h,050h
	call access_roster_record_
	db 083h,0c4h,006h,0b8h,070h,054h,050h,08bh,046h,0fch,0d1h,0e0h,0d1h,0e0h,0d1h,0e0h
	db 005h,0d0h,056h,050h
	call strcpy_
	db 083h,0c4h,004h,0a0h,00eh,056h,02ah,0e4h,08bh,04eh,0fch,0d1h,0e1h,08bh,0d9h,089h
	db 087h,050h,057h,0a0h,00dh,056h,02ah,0e4h,089h,087h,070h,057h,0a0h,00fh,056h,02ah
	db 0e4h,089h,087h,090h,057h,08bh,046h,0feh,089h,087h,0b0h,057h,0ffh,046h,0fch
l9c72:
	db 0ffh,046h,0feh
l9c75:
	db 08bh,046h,0feh,03bh,006h,0d2h,04fh,07ch,098h,083h,07eh,0fch,001h,07dh,004h
l9c84:
	db 08bh,0e5h,05dh,0c3h
l9c88:
	db 08bh,046h,0fch,089h,046h,0f6h,0b8h,000h,000h,050h,0b8h,003h,000h,050h,0b8h,020h
	db 000h,050h,0ffh,076h,004h
	call fill_window_
	db 083h,0c4h,008h,0b8h,000h,000h,050h,0b8h,003h,000h,050h,0b8h,020h,000h,050h,0ffh
	db 076h,006h
	call fill_window_
	db 083h,0c4h,008h,0ffh,076h,004h
	call defer_window_draw_
	db 059h,0b8h,020h,056h,050h,0ffh,076h,008h
	call get_message_
	db 083h,0c4h,004h,0b8h,001h,000h,050h,0b8h,020h,056h,050h
	call strlen_
	db 059h,040h,0b9h,002h,000h,099h,0f7h,0f9h,08bh,0c8h,0b8h,014h,000h,02bh,0c1h,050h
	db 0ffh,076h,004h
	call set_cursor_
	db 083h,0c4h,006h,0b8h,003h,000h,050h,0b8h,020h,056h,050h,0ffh,076h,004h
	call print_string_hi_
	db 083h,0c4h,006h,0ffh,076h,004h
	call resume_window_draw_
	db 059h,0b8h,000h,000h,050h,0ffh,076h,006h
	call draw_list_box_
	db 083h,0c4h,004h
	call refresh_all_windows_
	db 08dh,046h,0ech,050h,0b8h,064h,004h,050h
	call get_message_
	db 083h,0c4h,004h,0c7h,046h,0fah,000h,000h,0c7h,046h,0f8h,000h,000h,08bh,05eh,006h
	db 08ah,047h,003h,02ah,0e4h,040h,040h,040h,050h,08ah,047h,002h,02ah,0e4h,005h,013h
	db 000h,050h,08ah,047h,003h,02ah,0e4h,040h,040h,040h,050h,08ah,047h,002h,02ah,0e4h
	db 040h,050h,0b8h,000h,000h,050h
	call set_click_region_
	db 083h,0c4h,00ah,08bh,05eh,006h,08ah,047h,003h,02ah,0e4h,050h,08ah,047h,002h,02ah
	db 0e4h,050h,08ah,047h,003h,02ah,0e4h,050h,08ah,047h,002h,02ah,0e4h,050h,0b8h,001h
	db 000h,050h
	call set_click_region_
	db 083h,0c4h,00ah,08bh,05eh,006h,08ah,047h,003h,02ah,0e4h,005h,006h,000h,050h,08ah
	db 047h,002h,02ah,0e4h,050h,08ah,047h,003h,02ah,0e4h,005h,006h,000h,050h,08ah,047h
	db 002h,02ah,0e4h,050h,0b8h,002h,000h,050h
	call set_click_region_
	db 083h,0c4h,00ah,08bh,05eh,004h,08ah,047h,003h,02ah,0e4h,040h,040h,040h,050h,08dh
	db 046h,0ech,050h
	call strlen_
	db 059h,050h,08bh,05eh,004h,08ah,047h,002h,02ah,0e4h,08bh,0c8h,058h,003h,0c1h,005h
	db 010h,000h,050h,08ah,047h,003h,02ah,0e4h,040h,040h,040h,050h,083h,0c1h,011h,08bh
	db 0c1h,050h,0b8h,003h,000h,050h
	call set_click_region_
	db 083h,0c4h,00ah,0b8h,000h,000h,050h,050h,050h,0b8h,0ffh,000h,050h,0b8h,004h,000h
	db 050h
	call set_click_region_
	db 083h,0c4h,00ah
l9e02:
	db 083h,07eh,0f8h,001h,075h,037h,0b8h,003h,000h,050h,0b8h,011h,000h,050h,0ffh,076h
	db 004h
	call set_cursor_
	db 083h,0c4h,006h,0b8h,0fbh,0ffh,050h,08dh,046h,0ech,050h,0ffh,076h,004h
	call print_string_
	db 083h,0c4h,006h,0ffh,076h,0f6h,0b8h,000h,000h,050h,0ffh,076h,0fah,0ffh,076h,006h
	call draw_roster_list_
	db 083h,0c4h,008h,0ebh,035h
l9e3f:
	db 0b8h,003h,000h,050h,0b8h,011h,000h,050h,0ffh,076h,004h
	call set_cursor_
	db 083h,0c4h,006h,0b8h,003h,000h,050h,08dh,046h,0ech,050h,0ffh,076h,004h
	call print_string_hi_
	db 083h,0c4h,006h,0ffh,076h,0f6h,0b8h,001h,000h,050h,0ffh,076h,0fah,0ffh,076h,006h
	call draw_roster_list_
	db 083h,0c4h,008h
l9e74:
	db 0b8h,098h,035h,050h,0b8h,01eh,054h,050h
	call get_menu_input_
	db 083h,0c4h,004h,089h,046h,0feh,083h,03eh,0c4h,04fh,001h,075h,037h,0ebh,021h
l9e8e:
	db 0c7h,046h,0feh,005h,000h,0ebh,02eh
l9e95:
	db 0c7h,046h,0feh,002h,000h,0ebh,027h
l9e9c:
	db 0c7h,046h,0feh,004h,000h,0ebh,020h
l9ea3:
	db 0c7h,046h,0f8h,001h,000h,0c7h,046h,0feh,005h,000h,0ebh,014h
l9eaf:
	db 03dh,000h,000h,074h,0dah,03dh,001h,000h,074h,0dch,03dh,002h,000h,074h,0deh,03dh
	db 003h,000h,074h,0e0h
l9ec3:
	db 08bh,046h,0feh,0ebh,04dh
l9ec8:
	db 083h,07eh,0f8h,001h,074h,005h,0c7h,046h,0f8h,001h,000h
l9ed3:
	db 0ebh,054h
l9ed5:
	db 083h,07eh,0f8h,001h,075h,007h,0c7h,046h,0f8h,000h,000h,0ebh,009h
l9ee2:
	db 083h,07eh,0fah,000h,07eh,003h,0ffh,04eh,0fah
l9eeb:
	db 0ebh,03ch
l9eed:
	db 083h,07eh,0f8h,001h,075h,005h,0c7h,046h,0f8h,000h,000h
l9ef8:
	db 0ebh,02fh
l9efa:
	db 083h,07eh,0f8h,001h,075h,007h,0c7h,046h,0f8h,000h,000h,0ebh,00ch
l9f07:
	db 08bh,046h,0fah,040h,03bh,046h,0f6h,07dh,003h,0ffh,046h,0fah
l9f13:
	db 0ebh,014h
l9f15:
	db 03dh,001h,000h,074h,0aeh,03dh,002h,000h,074h,0b6h,03dh,003h,000h,074h,0c9h,03dh
	db 004h,000h,074h,0d1h
l9f29:
	db 083h,07eh,0feh,005h,074h,003h,0e9h,0d0h,0feh
l9f32:
	db 083h,07eh,0f8h,000h,075h,006h,08bh,046h,0fah,0e9h,046h,0fdh
l9f3e:
	db 0b8h,0ffh,0ffh,0e9h,040h,0fdh
#endasm
