/* Let the player pick a party member by name; returns index or -1. */
#asm
	public choose_member_
	extrn defer_window_draw_:near
	extrn draw_member_card_:near
	extrn draw_member_name_:near
	extrn fill_window_:near
	extrn get_menu_input_:near
	extrn get_message_:near
	extrn print_string_:near
	extrn print_string_hi_:near
	extrn refresh_all_windows_:near
	extrn resume_window_draw_:near
	extrn set_click_region_:near
	extrn set_cursor_:near
	extrn strlen_:near
choose_member_:
	db 055h,08bh,0ech,083h,0c4h,0ech,056h,083h,03eh,0ceh,043h,002h,07dh,008h,0b8h,000h
	db 000h
l898e:
	db 05eh,08bh,0e5h,05dh,0c3h
l8993:
	db 0ffh,036h,052h,057h
	call defer_window_draw_
	db 059h,0beh,000h,000h,0ebh,00ch
l89a0:
	db 056h,0ffh,036h,052h,057h
	call draw_member_card_
	db 083h,0c4h,004h,046h
l89ac:
	db 03bh,036h,0ceh,043h,07ch,0eeh,0ffh,036h,052h,057h
	call resume_window_draw_
	db 059h,0b8h,000h,000h,050h,0b8h,003h,000h,050h,0b8h,020h,000h,050h,0ffh,076h,006h
	call fill_window_
	db 083h,0c4h,008h
	call refresh_all_windows_
	db 0b8h,08eh,055h,050h,0ffh,076h,008h
	call get_message_
	db 083h,0c4h,004h,0b8h,001h,000h,050h,0b8h,08eh,055h,050h
	call strlen_
	db 059h,040h,0b9h,002h,000h,099h,0f7h,0f9h,08bh,0c8h,0b8h,00ah,000h,02bh,0c1h,050h
	db 0ffh,076h,006h
	call set_cursor_
	db 083h,0c4h,006h,0b8h,003h,000h,050h,0b8h,08eh,055h,050h,0ffh,076h,006h
	call print_string_hi_
	db 083h,0c4h,006h,0c7h,046h,0f2h,008h,000h,0c7h,046h,0f0h,003h,000h,08dh,046h,0f4h
	db 050h,0b8h,0f7h,001h,050h
	call get_message_
	db 083h,0c4h,004h,0ffh,076h,0f0h,0ffh,076h,0f2h,0ffh,076h,006h
	call set_cursor_
	db 083h,0c4h,006h,083h,03eh,046h,008h,000h,075h,019h,083h,07eh,00ah,0ffh,075h,013h
	db 0b8h,0fbh,0ffh,050h,08dh,046h,0f4h,050h,0ffh,076h,006h
	call print_string_
	db 083h,0c4h,006h,0ebh,011h
l8a5b:
	db 0b8h,003h,000h,050h,08dh,046h,0f4h,050h,0ffh,076h,006h
	call print_string_hi_
	db 083h,0c4h,006h
l8a6c:
	db 0beh,000h,000h,0e9h,0aeh,000h
l8a72:
	db 08bh,0c6h,0b9h,002h,000h,099h,0f7h,0f9h,08bh,0c2h,08bh,0d0h,0b1h,003h,0d3h,0e0h
	db 003h,0c2h,005h,016h,000h,089h,046h,0eeh,08bh,0c6h,0b9h,002h,000h,099h,0f7h,0f9h
	db 040h,089h,046h,0ech,050h,0ffh,076h,0eeh,0ffh,076h,006h
	call set_cursor_
	db 083h,0c4h,006h,083h,03eh,046h,008h,000h,075h,01dh,03bh,076h,00ah,075h,018h,0b8h
	db 0fbh,0ffh,050h,0b8h,0b0h,001h,0f7h,0eeh,005h,0e8h,043h,050h,0ffh,076h,006h
	call print_string_
	db 083h,0c4h,006h,0ebh,016h
l8ac7:
	db 0b8h,003h,000h,050h,0b8h,0b0h,001h,0f7h,0eeh,005h,0e8h,043h,050h,0ffh,076h,006h
	call print_string_hi_
	db 083h,0c4h,006h
l8add:
	db 08bh,05eh,006h,08ah,047h,003h,02ah,0e4h,003h,046h,0ech,050h,0b8h,0b0h,001h,0f7h
	db 0eeh,005h,0e8h,043h,050h
	call strlen_
	db 059h,050h,08bh,05eh,006h,08ah,047h,002h,02ah,0e4h,08bh,0c8h,058h,003h,0c1h,003h
	db 046h,0eeh,048h,050h,08ah,047h,003h,02ah,0e4h,003h,046h,0ech,050h,003h,04eh,0eeh
	db 08bh,0c1h,050h,056h
	call set_click_region_
	db 083h,0c4h,00ah,046h
l8b20:
	db 03bh,036h,0ceh,043h,07dh,003h,0e9h,049h,0ffh
l8b29:
	db 08bh,05eh,006h,08ah,047h,003h,02ah,0e4h,003h,046h,0f0h,050h,08dh,046h,0f4h,050h
	call strlen_
	db 059h,050h,08bh,05eh,006h,08ah,047h,002h,02ah,0e4h,08bh,0c8h,058h,003h,0c1h,003h
	db 046h,0f2h,048h,050h,08ah,047h,003h,02ah,0e4h,003h,046h,0f0h,050h,003h,04eh,0f2h
	db 08bh,0c1h,050h,0ffh,036h,0ceh,043h
	call set_click_region_
	db 083h,0c4h,00ah,0b8h,000h,000h,050h,050h,050h,0b8h,0ffh,000h,050h,0a1h,0ceh,043h
	db 040h,050h
	call set_click_region_
	db 083h,0c4h,00ah
l8b7e:
	db 083h,03eh,046h,008h,000h,075h,067h,083h,07eh,00ah,0ffh,075h,022h,0ffh,076h,0f0h
	db 0ffh,076h,0f2h,0ffh,076h,006h
	call set_cursor_
	db 083h,0c4h,006h,0b8h,0fbh,0ffh,050h,08dh,046h,0f4h,050h,0ffh,076h,006h
	call print_string_
	db 083h,0c4h,006h,0ebh,03fh
l8bad:
	db 08bh,046h,00ah,0b9h,002h,000h,099h,0f7h,0f9h,040h,050h,08bh,046h,00ah,099h,0f7h
	db 0f9h,08bh,0c2h,08bh,0d0h,0b1h,003h,0d3h,0e0h,003h,0c2h,005h,016h,000h,050h,0ffh
	db 076h,006h
	call set_cursor_
	db 083h,0c4h,006h,0b8h,0fbh,0ffh,050h,0b8h,0b0h,001h,0f7h,06eh,00ah,005h,0e8h,043h
	db 050h,0ffh,076h,006h
	call print_string_
	db 083h,0c4h,006h
l8bec:
	db 0b8h,098h,035h,050h,0b8h,03eh,055h,050h
	call get_menu_input_
	db 083h,0c4h,004h,089h,046h,0feh,083h,03eh,0c4h,04fh,001h,075h,019h,0b8h,0ffh,0ffh
	db 08bh,04eh,0feh,03bh,00eh,0ceh,043h,07dh,002h,08bh,0c1h
l8c12:
	db 089h,046h,00ah,0c7h,046h,0feh,005h,000h,0e9h,0f1h,000h
l8c1d:
	db 08bh,046h,0feh,0e9h,0ceh,000h
l8c23:
	db 083h,07eh,00ah,0ffh,074h,026h,0ffh,076h,00ah,0ffh,076h,006h
	call draw_member_name_
	db 083h,0c4h,004h,08bh,046h,00ah,0b9h,002h,000h,099h,0f7h,0f9h,08bh,0c2h,03dh,000h
	db 000h,07eh,005h,0ffh,04eh,00ah,0ebh,005h
l8c4a:
	db 0c7h,046h,00ah,0ffh,0ffh
l8c4f:
	db 0e9h,0bch,000h
l8c52:
	db 083h,07eh,00ah,0ffh,074h,019h,08bh,046h,00ah,048h,048h,07ch,012h,0ffh,076h,00ah
	db 0ffh,076h,006h
	call draw_member_name_
	db 083h,0c4h,004h,0ffh,04eh,00ah,0ffh,04eh,00ah
l8c71:
	db 0e9h,09ah,000h
l8c74:
	db 083h,07eh,00ah,0ffh,075h,027h,0ffh,076h,0f0h,0ffh,076h,0f2h,0ffh,076h,006h
	call set_cursor_
	db 083h,0c4h,006h,0b8h,003h,000h,050h,08dh,046h,0f4h,050h,0ffh,076h,006h
	call print_string_hi_
	db 083h,0c4h,006h,0c7h,046h,00ah,000h,000h,0ebh,029h
l8ca1:
	db 08bh,046h,00ah,0b9h,002h,000h,099h,0f7h,0f9h,08bh,0c2h,03dh,001h,000h,07dh,019h
	db 08bh,046h,00ah,040h,03bh,006h,0ceh,043h,07dh,00fh,0ffh,076h,00ah,0ffh,076h,006h
	call draw_member_name_
	db 083h,0c4h,004h,0ffh,046h,00ah
l8cca:
	db 0ebh,042h
l8ccc:
	db 083h,07eh,00ah,0ffh,074h,01dh,08bh,046h,00ah,040h,040h,03bh,006h,0ceh,043h,07dh
	db 012h,0ffh,076h,00ah,0ffh,076h,006h
	call draw_member_name_
	db 083h,0c4h,004h,0ffh,046h,00ah,0ffh,046h,00ah
l8cef:
	db 0ebh,01dh
l8cf1:
	db 03dh,001h,000h,075h,003h,0e9h,02ah,0ffh
l8cf9:
	db 03dh,002h,000h,075h,003h,0e9h,051h,0ffh
l8d01:
	db 03dh,003h,000h,075h,003h,0e9h,06bh,0ffh
l8d09:
	db 03dh,004h,000h,074h,0beh
l8d0e:
	db 083h,07eh,0feh,005h,074h,003h,0e9h,067h,0feh
l8d17:
	db 0b8h,000h,000h,050h,0b8h,003h,000h,050h,0b8h,020h,000h,050h,0ffh,076h,006h
	call fill_window_
	db 083h,0c4h,008h,0ffh,036h,052h,057h
	call defer_window_draw_
	db 059h,08bh,046h,00ah,0e9h,054h,0fch
#endasm
