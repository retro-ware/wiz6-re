/* Use item menu: pick an item of the member and apply its effect. */
#asm
	public do_use_item_
	extrn access_scenario_record_:near
	extrn check_item_location_event_:near
	extrn choose_target_member_:near
	extrn copy_name_:near
	extrn create_window_:near
	extrn defer_window_draw_:near
	extrn destroy_window_:near
	extrn draw_item_list_:near
	extrn draw_list_frame_dopt_:near
	extrn erase_window_:near
	extrn f0a42_:near
	extrn f6054_:near
	extrn fill_window_:near
	extrn get_menu_choice_blink_:near
	extrn get_message_:near
	extrn print_message_:near
	extrn print_string_:near
	extrn print_string_hi_:near
	extrn refresh_all_windows_:near
	extrn replace_char_with_string_:near
	extrn resume_window_draw_:near
	extrn set_bit_:near
	extrn set_click_region_:near
	extrn set_cursor_:near
	extrn show_result_message_:near
	extrn show_title_text_dopt_:near
	extrn strcpy_:near
	extrn strlen_:near
	extrn use_item_charge_:near
do_use_item_:
	db 055h,08bh,0ech,083h,0c4h,094h,0b8h,0bch,050h,050h,0b8h,0d1h,007h,050h
	call get_message_
	db 083h,0c4h,004h,0c7h,006h,06ah,050h,000h,000h,0ffh,036h,0b0h,04fh
	call defer_window_draw_
	db 059h,0b8h,000h,000h,050h,050h,0b8h,0fch,0ffh,050h,0b8h,00ah,000h,050h,0b8h,005h
	db 000h,050h,0b8h,013h,000h,050h,050h,0b8h,000h,000h,050h
	call create_window_
	db 083h,0c4h,010h,089h,046h,0f6h,0b8h,000h,000h,050h,0b8h,003h,000h,050h,0b8h,020h
	db 000h,050h,0ffh,076h,0f6h
	call fill_window_
	db 083h,0c4h,008h,0b8h,000h,000h,050h,050h,0b8h,0fbh,0ffh,050h,0b8h,014h,000h,050h
	db 0b8h,005h,000h,050h,0b8h,014h,000h,050h,0b8h,013h,000h,050h,0b8h,014h,000h,050h
	call create_window_
	db 083h,0c4h,010h,089h,046h,0f4h,0b8h,000h,000h,050h,0b8h,003h,000h,050h,0b8h,020h
	db 000h,050h,0ffh,076h,0f4h
	call fill_window_
	db 083h,0c4h,008h,08dh,046h,0f8h,050h,0b8h,0b0h,001h,0f7h,06eh,004h,005h,0e8h,043h
	db 050h
	call copy_name_
	db 083h,0c4h,004h,0b8h,06ch,050h,050h,0b8h,0f1h,007h,050h
	call get_message_
	db 083h,0c4h,004h,0b8h,024h,000h,050h,08dh,046h,0f8h,050h,0b8h,06ch,050h,050h
	call replace_char_with_string_
	db 083h,0c4h,006h,0b8h,06ch,050h,050h
	call strlen_
	db 059h,040h,0b9h,002h,000h,099h,0f7h,0f9h,08bh,0c8h,0b8h,00ah,000h,02bh,0c1h,050h
	db 0b8h,06ch,050h,050h
	call show_title_text_dopt_
	db 083h,0c4h,004h,0b8h,000h,000h,050h,0ffh,036h,0b2h,04fh
	call f0a42_
	db 083h,0c4h,004h,0ffh,076h,0f6h
	call defer_window_draw_
	db 059h,0b8h,001h,000h,050h,0b8h,002h,000h,050h,0ffh,076h,0f6h
	call set_cursor_
	db 083h,0c4h,006h,0b8h,012h,000h,050h,0ffh,076h,0f6h,0b8h,0f2h,007h,050h
	call print_message_
	db 083h,0c4h,006h,0ffh,076h,0f6h
	call resume_window_draw_
	db 059h,0b8h,000h,000h,050h,0ffh,076h,0f4h
	call draw_list_frame_dopt_
	db 083h,0c4h,004h
	call refresh_all_windows_
	db 0c7h,006h,0b8h,051h,000h,000h,0c7h,046h,0f0h,000h,000h,0e9h,0a1h,000h
l79a6:
	db 0b8h,000h,000h,050h,0b8h,0b0h,001h,0f7h,06eh,004h,08bh,04eh,0f0h,0d1h,0e1h,0d1h
	db 0e1h,0d1h,0e1h,003h,0c1h,08bh,0d8h,0ffh,0b7h,028h,044h,08dh,046h,0a4h,050h,0b8h
	db 001h,000h,050h
	call access_scenario_record_
	db 083h,0c4h,008h,08dh,046h,0a4h,050h,08bh,046h,0f0h,0b9h,004h,000h,0d3h,0e0h,005h
	db 0e6h,051h,050h
	call strcpy_
	db 083h,0c4h,004h,0b8h,0b0h,001h,0f7h,06eh,004h,08bh,04eh,0f0h,0d1h,0e1h,0d1h,0e1h
	db 0d1h,0e1h,003h,0c1h,08bh,0d8h,08ah,087h,02ch,044h,02ah,0e4h,08bh,0d8h,080h,0bfh
	db 0cch,000h,001h,075h,01dh,0b8h,0b0h,001h,0f7h,06eh,004h,003h,0c1h,08bh,0d8h,08ah
	db 087h,02eh,044h,02ah,0e4h,08bh,04eh,0f0h,0d1h,0e1h,08bh,0d9h,089h,087h,046h,053h
	db 0ebh,00dh
l7a24:
	db 08bh,046h,0f0h,0d1h,0e0h,08bh,0d8h,0c7h,087h,046h,053h,000h,000h
l7a31:
	db 08bh,046h,0f0h,08bh,00eh,0b8h,051h,0d1h,0e1h,08bh,0d9h,089h,087h,0bah,051h,0ffh
	db 006h,0b8h,051h,0ffh,046h,0f0h
l7a47:
	db 0b8h,0b0h,001h,0f7h,06eh,004h,08bh,0d8h,08ah,087h,094h,045h,02ah,0e4h,03bh,046h
	db 0f0h,07eh,003h,0e9h,049h,0ffh
l7a5d:
	db 0c7h,046h,0f0h,000h,000h,0e9h,0aah,000h
l7a65:
	db 08bh,046h,0f0h,005h,00ah,000h,089h,046h,094h,0b8h,000h,000h,050h,0b8h,0b0h,001h
	db 0f7h,06eh,004h,08bh,04eh,094h,0d1h,0e1h,0d1h,0e1h,0d1h,0e1h,003h,0c1h,08bh,0d8h
	db 0ffh,0b7h,028h,044h,08dh,046h,0a4h,050h,0b8h,001h,000h,050h
	call access_scenario_record_
	db 083h,0c4h,008h,08dh,046h,0a4h,050h,08bh,046h,094h,0b9h,004h,000h,0d3h,0e0h,005h
	db 0e6h,051h,050h
	call strcpy_
	db 083h,0c4h,004h,0b8h,0b0h,001h,0f7h,06eh,004h,08bh,04eh,094h,0d1h,0e1h,0d1h,0e1h
	db 0d1h,0e1h,003h,0c1h,08bh,0d8h,08ah,087h,02ch,044h,02ah,0e4h,08bh,0d8h,080h,0bfh
	db 0cch,000h,001h,075h,01dh,0b8h,0b0h,001h,0f7h,06eh,004h,003h,0c1h,08bh,0d8h,08ah
	db 087h,02eh,044h,02ah,0e4h,08bh,04eh,094h,0d1h,0e1h,08bh,0d9h,089h,087h,046h,053h
	db 0ebh,00dh
l7aec:
	db 08bh,046h,094h,0d1h,0e0h,08bh,0d8h,0c7h,087h,046h,053h,000h,000h
l7af9:
	db 08bh,046h,094h,08bh,00eh,0b8h,051h,0d1h,0e1h,08bh,0d9h,089h,087h,0bah,051h,0ffh
	db 006h,0b8h,051h,0ffh,046h,0f0h
l7b0f:
	db 0b8h,0b0h,001h,0f7h,06eh,004h,08bh,0d8h,08ah,087h,095h,045h,02ah,0e4h,03bh,046h
	db 0f0h,07eh,003h,0e9h,040h,0ffh
l7b25:
	db 08dh,046h,09ah,050h,0b8h,0f3h,007h,050h
	call get_message_
	db 083h,0c4h,004h,0c7h,046h,0f0h,000h,000h,0c7h,046h,0eeh,000h,000h,08bh,05eh,0f4h
	db 08ah,047h,003h,02ah,0e4h,040h,040h,050h,08ah,047h,002h,02ah,0e4h,005h,013h,000h
	db 050h,08ah,047h,003h,02ah,0e4h,040h,040h,050h,08ah,047h,002h,02ah,0e4h,040h,040h
	db 050h,0b8h,000h,000h,050h
	call set_click_region_
	db 083h,0c4h,00ah,08bh,05eh,0f4h,08ah,047h,003h,02ah,0e4h,050h,08ah,047h,002h,02ah
	db 0e4h,040h,050h,08ah,047h,003h,02ah,0e4h,050h,08ah,047h,002h,02ah,0e4h,040h,050h
	db 0b8h,001h,000h,050h
	call set_click_region_
	db 083h,0c4h,00ah,08bh,05eh,0f4h,08ah,047h,003h,02ah,0e4h,005h,004h,000h,050h,08ah
	db 047h,002h,02ah,0e4h,040h,050h,08ah,047h,003h,02ah,0e4h,005h,004h,000h,050h,08ah
	db 047h,002h,02ah,0e4h,040h,050h,0b8h,002h,000h,050h
	call set_click_region_
	db 083h,0c4h,00ah,08bh,05eh,0f6h,08ah,047h,003h,02ah,0e4h,040h,040h,040h,050h,08dh
	db 046h,09ah,050h
	call strlen_
	db 059h,050h,08bh,05eh,0f6h,08ah,047h,002h,02ah,0e4h,08bh,0c8h,058h,003h,0c1h,005h
	db 006h,000h,050h,08ah,047h,003h,02ah,0e4h,040h,040h,040h,050h,083h,0c1h,007h,08bh
	db 0c1h,050h,0b8h,003h,000h,050h
	call set_click_region_
	db 083h,0c4h,00ah,0b8h,000h,000h,050h,050h,050h,0b8h,0ffh,000h,050h,0b8h,004h,000h
	db 050h
	call set_click_region_
	db 083h,0c4h,00ah
l7c12:
	db 083h,07eh,0eeh,001h,075h,037h,0b8h,003h,000h,050h,0b8h,007h,000h,050h,0ffh,076h
	db 0f6h
	call set_cursor_
	db 083h,0c4h,006h,0b8h,0fdh,0ffh,050h,08dh,046h,09ah,050h,0ffh,076h,0f6h
	call print_string_
	db 083h,0c4h,006h,0b8h,000h,000h,050h,0ffh,076h,0f0h,0ffh,076h,004h,0ffh,076h,0f4h
	call draw_item_list_
	db 083h,0c4h,008h,0ebh,035h
l7c4f:
	db 0b8h,003h,000h,050h,0b8h,007h,000h,050h,0ffh,076h,0f6h
	call set_cursor_
	db 083h,0c4h,006h,0b8h,003h,000h,050h,08dh,046h,09ah,050h,0ffh,076h,0f6h
	call print_string_hi_
	db 083h,0c4h,006h,0b8h,001h,000h,050h,0ffh,076h,0f0h,0ffh,076h,004h,0ffh,076h,0f4h
	call draw_item_list_
	db 083h,0c4h,008h
l7c84:
	db 0b8h,098h,035h,050h,0b8h,0bch,050h,050h
	call get_menu_choice_blink_
	db 083h,0c4h,004h,089h,046h,0f2h,083h,03eh,0c4h,04fh,001h,075h,037h,0ebh,021h
l7c9e:
	db 0c7h,046h,0f2h,005h,000h,0ebh,02eh
l7ca5:
	db 0c7h,046h,0f2h,002h,000h,0ebh,027h
l7cac:
	db 0c7h,046h,0f2h,004h,000h,0ebh,020h
l7cb3:
	db 0c7h,046h,0eeh,001h,000h,0c7h,046h,0f2h,005h,000h,0ebh,014h
l7cbf:
	db 03dh,000h,000h,074h,0dah,03dh,001h,000h,074h,0dch,03dh,002h,000h,074h,0deh,03dh
	db 003h,000h,074h,0e0h
l7cd3:
	db 08bh,046h,0f2h,0ebh,04eh
l7cd8:
	db 083h,07eh,0eeh,001h,074h,005h,0c7h,046h,0eeh,001h,000h
l7ce3:
	db 0ebh,055h
l7ce5:
	db 083h,07eh,0eeh,001h,075h,007h,0c7h,046h,0eeh,000h,000h,0ebh,009h
l7cf2:
	db 083h,07eh,0f0h,000h,07eh,003h,0ffh,04eh,0f0h
l7cfb:
	db 0ebh,03dh
l7cfd:
	db 083h,07eh,0eeh,001h,075h,005h,0c7h,046h,0eeh,000h,000h
l7d08:
	db 0ebh,030h
l7d0a:
	db 083h,07eh,0eeh,001h,075h,007h,0c7h,046h,0eeh,000h,000h,0ebh,00dh
l7d17:
	db 08bh,046h,0f0h,040h,03bh,006h,0b8h,051h,07dh,003h,0ffh,046h,0f0h
l7d24:
	db 0ebh,014h
l7d26:
	db 03dh,001h,000h,074h,0adh,03dh,002h,000h,074h,0b5h,03dh,003h,000h,074h,0c8h,03dh
	db 004h,000h,074h,0d0h
l7d3a:
	db 083h,07eh,0f2h,005h,074h,003h,0e9h,0cfh,0feh
l7d43:
	db 08bh,046h,0f0h,0d1h,0e0h,08bh,0d8h,08bh,087h,0bah,051h,089h,046h,0f0h,083h,07eh
	db 0eeh,000h,074h,003h,0e9h,085h,001h
l7d5a:
	db 050h,0ffh,076h,004h
	call check_item_location_event_
	db 083h,0c4h,004h,085h,0c0h,074h,003h,0e9h,068h,001h
l7d6b:
	db 0b8h,000h,000h,050h,0b8h,0b0h,001h,0f7h,06eh,004h,08bh,04eh,0f0h,0d1h,0e1h,0d1h
	db 0e1h,0d1h,0e1h,003h,0c1h,08bh,0d8h,0ffh,0b7h,028h,044h,08dh,046h,0a4h,050h,0b8h
	db 001h,000h,050h
	call access_scenario_record_
	db 083h,0c4h,008h,083h,07eh,0c0h,000h,074h,062h,08bh,046h,0c0h,0b9h,000h,001h,099h
	db 0f7h,0f9h,089h,046h,096h,089h,056h,098h,08bh,0c2h,08bh,0d0h,0d1h,0e0h,003h,0c2h
	db 0d1h,0e0h,08bh,0d8h,080h,0bfh,0e2h,000h,001h,075h,018h
	call refresh_all_windows_
	db 0b8h,0f0h,007h,050h
	call choose_target_member_
	db 059h,0a3h,0b6h,051h,03dh,0ffh,0ffh,075h,005h,0c7h,046h,098h,0ffh,0ffh
l7dd4:
	db 083h,07eh,098h,0ffh,074h,01fh,0ffh,076h,0f0h,0ffh,076h,004h
	call use_item_charge_
	db 083h,0c4h,004h,0ffh,036h,0b6h,051h,0ffh,076h,096h,0ffh,076h,098h,0ffh,076h,004h
	call f6054_
	db 083h,0c4h,008h
l7df9:
	db 0e9h,0d5h,000h
l7dfc:
	db 080h,07eh,0e9h,004h,074h,003h,0e9h,09dh,000h
l7e05:
	db 0a1h,03ch,036h,03bh,046h,0bch,074h,003h,0e9h,092h,000h
l7e10:
	db 0b8h,000h,000h,050h,08ah,046h,0beh,02ah,0e4h,050h,08bh,046h,0bch,08bh,0d0h,0d1h
	db 0e0h,0d1h,0e0h,003h,0c2h,0d1h,0e0h,005h,0ech,04eh,050h
	call set_bit_
	db 083h,0c4h,006h,0b8h,000h,000h,050h,08ah,046h,0beh,02ah,0e4h,050h,08bh,046h,0bch
	db 08bh,0d0h,0d1h,0e0h,0d1h,0e0h,003h,0c2h,0d1h,0e0h,005h,0f8h,033h,050h
	call set_bit_
	db 083h,0c4h,006h,0b8h,001h,000h,050h,08ah,046h,0bfh,02ah,0e4h,050h,08bh,046h,0bch
	db 08bh,0d0h,0d1h,0e0h,0d1h,0e0h,003h,0c2h,0d1h,0e0h,005h,0ech,04eh,050h
	call set_bit_
	db 083h,0c4h,006h,0b8h,001h,000h,050h,08ah,046h,0bfh,02ah,0e4h,050h,08bh,046h,0bch
	db 08bh,0d0h,0d1h,0e0h,0d1h,0e0h,003h,0c2h,0d1h,0e0h,005h,0f8h,033h,050h
	call set_bit_
	db 083h,0c4h,006h,0ffh,076h,0f0h,0ffh,076h,004h
	call use_item_charge_
	db 083h,0c4h,004h,0ebh,02fh
l7ea2:
	db 080h,07eh,0e9h,005h,075h,01dh,083h,03eh,03ch,036h,008h,075h,008h,0c7h,006h,0cah
	db 04eh,001h,000h,0ebh,00ch
l7eb7:
	db 0c7h,006h,02ah,050h,007h,008h,0c7h,006h,02ch,050h,001h,000h
l7ec3:
	db 0ebh,00ch
l7ec5:
	db 0c7h,006h,02ah,050h,0feh,007h,0c7h,006h,02ch,050h,001h,000h
l7ed1:
	db 0ebh,00ch
l7ed3:
	db 0ffh,076h,0f0h,0ffh,076h,004h
	call use_item_charge_
	db 083h,0c4h,004h
l7edf:
	db 0b8h,000h,000h,050h,0ffh,076h,0f6h
	call destroy_window_
	db 083h,0c4h,004h,0b8h,000h,000h,050h,0ffh,076h,0f4h
	call destroy_window_
	db 083h,0c4h,004h,0ffh,036h,0b0h,04fh
	call resume_window_draw_
	db 059h,0b8h,000h,000h,050h,0ffh,036h,042h,033h
	call erase_window_
	db 083h,0c4h,004h,0b8h,000h,000h,050h,0ffh,036h,0b2h,04fh
	call f0a42_
	db 083h,0c4h,004h,083h,03eh,02ah,050h,000h,07eh,008h,0ffh,036h,02ah,050h
	call show_result_message_
	db 059h
l7f2c:
	db 08bh,0e5h,05dh,0c3h
#endasm
