/* Swag bag menu: move items between inventory and swag, drop swag. */
#asm
	public do_swag_menu_
	extrn access_scenario_record_:near
	extrn choose_item_:near
	extrn clear_window_area_:near
	extrn count_enabled_before_:near
	extrn create_window_:near
	extrn defer_window_draw_:near
	extrn destroy_window_:near
	extrn draw_inventory_panel_:near
	extrn fill_window_:near
	extrn pad_to_column_:near
	extrn play_sound_:near
	extrn print_int_:near
	extrn print_message_:near
	extrn print_string_:near
	extrn put_char_hi_:near
	extrn put_frame_char_:near
	extrn put_icon_at_:near
	extrn refresh_all_windows_:near
	extrn refresh_window_:near
	extrn remove_item_:near
	extrn remove_swag_item_:near
	extrn resume_window_draw_:near
	extrn run_menu_:near
	extrn set_cursor_:near
	extrn strcpy_:near
do_swag_menu_:
	db 055h,08bh,0ech,083h,0c4h,096h,057h,056h,0c7h,046h,0e0h,000h,000h,0b8h,000h,000h
	db 050h,050h,0b8h,0ffh,0ffh,050h,0b8h,019h,000h,050h,0b8h,010h,000h,050h,0b8h,014h
	db 000h,050h,0b8h,004h,000h,050h,0b8h,014h,000h,050h
	call create_window_
	db 083h,0c4h,010h,089h,046h,0fch
l634a:
	db 0b8h,000h,000h,050h,0b8h,001h,000h,050h,0b8h,000h,000h,050h,0ffh,076h,0fch
	call fill_window_
	db 083h,0c4h,008h,0b8h,00eh,000h,050h,0b8h,000h,000h,050h,050h,0ffh,076h,0fch
	call put_frame_char_
	db 083h,0c4h,008h,0b8h,00ah,000h,050h,0b8h,000h,000h,050h,0b8h,013h,000h,050h,0ffh
	db 076h,0fch
	call put_frame_char_
	db 083h,0c4h,008h,0b8h,00bh,000h,050h,0b8h,00fh,000h,050h,0b8h,000h,000h,050h,0ffh
	db 076h,0fch
	call put_frame_char_
	db 083h,0c4h,008h,0b8h,008h,000h,050h,0b8h,00fh,000h,050h,0b8h,013h,000h,050h,0ffh
	db 076h,0fch
	call put_frame_char_
	db 083h,0c4h,008h,0c7h,046h,0feh,001h,000h
l63b5:
	db 0b8h,00ch,000h,050h,0b8h,000h,000h,050h,0ffh,076h,0feh,0ffh,076h,0fch
	call put_frame_char_
	db 083h,0c4h,008h,0b8h,00ch,000h,050h,0b8h,002h,000h,050h,0ffh,076h,0feh,0ffh,076h
	db 0fch
	call put_frame_char_
	db 083h,0c4h,008h,0b8h,007h,000h,050h,0b8h,00fh,000h,050h,0ffh,076h,0feh,0ffh,076h
	db 0fch
	call put_frame_char_
	db 083h,0c4h,008h,0ffh,046h,0feh,08bh,046h,0feh,03dh,013h,000h,07ch,0b9h,0c7h,046h
	db 0feh,001h,000h
l6401:
	db 0b8h,00dh,000h,050h,0ffh,076h,0feh,0b8h,000h,000h,050h,0ffh,076h,0fch
	call put_frame_char_
	db 083h,0c4h,008h,0b8h,005h,000h,050h,0ffh,076h,0feh,0b8h,013h,000h,050h,0ffh,076h
	db 0fch
	call put_frame_char_
	db 083h,0c4h,008h,0ffh,046h,0feh,08bh,046h,0feh,03dh,00fh,000h,07ch,0cdh,0b8h,021h
	db 000h,050h,0b8h,002h,000h,050h,0b8h,000h,000h,050h,0ffh,076h,0fch
	call put_frame_char_
	db 083h,0c4h,008h,0b8h,00fh,000h,050h,0b8h,009h,000h,050h,0b8h,000h,000h,050h,0ffh
	db 076h,0fch
	call put_frame_char_
	db 083h,0c4h,008h,0b8h,00fh,000h,050h,0b8h,00bh,000h,050h,0b8h,000h,000h,050h,0ffh
	db 076h,0fch
	call put_frame_char_
	db 083h,0c4h,008h,0b8h,00fh,000h,050h,0b8h,00dh,000h,050h,0b8h,000h,000h,050h,0ffh
	db 076h,0fch
	call put_frame_char_
	db 083h,0c4h,008h,0b8h,00ah,000h,050h,0b8h,002h,000h,050h,0b8h,013h,000h,050h,0ffh
	db 076h,0fch
	call put_frame_char_
	db 083h,0c4h,008h,0b8h,00eh,000h,050h,0b8h,002h,000h,050h,0b8h,011h,000h,050h,0ffh
	db 076h,0fch
	call put_frame_char_
	db 083h,0c4h,008h,0b8h,00bh,000h,050h,0b8h,00fh,000h,050h,0b8h,011h,000h,050h,0ffh
	db 076h,0fch
	call put_frame_char_
	db 083h,0c4h,008h,0c7h,046h,0feh,003h,000h
l64cc:
	db 0b8h,00dh,000h,050h,0ffh,076h,0feh,0b8h,011h,000h,050h,0ffh,076h,0fch
	call put_frame_char_
	db 083h,0c4h,008h,0ffh,046h,0feh,08bh,046h,0feh,03dh,00fh,000h,07ch,0e1h,0ffh,076h
	db 0fch
	call defer_window_draw_
	db 059h,0b8h,001h,000h,050h,050h,0ffh,076h,0fch
	call set_cursor_
	db 083h,0c4h,006h,0b8h,012h,000h,050h,0ffh,076h,0fch,0b8h,0eeh,002h,050h
	call print_message_
	db 083h,0c4h,006h,0b8h,064h,000h,050h,0b8h,001h,000h,050h,0b8h,002h,000h,050h,0ffh
	db 076h,0fch
	call put_icon_at_
	db 083h,0c4h,008h,0b8h,064h,000h,050h,0b8h,001h,000h,050h,0b8h,011h,000h,050h,0ffh
	db 076h,0fch
	call put_icon_at_
	db 083h,0c4h,008h,0c7h,046h,0feh,000h,000h,0e9h,041h,001h
l6543:
	db 08bh,046h,0feh,005h,00ah,000h,089h,046h,0e4h,083h,07eh,0e0h,000h,075h,03fh,0b8h
	db 000h,000h,050h,0b8h,0b0h,001h,0f7h,06eh,008h,08bh,04eh,0e4h,0d1h,0e1h,0d1h,0e1h
	db 0d1h,0e1h,003h,0c1h,08bh,0d8h,0ffh,0b7h,028h,044h,08dh,046h,096h,050h,0b8h,001h
	db 000h,050h
	call access_scenario_record_
	db 083h,0c4h,008h,08dh,046h,096h,050h,08bh,046h,0feh,0b9h,004h,000h,0d3h,0e0h,005h
	db 092h,056h,050h
	call strcpy_
	db 083h,0c4h,004h
l6591:
	db 08bh,046h,0feh,040h,040h,040h,050h,0b8h,002h,000h,050h,0ffh,076h,0fch
	call set_cursor_
	db 083h,0c4h,006h,0b8h,009h,000h,050h,08bh,046h,0feh,0b9h,004h,000h,0d3h,0e0h,005h
	db 092h,056h,050h,0ffh,076h,0fch
	call print_string_
	db 083h,0c4h,006h,0b8h,000h,000h,050h,0b8h,00eh,000h,050h,0ffh,076h,0fch
	call pad_to_column_
	db 083h,0c4h,006h,0b8h,0b0h,001h,0f7h,06eh,008h,08bh,04eh,0e4h,0d1h,0e1h,0d1h,0e1h
	db 0d1h,0e1h,003h,0c1h,08bh,0d8h,08ah,087h,02ch,044h,02ah,0e4h,08bh,0d8h,080h,0bfh
	db 0cch,000h,001h,075h,041h,08bh,046h,0feh,040h,040h,040h,050h,0b8h,00eh,000h,050h
	db 0ffh,076h,0fch
	call set_cursor_
	db 083h,0c4h,006h,0b8h,001h,000h,050h,0b8h,003h,000h,050h,0b8h,0b0h,001h,0f7h,06eh
	db 008h,08bh,04eh,0e4h,0d1h,0e1h,0d1h,0e1h,0d1h,0e1h,003h,0c1h,08bh,0d8h,08ah,087h
	db 02eh,044h,02ah,0e4h,050h,0ffh,076h,0fch
	call print_int_
	db 083h,0c4h,008h,0ebh,011h
l6632:
	db 0b8h,000h,000h,050h,0b8h,011h,000h,050h,0ffh,076h,0fch
	call pad_to_column_
	db 083h,0c4h,006h
l6643:
	db 08bh,046h,0feh,040h,040h,040h,050h,0b8h,012h,000h,050h,0ffh,076h,0fch
	call set_cursor_
	db 083h,0c4h,006h,0b8h,004h,000h,050h,0b8h,0b0h,001h,0f7h,06eh,008h,08bh,04eh,0e4h
	db 0d1h,0e1h,0d1h,0e1h,0d1h,0e1h,003h,0c1h,08bh,0d8h,08ah,087h,02dh,044h,02ah,0e4h
	db 040h,02ah,0e4h,050h,0ffh,076h,0fch
	call put_char_hi_
	db 083h,0c4h,006h,0ffh,046h,0feh
l6684:
	db 0b8h,0b0h,001h,0f7h,06eh,008h,08bh,0d8h,08ah,087h,095h,045h,02ah,0e4h,03bh,046h
	db 0feh,07eh,003h,0e9h,0a9h,0feh
l669a:
	db 0b8h,0b0h,001h,0f7h,06eh,008h,08bh,0d8h,080h,0bfh,095h,045h,00ch,073h,01fh,0b8h
	db 00eh,000h,050h,0b8h,010h,000h,050h,08ah,087h,095h,045h,02ah,0e4h,040h,040h,040h
	db 050h,0b8h,001h,000h,050h,0ffh,076h,0fch
	call clear_window_area_
	db 083h,0c4h,00ah
l66c8:
	db 0b8h,0b0h,001h,0f7h,06eh,008h,08bh,0d8h,08ah,087h,095h,045h,02ah,0e4h,089h,046h
	db 0feh,0ebh,028h
l66db:
	db 08bh,046h,0feh,040h,040h,040h,050h,0b8h,012h,000h,050h,0ffh,076h,0fch
	call set_cursor_
	db 083h,0c4h,006h,0b8h,003h,000h,050h,0b8h,020h,000h,050h,0ffh,076h,0fch
	call put_char_hi_
	db 083h,0c4h,006h,0ffh,046h,0feh
l6703:
	db 083h,07eh,0feh,00ch,07ch,0d2h,0c7h,046h,0e0h,001h,000h,0ffh,076h,0fch
	call resume_window_draw_
	db 059h,0b8h,000h,000h,050h,0b8h,003h,000h,050h,0b8h,020h,000h,050h,0ffh,076h,006h
	call fill_window_
	db 083h,0c4h,008h,0ffh,076h,0fch
	call refresh_window_
	db 059h,0ffh,076h,006h
	call refresh_window_
	db 059h,0c7h,046h,0feh,000h,000h
l673d:
	db 08bh,046h,0feh,0d1h,0e0h,08bh,0d8h,003h,0ddh,0c7h,047h,0e6h,001h,000h,0ffh,046h
	db 0feh,08bh,046h,0feh,03dh,003h,000h,07eh,0e7h,0b8h,0b0h,001h,0f7h,06eh,008h,08bh
	db 0d8h,080h,0bfh,095h,045h,00ch,073h,007h,080h,0bfh,094h,045h,000h,075h,005h
l676c:
	db 0c7h,046h,0e6h,000h,000h
l6771:
	db 080h,0bfh,095h,045h,000h,074h,007h,080h,0bfh,094h,045h,00ah,072h,005h
l677f:
	db 0c7h,046h,0e8h,000h,000h
l6784:
	db 080h,0bfh,095h,045h,000h,075h,005h,0c7h,046h,0eah,000h,000h
l6790:
	db 0c7h,046h,0eeh,0ffh,0ffh,0b8h,000h,000h,050h,0b8h,003h,000h,050h,0b8h,020h,000h
	db 050h,0ffh,076h,006h
	call fill_window_
	db 083h,0c4h,008h,0ffh,076h,006h
	call refresh_window_
	db 059h,0b8h,003h,000h,050h,08dh,046h,0e6h,050h
	call count_enabled_before_
	db 083h,0c4h,004h,050h,0b8h,005h,000h,050h,0b8h,002h,000h,050h,0b8h,008h,000h,050h
	db 0b8h,001h,000h,050h,0b8h,002h,000h,050h,08dh,046h,0e6h,050h,0b8h,0efh,002h,050h
	db 0ffh,076h,006h
	call run_menu_
	db 083h,0c4h,012h,089h,046h,0fah,0e9h,058h,002h
l67eb:
	db 0ffh,076h,0fch
	call defer_window_draw_
	db 059h,0b8h,000h,000h,050h,0b8h,003h,000h,050h,0b8h,020h,000h,050h,0ffh,076h,006h
	call fill_window_
	db 083h,0c4h,008h
	call refresh_all_windows_
	db 0b8h,000h,000h,050h,0ffh,076h,008h,0b8h,0f8h,002h,050h,0ffh,076h,006h,0ffh,076h
	db 004h
	call choose_item_
	db 083h,0c4h,00ah,0a3h,0cah,043h,03dh,0ffh,0ffh,075h,003h,0e9h,0cbh,000h
l682c:
	db 0b8h,0b0h,001h,0f7h,06eh,008h,08bh,00eh,0cah,043h,0d1h,0e1h,0d1h,0e1h,0d1h,0e1h
	db 003h,0c1h,08bh,0d8h,08ah,087h,02fh,044h,02ah,0e4h,0a9h,001h,000h,074h,00bh,0b8h
	db 000h,000h,050h
	call play_sound_
	db 059h,0e9h,0a1h,000h
l6856:
	db 0b8h,0b0h,001h,0f7h,06eh,008h,08bh,0d8h,08ah,087h,095h,045h,02ah,0e4h,005h,00ah
	db 000h,089h,046h,0e4h,0a1h,0cah,043h,0d1h,0e0h,0d1h,0e0h,0d1h,0e0h,003h,0d8h,08bh
	db 0f3h,081h,0c3h,028h,044h,08bh,0f3h,0b8h,0b0h,001h,0f7h,06eh,008h,08bh,04eh,0e4h
	db 0d1h,0e1h,0d1h,0e1h,0d1h,0e1h,003h,0c1h,08bh,0f8h,005h,028h,044h,08bh,0f8h,08ch
	db 0d9h,08eh,0c1h,0b9h,004h,000h,0f3h,0a5h,0a1h,0cah,043h,0b9h,004h,000h,0d3h,0e0h
	db 005h,0deh,055h,050h,0b8h,0b0h,001h,0f7h,06eh,008h,08bh,0d8h,08ah,087h,095h,045h
	db 02ah,0e4h,0d3h,0e0h,005h,092h,056h,050h
	call strcpy_
	db 083h,0c4h,004h,0b8h,0b0h,001h,0f7h,06eh,008h,08bh,0d8h,0feh,087h,095h,045h,0ffh
	db 036h,0cah,043h,0ffh,076h,008h
	call remove_item_
	db 083h,0c4h,004h,0ffh,076h,004h
	call defer_window_draw_
	db 059h,0ffh,076h,008h,0ffh,076h,004h
	call draw_inventory_panel_
	db 083h,0c4h,004h,0ffh,076h,004h
	call resume_window_draw_
	db 059h
l68f7:
	db 0ffh,076h,0fch
	call resume_window_draw_
	db 059h,0e9h,05fh,001h
l6901:
	db 0b8h,001h,000h,050h,0ffh,076h,008h,0b8h,0f9h,002h,050h,0ffh,076h,006h,0ffh,076h
	db 0fch
	call choose_item_
	db 083h,0c4h,00ah,089h,046h,0e2h,03dh,0ffh,0ffh,075h,003h,0e9h,09ah,000h
l6923:
	db 005h,00ah,000h,089h,046h,0e4h,0b8h,0b0h,001h,0f7h,06eh,008h,08bh,04eh,0e4h,0d1h
	db 0e1h,0d1h,0e1h,0d1h,0e1h,003h,0c1h,08bh,0f0h,005h,028h,044h,08bh,0f0h,0b8h,0b0h
	db 001h,0f7h,06eh,008h,050h,0b8h,0b0h,001h,0f7h,06eh,008h,08bh,0d8h,08ah,087h,094h
	db 045h,02ah,0e4h,08bh,0c8h,0d1h,0e0h,0d1h,0e0h,0d1h,0e0h,08bh,0c8h,058h,003h,0c1h
	db 08bh,0f8h,005h,028h,044h,08bh,0f8h,08ch,0d9h,08eh,0c1h,0b9h,004h,000h,0f3h,0a5h
	db 08bh,046h,0e2h,0b9h,004h,000h,0d3h,0e0h,005h,092h,056h,050h,0b8h,0b0h,001h,0f7h
	db 06eh,008h,08bh,0d8h,08ah,087h,094h,045h,02ah,0e4h,0d3h,0e0h,005h,0deh,055h,050h
	call strcpy_
	db 083h,0c4h,004h,0b8h,0b0h,001h,0f7h,06eh,008h,08bh,0d8h,0feh,087h,094h,045h,0ffh
	db 076h,0e2h,0ffh,076h,008h
	call remove_swag_item_
	db 083h,0c4h,004h,0ffh,076h,008h,0ffh,076h,004h
	call draw_inventory_panel_
	db 083h,0c4h,004h
l69bd:
	db 0e9h,0a0h,000h
l69c0:
	db 0b8h,001h,000h,050h,0ffh,076h,008h,0b8h,0fah,002h,050h,0ffh,076h,006h,0ffh,076h
	db 0fch
	call choose_item_
	db 083h,0c4h,00ah,089h,046h,0e2h,03dh,0ffh,0ffh,074h,03ah,005h,00ah,000h,089h,046h
	db 0e4h,0b8h,0b0h,001h,0f7h,06eh,008h,08bh,04eh,0e4h,0d1h,0e1h,0d1h,0e1h,0d1h,0e1h
	db 003h,0c1h,08bh,0d8h,08ah,087h,02fh,044h,02ah,0e4h,0a9h,040h,000h,074h,00ah,0b8h
	db 000h,000h,050h
	call play_sound_
	db 059h,0ebh,00ch
l6a0d:
	db 0ffh,076h,0e2h,0ffh,076h,008h
	call remove_swag_item_
	db 083h,0c4h,004h
l6a19:
	db 0ebh,045h
l6a1b:
	db 0b8h,000h,000h,050h,0b8h,003h,000h,050h,0b8h,020h,000h,050h,0ffh,076h,006h
	call fill_window_
	db 083h,0c4h,008h,0b8h,001h,000h,050h,0ffh,076h,0fch
	call destroy_window_
	db 083h,0c4h,004h,05eh,05fh,08bh,0e5h,05dh,0c3h
l6a43:
	db 03dh,000h,000h,075h,003h,0e9h,0a0h,0fdh
l6a4b:
	db 03dh,001h,000h,075h,003h,0e9h,0aeh,0feh
l6a53:
	db 03dh,002h,000h,075h,003h,0e9h,065h,0ffh
l6a5b:
	db 03dh,003h,000h,074h,0bbh
l6a60:
	db 0e9h,0e7h,0f8h,0ebh,0d8h
#endasm
