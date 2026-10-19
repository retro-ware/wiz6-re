/* Chest menu: open, inspect, disarm, cast spell; returns 0 when the chest is resolved. */
#asm
	public handle_chest_
	extrn cast_spell_on_chest_:near
	extrn chest_menu_select_:near
	extrn choose_party_member_:near
	extrn clear_window_:near
	extrn clear_window_area_:near
	extrn close_chest_windows_:near
	extrn create_window_:near
	extrn defer_window_draw_:near
	extrn disarm_chest_:near
	extrn f0a42_:near
	extrn fill_window_:near
	extrn get_message_:near
	extrn inspect_chest_:near
	extrn is_member_able_:near
	extrn pick_chest_trap_:near
	extrn play_sound_:near
	extrn print_chest_prompt_:near
	extrn print_message_:near
	extrn put_glyph_c1_:near
	extrn refresh_all_windows_:near
	extrn resume_window_draw_:near
	extrn set_cursor_:near
	extrn show_centered_line_:near
	extrn spring_trap_:near
handle_chest_:
	db 055h,08bh,0ech,083h,0c4h,084h,0c7h,006h,026h,050h,000h,000h,08bh,05eh,004h,08ah
	db 047h,027h,02ah,0e4h,0ebh,018h
l911b:
	db 0c7h,006h,024h,050h,0ffh,0ffh,0ebh,01fh
l9123:
	db 0c7h,006h,024h,050h,000h,000h,0ebh,017h
l912b:
	db 0c7h,006h,024h,050h,001h,000h,0ebh,00fh
l9133:
	db 03dh,000h,000h,074h,0e3h,03dh,001h,000h,074h,0e6h,03dh,002h,000h,074h,0e9h
l9142:
	db 0ffh,076h,004h
	call pick_chest_trap_
	db 059h,0ffh,036h,042h,033h
	call resume_window_draw_
	db 059h,0ffh,036h,0b2h,04fh
	call resume_window_draw_
	db 059h,0b8h,000h,000h,050h,0ffh,036h,0b2h,04fh
	call f0a42_
	db 083h,0c4h,004h,0b8h,000h,000h,050h,050h,0b8h,0fch,0ffh,050h,0b8h,014h,000h,050h
	db 0b8h,005h,000h,050h,0b8h,013h,000h,050h,050h,0b8h,000h,000h,050h
	call create_window_
	db 083h,0c4h,010h,089h,046h,0f6h,0b8h,000h,000h,050h,0b8h,003h,000h,050h,0b8h,020h
	db 000h,050h,0ffh,076h,0f6h
	call fill_window_
	db 083h,0c4h,008h,0b8h,000h,000h,050h,050h,0b8h,0fbh,0ffh,050h,0b8h,015h,000h,050h
	db 0b8h,005h,000h,050h,0b8h,014h,000h,050h,0b8h,013h,000h,050h,0b8h,014h,000h,050h
	call create_window_
	db 083h,0c4h,010h,089h,046h,0f4h,0b8h,000h,000h,050h,0b8h,003h,000h,050h,0b8h,020h
	db 000h,050h,0ffh,076h,0f4h
	call fill_window_
	db 083h,0c4h,008h,0ffh,076h,0f4h
	call defer_window_draw_
	db 059h,0b8h,000h,000h,050h,0b8h,004h,000h,050h,0ffh,076h,0f4h
	call set_cursor_
	db 083h,0c4h,006h,0b8h,012h,000h,050h,0ffh,076h,0f4h,0b8h,06ah,014h,050h
	call print_message_
	db 083h,0c4h,006h,0b8h,011h,000h,050h,0b8h,001h,000h,050h,0b8h,000h,000h,050h,0ffh
	db 076h,0f4h
	call put_glyph_c1_
	db 083h,0c4h,008h,0b8h,013h,000h,050h,0b8h,001h,000h,050h,0b8h,013h,000h,050h,0ffh
	db 076h,0f4h
	call put_glyph_c1_
	db 083h,0c4h,008h,0b8h,006h,000h,050h,0b8h,003h,000h,050h,0b8h,000h,000h,050h,0ffh
	db 076h,0f4h
	call put_glyph_c1_
	db 083h,0c4h,008h,0b8h,008h,000h,050h,0b8h,003h,000h,050h,0b8h,013h,000h,050h,0ffh
	db 076h,0f4h
	call put_glyph_c1_
	db 083h,0c4h,008h,0c7h,046h,0feh,001h,000h
l925c:
	db 0b8h,012h,000h,050h,0b8h,001h,000h,050h,0ffh,076h,0feh,0ffh,076h,0f4h
	call put_glyph_c1_
	db 083h,0c4h,008h,0b8h,007h,000h,050h,0b8h,003h,000h,050h,0ffh,076h,0feh,0ffh,076h
	db 0f4h
	call put_glyph_c1_
	db 083h,0c4h,008h,0ffh,046h,0feh,08bh,046h,0feh,03dh,013h,000h,07ch,0cdh,0b8h,004h
	db 000h,050h,0b8h,002h,000h,050h,0b8h,000h,000h,050h,0ffh,076h,0f4h
	call put_glyph_c1_
	db 083h,0c4h,008h,0b8h,005h,000h,050h,0b8h,002h,000h,050h,0b8h,013h,000h,050h,0ffh
	db 076h,0f4h
	call put_glyph_c1_
	db 083h,0c4h,008h,0b8h,002h,000h,050h,0b8h,012h,000h,050h,0b8h,002h,000h,050h,0b8h
	db 001h,000h,050h,0ffh,076h,0f4h
	call clear_window_area_
	db 083h,0c4h,00ah,0ffh,076h,0f4h
	call resume_window_draw_
	db 059h,0c7h,006h,0d0h,051h,000h,000h,0c7h,046h,0feh,000h,000h
l92e4:
	db 08bh,05eh,0feh,0c6h,087h,0bch,051h,000h,0d1h,0e3h,0c7h,087h,094h,051h,000h,000h
	db 0ffh,046h,0feh,08bh,046h,0feh,03dh,014h,000h,07ch,0e5h,0c7h,046h,0feh,000h,000h
	db 0ebh,011h
l9306:
	db 08bh,046h,0feh,0d1h,0e0h,08bh,0d8h,003h,0ddh,0c7h,047h,0d4h,000h,000h,0ffh,046h
	db 0feh
l9317:
	db 08bh,046h,0feh,03bh,006h,0ceh,043h,07ch,0e6h,0c7h,046h,0feh,000h,000h
l9325:
	db 08bh,046h,0feh,0d1h,0e0h,08bh,0d8h,003h,0ddh,0c7h,047h,0e0h,001h,000h,0ffh,046h
	db 0feh,08bh,046h,0feh,03dh,004h,000h,07eh,0e7h,0c7h,046h,0eah,0ffh,0ffh
l9343:
	db 0b8h,002h,000h,050h,0b8h,050h,014h,050h
	call print_chest_prompt_
	db 083h,0c4h,004h,0b8h,000h,000h,050h,0b8h,003h,000h,050h,0b8h,020h,000h,050h,0ffh
	db 076h,0f6h
	call fill_window_
	db 083h,0c4h,008h
	call refresh_all_windows_
	db 0b8h,000h,000h,050h,0b8h,005h,000h,050h,0b8h,003h,000h,050h,0b8h,00ah,000h,050h
	db 0b8h,001h,000h,050h,0b8h,002h,000h,050h,08dh,046h,0e0h,050h,0b8h,051h,014h,050h
	db 0ffh,076h,0f6h
	call chest_menu_select_
	db 083h,0c4h,012h,089h,046h,0f8h,0e9h,056h,002h,0b8h,000h,000h,050h,0b8h,069h,014h
	db 050h
	call choose_party_member_
	db 083h,0c4h,004h,089h,046h,0fah,03dh,0ffh,0ffh,074h,02fh,050h
	call is_member_able_
	db 059h,085h,0c0h,074h,026h,0c7h,006h,01eh,050h,001h,000h,0ffh,076h,0f4h,0ffh,076h
	db 0f6h
	call close_chest_windows_
	db 083h,0c4h,004h,0ffh,076h,0fah,0ffh,036h,092h,051h
	call spring_trap_
	db 083h,0c4h,004h,0b8h,000h,000h
l93d9:
	db 08bh,0e5h,05dh,0c3h
l93dd:
	db 0e9h,01bh,002h,0b8h,000h,000h,050h,0b8h,067h,014h,050h
	call choose_party_member_
	db 083h,0c4h,004h,089h,046h,0fah,03dh,0ffh,0ffh,074h,03bh,0d1h,0e0h,08bh,0d8h,003h
	db 0ddh,083h,07fh,0d4h,000h,075h,027h,0ffh,076h,0fah
	call is_member_able_
	db 059h,085h,0c0h,074h,01ah,0ffh,076h,0fah,0ffh,076h,0f4h
	call inspect_chest_
	db 083h,0c4h,004h,08bh,046h,0fah,0d1h,0e0h,08bh,0d8h,003h,0ddh,0c7h,047h,0d4h,001h
	db 000h
l9427:
	db 0ebh,008h
l9429:
	db 0b8h,000h,000h,050h
	call play_sound_
	db 059h
l9431:
	db 0e9h,0c7h,001h,0b8h,000h,000h,050h,0b8h,064h,014h,050h
	call choose_party_member_
	db 083h,0c4h,004h,089h,046h,0fah,03dh,0ffh,0ffh,075h,003h,0e9h,001h,001h
l944d:
	db 050h
	call is_member_able_
	db 059h,085h,0c0h,075h,003h,0e9h,0f5h,000h
l9459:
	db 0ffh,076h,004h,0ffh,076h,0fah
	call disarm_chest_
	db 083h,0c4h,004h,089h,046h,0feh,0ffh,076h,0f6h
	call defer_window_draw_
	db 059h,0ffh,076h,0f4h
	call defer_window_draw_
	db 059h,0ffh,036h,042h,033h
	call defer_window_draw_
	db 059h,0ffh,036h,0b2h,04fh
	call defer_window_draw_
	db 059h,0b8h,000h,000h,050h,0ffh,036h,0b6h,04fh
	call clear_window_
	db 083h,0c4h,004h
	call refresh_all_windows_
	db 083h,07eh,0feh,001h,075h,040h,0c7h,006h,01eh,050h,001h,000h,08dh,046h,084h,050h
	db 0b8h,06dh,014h,050h
	call get_message_
	db 083h,0c4h,004h,0b8h,007h,000h,050h,0b8h,001h,000h,050h,08dh,046h,084h,050h,0ffh
	db 036h,0c8h,050h,0ffh,036h,0b6h,04fh
	call show_centered_line_
	db 083h,0c4h,00ah,0ffh,076h,0f4h,0ffh,076h,0f6h
	call close_chest_windows_
	db 083h,0c4h,004h,0b8h,000h,000h,0e9h,0fch,0feh
l94dd:
	db 083h,07eh,0feh,0ffh,075h,025h,0c7h,006h,01eh,050h,001h,000h,0ffh,076h,0f4h,0ffh
	db 076h,0f6h
	call close_chest_windows_
	db 083h,0c4h,004h,0ffh,076h,0fah,0ffh,036h,092h,051h
	call spring_trap_
	db 083h,0c4h,004h,0b8h,000h,000h,0e9h,0d1h,0feh
l9508:
	db 08dh,046h,084h,050h,0b8h,06eh,014h,050h
	call get_message_
	db 083h,0c4h,004h,0b8h,007h,000h,050h,0b8h,001h,000h,050h,08dh,046h,084h,050h,0ffh
	db 036h,0c8h,050h,0ffh,036h,0b6h,04fh
	call show_centered_line_
	db 083h,0c4h,00ah,0ffh,076h,0f6h
	call resume_window_draw_
	db 059h,0ffh,076h,0f4h
	call resume_window_draw_
	db 059h,0ffh,036h,042h,033h
	call resume_window_draw_
	db 059h,0ffh,036h,0b2h,04fh
	call resume_window_draw_
	db 059h
l954e:
	db 0e9h,0aah,000h,0b8h,000h,000h,050h,0b8h,068h,014h,050h
	call choose_party_member_
	db 083h,0c4h,004h,089h,046h,0fah,03dh,0ffh,0ffh,074h,069h,050h
	call is_member_able_
	db 059h,085h,0c0h,074h,060h,0c7h,006h,0d2h,051h,000h,000h,0ffh,076h,0fah,0ffh,076h
	db 0f4h,0ffh,076h,0f6h
	call cast_spell_on_chest_
	db 083h,0c4h,006h,083h,03eh,0d2h,051h,001h,075h,018h,0c7h,006h,01eh,050h,001h,000h
	db 0ffh,076h,0f4h,0ffh,076h,0f6h
	call close_chest_windows_
	db 083h,0c4h,004h,0b8h,000h,000h,0e9h,035h,0feh
l95a4:
	db 083h,03eh,0d2h,051h,0ffh,075h,025h,0c7h,006h,01eh,050h,001h,000h,0ffh,076h,0f4h
	db 0ffh,076h,0f6h
	call close_chest_windows_
	db 083h,0c4h,004h,0ffh,076h,0fah,0ffh,036h,092h,051h
	call spring_trap_
	db 083h,0c4h,004h,0b8h,000h,000h,0e9h,009h,0feh
l95d0:
	db 0ebh,029h,0ffh,076h,0f4h,0ffh,076h,0f6h
	call close_chest_windows_
	db 083h,0c4h,004h,0b8h,0ffh,0ffh,0e9h,0f5h,0fdh,0e0h,093h,034h,094h,098h,093h,051h
	db 095h,0d2h,095h
l95ee:
	db 03dh,005h,000h,073h,008h,093h,0d1h,0e3h,02eh,0ffh,0a7h,0e4h,095h
l95fb:
	db 0e9h,045h,0fdh,0e9h,0d8h,0fdh
#endasm
