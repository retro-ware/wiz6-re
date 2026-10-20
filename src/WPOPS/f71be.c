#asm
	public choose_combat_item_
	extrn access_scenario_record_:near
	extrn create_window_:near
	extrn defer_window_draw_:near
	extrn destroy_window_:near
	extrn draw_combat_list_box_:near
	extrn draw_item_list_:near
	extrn fill_window_:near
	extrn get_combat_input_:near
	extrn get_message_:near
	extrn print_message_:near
	extrn print_string_:near
	extrn print_string_hi_:near
	extrn refresh_all_windows_:near
	extrn resume_window_draw_:near
	extrn select_monster_group_:near
	extrn select_party_member_:near
	extrn set_click_region_:near
	extrn set_cursor_:near
	extrn strcpy_:near
	extrn strlen_:near
choose_combat_item_:
	db 055h,08bh,0ech,081h,0c4h,0e6h,0feh,056h,0b8h,000h,000h,050h,050h,0b8h,0fch,0ffh
	db 050h,0b8h,00ch,000h,050h,0b8h,005h,000h,050h,0b8h,013h,000h,050h,050h,0b8h,000h
	db 000h,050h
	call create_window_
	db 083h,0c4h,010h,089h,046h,0feh,0b8h,000h,000h,050h,0b8h,003h,000h,050h,0b8h,020h
	db 000h,050h,0ffh,076h,0feh
	call fill_window_
	db 083h,0c4h,008h,0b8h,000h,000h,050h,050h,0b8h,0fbh,0ffh,050h,0b8h,014h,000h,050h
	db 0b8h,005h,000h,050h,0b8h,014h,000h,050h,0b8h,013h,000h,050h,0b8h,014h,000h,050h
	call create_window_
	db 083h,0c4h,010h,089h,046h,0fch,0b8h,000h,000h,050h,0b8h,003h,000h,050h,0b8h,020h
	db 000h,050h,0ffh,076h,0fch
	call fill_window_
	db 083h,0c4h,008h,0ffh,076h,0feh
	call defer_window_draw_
	db 059h,0b8h,001h,000h,050h,0b8h,002h,000h,050h,0ffh,076h,0feh
	call set_cursor_
	db 083h,0c4h,006h,0b8h,012h,000h,050h,0ffh,076h,0feh,0b8h,0b0h,00dh,050h
	call print_message_
	db 083h,0c4h,006h,0ffh,076h,0feh
	call resume_window_draw_
	db 059h,0b8h,000h,000h,050h,0ffh,076h,0fch
	call draw_combat_list_box_
	db 083h,0c4h,004h
	call refresh_all_windows_
	db 0c7h,046h,0f8h,000h,000h,0e9h,095h,000h
l7281:
	db 0b8h,000h,000h,050h,0b8h,0b0h,001h,0f7h,06eh,006h,08bh,04eh,0f8h,0d1h,0e1h,0d1h
	db 0e1h,0d1h,0e1h,003h,0c1h,08bh,0d8h,0ffh,0b7h,028h,044h,08dh,046h,0ach,050h,0b8h
	db 001h,000h,050h
	call access_scenario_record_
	db 083h,0c4h,008h,08dh,046h,0ach,050h,08bh,046h,0f8h,0b9h,004h,000h,0d3h,0e0h,08dh
	db 08eh,00ch,0ffh,003h,0c1h,050h
	call strcpy_
	db 083h,0c4h,004h,0b8h,0b0h,001h,0f7h,06eh,006h,08bh,04eh,0f8h,0d1h,0e1h,0d1h,0e1h
	db 0d1h,0e1h,003h,0c1h,08bh,0d8h,08ah,087h,02ch,044h,02ah,0e4h,08bh,0d8h,080h,0bfh
	db 0cch,000h,001h,075h,01fh,0b8h,0b0h,001h,0f7h,06eh,006h,003h,0c1h,08bh,0d8h,08ah
	db 087h,02eh,044h,02ah,0e4h,08bh,04eh,0f8h,0d1h,0e1h,08bh,0d9h,003h,0ddh,089h,087h
	db 0f8h,0feh,0ebh,00fh
l7304:
	db 08bh,046h,0f8h,0d1h,0e0h,08bh,0d8h,003h,0ddh,0c7h,087h,0f8h,0feh,000h,000h
l7313:
	db 0ffh,046h,0f8h
l7316:
	db 0b8h,0b0h,001h,0f7h,06eh,006h,08bh,0d8h,08ah,087h,094h,045h,02ah,0e4h,03bh,046h
	db 0f8h,07eh,003h,0e9h,055h,0ffh
l732c:
	db 08dh,086h,0eeh,0feh,050h,0b8h,0b1h,00dh,050h
	call get_message_
	db 083h,0c4h,004h,0c7h,046h,0f8h,000h,000h,0c7h,046h,0f6h,000h,000h,08bh,05eh,0fch
	db 08ah,047h,003h,02ah,0e4h,040h,040h,050h,08ah,047h,002h,02ah,0e4h,005h,013h,000h
	db 050h,08ah,047h,003h,02ah,0e4h,040h,040h,050h,08ah,047h,002h,02ah,0e4h,040h,040h
	db 050h,0b8h,000h,000h,050h
	call set_click_region_
	db 083h,0c4h,00ah,08bh,05eh,0fch,08ah,047h,003h,02ah,0e4h,050h,08ah,047h,002h,02ah
	db 0e4h,040h,050h,08ah,047h,003h,02ah,0e4h,050h,08ah,047h,002h,02ah,0e4h,040h,050h
	db 0b8h,001h,000h,050h
	call set_click_region_
	db 083h,0c4h,00ah,08bh,05eh,0fch,08ah,047h,003h,02ah,0e4h,005h,004h,000h,050h,08ah
	db 047h,002h,02ah,0e4h,040h,050h,08ah,047h,003h,02ah,0e4h,005h,004h,000h,050h,08ah
	db 047h,002h,02ah,0e4h,040h,050h,0b8h,002h,000h,050h
	call set_click_region_
	db 083h,0c4h,00ah,08bh,05eh,0feh,08ah,047h,003h,02ah,0e4h,040h,040h,040h,050h,08dh
	db 086h,0eeh,0feh,050h
	call strlen_
	db 059h,050h,08bh,05eh,0feh,08ah,047h,002h,02ah,0e4h,08bh,0c8h,058h,003h,0c1h,005h
	db 006h,000h,050h,08ah,047h,003h,02ah,0e4h,040h,040h,040h,050h,083h,0c1h,007h,08bh
	db 0c1h,050h,0b8h,003h,000h,050h
	call set_click_region_
	db 083h,0c4h,00ah,0b8h,000h,000h,050h,050h,050h,0b8h,0ffh,000h,050h,0b8h,004h,000h
	db 050h
	call set_click_region_
	db 083h,0c4h,00ah
l741b:
	db 083h,07eh,0f6h,001h,075h,042h,0b8h,003h,000h,050h,0b8h,007h,000h,050h,0ffh,076h
	db 0feh
	call set_cursor_
	db 083h,0c4h,006h,0b8h,0fdh,0ffh,050h,08dh,086h,0eeh,0feh,050h,0ffh,076h,0feh
	call print_string_
	db 083h,0c4h,006h,08dh,086h,0f8h,0feh,050h,08dh,086h,00ch,0ffh,050h,0b8h,000h,000h
	db 050h,0ffh,076h,0f8h,0ffh,076h,006h,0ffh,076h,0fch
	call draw_item_list_
	db 083h,0c4h,00ch,0ebh,040h
l7463:
	db 0b8h,003h,000h,050h,0b8h,007h,000h,050h,0ffh,076h,0feh
	call set_cursor_
	db 083h,0c4h,006h,0b8h,003h,000h,050h,08dh,086h,0eeh,0feh,050h,0ffh,076h,0feh
	call print_string_hi_
	db 083h,0c4h,006h,08dh,086h,0f8h,0feh,050h,08dh,086h,00ch,0ffh,050h,0b8h,001h,000h
	db 050h,0ffh,076h,0f8h,0ffh,076h,006h,0ffh,076h,0fch
	call draw_item_list_
	db 083h,0c4h,00ch
l74a3:
	db 0b8h,098h,035h,050h,0b8h,076h,043h,050h
	call get_combat_input_
	db 083h,0c4h,004h,089h,046h,0fah,083h,03eh,0c4h,04fh,001h,075h,037h,0ebh,021h
l74bd:
	db 0c7h,046h,0fah,005h,000h,0ebh,02eh
l74c4:
	db 0c7h,046h,0fah,002h,000h,0ebh,027h
l74cb:
	db 0c7h,046h,0fah,004h,000h,0ebh,020h
l74d2:
	db 0c7h,046h,0f6h,001h,000h,0c7h,046h,0fah,005h,000h,0ebh,014h
l74de:
	db 03dh,000h,000h,074h,0dah,03dh,001h,000h,074h,0dch,03dh,002h,000h,074h,0deh,03dh
	db 003h,000h,074h,0e0h
l74f2:
	db 08bh,046h,0fah,0ebh,05ah
l74f7:
	db 083h,07eh,0f6h,001h,074h,005h,0c7h,046h,0f6h,001h,000h
l7502:
	db 0ebh,061h
l7504:
	db 083h,07eh,0f6h,001h,075h,007h,0c7h,046h,0f6h,000h,000h,0ebh,009h
l7511:
	db 083h,07eh,0f8h,000h,07eh,003h,0ffh,04eh,0f8h
l751a:
	db 0ebh,049h
l751c:
	db 083h,07eh,0f6h,001h,075h,005h,0c7h,046h,0f6h,000h,000h
l7527:
	db 0ebh,03ch
l7529:
	db 083h,07eh,0f6h,001h,075h,007h,0c7h,046h,0f6h,000h,000h,0ebh,019h
l7536:
	db 0b8h,0b0h,001h,0f7h,06eh,006h,08bh,0d8h,08ah,087h,094h,045h,02ah,0e4h,08bh,04eh
	db 0f8h,041h,03bh,0c1h,07eh,003h,0ffh,046h,0f8h
l754f:
	db 0ebh,014h
l7551:
	db 03dh,001h,000h,074h,0a1h,03dh,002h,000h,074h,0a9h,03dh,003h,000h,074h,0bch,03dh
	db 004h,000h,074h,0c4h
l7565:
	db 083h,07eh,0fah,005h,074h,003h,0e9h,0adh,0feh
l756e:
	db 0b8h,000h,000h,050h,0ffh,076h,0feh
	call destroy_window_
	db 083h,0c4h,004h,0b8h,000h,000h,050h,0ffh,076h,0fch
	call destroy_window_
	db 083h,0c4h,004h,083h,07eh,0f6h,001h,075h,008h,0b8h,0ffh,0ffh
l7591:
	db 05eh,08bh,0e5h,05dh,0c3h
l7596:
	db 0b8h,000h,000h,050h,0b8h,0b0h,001h,0f7h,06eh,006h,08bh,04eh,0f8h,0d1h,0e1h,0d1h
	db 0e1h,0d1h,0e1h,003h,0c1h,08bh,0d8h,0ffh,0b7h,028h,044h,08dh,046h,0ach,050h,0b8h
	db 001h,000h,050h
	call access_scenario_record_
	db 083h,0c4h,008h,083h,07eh,0c8h,000h,075h,003h,0e9h,0c8h,000h
l75c8:
	db 08bh,046h,0c8h,0b9h,000h,001h,099h,0f7h,0f9h,089h,086h,0eah,0feh,089h,096h,0ech
	db 0feh,08bh,0c2h,08bh,0d0h,0d1h,0e0h,003h,0c2h,0d1h,0e0h,08bh,0d8h,080h,0bfh,0e2h
	db 000h,001h,075h,056h,0b8h,000h,000h,050h,0b8h,003h,000h,050h,0b8h,020h,000h,050h
	db 0ffh,076h,004h
	call fill_window_
	db 083h,0c4h,008h
	call refresh_all_windows_
	db 0b8h,02ch,000h,0f7h,06eh,006h,08bh,0f0h,08bh,01eh,0a8h,043h,0c6h,040h,01fh,000h
	db 0b8h,01ah,00eh,050h
	call select_party_member_
	db 059h,089h,086h,0e6h,0feh,03dh,0ffh,0ffh,075h,006h,0b8h,0ffh,0ffh,0e9h,066h,0ffh
l762b:
	db 08ah,086h,0e6h,0feh,050h,0b8h,02ch,000h,0f7h,06eh,006h,08bh,0f0h,08bh,01eh,0a8h
	db 043h,058h,088h,040h,020h,0ebh,04eh
l7642:
	db 08bh,086h,0ech,0feh,08bh,0d0h,0d1h,0e0h,003h,0c2h,0d1h,0e0h,08bh,0d8h,080h,0bfh
	db 0e2h,000h,002h,075h,039h,0b8h,000h,000h,050h,0b8h,003h,000h,050h,0b8h,014h,00eh
	db 050h,0ffh,076h,004h
	call select_monster_group_
	db 083h,0c4h,008h,089h,086h,0e8h,0feh,03dh,0ffh,0ffh,075h,006h,0b8h,0ffh,0ffh,0e9h
	db 016h,0ffh
l767b:
	db 08ah,086h,0e8h,0feh,050h,0b8h,02ch,000h,0f7h,06eh,006h,08bh,0f0h,08bh,01eh,0a8h
	db 043h,058h,088h,040h,01fh
l7690:
	db 08bh,046h,0f8h,0e9h,0fbh,0feh
#endasm
