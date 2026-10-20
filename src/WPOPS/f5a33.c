#asm
	public select_party_member_
	extrn create_window_:near
	extrn destroy_window_:near
	extrn draw_member_name_:near
	extrn fill_window_:near
	extrn get_combat_input_:near
	extrn get_message_:near
	extrn print_combat_prompt_:near
	extrn print_string_:near
	extrn print_string_hi_:near
	extrn refresh_window_:near
	extrn set_click_region_:near
	extrn set_cursor_:near
	extrn strlen_:near
select_party_member_:
	db 055h,08bh,0ech,083h,0c4h,08eh,056h,083h,03eh,0ceh,043h,002h,07dh,008h,0b8h,000h
	db 000h
l5a44:
	db 05eh,08bh,0e5h,05dh,0c3h
l5a49:
	db 0b8h,000h,000h,050h,050h,0b8h,0fch,0ffh,050h,0b8h,019h,000h,050h,0b8h,005h,000h
	db 050h,0b8h,013h,000h,050h,050h,0b8h,000h,000h,050h
	call create_window_
	db 083h,0c4h,010h,089h,046h,0fch,0b8h,000h,000h,050h,0b8h,003h,000h,050h,0b8h,020h
	db 000h,050h,0ffh,076h,0fch
	call fill_window_
	db 083h,0c4h,008h,08dh,046h,0a0h,050h,0b8h,017h,00eh,050h
	call get_message_
	db 083h,0c4h,004h,08dh,046h,096h,050h,0b8h,018h,00eh,050h
	call get_message_
	db 083h,0c4h,004h,08dh,046h,0d2h,050h,0ffh,076h,004h
	call get_message_
	db 083h,0c4h,004h,0b8h,005h,000h,050h,08dh,046h,0d2h,050h
	call print_combat_prompt_
	db 083h,0c4h,004h,08bh,01eh,042h,033h,0feh,047h,006h,08bh,01eh,042h,033h,08ah,047h
	db 006h,02ah,0e4h,089h,046h,094h,08ah,047h,007h,02ah,0e4h,089h,046h,092h,053h
	call refresh_window_
	db 059h,0ffh,076h,0fch
	call refresh_window_
	db 059h,0ffh,076h,092h,0ffh,076h,094h,0ffh,036h,042h,033h
	call set_cursor_
	db 083h,0c4h,006h,083h,03eh,046h,008h,001h,075h,014h,0b8h,003h,000h,050h,08dh,046h
	db 0a0h,050h,0ffh,036h,042h,033h
	call print_string_hi_
	db 083h,0c4h,006h,0ebh,012h
l5b0a:
	db 0b8h,0fbh,0ffh,050h,08dh,046h,096h,050h,0ffh,036h,042h,033h
	call print_string_
	db 083h,0c4h,006h
l5b1c:
	db 0beh,000h,000h,0e9h,089h,000h
l5b22:
	db 08bh,0c6h,0b9h,002h,000h,099h,0f7h,0f9h,08bh,0c2h,08bh,0d0h,0b1h,003h,0d3h,0e0h
	db 003h,0c2h,040h,040h,089h,046h,090h,08bh,0c6h,0b9h,002h,000h,099h,0f7h,0f9h,040h
	db 089h,046h,08eh,050h,0ffh,076h,090h,0ffh,076h,0fch
	call set_cursor_
	db 083h,0c4h,006h,0b8h,003h,000h,050h,0b8h,0b0h,001h,0f7h,0eeh,005h,0e8h,043h,050h
	db 0ffh,076h,0fch
	call print_string_hi_
	db 083h,0c4h,006h,08bh,05eh,0fch,08ah,047h,003h,02ah,0e4h,003h,046h,08eh,050h,0b8h
	db 0b0h,001h,0f7h,0eeh,005h,0e8h,043h,050h
	call strlen_
	db 059h,050h,08bh,05eh,0fch,08ah,047h,002h,02ah,0e4h,08bh,0c8h,058h,003h,0c1h,003h
	db 046h,090h,048h,050h,08ah,047h,003h,02ah,0e4h,003h,046h,08eh,050h,003h,04eh,090h
	db 08bh,0c1h,050h,056h
	call set_click_region_
	db 083h,0c4h,00ah,046h
l5bab:
	db 03bh,036h,0ceh,043h,07dh,003h,0e9h,06eh,0ffh
l5bb4:
	db 08bh,01eh,042h,033h,08ah,047h,003h,02ah,0e4h,003h,046h,092h,050h,08dh,046h,096h
	db 050h
	call strlen_
	db 059h,050h,08bh,01eh,042h,033h,08ah,047h,002h,02ah,0e4h,08bh,0c8h,058h,003h,0c1h
	db 003h,046h,094h,048h,050h,08ah,047h,003h,02ah,0e4h,003h,046h,092h,050h,003h,04eh
	db 094h,08bh,0c1h,050h,0ffh,036h,0ceh,043h
	call set_click_region_
	db 083h,0c4h,00ah,0b8h,000h,000h,050h,050h,050h,0b8h,0ffh,000h,050h,0a1h,0ceh,043h
	db 040h,050h
	call set_click_region_
	db 083h,0c4h,00ah,0c7h,046h,0fah,0ffh,0ffh
l5c10:
	db 083h,03eh,046h,008h,000h,075h,068h,083h,07eh,0fah,0ffh,075h,024h,0ffh,076h,092h
	db 0ffh,076h,094h,0ffh,036h,042h,033h
	call set_cursor_
	db 083h,0c4h,006h,0b8h,0fbh,0ffh,050h,08dh,046h,096h,050h,0ffh,036h,042h,033h
	call print_string_
	db 083h,0c4h,006h,0ebh,03eh
l5c41:
	db 08bh,046h,0fah,0b9h,002h,000h,099h,0f7h,0f9h,040h,050h,08bh,046h,0fah,099h,0f7h
	db 0f9h,08bh,0c2h,08bh,0d0h,0b1h,003h,0d3h,0e0h,003h,0c2h,040h,040h,050h,0ffh,076h
	db 0fch
	call set_cursor_
	db 083h,0c4h,006h,0b8h,0fbh,0ffh,050h,0b8h,0b0h,001h,0f7h,06eh,0fah,005h,0e8h,043h
	db 050h,0ffh,076h,0fch
	call print_string_
	db 083h,0c4h,006h
l5c7f:
	db 0b8h,098h,035h,050h,0b8h,076h,043h,050h
	call get_combat_input_
	db 083h,0c4h,004h,089h,046h,0feh,083h,03eh,0c4h,04fh,001h,075h,019h,0b8h,0ffh,0ffh
	db 08bh,04eh,0feh,03bh,00eh,0ceh,043h,07dh,002h,08bh,0c1h
l5ca5:
	db 089h,046h,0fah,0c7h,046h,0feh,005h,000h,0e9h,0efh,000h
l5cb0:
	db 08bh,046h,0feh,0e9h,0cch,000h
l5cb6:
	db 083h,07eh,0fah,0ffh,074h,01fh,08bh,046h,0fah,0b9h,002h,000h,099h,0f7h,0f9h,08bh
	db 0c2h,03dh,000h,000h,07eh,00fh,0ffh,076h,0fah,0ffh,076h,0fch
	call draw_member_name_
	db 083h,0c4h,004h,0ffh,04eh,0fah
l5cdb:
	db 0e9h,0c1h,000h
l5cde:
	db 083h,07eh,0fah,0ffh,074h,01dh,0ffh,076h,0fah,0ffh,076h,0fch
	call draw_member_name_
	db 083h,0c4h,004h,08bh,046h,0fah,048h,048h,07ch,005h,089h,046h,0fah,0ebh,005h
l5cfc:
	db 0c7h,046h,0fah,0ffh,0ffh
l5d01:
	db 0e9h,09bh,000h
l5d04:
	db 08bh,046h,0fah,03dh,0ffh,0ffh,074h,026h,0b9h,002h,000h,099h,0f7h,0f9h,08bh,0c2h
	db 03dh,001h,000h,07dh,019h,08bh,046h,0fah,040h,03bh,006h,0ceh,043h,07dh,00fh,0ffh
	db 076h,0fah,0ffh,076h,0fch
	call draw_member_name_
	db 083h,0c4h,004h,0ffh,046h,0fah
l5d32:
	db 0ebh,06bh
l5d34:
	db 083h,07eh,0fah,0ffh,075h,029h,0ffh,076h,092h,0ffh,076h,094h,0ffh,036h,042h,033h
	call set_cursor_
	db 083h,0c4h,006h,0b8h,003h,000h,050h,08dh,046h,0a0h,050h,0ffh,036h,042h,033h
	call print_string_hi_
	db 083h,0c4h,006h,0c7h,046h,0fah,000h,000h,0ebh,01dh
l5d63:
	db 08bh,046h,0fah,040h,040h,03bh,006h,0ceh,043h,07dh,012h,0ffh,076h,0fah,0ffh,076h
	db 0fch
	call draw_member_name_
	db 083h,0c4h,004h,0ffh,046h,0fah,0ffh,046h,0fah
l5d80:
	db 0ebh,01dh
l5d82:
	db 03dh,001h,000h,075h,003h,0e9h,02ch,0ffh
l5d8a:
	db 03dh,002h,000h,075h,003h,0e9h,04ch,0ffh
l5d92:
	db 03dh,003h,000h,075h,003h,0e9h,06ah,0ffh
l5d9a:
	db 03dh,004h,000h,074h,095h
l5d9f:
	db 083h,07eh,0feh,005h,074h,003h,0e9h,068h,0feh
l5da8:
	db 0b8h,000h,000h,050h,0ffh,076h,0fch
	call destroy_window_
	db 083h,0c4h,004h,08bh,046h,0fah,0e9h,089h,0fch
#endasm
