/* Show 'INSERT DISK' window and wait until the right disk (DISK.HDR) is present; reopen data files. */
#asm
	public prompt_insert_disk_
	extrn check_screen_click_:near
	extrn close_:near
	extrn create_window_:near
	extrn defer_window_draw_:near
	extrn destroy_window_:near
	extrn erase_window_:near
	extrn exit_game_:near
	extrn fill_window_:near
	extrn flush_keys_:near
	extrn get_key_:near
	extrn key_available_:near
	extrn make_data_path_:near
	extrn open_:near
	extrn print_string_hi_:near
	extrn read_:near
	extrn refresh_all_windows_:near
	extrn refresh_window_:near
	extrn replace_char_with_string_:near
	extrn resume_window_draw_:near
	extrn set_cursor_:near
	extrn stop_sound_:near
	extrn strcat_:near
	extrn strcpy_:near
	extrn strlen_:near
prompt_insert_disk_:
	db 055h,08bh,0ech,081h,0c4h,04eh,0ffh
	call stop_sound_
	db 08bh,046h,006h,089h,086h,04eh,0ffh,0ffh,076h,004h,08dh,046h,084h,050h
	call strcpy_
	db 083h,0c4h,004h,083h,07eh,008h,000h,074h,010h,0ffh,036h,044h,008h
	call close_
	db 059h,0ffh,036h,042h,008h
	call close_
	db 059h
l0d5a:
	db 083h,03eh,042h,033h,000h,074h,00eh,0b8h,000h,000h,050h,0ffh,036h,042h,033h
	call erase_window_
	db 083h,0c4h,004h
l0d6f:
	db 0b8h,000h,000h,050h,050h,0b8h,0ffh,0ffh,050h,0b8h,01fh,000h,050h,0b8h,006h,000h
	db 050h,0b8h,028h,000h,050h,0b8h,013h,000h,050h,0b8h,000h,000h,050h
	call create_window_
	db 083h,0c4h,010h,089h,046h,0feh,0c7h,086h,052h,0ffh,0feh,0ffh,080h,03eh,092h,035h
	db 005h,075h,04fh,083h,07eh,006h,000h,075h,008h,0c7h,086h,052h,0ffh,001h,000h,0ebh
	db 041h
l0db0:
	db 083h,07eh,006h,002h,07eh,03bh,0b8h,000h,000h,050h,0b8h,07ch,005h,050h
	call open_
	db 083h,0c4h,004h,089h,086h,05ah,0ffh,03dh,0ffh,0ffh,075h,00eh,08bh,046h,006h,089h
	db 086h,052h,0ffh,0c7h,046h,006h,002h,000h,0ebh,016h
l0ddb:
	db 0ffh,0b6h,05ah,0ffh
	call close_
	db 059h,0b8h,054h,035h,050h,08dh,046h,084h,050h
	call strcpy_
	db 083h,0c4h,004h
l0df1:
	db 0c7h,086h,054h,0ffh,000h,000h
l0df7:
	db 0ffh,076h,0feh
	call defer_window_draw_
	db 059h,0b8h,000h,000h,050h,0b8h,003h,000h,050h,0b8h,020h,000h,050h,0ffh,076h,0feh
	call fill_window_
	db 083h,0c4h,008h,083h,07eh,006h,000h,07dh,010h,0b8h,086h,005h,050h,08dh,046h,0ach
	db 050h
	call strcpy_
	db 083h,0c4h,004h,0ebh,030h
l0e29:
	db 08bh,046h,006h,005h,041h,000h,088h,086h,05ch,0ffh,0c6h,086h,05dh,0ffh,000h,0b8h
	db 09bh,005h,050h,08dh,046h,0ach,050h
	call strcpy_
	db 083h,0c4h,004h,0b8h,05eh,000h,050h,08dh,086h,05ch,0ffh,050h,08dh,046h,0ach,050h
	call replace_char_with_string_
	db 083h,0c4h,006h
l0e59:
	db 08dh,046h,0ach,050h
	call strlen_
	db 059h,040h,0b9h,002h,000h,099h,0f7h,0f9h,08bh,0c8h,0b8h,014h,000h,02bh,0c1h,089h
	db 086h,056h,0ffh,0b8h,001h,000h,050h,0ffh,0b6h,056h,0ffh,0ffh,076h,0feh
	call set_cursor_
	db 083h,0c4h,006h,0b8h,003h,000h,050h,08dh,046h,0ach,050h,0ffh,076h,0feh
	call print_string_hi_
	db 083h,0c4h,006h,0b8h,0abh,005h,050h,08dh,046h,0ach,050h
	call strcpy_
	db 083h,0c4h,004h,0b8h,05eh,000h,050h,08dh,046h,084h,050h,08dh,046h,0ach,050h
	call replace_char_with_string_
	db 083h,0c4h,006h,0b8h,002h,000h,050h,0ffh,0b6h,056h,0ffh,0ffh,076h,0feh
	call set_cursor_
	db 083h,0c4h,006h,0b8h,003h,000h,050h,08dh,046h,0ach,050h,0ffh,076h,0feh
	call print_string_hi_
	db 083h,0c4h,006h,0b8h,0b8h,005h,050h,08dh,046h,0ach,050h
	call strcpy_
	db 083h,0c4h,004h,0c6h,046h,0b2h,015h,0b8h,004h,000h,050h,08dh,046h,0ach,050h
	call strlen_
	db 059h,040h,0b9h,002h,000h,099h,0f7h,0f9h,08bh,0c8h,0b8h,014h,000h,02bh,0c1h,050h
	db 0ffh,076h,0feh
	call set_cursor_
	db 083h,0c4h,006h,0b8h,003h,000h,050h,08dh,046h,0ach,050h,0ffh,076h,0feh
	call print_string_hi_
	db 083h,0c4h,006h,0ffh,076h,0feh
	call resume_window_draw_
	db 059h
	call refresh_all_windows_
	call flush_keys_
	db 0c7h,046h,0fch,001h,000h
l0f30:
	call check_screen_click_
	db 085h,0c0h,074h,005h,0c7h,046h,0fch,000h,000h
l0f3c:
	db 0b8h,001h,000h,050h
	call key_available_
	db 059h,03dh,001h,000h,075h,011h,0b8h,001h,000h,050h
	call get_key_
	db 059h,03ch,00dh,075h,005h,0c7h,046h,0fch,000h,000h
l0f5a:
	db 083h,07eh,0fch,000h,075h,0d0h,0b8h,000h,000h,050h,0b8h,003h,000h,050h,0b8h,020h
	db 000h,050h,0ffh,076h,0feh
	call fill_window_
	db 083h,0c4h,008h,0ffh,076h,0feh
	call refresh_window_
	db 059h,08dh,046h,084h,050h,08dh,086h,05ch,0ffh,050h
	call strcpy_
	db 083h,0c4h,004h,080h,03eh,092h,035h,005h,075h,063h,083h,07eh,006h,001h,074h,006h
	db 083h,07eh,006h,002h,075h,057h
l0f9e:
	db 08bh,046h,006h,0ebh,022h
l0fa3:
	db 0b8h,0c0h,005h,050h,08dh,086h,05ch,0ffh,050h
	call strcat_
	db 083h,0c4h,004h,0ebh,01bh
l0fb4:
	db 0b8h,0cch,005h,050h,08dh,086h,05ch,0ffh,050h
	call strcat_
	db 083h,0c4h,004h,0ebh,00ah
l0fc5:
	db 03dh,001h,000h,074h,0d9h,03dh,002h,000h,074h,0e5h
l0fcf:
	db 0b8h,000h,000h,050h,08dh,086h,05ch,0ffh,050h
	call open_
	db 083h,0c4h,004h,089h,086h,05ah,0ffh,03dh,0ffh,0ffh,074h,00bh,0c7h,086h,054h,0ffh
	db 001h,000h,050h
	call close_
	db 059h
l0ff2:
	db 0e9h,08eh,000h
l0ff5:
	db 0b8h,0d6h,005h,050h,08dh,086h,05ch,0ffh,050h
	call strcat_
	db 083h,0c4h,004h,0b8h,000h,000h,050h,08dh,086h,05ch,0ffh,050h
	call open_
	db 083h,0c4h,004h,089h,086h,05ah,0ffh,083h,07eh,006h,000h,07dh,014h,03dh,0ffh,0ffh
	db 075h,008h,0c7h,086h,054h,0ffh,001h,000h,0ebh,005h
l102a:
	db 050h
	call close_
	db 059h
l102f:
	db 0ebh,052h
l1031:
	db 083h,0beh,05ah,0ffh,0ffh,074h,04bh,0b8h,0bch,002h,050h,0b8h,044h,030h,050h,0ffh
	db 0b6h,05ah,0ffh
	call read_
	db 083h,0c4h,006h,089h,086h,058h,0ffh,080h,03eh,092h,035h,005h,075h,00ch,08bh,046h
	db 006h,03dh,000h,000h,07eh,004h,048h,048h,0ebh,003h
l1061:
	db 08bh,046h,006h
l1064:
	db 089h,086h,050h,0ffh,083h,0beh,058h,0ffh,000h,07eh,00ch,03bh,006h,044h,030h,075h
	db 006h,0c7h,086h,054h,0ffh,001h,000h
l107b:
	db 0ffh,0b6h,05ah,0ffh
	call close_
	db 059h
l1083:
	db 083h,0beh,054h,0ffh,000h,075h,003h,0e9h,06ah,0fdh
l108d:
	db 08bh,086h,052h,0ffh,089h,046h,006h,0c7h,086h,052h,0ffh,0feh,0ffh,0b8h,054h,035h
	db 050h,08dh,046h,084h,050h
	call strcpy_
	db 083h,0c4h,004h,083h,07eh,006h,0feh,074h,003h,0e9h,040h,0fdh
l10b1:
	call flush_keys_
	db 0b8h,000h,000h,050h,0ffh,076h,0feh
	call destroy_window_
	db 083h,0c4h,004h,083h,07eh,00ah,000h,074h,059h,0b8h,000h,000h,050h,050h,0b8h,0dfh
	db 005h,050h
	call make_data_path_
	db 083h,0c4h,004h,050h
	call open_
	db 083h,0c4h,004h,0a3h,044h,008h,03dh,0ffh,0ffh,075h,008h,0b8h,011h,000h,050h
	call exit_game_
	db 059h
l10ed:
	db 0b8h,000h,000h,050h,0b8h,001h,000h,083h,0beh,04eh,0ffh,000h,075h,003h,0b8h,000h
	db 000h
l10fe:
	db 050h,0b8h,0e7h,005h,050h
	call make_data_path_
	db 083h,0c4h,004h,050h
	call open_
	db 083h,0c4h,004h,0a3h,042h,008h,03dh,0ffh,0ffh,075h,008h,0b8h,012h,000h,050h
	call exit_game_
	db 059h
l1120:
	db 08bh,0e5h,05dh,0c3h
#endasm
