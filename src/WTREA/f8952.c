/* Let the player hand out the found items to party members. */
#asm
	public distribute_loot_
	extrn choose_party_member_:near
	extrn clear_window_area_:near
	extrn create_window_:near
	extrn defer_window_draw_:near
	extrn destroy_window_:near
	extrn draw_loot_line_:near
	extrn f0a42_:near
	extrn fill_window_:near
	extrn get_chest_input_:near
	extrn get_message_:near
	extrn give_item_to_member_:near
	extrn play_sound_:near
	extrn print_chest_prompt_:near
	extrn print_int_:near
	extrn print_message_:near
	extrn print_string_:near
	extrn print_string_hi_:near
	extrn put_char_:near
	extrn put_glyph_c1_:near
	extrn refresh_all_windows_:near
	extrn refresh_window_:near
	extrn remove_loot_entry_:near
	extrn resume_window_draw_:near
	extrn set_click_region_:near
	extrn set_cursor_:near
	extrn strlen_:near
	extrn wait_animating_:near
distribute_loot_:
	db 055h,08bh,0ech,083h,0c4h,0e0h,0ffh,036h,042h,033h
	call resume_window_draw_
	db 059h,0ffh,036h,0b2h,04fh
	call resume_window_draw_
	db 059h,0b8h,000h,000h,050h,0ffh,036h,0b2h,04fh
	call f0a42_
	db 083h,0c4h,004h,0b8h,000h,000h,050h,050h,0b8h,0fch,0ffh,050h,0b8h,014h,000h,050h
	db 0b8h,005h,000h,050h,0b8h,013h,000h,050h,050h,0b8h,000h,000h,050h
	call create_window_
	db 083h,0c4h,010h,089h,046h,0f4h,0b8h,000h,000h,050h,0b8h,003h,000h,050h,0b8h,020h
	db 000h,050h,0ffh,076h,0f4h
	call fill_window_
	db 083h,0c4h,008h,0b8h,000h,000h,050h,050h,0b8h,0fbh,0ffh,050h,0b8h,015h,000h,050h
	db 0b8h,005h,000h,050h,0b8h,014h,000h,050h,0b8h,013h,000h,050h,0b8h,014h,000h,050h
	call create_window_
	db 083h,0c4h,010h,089h,046h,0f2h,0b8h,000h,000h,050h,0b8h,003h,000h,050h,0b8h,020h
	db 000h,050h,0ffh,076h,0f2h
	call fill_window_
	db 083h,0c4h,008h,0ffh,076h,0f4h
	call defer_window_draw_
	db 059h,0b8h,001h,000h,050h,0b8h,002h,000h,050h,0ffh,076h,0f4h
	call set_cursor_
	db 083h,0c4h,006h,0b8h,012h,000h,050h,0ffh,076h,0f4h,0b8h,0eeh,013h,050h
	call print_message_
	db 083h,0c4h,006h,08bh,05eh,0f4h,0feh,047h,006h,08bh,05eh,0f4h,08ah,047h,006h,02ah
	db 0e4h,089h,046h,0f0h,08ah,047h,007h,02ah,0e4h,089h,046h,0eeh,08dh,046h,0e4h,050h
	db 0b8h,0efh,013h,050h
	call get_message_
	db 083h,0c4h,004h,0b8h,003h,000h,050h,08dh,046h,0e4h,050h,0ffh,076h,0f4h
	call print_string_hi_
	db 083h,0c4h,006h,0b8h,011h,000h,050h,0b8h,002h,000h,050h,0b8h,001h,000h,050h,0ffh
	db 076h,0f4h
	call put_glyph_c1_
	db 083h,0c4h,008h,0b8h,013h,000h,050h,0b8h,002h,000h,050h,0b8h,012h,000h,050h,0ffh
	db 076h,0f4h
	call put_glyph_c1_
	db 083h,0c4h,008h,0b8h,006h,000h,050h,0b8h,004h,000h,050h,0b8h,001h,000h,050h,0ffh
	db 076h,0f4h
	call put_glyph_c1_
	db 083h,0c4h,008h,0b8h,008h,000h,050h,0b8h,004h,000h,050h,0b8h,012h,000h,050h,0ffh
	db 076h,0f4h
	call put_glyph_c1_
	db 083h,0c4h,008h,0c7h,046h,0feh,002h,000h
l8aa3:
	db 0b8h,012h,000h,050h,0b8h,002h,000h,050h,0ffh,076h,0feh,0ffh,076h,0f4h
	call put_glyph_c1_
	db 083h,0c4h,008h,0b8h,007h,000h,050h,0b8h,004h,000h,050h,0ffh,076h,0feh,0ffh,076h
	db 0f4h
	call put_glyph_c1_
	db 083h,0c4h,008h,0ffh,046h,0feh,08bh,046h,0feh,03dh,012h,000h,07ch,0cdh,0b8h,004h
	db 000h,050h,0b8h,003h,000h,050h,0b8h,001h,000h,050h,0ffh,076h,0f4h
	call put_glyph_c1_
	db 083h,0c4h,008h,0b8h,005h,000h,050h,0b8h,003h,000h,050h,0b8h,012h,000h,050h,0ffh
	db 076h,0f4h
	call put_glyph_c1_
	db 083h,0c4h,008h,0b8h,003h,000h,050h,0b8h,011h,000h,050h,0b8h,003h,000h,050h,0b8h
	db 002h,000h,050h,0ffh,076h,0f4h
	call clear_window_area_
	db 083h,0c4h,00ah,0ffh,076h,0f4h
	call resume_window_draw_
	db 059h,0c7h,046h,0f6h,000h,000h
l8b25:
	db 08bh,046h,0f6h,03bh,006h,066h,052h,07ch,005h,0ffh,04eh,0f6h,0ebh,0f2h
l8b33:
	db 0b8h,002h,000h,050h,0b8h,0edh,013h,050h
	call print_chest_prompt_
	db 083h,0c4h,004h,0ffh,076h,0f2h
	call defer_window_draw_
	db 059h,0b8h,000h,000h,050h,0b8h,003h,000h,050h,0b8h,020h,000h,050h,0ffh,076h,0f2h
	call fill_window_
	db 083h,0c4h,008h,0c7h,046h,0feh,000h,000h,0ebh,03dh
l8b64:
	db 0ffh,076h,0feh,0ffh,076h,0f2h
	call draw_loot_line_
	db 083h,0c4h,004h,08bh,05eh,0f2h,08ah,047h,003h,02ah,0e4h,003h,046h,0feh,050h,08ah
	db 047h,002h,02ah,0e4h,005h,013h,000h,050h,08ah,047h,003h,02ah,0e4h,003h,046h,0feh
	db 050h,08ah,047h,002h,02ah,0e4h,040h,050h,0ffh,076h,0feh
	call set_click_region_
	db 083h,0c4h,00ah,0ffh,046h,0feh
l8ba1:
	db 08bh,046h,0feh,03bh,006h,066h,052h,07ch,0bah,0ffh,076h,0f2h
	call resume_window_draw_
	db 059h,08bh,05eh,0f4h,08ah,047h,003h,02ah,0e4h,003h,046h,0eeh,050h,08dh,046h,0e4h
	db 050h
	call strlen_
	db 059h,050h,08bh,05eh,0f4h,08ah,047h,002h,02ah,0e4h,08bh,0c8h,058h,003h,0c1h,003h
	db 046h,0f0h,048h,050h,08ah,047h,003h,02ah,0e4h,003h,046h,0eeh,050h,003h,04eh,0f0h
	db 08bh,0c1h,050h,0ffh,036h,066h,052h
	call set_click_region_
	db 083h,0c4h,00ah,0b8h,000h,000h,050h,050h,050h,0b8h,0ffh,000h,050h,0a1h,066h,052h
	db 040h,050h
	call set_click_region_
	db 083h,0c4h,00ah
	call refresh_all_windows_
l8c09:
	db 083h,07eh,0f6h,0ffh,075h,043h,083h,03eh,046h,008h,000h,075h,020h,0ffh,076h,0eeh
	db 0ffh,076h,0f0h,0ffh,076h,0f4h
	call set_cursor_
	db 083h,0c4h,006h,0b8h,0fdh,0ffh,050h,08dh,046h,0e4h,050h,0ffh,076h,0f4h
	call print_string_
	db 083h,0c4h,006h
l8c36:
	db 0b8h,003h,000h,050h,0b8h,011h,000h,050h,0b8h,003h,000h,050h,0b8h,002h,000h,050h
	db 0ffh,076h,0f4h
	call clear_window_area_
	db 083h,0c4h,00ah,0e9h,0bah,000h
l8c52:
	db 0ffh,076h,0f6h,0b8h,015h,000h,050h,0ffh,076h,0f2h
	call set_cursor_
	db 083h,0c4h,006h,0b8h,0fdh,0ffh,050h,08bh,046h,0f6h,08bh,0d0h,0b1h,003h,0d3h,0e0h
	db 003h,0c2h,0d1h,0e0h,005h,0eeh,051h,050h,0ffh,076h,0f2h
	call print_string_
	db 083h,0c4h,006h,0b8h,003h,000h,050h,0b8h,002h,000h,050h,0ffh,076h,0f4h
	call set_cursor_
	db 083h,0c4h,006h,0b8h,00bh,000h,050h,0ffh,076h,0f4h,0b8h,0f0h,013h,050h
	call print_message_
	db 083h,0c4h,006h,0b8h,003h,000h,050h,0b8h,00ch,000h,050h,0ffh,076h,0f4h
	call set_cursor_
	db 083h,0c4h,006h,0b8h,003h,000h,050h,0b8h,004h,000h,050h,08bh,046h,0f6h,0d1h,0e0h
	db 08bh,0d8h,08bh,087h,068h,052h,0b9h,00ah,000h,099h,0f7h,0f9h,050h,0ffh,076h,0f4h
	call print_int_
	db 083h,0c4h,008h,0b8h,003h,000h,050h,0b8h,02eh,000h,050h,0ffh,076h,0f4h
	call put_char_
	db 083h,0c4h,006h,0b8h,003h,000h,050h,0b8h,001h,000h,050h,08bh,046h,0f6h,0d1h,0e0h
	db 08bh,0d8h,08bh,087h,068h,052h,0b9h,00ah,000h,099h,0f7h,0f9h,08bh,0c2h,050h,0ffh
	db 076h,0f4h
	call print_int_
	db 083h,0c4h,008h
l8d0c:
	db 0b8h,098h,035h,050h,0b8h,0beh,050h,050h
	call get_chest_input_
	db 083h,0c4h,004h,089h,046h,0f8h,083h,03eh,0c4h,04fh,001h,075h,041h,03bh,046h,0f6h
	db 075h,007h,0c7h,046h,0f8h,005h,000h,0ebh,032h
l8d30:
	db 083h,07eh,0f6h,0ffh,074h,00ch,0ffh,076h,0f6h,0ffh,076h,0f2h
	call draw_loot_line_
	db 083h,0c4h,004h
l8d42:
	db 0b8h,0ffh,0ffh,08bh,04eh,0f8h,03bh,00eh,066h,052h,07dh,002h,08bh,0c1h
l8d50:
	db 089h,046h,0f6h,0b8h,000h,000h,083h,07eh,0f6h,0ffh,075h,003h,0b8h,005h,000h
l8d5f:
	db 089h,046h,0f8h
l8d62:
	db 0e9h,005h,001h
l8d65:
	db 08bh,046h,0f8h,0e9h,0e2h,000h
l8d6b:
	db 083h,07eh,0f6h,0ffh,074h,011h,0ffh,076h,0f6h,0ffh,076h,0f2h
	call draw_loot_line_
	db 083h,0c4h,004h,0c7h,046h,0f6h,0ffh,0ffh
l8d82:
	db 0e9h,0e5h,000h
l8d85:
	db 083h,07eh,0f6h,0ffh,075h,027h,0ffh,076h,0eeh,0ffh,076h,0f0h,0ffh,076h,0f4h
	call set_cursor_
	db 083h,0c4h,006h,0b8h,003h,000h,050h,08dh,046h,0e4h,050h,0ffh,076h,0f4h
	call print_string_hi_
	db 083h,0c4h,006h,0c7h,046h,0f6h,000h,000h,0ebh,01ch
l8db2:
	db 0ffh,076h,0f6h,0ffh,076h,0f2h
	call draw_loot_line_
	db 083h,0c4h,004h,083h,07eh,0f6h,000h,07eh,005h,0ffh,04eh,0f6h,0ebh,005h
l8dc9:
	db 0c7h,046h,0f6h,0ffh,0ffh
l8dce:
	db 0e9h,099h,000h
l8dd1:
	db 083h,07eh,0f6h,0ffh,075h,025h,0ffh,076h,0eeh,0ffh,076h,0f0h,0ffh,076h,0f4h
	call set_cursor_
	db 083h,0c4h,006h,0b8h,003h,000h,050h,08dh,046h,0e4h,050h,0ffh,076h,0f4h
	call print_string_hi_
	db 083h,0c4h,006h,0c7h,046h,0f6h,000h,000h
l8dfc:
	db 0ebh,06ch
l8dfe:
	db 083h,07eh,0f6h,0ffh,075h,027h,0ffh,076h,0eeh,0ffh,076h,0f0h,0ffh,076h,0f4h
	call set_cursor_
	db 083h,0c4h,006h,0b8h,003h,000h,050h,08dh,046h,0e4h,050h,0ffh,076h,0f4h
	call print_string_hi_
	db 083h,0c4h,006h,0c7h,046h,0f6h,000h,000h,0ebh,020h
l8e2b:
	db 0ffh,076h,0f6h,0ffh,076h,0f2h
	call draw_loot_line_
	db 083h,0c4h,004h,08bh,046h,0f6h,040h,03bh,006h,066h,052h,07dh,005h,0ffh,046h,0f6h
	db 0ebh,005h
l8e46:
	db 0c7h,046h,0f6h,0ffh,0ffh
l8e4b:
	db 0ebh,01dh
l8e4d:
	db 03dh,001h,000h,075h,003h,0e9h,016h,0ffh
l8e55:
	db 03dh,002h,000h,075h,003h,0e9h,028h,0ffh
l8e5d:
	db 03dh,003h,000h,075h,003h,0e9h,06ch,0ffh
l8e65:
	db 03dh,004h,000h,074h,094h
l8e6a:
	db 083h,07eh,0f8h,005h,074h,003h,0e9h,096h,0fdh
l8e73:
	db 083h,07eh,0f6h,0ffh,074h,064h,0b8h,000h,000h,050h,0b8h,0f1h,013h,050h
	call choose_party_member_
	db 083h,0c4h,004h,089h,046h,0fah,03dh,0ffh,0ffh,074h,04eh,08bh,046h,0f6h,0d1h,0e0h
	db 08bh,0d8h,083h,0bfh,0d6h,051h,000h,07eh,040h,0ffh,076h,0f6h,0ffh,076h,0fah
	call give_item_to_member_
	db 083h,0c4h,004h,03dh,0ffh,0ffh,074h,009h,0ffh,076h,0f6h
	call remove_loot_entry_
	db 059h,0ebh,026h
l8eb7:
	db 0b8h,006h,000h,050h,0b8h,0f4h,013h,050h
	call print_chest_prompt_
	db 083h,0c4h,004h,0ffh,036h,042h,033h
	call refresh_window_
	db 059h,0b8h,000h,000h,050h
	call play_sound_
	db 059h,0ffh,036h,0cah,04fh
	call wait_animating_
	db 059h
l8edd:
	db 083h,07eh,0f6h,0ffh,075h,057h,0c7h,046h,0e0h,000h,000h,0c7h,046h,0feh,000h,000h
	db 0ebh,016h
l8eef:
	db 08bh,046h,0feh,0d1h,0e0h,08bh,0d8h,083h,0bfh,074h,052h,001h,075h,005h,0c7h,046h
	db 0e0h,001h,000h
l8f02:
	db 0ffh,046h,0feh
l8f05:
	db 08bh,046h,0feh,03bh,006h,066h,052h,07ch,0e1h,083h,07eh,0e0h,001h,075h,026h,0b8h
	db 001h,000h,050h,0b8h,0f5h,013h,050h
	call print_chest_prompt_
	db 083h,0c4h,004h,0ffh,036h,042h,033h
	call refresh_window_
	db 059h,0b8h,000h,000h,050h
	call play_sound_
	db 059h,0ffh,036h,0cah,04fh
	call wait_animating_
	db 059h
l8f3a:
	db 083h,03eh,066h,052h,000h,07eh,012h,083h,07eh,0f6h,0ffh,074h,003h,0e9h,0dbh,0fbh
l8f4a:
	db 083h,07eh,0e0h,001h,075h,003h,0e9h,0d2h,0fbh
l8f53:
	db 0b8h,000h,000h,050h,0ffh,076h,0f2h
	call destroy_window_
	db 083h,0c4h,004h,0b8h,000h,000h,050h,0ffh,076h,0f4h
	call destroy_window_
	db 083h,0c4h,004h,0ffh,036h,042h,033h
	call defer_window_draw_
	db 059h,0ffh,036h,0b2h,04fh
	call defer_window_draw_
	db 059h,08bh,0e5h,05dh,0c3h
#endasm
