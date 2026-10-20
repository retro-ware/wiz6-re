/* Equip menu: choose weapons and armor for each slot and recompute combat values. */
#asm
	public do_equip_items_
	extrn $ldv:near
	extrn access_scenario_record_:near
	extrn add_skill_bonus_:near
	extrn can_equip_item_:near
	extrn draw_inventory_panel_:near
	extrn draw_sheet_:near
	extrn fc726_:near
	extrn fcdb3_:near
	extrn fill_window_:near
	extrn get_menu_input_:near
	extrn get_message_:near
	extrn print_string_:near
	extrn print_string_hi_:near
	extrn put_char_:near
	extrn put_char_hi_:near
	extrn random_:near
	extrn refresh_window_:near
	extrn replace_char_with_string_:near
	extrn run_menu_:near
	extrn set_click_region_:near
	extrn set_cursor_:near
	extrn strlen_:near
	extrn unhighlight_item_row_:near
	extrn use_item_charge_:near
do_equip_items_:
	db 055h,08bh,0ech,081h,0c4h,0d0h,0feh,057h,056h,0c7h,046h,0feh,000h,000h
ld3a7:
	db 0b8h,0b0h,001h,0f7h,06eh,008h,003h,046h,0feh,08bh,0d8h,0c6h,087h,0f8h,044h,0ffh
	db 08bh,046h,0feh,0d1h,0e0h,08bh,0d8h,003h,0ddh,0c7h,047h,0d0h,000h,000h,0ffh,046h
	db 0feh,08bh,046h,0feh,03dh,008h,000h,07ch,0d7h,0c7h,046h,0feh,000h,000h,0ebh,023h
ld3d7:
	db 0b8h,0b0h,001h,0f7h,06eh,008h,08bh,04eh,0feh,0d1h,0e1h,0d1h,0e1h,0d1h,0e1h,003h
	db 0c1h,08bh,0d8h,08ah,087h,02fh,044h,02ah,0e4h,025h,0feh,0ffh,088h,087h,02fh,044h
	db 0ffh,046h,0feh
ld3fa:
	db 0b8h,0b0h,001h,0f7h,06eh,008h,08bh,0d8h,08ah,087h,094h,045h,02ah,0e4h,03bh,046h
	db 0feh,07fh,0cah,0b8h,0b0h,001h,0f7h,06eh,008h,08bh,0d8h,0c6h,087h,08ah,045h,000h
	db 0c6h,087h,08bh,045h,000h,0c7h,046h,0feh,000h,000h
ld424:
	db 0b8h,0b0h,001h,0f7h,06eh,008h,003h,046h,0feh,08bh,0d8h,0c6h,087h,03ah,045h,000h
	db 0ffh,046h,0feh,08bh,046h,0feh,03dh,00eh,000h,07ch,0e5h,08bh,046h,008h,0b9h,002h
	db 000h,099h,0f7h,0f9h,08bh,0c2h,085h,0c0h,075h,005h,0a1h,0bah,04fh,0ebh,003h
ld453:
	db 0a1h,0b8h,04fh
ld456:
	db 089h,086h,0d6h,0feh,08bh,046h,008h,099h,0f7h,0f9h,0d1h,0e0h,0d1h,0e0h,040h,050h
	db 0b8h,003h,000h,050h,0ffh,0b6h,0d6h,0feh
	call set_cursor_
	db 083h,0c4h,006h,0b8h,004h,000h,050h,0b8h,025h,000h,050h,0ffh,0b6h,0d6h,0feh
	call put_char_hi_
	db 083h,0c4h,006h,0b8h,004h,000h,050h,0b8h,026h,000h,050h,0ffh,0b6h,0d6h,0feh
	call put_char_hi_
	db 083h,0c4h,006h,0ffh,076h,008h
	call fcdb3_
	db 059h,0ffh,076h,008h,0ffh,076h,004h
	call draw_inventory_panel_
	db 083h,0c4h,004h,08dh,086h,026h,0ffh,050h,0b8h,067h,001h,050h
	call get_message_
	db 083h,0c4h,004h,0c7h,046h,0feh,000h,000h
ld4bf:
	db 08dh,046h,0e0h,050h,0ffh,076h,0feh,0ffh,076h,008h
	call can_equip_item_
	db 083h,0c4h,006h,089h,046h,0f4h,03dh,000h,000h,07fh,003h,0e9h,0e8h,005h
ld4da:
	db 0b8h,000h,000h,050h,0b8h,003h,000h,050h,0b8h,020h,000h,050h,0ffh,076h,006h
	call fill_window_
	db 083h,0c4h,008h,0ffh,076h,006h
	call refresh_window_
	db 059h,08dh,046h,080h,050h,0b8h,05eh,001h,050h
	call get_message_
	db 083h,0c4h,004h,08dh,086h,030h,0ffh,050h,08bh,046h,0feh,005h,05fh,001h,050h
	call get_message_
	db 083h,0c4h,004h,0b8h,024h,000h,050h,08dh,086h,030h,0ffh,050h,08dh,046h,080h,050h
	call replace_char_with_string_
	db 083h,0c4h,006h,0b8h,001h,000h,050h,0b8h,002h,000h,050h,0ffh,076h,006h
	call set_cursor_
	db 083h,0c4h,006h,0b8h,003h,000h,050h,08dh,046h,080h,050h,0ffh,076h,006h
	call print_string_hi_
	db 083h,0c4h,006h,08bh,05eh,006h,0feh,047h,006h,08bh,05eh,006h,08ah,047h,006h,02ah
	db 0e4h,089h,086h,024h,0ffh,08ah,047h,007h,02ah,0e4h,089h,086h,022h,0ffh,083h,03eh
	db 046h,008h,001h,075h,012h,0b8h,003h,000h,050h,08dh,086h,026h,0ffh,050h,053h
	call print_string_hi_
	db 083h,0c4h,006h,0ebh,012h
ld57f:
	db 0b8h,0fbh,0ffh,050h,08dh,086h,026h,0ffh,050h,0ffh,076h,006h
	call print_string_
	db 083h,0c4h,006h
ld591:
	db 0c7h,046h,0fch,000h,000h,0e9h,093h,000h
ld599:
	db 08bh,046h,0fch,0d1h,0e0h,08bh,0d8h,003h,0ddh,08bh,047h,0e0h,005h,009h,000h,050h
	db 0b8h,015h,000h,050h,0ffh,076h,004h
	call set_cursor_
	db 083h,0c4h,006h,0b8h,005h,000h,050h,0b8h,064h,000h,050h,0ffh,076h,004h
	call put_char_
	db 083h,0c4h,006h,0b8h,004h,000h,050h,08bh,046h,0fch,0d1h,0e0h,08bh,0d8h,003h,0ddh
	db 08bh,047h,0e0h,0b9h,004h,000h,0d3h,0e0h,005h,0deh,055h,050h,0ffh,076h,004h
	call print_string_
	db 083h,0c4h,006h,08bh,046h,0fch,0d1h,0e0h,08bh,0d8h,003h,0ddh,08bh,04fh,0e0h,08bh
	db 05eh,004h,08ah,047h,003h,02ah,0e4h,003h,0c1h,005h,009h,000h,050h,08ah,047h,002h
	db 02ah,0e4h,005h,024h,000h,050h,08ah,047h,003h,02ah,0e4h,003h,0c1h,005h,009h,000h
	db 050h,08ah,047h,002h,02ah,0e4h,005h,015h,000h,050h,0ffh,076h,0fch
	call set_click_region_
	db 083h,0c4h,00ah,0ffh,046h,0fch
ld62c:
	db 08bh,046h,0fch,03bh,046h,0f4h,07dh,003h,0e9h,062h,0ffh
ld637:
	db 08bh,05eh,006h,08ah,047h,003h,02ah,0e4h,003h,086h,022h,0ffh,050h,08dh,086h,026h
	db 0ffh,050h
	call strlen_
	db 059h,050h,08bh,05eh,006h,08ah,047h,002h,02ah,0e4h,08bh,0c8h,058h,003h,0c1h,003h
	db 086h,024h,0ffh,048h,050h,08ah,047h,003h,02ah,0e4h,003h,086h,022h,0ffh,050h,003h
	db 08eh,024h,0ffh,08bh,0c1h,050h,0ffh,076h,0f4h
	call set_click_region_
	db 083h,0c4h,00ah,0b8h,000h,000h,050h,050h,050h,0b8h,0ffh,000h,050h,08bh,046h,0f4h
	db 040h,050h
	call set_click_region_
	db 083h,0c4h,00ah,0c7h,046h,0f6h,0ffh,0ffh
ld695:
	db 083h,03eh,046h,008h,000h,075h,06ah,083h,07eh,0f6h,0ffh,075h,025h,0ffh,0b6h,022h
	db 0ffh,0ffh,0b6h,024h,0ffh,0ffh,076h,006h
	call set_cursor_
	db 083h,0c4h,006h,0b8h,0fbh,0ffh,050h,08dh,086h,026h,0ffh,050h,0ffh,076h,006h
	call print_string_
	db 083h,0c4h,006h,0ebh,03fh
ld6c7:
	db 08bh,046h,0f6h,0d1h,0e0h,08bh,0d8h,003h,0ddh,08bh,047h,0e0h,005h,009h,000h,050h
	db 0b8h,016h,000h,050h,0ffh,076h,004h
	call set_cursor_
	db 083h,0c4h,006h,0b8h,0fbh,0ffh,050h,08bh,046h,0f6h,0d1h,0e0h,08bh,0d8h,003h,0ddh
	db 08bh,047h,0e0h,0b9h,004h,000h,0d3h,0e0h,005h,0deh,055h,050h,0ffh,076h,004h
	call print_string_
	db 083h,0c4h,006h
ld706:
	db 0b8h,098h,035h,050h,0b8h,03eh,055h,050h
	call get_menu_input_
	db 083h,0c4h,004h,089h,046h,0fah,083h,03eh,0c4h,04fh,001h,075h,018h,0b8h,0ffh,0ffh
	db 08bh,04eh,0fah,03bh,04eh,0f4h,07dh,002h,08bh,0c1h
ld72b:
	db 089h,046h,0f6h,0c7h,046h,0fah,005h,000h,0e9h,0d4h,000h
ld736:
	db 08bh,046h,0fah,0e9h,0c1h,000h
ld73c:
	db 083h,07eh,0f6h,0ffh,075h,02ah,0ffh,0b6h,022h,0ffh,0ffh,0b6h,024h,0ffh,0ffh,076h
	db 006h
	call set_cursor_
	db 083h,0c4h,006h,0b8h,003h,000h,050h,08dh,086h,026h,0ffh,050h,0ffh,076h,006h
	call print_string_hi_
	db 083h,0c4h,006h,0c7h,046h,0f6h,000h,000h,0ebh,02dh
ld76c:
	db 0b8h,000h,000h,050h,0b8h,004h,000h,050h,08bh,046h,0f6h,0d1h,0e0h,08bh,0d8h,003h
	db 0ddh,0ffh,077h,0e0h,0ffh,076h,004h
	call unhighlight_item_row_
	db 083h,0c4h,008h,08bh,046h,0f6h,048h,07ch,005h,0ffh,04eh,0f6h,0ebh,005h
ld794:
	db 0c7h,046h,0f6h,0ffh,0ffh
ld799:
	db 0ebh,06fh
ld79b:
	db 083h,07eh,0f6h,0ffh,075h,02ah,0ffh,0b6h,022h,0ffh,0ffh,0b6h,024h,0ffh,0ffh,076h
	db 006h
	call set_cursor_
	db 083h,0c4h,006h,0b8h,003h,000h,050h,08dh,086h,026h,0ffh,050h,0ffh,076h,006h
	call print_string_hi_
	db 083h,0c4h,006h,0c7h,046h,0f6h,000h,000h,0ebh,030h
ld7cb:
	db 0b8h,000h,000h,050h,0b8h,004h,000h,050h,08bh,046h,0f6h,0d1h,0e0h,08bh,0d8h,003h
	db 0ddh,0ffh,077h,0e0h,0ffh,076h,004h
	call unhighlight_item_row_
	db 083h,0c4h,008h,08bh,046h,0f6h,040h,03bh,046h,0f4h,07dh,005h,0ffh,046h,0f6h,0ebh
	db 005h
ld7f6:
	db 0c7h,046h,0f6h,0ffh,0ffh
ld7fb:
	db 0ebh,00dh
ld7fd:
	db 03dh,002h,000h,075h,003h,0e9h,037h,0ffh
ld805:
	db 03dh,004h,000h,074h,091h
ld80a:
	db 083h,07eh,0fah,005h,074h,003h,0e9h,082h,0feh
ld813:
	db 083h,07eh,0f6h,0ffh,075h,003h,0e9h,09ah,002h
ld81c:
	db 08bh,046h,0f6h,0d1h,0e0h,08bh,0d8h,003h,0ddh,08bh,047h,0e0h,089h,046h,0f8h,08ah
	db 046h,0f8h,050h,0b8h,0b0h,001h,0f7h,06eh,008h,08bh,0c8h,003h,046h,0feh,08bh,0d8h
	db 058h,088h,087h,0f8h,044h,08bh,046h,0f8h,0d1h,0e0h,0d1h,0e0h,0d1h,0e0h,003h,0c8h
	db 08bh,0d9h,080h,08fh,02fh,044h,001h,0b8h,000h,000h,050h,0ffh,0b7h,028h,044h,08dh
	db 086h,0d8h,0feh,050h,0b8h,001h,000h,050h
	call access_scenario_record_
	db 083h,0c4h,008h,08ah,086h,01ch,0ffh,02ah,0e4h,08bh,04eh,0feh,0d1h,0e1h,08bh,0d9h
	db 003h,0ddh,089h,047h,0d0h,083h,07eh,0feh,000h,074h,00bh,08bh,046h,0feh,03dh,001h
	db 000h,074h,003h,0e9h,090h,001h
ld88d:
	db 08ah,086h,01eh,0ffh,050h,0b8h,0b0h,001h,0f7h,06eh,008h,08bh,0d8h,058h,028h,087h
	db 049h,045h,08ah,086h,018h,0ffh,08bh,076h,0feh,0b9h,004h,000h,0d3h,0e6h,08bh,0ceh
	db 003h,0d9h,088h,087h,0e5h,044h,0c7h,046h,0fch,000h,000h
ld8b8:
	db 08bh,05eh,0fch,003h,0ddh,08ah,087h,006h,0ffh,050h,0b8h,0b0h,001h,0f7h,06eh,008h
	db 08bh,0c8h,051h,08bh,056h,0feh,0b9h,004h,000h,0d3h,0e2h,059h,003h,0c2h,08bh,0c8h
	db 003h,046h,0fch,08bh,0d8h,058h,088h,087h,0dch,044h,0ffh,046h,0fch,08bh,046h,0fch
	db 03dh,008h,000h,07ch,0cbh,0b8h,0b0h,001h,0f7h,06eh,008h,08bh,0d8h,08ah,087h,039h
	db 045h,02ah,0e4h,0b9h,005h,000h,099h,0f7h,0f9h,089h,046h,0fch,080h,0bfh,087h,045h
	db 00ch,074h,007h,080h,0bfh,087h,045h,00dh,075h,022h
ld912:
	db 08bh,046h,0feh,0b9h,004h,000h,0d3h,0e0h,003h,0d8h,08ah,087h,0e2h,044h,02ah,0e4h
	db 08bh,0c8h,08bh,046h,0fch,003h,0c8h,08bh,0c1h,005h,005h,000h,088h,087h,0e2h,044h
	db 0ebh,027h
ld934:
	db 083h,07eh,0fch,000h,07eh,021h,0b8h,0b0h,001h,0f7h,06eh,008h,08bh,056h,0feh,0b9h
	db 004h,000h,0d3h,0e2h,08bh,0cah,003h,0c1h,08bh,0d8h,08ah,087h,0e2h,044h,02ah,0e4h
	db 003h,046h,0fch,088h,087h,0e2h,044h
ld95b:
	db 08ah,086h,019h,0ffh,050h,0b8h,0b0h,001h,0f7h,06eh,008h,08bh,0c8h,051h,08bh,056h
	db 0feh,0b9h,004h,000h,0d3h,0e2h,059h,003h,0c2h,08bh,0d8h,058h,088h,087h,0e4h,044h
	db 080h,0beh,014h,0ffh,004h,075h,01ah,08ah,086h,01fh,0ffh,098h,08bh,0d0h,0d1h,0e0h
	db 0d1h,0e0h,003h,0c2h,08bh,0c8h,0b8h,000h,000h,02bh,0c1h,088h,087h,0e6h,044h,0ebh
	db 01ch
ld99c:
	db 08ah,087h,0e6h,044h,098h,050h,08ah,086h,01fh,0ffh,098h,08bh,0d0h,0d1h,0e0h,0d1h
	db 0e0h,003h,0c2h,08bh,0c8h,058h,02bh,0c1h,088h,087h,0e6h,044h
ld9b8:
	db 08bh,086h,0f0h,0feh,089h,087h,0d8h,044h,08bh,086h,0f2h,0feh,089h,087h,0dah,044h
	db 08ah,086h,020h,0ffh,088h,087h,0e7h,044h,08bh,046h,008h,0b9h,002h,000h,099h,0f7h
	db 0f9h,0d1h,0e0h,0d1h,0e0h,040h,050h,08bh,046h,0feh,040h,040h,040h,050h,0ffh,0b6h
	db 0d6h,0feh
	call set_cursor_
	db 083h,0c4h,006h,0b8h,004h,000h,050h,0b8h,0b0h,001h,0f7h,06eh,008h,08bh,04eh,0f8h
	db 0d1h,0e1h,0d1h,0e1h,0d1h,0e1h,003h,0c1h,08bh,0d8h,08ah,087h,02dh,044h,02ah,0e4h
	db 040h,02ah,0e4h,050h,0ffh,0b6h,0d6h,0feh
	call put_char_hi_
	db 083h,0c4h,006h,0ebh,017h
lda1d:
	db 08ah,086h,01eh,0ffh,050h,0b8h,0b0h,001h,0f7h,06eh,008h,08bh,0c8h,003h,046h,0feh
	db 08bh,0d8h,058h,028h,087h,048h,045h
lda34:
	db 0c7h,046h,0fch,001h,000h
lda39:
	db 08bh,05eh,0fch,003h,0ddh,08ah,087h,0f8h,0feh,02ah,0e4h,050h,0ffh,076h,0fch,0ffh
	db 076h,008h
	call add_skill_bonus_
	db 083h,0c4h,006h,0ffh,046h,0fch,08bh,046h,0fch,03dh,00eh,000h,07ch,0ddh,0b8h,0b0h
	db 001h,0f7h,06eh,008h,08bh,0d8h,08ah,087h,08ah,045h,03ah,086h,01ah,0ffh,073h,006h
	db 08ah,086h,01ah,0ffh,0ebh,004h
lda74:
	db 08ah,087h,08ah,045h
lda78:
	db 088h,087h,08ah,045h,08ah,087h,08bh,045h,050h,03ah,086h,01bh,0ffh,058h,073h,004h
	db 08ah,086h,01bh,0ffh
lda8c:
	db 088h,087h,08bh,045h,083h,07eh,0feh,000h,075h,019h,08bh,046h,0f8h,0d1h,0e0h,0d1h
	db 0e0h,0d1h,0e0h,003h,0d8h,08ah,087h,02fh,044h,02ah,0e4h,0a9h,008h,000h,074h,003h
	db 0ffh,046h,0feh
ldaaf:
	db 0ffh,076h,008h
	call fc726_
	db 059h
ldab6:
	db 0ffh,076h,008h,0ffh,076h,004h
	call draw_inventory_panel_
	db 083h,0c4h,004h
ldac2:
	db 0ffh,046h,0feh,08bh,046h,0feh,03dh,008h,000h,07dh,003h,0e9h,0efh,0f9h
ldad0:
	db 0c7h,046h,0feh,000h,000h
ldad5:
	db 08bh,046h,0feh,0d1h,0e0h,08bh,0d8h,003h,0ddh,083h,07fh,0d0h,000h,07fh,003h,0e9h
	db 098h,002h
ldae7:
	db 0b8h,000h,000h,050h,0b8h,003h,000h,050h,0b8h,020h,000h,050h,0ffh,076h,006h
	call fill_window_
	db 083h,0c4h,008h,0ffh,076h,006h
	call refresh_window_
	db 059h,0b8h,08eh,055h,050h,0b8h,07ch,001h,050h
	call get_message_
	db 083h,0c4h,004h,0b8h,001h,000h,050h,0b8h,08eh,055h,050h
	call strlen_
	db 059h,040h,0b9h,002h,000h,099h,0f7h,0f9h,08bh,0c8h,0b8h,014h,000h,02bh,0c1h,050h
	db 0ffh,076h,006h
	call set_cursor_
	db 083h,0c4h,006h,0b8h,003h,000h,050h,0b8h,08eh,055h,050h,0ffh,076h,006h
	call print_string_hi_
	db 083h,0c4h,006h,0b8h,002h,000h,050h,0b8h,0b0h,001h,0f7h,06eh,008h,003h,046h,0feh
	db 08bh,0d8h,08ah,087h,0f8h,044h,02ah,0e4h,0b9h,004h,000h,0d3h,0e0h,005h,0deh,055h
	db 050h
	call strlen_
	db 059h,005h,00bh,000h,0b9h,002h,000h,099h,0f7h,0f9h,08bh,0c8h,0b8h,014h,000h,02bh
	db 0c1h,050h,0ffh,076h,006h
	call set_cursor_
	db 083h,0c4h,006h,0b8h,003h,000h,050h,0b8h,0b0h,001h,0f7h,06eh,008h,003h,046h,0feh
	db 08bh,0d8h,08ah,087h,0f8h,044h,02ah,0e4h,0b9h,004h,000h,0d3h,0e0h,005h,0deh,055h
	db 050h,0ffh,076h,006h
	call print_string_hi_
	db 083h,0c4h,006h,08bh,05eh,006h,0feh,047h,006h,0b8h,003h,000h,050h,0b8h,03fh,000h
	db 050h,0ffh,076h,006h
	call put_char_hi_
	db 083h,0c4h,006h,08bh,05eh,006h,0feh,047h,006h,0feh,047h,006h,0c7h,086h,0d0h,0feh
	db 001h,000h,0c7h,086h,0d2h,0feh,001h,000h,0c7h,086h,0d4h,0feh,0ffh,0ffh,0b8h,000h
	db 000h,050h,0b8h,005h,000h,050h,0b8h,001h,000h,050h,0b8h,003h,000h,050h,0b8h,002h
	db 000h,050h,08bh,05eh,006h,08ah,047h,006h,02ah,0e4h,050h,08dh,086h,0d0h,0feh,050h
	db 0b8h,07dh,001h,050h,053h
	call run_menu_
	db 083h,0c4h,012h,089h,046h,0f6h,03dh,001h,000h,074h,003h,0e9h,06ch,001h
ldc13:
	db 08bh,046h,0feh,0d1h,0e0h,08bh,0d8h,003h,0ddh,083h,07fh,0d0h,009h,07dh,024h,08bh
	db 047h,0d0h,048h,089h,046h,0fch,0b8h,0b0h,001h,0f7h,06eh,008h,08bh,0c8h,08bh,046h
	db 0fch,003h,0c8h,08bh,0d9h,080h,0bfh,014h,045h,014h,073h,004h,0feh,087h,014h,045h
ldc43:
	db 0e9h,00fh,001h
ldc46:
	db 08bh,046h,0feh,0d1h,0e0h,08bh,0d8h,003h,0ddh,08bh,047h,0d0h,0e9h,0f0h,000h,0b8h
	db 0b0h,001h,0f7h,06eh,008h,08bh,0d8h,080h,0bfh,091h,045h,004h,073h,005h,0c6h,087h
	db 091h,045h,004h
ldc69:
	db 0e9h,0e9h,000h,0b8h,0b0h,001h,0f7h,06eh,008h,08bh,0d8h,080h,0bfh,092h,045h,004h
	db 073h,005h,0c6h,087h,092h,045h,004h
ldc80:
	db 0e9h,0d2h,000h,0b8h,0b0h,001h,0f7h,06eh,008h,08bh,0d8h,0c6h,087h,089h,045h,000h
	db 0c7h,046h,0fch,000h,000h
ldc95:
	db 0b8h,0b0h,001h,0f7h,06eh,008h,003h,046h,0fch,08bh,0d8h,0c6h,087h,00ah,045h,000h
	db 0ffh,046h,0fch,08bh,046h,0fch,03dh,00ah,000h,07ch,0e5h,0b8h,0b0h,001h,0f7h,06eh
	db 008h,08bh,0d8h,08bh,087h,002h,044h,089h,087h,000h,044h,08bh,087h,006h,044h,089h
	db 087h,004h,044h,0e9h,08ah,000h,0b8h,0b0h,001h,0f7h,06eh,008h,08bh,0d8h,08bh,087h
	db 0f0h,043h,08bh,097h,0f2h,043h,0b9h,06dh,001h,0bbh,000h,000h
	call $ldv
	db 083h,0fah,000h,07ch,007h,075h,007h,03dh,012h,000h,077h,002h
ldcf0:
	db 0ebh,013h
ldcf2:
	db 0b8h,0b0h,001h,0f7h,06eh,008h,08bh,0d8h,081h,087h,0f0h,043h,093h,0feh,083h,097h
	db 0f2h,043h,0ffh
ldd05:
	db 0b8h,0b0h,001h,0f7h,06eh,008h,08bh,0d8h,080h,0bfh,017h,045h,012h,073h,004h,0feh
	db 087h,017h,045h
ldd18:
	db 0ebh,03bh,0b8h,005h,000h,050h
	call random_
	db 059h,040h,040h,089h,046h,0fch,050h,0b8h,0b0h,001h,0f7h,06eh,008h,08bh,0d8h,058h
	db 001h,087h,002h,044h,001h,087h,000h,044h,0ebh,01ah,055h,0dch,06ch,0dch,083h,0dch
	db 0cbh,0dch,01ah,0ddh
ldd45:
	db 02dh,009h,000h,03dh,005h,000h,073h,008h,093h,0d1h,0e3h,02eh,0ffh,0a7h,03bh,0ddh
ldd55:
	db 0b8h,0b0h,001h,0f7h,06eh,008h,003h,046h,0feh,08bh,0d8h,08ah,087h,0f8h,044h,02ah
	db 0e4h,050h,0ffh,076h,008h
	call use_item_charge_
	db 083h,0c4h,004h,0ffh,076h,008h,0ffh,076h,006h,0ffh,076h,004h
	call draw_sheet_
	db 083h,0c4h,006h
ldd7f:
	db 0ffh,046h,0feh,08bh,046h,0feh,03dh,008h,000h,07dh,003h,0e9h,048h,0fdh
ldd8d:
	db 05eh,05fh,08bh,0e5h,05dh,0c3h
#endasm
