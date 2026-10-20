/* Game configuration menu (sound, delay, level, input, gmode, drives); saves to SCENARIO.HDR. */
#asm
	public do_game_configuration_
	extrn clear_click_flag_:near
	extrn clear_window_area_:near
	extrn close_:near
	extrn create_window_:near
	extrn defer_window_draw_:near
	extrn destroy_window_:near
	extrn draw_setting_value_:near
	extrn drv_mouse_shutdown_:near
	extrn drv_op_96_:near
	extrn erase_window_:near
	extrn exit_game_:near
	extrn f0a42_:near
	extrn fill_window_:near
	extrn get_menu_choice_:near
	extrn get_menu_choice_animated_:near
	extrn get_message_:near
	extrn input_text_:near
	extrn lseek_:near
	extrn make_data_path_:near
	extrn open_:near
	extrn play_sound_:near
	extrn print_message_:near
	extrn print_string_:near
	extrn print_string_hi_:near
	extrn refresh_all_windows_:near
	extrn resume_window_draw_:near
	extrn set_click_region_:near
	extrn set_cursor_:near
	extrn show_error_text_:near
	extrn show_message_line_:near
	extrn stop_sound_:near
	extrn strlen_:near
	extrn write_:near
do_game_configuration_:
	db 055h,08bh,0ech,083h,0c4h,092h,0b8h,066h,050h,050h,0b8h,0e8h,003h,050h
	call get_message_
	db 083h,0c4h,004h,0c7h,046h,0ceh,000h,000h,0b8h,000h,000h,050h,050h,0b8h,0ffh,0ffh
	db 050h,0b8h,016h,000h,050h,0b8h,005h,000h,050h,0b8h,028h,000h,050h,0b8h,013h,000h
	db 050h,0b8h,000h,000h,050h
	call create_window_
	db 083h,0c4h,010h,089h,046h,0fah,0b8h,000h,000h,050h,0b8h,003h,000h,050h,0b8h,020h
	db 000h,050h,0ffh,076h,0fah
	call fill_window_
	db 083h,0c4h,008h,0b8h,000h,000h,050h,0ffh,036h,042h,033h
	call erase_window_
	db 083h,0c4h,004h,0b8h,000h,000h,050h,0ffh,036h,0b2h,04fh
	call erase_window_
	db 083h,0c4h,004h,08dh,046h,0e8h,050h,0b8h,004h,009h,050h
	call get_message_
	db 083h,0c4h,004h,08dh,046h,0deh,050h,0b8h,005h,009h,050h
	call get_message_
	db 083h,0c4h,004h,0b8h,003h,009h,050h
	call show_message_line_
	db 059h,08bh,01eh,042h,033h,08ah,047h,006h,02ah,0e4h,089h,046h,0dch,08ah,047h,007h
	db 02ah,0e4h,089h,046h,0dah,0ffh,076h,0fah
	call defer_window_draw_
	db 059h,0c7h,046h,0feh,000h,000h
l7769:
	db 0ffh,076h,0feh,0b8h,001h,000h,050h,0ffh,076h,0fah
	call set_cursor_
	db 083h,0c4h,006h,0b8h,012h,000h,050h,0ffh,076h,0fah,08bh,046h,0feh,005h,0fch,008h
	db 050h
	call print_message_
	db 083h,0c4h,006h,0b8h,006h,000h,08bh,04eh,0feh,083h,0f9h,002h,07dh,003h,0b8h,005h
	db 000h
l779b:
	db 050h,051h,051h,0ffh,076h,0fah
	call draw_setting_value_
	db 083h,0c4h,008h,0b8h,009h,000h,083h,07eh,0feh,001h,074h,00ch,0b8h,013h,000h,083h
	db 07eh,0feh,005h,07dh,003h,0b8h,007h,000h
l77bc:
	db 089h,046h,0d8h,0b8h,001h,000h,083h,07eh,0feh,001h,074h,00ch,0b8h,014h,000h,083h
	db 07eh,0feh,005h,07dh,003h,0b8h,00ah,000h
l77d4:
	db 089h,046h,0d4h,08bh,05eh,0fah,08ah,047h,003h,02ah,0e4h,003h,046h,0feh,050h,08ah
	db 047h,002h,02ah,0e4h,003h,046h,0d8h,003h,046h,0d4h,048h,050h,08ah,047h,003h,02ah
	db 0e4h,003h,046h,0feh,050h,08ah,047h,002h,02ah,0e4h,003h,046h,0d8h,050h,0ffh,076h
	db 0feh
	call set_click_region_
	db 083h,0c4h,00ah,0ffh,046h,0feh,08bh,046h,0feh,03dh,005h,000h,07dh,003h,0e9h,050h
	db 0ffh
l7819:
	db 0b8h,000h,000h,050h,0b8h,016h,000h,050h,0ffh,076h,0fah
	call set_cursor_
	db 083h,0c4h,006h,0b8h,012h,000h,050h,0ffh,076h,0fah,0b8h,001h,009h,050h
	call print_message_
	db 083h,0c4h,006h,0b8h,001h,000h,050h,0b8h,026h,000h,050h,0b8h,001h,000h,050h,0b8h
	db 013h,000h,050h,0ffh,076h,0fah
	call clear_window_area_
	db 083h,0c4h,00ah,0b8h,007h,000h,050h,0b8h,001h,000h,050h,0b8h,005h,000h,050h,0ffh
	db 076h,0fah
	call draw_setting_value_
	db 083h,0c4h,008h,08bh,05eh,0fah,08ah,047h,003h,02ah,0e4h,040h,050h,08ah,047h,002h
	db 02ah,0e4h,005h,026h,000h,050h,08ah,047h,003h,02ah,0e4h,040h,050h,08ah,047h,002h
	db 02ah,0e4h,005h,013h,000h,050h,0b8h,005h,000h,050h
	call set_click_region_
	db 083h,0c4h,00ah,0b8h,002h,000h,050h,0b8h,016h,000h,050h,0ffh,076h,0fah
	call set_cursor_
	db 083h,0c4h,006h,0b8h,012h,000h,050h,0ffh,076h,0fah,0b8h,002h,009h,050h
	call print_message_
	db 083h,0c4h,006h,0b8h,003h,000h,050h,0b8h,026h,000h,050h,0b8h,003h,000h,050h,0b8h
	db 013h,000h,050h,0ffh,076h,0fah
	call clear_window_area_
	db 083h,0c4h,00ah,0b8h,004h,000h,050h,0b8h,003h,000h,050h,0b8h,006h,000h,050h,0ffh
	db 076h,0fah
	call draw_setting_value_
	db 083h,0c4h,008h,08bh,05eh,0fah,08ah,047h,003h,02ah,0e4h,040h,040h,040h,050h,08ah
	db 047h,002h,02ah,0e4h,005h,026h,000h,050h,08ah,047h,003h,02ah,0e4h,040h,040h,040h
	db 050h,08ah,047h,002h,02ah,0e4h,005h,013h,000h,050h,0b8h,006h,000h,050h
	call set_click_region_
	db 083h,0c4h,00ah,0b8h,004h,000h,050h,0b8h,026h,000h,050h,0b8h,004h,000h,050h,0b8h
	db 013h,000h,050h,0ffh,076h,0fah
	call clear_window_area_
	db 083h,0c4h,00ah,0b8h,004h,000h,050h,050h,0b8h,007h,000h,050h,0ffh,076h,0fah
	call draw_setting_value_
	db 083h,0c4h,008h,08bh,05eh,0fah,08ah,047h,003h,02ah,0e4h,005h,004h,000h,050h,08ah
	db 047h,002h,02ah,0e4h,005h,026h,000h,050h,08ah,047h,003h,02ah,0e4h,005h,004h,000h
	db 050h,08ah,047h,002h,02ah,0e4h,005h,013h,000h,050h,0b8h,007h,000h,050h
	call set_click_region_
	db 083h,0c4h,00ah,08bh,05eh,0fah,08ah,047h,003h,02ah,0e4h,040h,050h,08ah,047h,002h
	db 02ah,0e4h,005h,008h,000h,050h,08ah,047h,003h,02ah,0e4h,040h,050h,08ah,047h,002h
	db 02ah,0e4h,005h,007h,000h,050h,0b8h,008h,000h,050h
	call set_click_region_
	db 083h,0c4h,00ah,08bh,01eh,042h,033h,08ah,047h,003h,02ah,0e4h,003h,046h,0dah,050h
	db 08dh,046h,0deh,050h
	call strlen_
	db 059h,050h,08bh,01eh,042h,033h,08ah,047h,002h,02ah,0e4h,08bh,0c8h,058h,003h,0c1h
	db 003h,046h,0dch,048h,050h,08ah,047h,003h,02ah,0e4h,003h,046h,0dah,050h,003h,04eh
	db 0dch,08bh,0c1h,050h,0b8h,009h,000h,050h
	call set_click_region_
	db 083h,0c4h,00ah,0b8h,000h,000h,050h,050h,050h,0b8h,0ffh,000h,050h,0b8h,00ah,000h
	db 050h
	call set_click_region_
	db 083h,0c4h,00ah,0ffh,076h,0fah
	call resume_window_draw_
	db 059h
	call refresh_all_windows_
	db 083h,03eh,046h,008h,000h,075h,024h,0ffh,076h,0dah,0ffh,076h,0dch,0ffh,036h,042h
	db 033h
	call set_cursor_
	db 083h,0c4h,006h,0b8h,0fbh,0ffh,050h,08dh,046h,0deh,050h,0ffh,036h,042h,033h
	call print_string_
	db 083h,0c4h,006h,0ebh,022h
l7a2b:
	db 0ffh,076h,0dah,0ffh,076h,0dch,0ffh,036h,042h,033h
	call set_cursor_
	db 083h,0c4h,006h,0b8h,003h,000h,050h,08dh,046h,0e8h,050h,0ffh,036h,042h,033h
	call print_string_hi_
	db 083h,0c4h,006h
l7a4d:
	db 0c7h,046h,0f8h,0ffh,0ffh
l7a52:
	db 083h,03eh,046h,008h,000h,075h,069h,083h,07eh,0f8h,0ffh,075h,024h,0ffh,076h,0dah
	db 0ffh,076h,0dch,0ffh,036h,042h,033h
	call set_cursor_
	db 083h,0c4h,006h,0b8h,0fbh,0ffh,050h,08dh,046h,0deh,050h,0ffh,036h,042h,033h
	call print_string_
	db 083h,0c4h,006h,0ebh,03ch
l7a83:
	db 083h,07eh,0f8h,005h,07dh,015h,0b8h,0fbh,0ffh,050h,0ffh,076h,0f8h,0ffh,076h,0f8h
	db 0ffh,076h,0fah
	call draw_setting_value_
	db 083h,0c4h,008h,0ebh,021h
l7a9e:
	db 0b8h,0fbh,0ffh,050h,0b9h,003h,000h,08bh,046h,0f8h,03dh,005h,000h,075h,003h,0b9h
	db 004h,000h
l7ab0:
	db 02bh,0c1h,050h,0ffh,076h,0f8h,0ffh,076h,0fah
	call draw_setting_value_
	db 083h,0c4h,008h
l7abf:
	db 0e9h,077h,000h
l7ac2:
	db 083h,07eh,0f8h,0ffh,075h,024h,0ffh,076h,0dah,0ffh,076h,0dch,0ffh,036h,042h,033h
	call set_cursor_
	db 083h,0c4h,006h,0b8h,003h,000h,050h,08dh,046h,0e8h,050h,0ffh,036h,042h,033h
	call print_string_hi_
	db 083h,0c4h,006h,0ebh,04dh
l7aec:
	db 083h,07eh,0f8h,005h,07dh,01ch,0b8h,006h,000h,08bh,04eh,0f8h,083h,0f9h,002h,07dh
	db 003h,0b8h,005h,000h
l7b00:
	db 050h,051h,051h,0ffh,076h,0fah
	call draw_setting_value_
	db 083h,0c4h,008h,0ebh,02bh
l7b0e:
	db 0b8h,004h,000h,08bh,04eh,0f8h,083h,0f9h,005h,075h,003h,0b8h,007h,000h
l7b1c:
	db 050h,0b8h,003h,000h,083h,0f9h,005h,075h,003h,0b8h,004h,000h
l7b28:
	db 02bh,0c8h,08bh,0c1h,050h,0ffh,076h,0f8h,0ffh,076h,0fah
	call draw_setting_value_
	db 083h,0c4h,008h
l7b39:
	db 08bh,046h,0f8h,089h,046h,0f6h,083h,03eh,0ceh,04fh,019h,075h,013h,0b8h,098h,035h
	db 050h,0b8h,066h,050h,050h
	call get_menu_choice_
	db 083h,0c4h,004h,089h,046h,0f4h,0ebh,011h
l7b59:
	db 0b8h,098h,035h,050h,0b8h,066h,050h,050h
	call get_menu_choice_animated_
	db 083h,0c4h,004h,089h,046h,0f4h
l7b6a:
	db 083h,03eh,0c4h,04fh,001h,075h,030h,083h,07eh,0f4h,008h,075h,00ch,0c7h,046h,0f8h
	db 001h,000h,0c7h,046h,0f4h,001h,000h,0ebh,01eh
l7b83:
	db 0b8h,0ffh,0ffh,083h,07eh,0f4h,008h,07dh,003h,08bh,046h,0f4h
l7b8f:
	db 089h,046h,0f8h,0b8h,003h,000h,083h,07eh,0f8h,0ffh,075h,003h,0b8h,005h,000h
l7b9e:
	db 089h,046h,0f4h
l7ba1:
	db 08bh,046h,0f4h,0e9h,049h,001h
l7ba7:
	db 083h,07eh,0f8h,0ffh,075h,007h,0c7h,046h,0f8h,007h,000h,0ebh,003h
l7bb4:
	db 0ffh,04eh,0f8h
l7bb7:
	db 0e9h,056h,001h
l7bba:
	db 083h,07eh,0f8h,0ffh,075h,007h,0c7h,046h,0f8h,000h,000h,0ebh,010h
l7bc7:
	db 083h,07eh,0f8h,007h,07dh,005h,0ffh,046h,0f8h,0ebh,005h
l7bd2:
	db 0c7h,046h,0f8h,0ffh,0ffh
l7bd7:
	db 0e9h,036h,001h
l7bda:
	db 0c7h,046h,0ceh,001h,000h,0b8h,001h,000h,083h,07eh,0f4h,001h,075h,003h,0b8h,0ffh
	db 0ffh
l7beb:
	db 089h,046h,0feh,08bh,046h,0f8h,0e9h,0edh,000h,0a0h,090h,035h,02ah,0e4h,003h,046h
	db 0feh,005h,006h,000h,0b9h,006h,000h,099h,0f7h,0f9h,08bh,0c2h,0a2h,090h,035h,0e9h
	db 0e1h,000h,0a0h,091h,035h,02ah,0e4h,003h,046h,0feh,089h,046h,0fch,03dh,000h,000h
	db 07ch,00dh,03dh,0ffh,000h,07fh,008h,08ah,046h,0fch,0a2h,091h,035h,0ebh,008h
l7c2a:
	db 0b8h,000h,000h,050h
	call play_sound_
	db 059h
l7c32:
	db 0a0h,091h,035h,02ah,0e4h,0a3h,0c8h,04fh,0e9h,0b1h,000h,0a0h,093h,035h,02ah,0e4h
	db 003h,046h,0feh,040h,040h,040h,0b9h,003h,000h,099h,0f7h,0f9h,08bh,0c2h,0a2h,093h
	db 035h,0e9h,098h,000h,0a0h,094h,035h,02ah,0e4h,003h,046h,0feh,040h,040h,0b9h,002h
	db 000h,099h,0f7h,0f9h,08bh,0c2h,0a2h,094h,035h,0e9h,080h,000h,0b8h,000h,000h,050h
	call play_sound_
	db 059h,0ebh,076h,0b8h,001h,000h,050h,0b8h,026h,000h,050h,0b8h,001h,000h,050h,0b8h
	db 013h,000h,050h,0ffh,076h,0fah
	call clear_window_area_
	db 083h,0c4h,00ah,0b8h,001h,000h,050h,0b8h,013h,000h,050h,0ffh,076h,0fah
	call set_cursor_
	db 083h,0c4h,006h,0b8h,000h,000h,050h,0b8h,007h,000h,050h,0b8h,013h,000h,050h,0b8h
	db 07ch,035h,050h,0ffh,076h,0fah
	call input_text_
	db 083h,0c4h,00ah,0ebh,031h,0b8h,000h,000h,050h
	call play_sound_
	db 059h,0ebh,027h,0b8h,000h,000h,050h
	call play_sound_
	db 059h,0ebh,01dh,0f4h,07bh,00dh,07ch,03dh,07ch,056h,07ch,06eh,07ch,078h,07ch,0bdh
	db 07ch,0c7h,07ch
l7ce1:
	db 03dh,008h,000h,073h,008h,093h,0d1h,0e3h,02eh,0ffh,0a7h,0d1h,07ch
l7cee:
	db 0ebh,020h
l7cf0:
	db 03dh,001h,000h,075h,003h,0e9h,0e2h,0feh
l7cf8:
	db 03dh,002h,000h,075h,003h,0e9h,0a7h,0feh
l7d00:
	db 03dh,003h,000h,075h,003h,0e9h,0d2h,0feh
l7d08:
	db 03dh,004h,000h,075h,003h,0e9h,0aah,0feh
l7d10:
	db 083h,03eh,046h,008h,000h,074h,003h,0e9h,081h,000h
l7d1a:
	db 08bh,046h,0f6h,03bh,046h,0f8h,075h,003h,0e9h,076h,000h
l7d25:
	db 03dh,0ffh,0ffh,075h,024h,0ffh,076h,0dah,0ffh,076h,0dch,0ffh,036h,042h,033h
	call set_cursor_
	db 083h,0c4h,006h,0b8h,003h,000h,050h,08dh,046h,0e8h,050h,0ffh,036h,042h,033h
	call print_string_hi_
	db 083h,0c4h,006h,0ebh,04dh
l7d4e:
	db 083h,07eh,0f6h,005h,07dh,01ch,0b8h,006h,000h,08bh,04eh,0f6h,083h,0f9h,002h,07dh
	db 003h,0b8h,005h,000h
l7d62:
	db 050h,051h,051h,0ffh,076h,0fah
	call draw_setting_value_
	db 083h,0c4h,008h,0ebh,02bh
l7d70:
	db 0b8h,004h,000h,08bh,04eh,0f6h,083h,0f9h,005h,075h,003h,0b8h,007h,000h
l7d7e:
	db 050h,0b8h,003h,000h,083h,0f9h,005h,075h,003h,0b8h,004h,000h
l7d8a:
	db 02bh,0c8h,08bh,0c1h,050h,0ffh,076h,0f6h,0ffh,076h,0fah
	call draw_setting_value_
	db 083h,0c4h,008h
l7d9b:
	db 083h,07eh,0f4h,005h,074h,003h,0e9h,0aeh,0fch
l7da4:
	db 083h,07eh,0f8h,0ffh,074h,003h,0e9h,0a5h,0fch
l7dad:
	call stop_sound_
	db 083h,07eh,0ceh,001h,074h,003h,0e9h,07dh,000h
l7db9:
	db 08dh,046h,092h,050h,0b8h,0d2h,008h,050h
	call get_message_
	db 083h,0c4h,004h,0b8h,002h,000h,050h,0b8h,000h,000h,050h,0b8h,048h,050h,050h
	call make_data_path_
	db 083h,0c4h,004h,050h
	call open_
	db 083h,0c4h,004h,0a3h,0eah,04fh,03dh,0ffh,0ffh,075h,008h,0b8h,013h,000h,050h
	call exit_game_
	db 059h
l7df0:
	db 0b8h,000h,000h,050h,0b8h,000h,000h,0bah,000h,000h,052h,050h,0ffh,036h,0eah,04fh
	call lseek_
	db 083h,0c4h,008h,0b8h,09eh,001h,050h,0b8h,0f8h,033h,050h,0ffh,036h,0eah,04fh
	call write_
	db 083h,0c4h,006h,089h,046h,0f2h,03dh,0ffh,0ffh,075h,00eh,0b8h,000h,000h,050h,08dh
	db 046h,092h,050h
	call show_error_text_
	db 083h,0c4h,004h
l7e2e:
	db 0ffh,036h,0eah,04fh
	call close_
	db 059h
l7e36:
	db 0a0h,091h,035h,02ah,0e4h,0a3h,0c8h,04fh,0f7h,006h,0c6h,04fh,000h,010h,074h,019h
	db 080h,03eh,094h,035h,001h,075h,012h,083h,03eh,046h,008h,000h,075h,003h
	call drv_op_96_
l7e57:
	db 0c7h,006h,046h,008h,001h,000h,0ebh,010h
l7e5f:
	db 083h,03eh,046h,008h,001h,075h,003h
	call drv_mouse_shutdown_
l7e69:
	db 0c7h,006h,046h,008h,000h,000h
l7e6f:
	call clear_click_flag_
	db 0b8h,000h,000h,050h,0ffh,076h,0fah
	call destroy_window_
	db 083h,0c4h,004h,0b8h,000h,000h,050h,0ffh,036h,042h,033h
	call erase_window_
	db 083h,0c4h,004h,0b8h,000h,000h,050h,0ffh,036h,0b2h,04fh
	call f0a42_
	db 083h,0c4h,004h,08bh,0e5h,05dh,0c3h
#endasm
