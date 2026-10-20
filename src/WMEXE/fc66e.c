#asm
	public fc66e_
	extrn $ldv:near
	extrn clear_window_:near
	extrn combat_delay_:near
	extrn do_advance_retreat_:near
	extrn do_cast_action_:near
	extrn do_change_equipment_:near
	extrn do_hide_:near
	extrn do_run_away_:near
	extrn do_use_item_action_:near
	extrn draw_member_card_x_:near
	extrn f723e_:near
	extrn fb934_:near
	extrn fc4e7_:near
	extrn fc546_:near
	extrn get_combatant_name_:near
	extrn get_message_:near
	extrn movmem_:near
	extrn play_sound_:near
	extrn print_combat_line_:near
	extrn random_:near
	extrn reduce_field6_:near
	extrn reset_animation_:near
	extrn test_bit_:near
fc66e_:
	db 055h,08bh,0ech,083h,0c4h,0f0h,056h,08bh,01eh,0b6h,043h,0c6h,087h,0dch,000h,000h
	db 0c7h,006h,014h,051h,006h,000h,0c7h,006h,0fch,050h,000h,000h,0c7h,006h,018h,051h
	db 000h,000h,0b8h,02ch,000h,0f7h,02eh,05ch,043h,08bh,0c8h,0a1h,05eh,043h,0d1h,0e0h
	db 08bh,0d8h,08bh,087h,0a8h,043h,003h,0c1h,089h,046h,0feh,08bh,0d8h,080h,07fh,022h
	db 002h,073h,00ch,080h,07fh,011h,000h,077h,006h,080h,07fh,010h,000h,076h,005h
lc6bd:
	db 05eh,08bh,0e5h,05dh,0c3h
lc6c2:
	db 0b8h,001h,000h,050h,0ffh,036h,0b6h,04fh
	call clear_window_
	db 083h,0c4h,004h,0c7h,046h,0fch,000h,000h,0c7h,046h,0fah,000h,000h,0c7h,046h,0f8h
	db 000h,000h,083h,07eh,0fch,000h,075h,024h,08bh,05eh,0feh,080h,07fh,00fh,000h,076h
	db 01bh,0b8h,064h,000h,050h
	call random_
	db 059h,03dh,050h,000h,07eh,00eh,08bh,05eh,0feh,080h,07fh,01eh,007h,074h,005h,0c7h
	db 046h,0fch,089h,00ch
lc709:
	db 083h,07eh,0fch,000h,075h,03bh,08bh,05eh,0feh,080h,07fh,015h,000h,076h,032h,0b8h
	db 064h,000h,050h
	call random_
	db 059h,03dh,028h,000h,07eh,025h,0b8h,003h,000h,050h
	call random_
	db 059h,005h,085h,00ch,089h,046h,0fch,0b8h,064h,000h,050h
	call random_
	db 059h,03dh,050h,000h,07eh,00ah,0c7h,046h,0fch,088h,00ch,0c7h,046h,0fah,001h,000h
lc74a:
	db 083h,07eh,0fch,000h,075h,020h,08bh,05eh,0feh,080h,07fh,014h,000h,076h,017h,0c7h
	db 046h,0fch,08ah,00ch,0b8h,064h,000h,050h
	call random_
	db 059h,03dh,019h,000h,07eh,005h,0c7h,046h,0fah,001h,000h
lc770:
	db 083h,07eh,0fch,000h,075h,020h,08bh,05eh,0feh,080h,07fh,012h,000h,076h,017h,0b8h
	db 064h,000h,050h
	call random_
	db 059h,03dh,050h,000h,07eh,00ah,0c7h,046h,0fch,084h,00ch,0c7h,046h,0fah,000h,000h
lc796:
	db 083h,07eh,0fch,000h,075h,020h,08bh,05eh,0feh,080h,07fh,016h,000h,076h,017h,0b8h
	db 064h,000h,050h
	call random_
	db 059h,03dh,04bh,000h,07eh,00ah,0c7h,046h,0fch,083h,00ch,0c7h,046h,0fah,000h,000h
lc7bc:
	db 0a1h,05eh,043h,0d1h,0e0h,08bh,0d8h,08bh,09fh,0b6h,043h,08ah,087h,0dch,000h,02ah
	db 0e4h,0a9h,004h,000h,074h,057h,08bh,05eh,0feh,08ah,047h,020h,02ah,0e4h,0b9h,02ch
	db 000h,0f7h,0e9h,08bh,0f0h,08ah,047h,01fh,02ah,0e4h,0d1h,0e0h,08bh,0d8h,08bh,09fh
	db 0a8h,043h,080h,078h,014h,000h,076h,035h,0c7h,046h,0fch,092h,00ch,0a1h,05eh,043h
	db 0d1h,0e0h,08bh,0d8h,08bh,09fh,0a8h,043h,08ah,087h,09ah,001h,02ah,0e4h,03dh,097h
	db 000h,075h,015h,08bh,05eh,0feh,0c6h,047h,02bh,003h,08bh,05eh,0feh,0c6h,047h,024h
	db 001h,0c7h,046h,0f8h,002h,000h,0ebh,005h
lc824:
	db 0c7h,046h,0f8h,001h,000h
lc829:
	db 083h,07eh,0fch,000h,07fh,003h,0e9h,0d0h,002h
lc832:
	db 0b8h,002h,000h,050h
	call combat_delay_
	db 059h,0ffh,036h,05ch,043h,0ffh,036h,05eh,043h,0b8h,00ch,050h,050h
	call get_combatant_name_
	db 083h,0c4h,006h,0b8h,0ach,050h,050h,0ffh,076h,0fch
	call get_message_
	db 083h,0c4h,004h,0c6h,006h,05ch,050h,000h,0b8h,000h,000h,050h,0b8h,00eh,000h,050h
	db 0b8h,006h,000h,083h,03eh,05eh,043h,000h,075h,003h,0b8h,001h,000h
lc873:
	db 050h,0b8h,05ch,050h,050h,0b8h,0ach,050h,050h,0b8h,00ch,050h,050h
	call print_combat_line_
	db 083h,0c4h,00ch,083h,07eh,0f8h,000h,07fh,003h,0e9h,011h,001h
lc88f:
	db 0b8h,02ch,000h,0f7h,02eh,05ch,043h,08bh,0f0h,0a1h,05eh,043h,0d1h,0e0h,08bh,0d8h
	db 08bh,09fh,0a8h,043h,080h,078h,02ah,0ffh,074h,072h,08ah,040h,02ah,098h,0b9h,00ah
	db 000h,099h,0f7h,0f9h,089h,046h,0f2h,08ah,040h,02ah,098h,099h,0f7h,0f9h,089h,056h
	db 0f0h,0c7h,006h,044h,036h,000h,000h,08bh,046h,0f2h,08bh,0d0h,0d1h,0e0h,0d1h,0e0h
	db 003h,0c2h,0d1h,0e0h,08bh,04eh,0f0h,0d1h,0e1h,003h,0c1h,08bh,0d8h,0c7h,087h,0feh
	db 050h,001h,000h
	call reset_animation_
	db 08bh,046h,0f2h,08bh,0d0h,0d1h,0e0h,0d1h,0e0h,003h,0c2h,0d1h,0e0h,08bh,04eh,0f0h
	db 0d1h,0e1h,003h,0c1h,08bh,0d8h,0c7h,087h,062h,043h,000h,000h,08bh,046h,0f2h,08bh
	db 0d0h,0d1h,0e0h,0d1h,0e0h,003h,0c2h,003h,046h,0f0h,08bh,0d8h,0c6h,087h,048h,043h
	db 000h,0c6h,087h,03eh,043h,000h
lc91b:
	db 0b8h,02ch,000h,0f7h,02eh,05ch,043h,08bh,0f0h,0a1h,05eh,043h,0d1h,0e0h,08bh,0d8h
	db 08bh,09fh,0a8h,043h,0c6h,040h,02ah,0ffh,083h,07eh,0f8h,001h,075h,031h,0b8h,02ch
	db 000h,0f7h,02eh,05ch,043h,08bh,0f0h,0a1h,05eh,043h,0d1h,0e0h,08bh,0d8h,08bh,09fh
	db 0a8h,043h,0c6h,040h,022h,003h,0b8h,02ch,000h,0f7h,02eh,05ch,043h,08bh,0f0h,0a1h
	db 05eh,043h,0d1h,0e0h,08bh,0d8h,08bh,09fh,0a8h,043h,0c7h,040h,002h,000h,000h
lc96a:
	db 0c7h,046h,0f2h,000h,000h
lc96f:
	db 0b8h,02ch,000h,0f7h,02eh,05ch,043h,003h,046h,0f2h,08bh,0f0h,0a1h,05eh,043h,0d1h
	db 0e0h,08bh,0d8h,08bh,09fh,0a8h,043h,0c6h,040h,018h,000h,0ffh,046h,0f2h,08bh,046h
	db 0f2h,03dh,004h,000h,07ch,0dah,0ffh,036h,0c8h,04fh
	call combat_delay_
	db 059h,0e9h,01dh,0fdh
lc9a0:
	db 0a1h,0c8h,04fh,0b9h,002h,000h,099h,0f7h,0f9h,050h
	call combat_delay_
	db 059h,083h,07eh,0fah,000h,075h,009h,08bh,05eh,0feh,0feh,047h,010h,0e9h,000h,0fdh
lc9bd:
	db 08bh,05eh,0feh,0c6h,047h,01eh,000h,08bh,05eh,0feh,0c6h,047h,021h,000h,08bh,05eh
	db 0feh,0c7h,047h,00ch,0ffh,0ffh,08bh,05eh,0feh,0c7h,047h,00ah,0ffh,000h,083h,03eh
	db 05eh,043h,000h,075h,02eh,0c7h,046h,0fch,007h,000h
lc9e7:
	db 0ffh,076h,0fch,0b8h,0b0h,001h,0f7h,02eh,05ch,043h,005h,0e7h,044h,050h
	call test_bit_
	db 083h,0c4h,004h,03dh,001h,000h,075h,009h,08bh,046h,0fch,08bh,05eh,0feh,089h,047h
	db 00ah
lca09:
	db 0ffh,04eh,0fch,07dh,0d9h,0ebh,030h
lca10:
	db 0c7h,046h,0fch,007h,000h
lca15:
	db 0ffh,076h,0fch,0a1h,05eh,043h,0d1h,0e0h,08bh,0d8h,08bh,087h,0b6h,043h,005h,053h
	db 000h,050h
	call test_bit_
	db 083h,0c4h,004h,03dh,001h,000h,075h,009h,08bh,046h,0fch,08bh,05eh,0feh,089h,047h
	db 00ah
lca3b:
	db 0ffh,04eh,0fch,07dh,0d5h
lca40:
	db 08bh,05eh,0feh,081h,07fh,00ah,0ffh,000h,075h,005h,0c7h,047h,00ah,008h,000h
lca4f:
	db 08bh,05eh,0feh,0c6h,047h,01ch,000h,0a0h,05eh,043h,08bh,05eh,0feh,088h,047h,01fh
	db 0a1h,05eh,043h,0d1h,0e0h,08bh,0d8h,08bh,09fh,0a8h,043h,08ah,087h,09dh,001h,02ah
	db 0e4h,050h
	call random_
	db 059h,08bh,05eh,0feh,088h,047h,020h,0b8h,001h,000h,050h,0ffh,036h,0b6h,04fh
	call clear_window_
	db 083h,0c4h,004h,0b8h,002h,000h,050h
	call combat_delay_
	db 059h,0ffh,036h,05ch,043h,0ffh,036h,05eh,043h,0b8h,00ch,050h,050h
	call get_combatant_name_
	db 083h,0c4h,006h,0b8h,0ach,050h,050h,0b8h,08bh,00ch,050h
	call get_message_
	db 083h,0c4h,004h,0c6h,006h,05ch,050h,000h,0b8h,000h,000h,050h,0b8h,00eh,000h,050h
	db 0b8h,006h,000h,083h,03eh,05eh,043h,000h,075h,003h,0b8h,001h,000h
lcacb:
	db 050h,0b8h,05ch,050h,050h,0b8h,0ach,050h,050h,0b8h,00ch,050h,050h
	call print_combat_line_
	db 083h,0c4h,00ch,0b8h,000h,000h,050h
	call play_sound_
	db 059h,0a1h,0c8h,04fh,0b9h,002h,000h,099h,0f7h,0f9h,050h
	call combat_delay_
	db 059h,0b8h,001h,000h,050h,0ffh,036h,0b6h,04fh
	call clear_window_
	db 083h,0c4h,004h
lcb02:
	db 08bh,05eh,0feh,08ah,047h,020h,02ah,0e4h,0b9h,02ch,000h,0f7h,0e9h,08bh,0f0h,08ah
	db 047h,01fh,02ah,0e4h,0d1h,0e0h,08bh,0d8h,08bh,09fh,0a8h,043h,080h,078h,022h,003h
	db 073h,006h,080h,078h,02bh,000h,074h,036h
lcb2a:
	db 08bh,05eh,0feh,080h,07fh,01fh,000h,075h,012h,08ah,047h,020h,02ah,0e4h,050h
	call fc4e7_
	db 059h,08bh,05eh,0feh,088h,047h,020h,0ebh,01bh
lcb45:
	db 08bh,05eh,0feh,08ah,047h,020h,02ah,0e4h,050h,08ah,047h,01fh,02ah,0e4h,050h
	call fc546_
	db 083h,0c4h,004h,08bh,05eh,0feh,088h,047h,020h
lcb60:
	db 083h,07eh,0fah,001h,075h,014h,08bh,05eh,0feh,08ah,047h,020h,02ah,0e4h,03bh,006h
	db 05ch,043h,075h,006h,0feh,047h,010h,0e9h,043h,0fbh
lcb7a:
	db 083h,03eh,05eh,043h,000h,074h,003h,0e9h,01bh,001h
lcb84:
	db 0b8h,0b0h,001h,0f7h,02eh,05ch,043h,08bh,0d8h,08ah,087h,014h,045h,08bh,01eh,0b6h
	db 043h,088h,087h,086h,000h,0b8h,0b0h,001h,0f7h,02eh,05ch,043h,08bh,0d8h,08ah,087h
	db 015h,045h,08bh,01eh,0b6h,043h,088h,087h,087h,000h,0b8h,0b0h,001h,0f7h,02eh,05ch
	db 043h,08bh,0d8h,08ah,087h,018h,045h,08bh,01eh,0b6h,043h,088h,087h,088h,000h,0b8h
	db 0b0h,001h,0f7h,02eh,05ch,043h,08bh,0d8h,08ah,087h,019h,045h,08bh,01eh,0b6h,043h
	db 088h,087h,089h,000h,0b8h,00eh,000h,050h,0a1h,0b6h,043h,005h,094h,000h,050h,0b8h
	db 0b0h,001h,0f7h,02eh,05ch,043h,005h,03ah,045h,050h
	call movmem_
	db 083h,0c4h,006h,0b8h,008h,000h,050h,0a1h,0b6h,043h,005h,0beh,000h,050h,0b8h,0b0h
	db 001h,0f7h,02eh,05ch,043h,005h,048h,045h,050h
	call movmem_
	db 083h,0c4h,006h,08bh,01eh,0b6h,043h,08ah,087h,0beh,000h,098h,050h,08ah,087h,0bfh
	db 000h,098h,08bh,0c8h,058h,003h,0c1h,050h,08ah,087h,0c0h,000h,098h,08bh,0c8h,058h
	db 003h,0c1h,088h,087h,0beh,000h,0b8h,0b0h,001h,0f7h,02eh,05ch,043h,08bh,0d8h,08ah
	db 087h,093h,045h,08bh,01eh,0b6h,043h,088h,087h,0d3h,000h,0b8h,0b0h,001h,0f7h,02eh
	db 05ch,043h,08bh,0d8h,08ah,087h,092h,045h,08bh,01eh,0b6h,043h,088h,087h,0d5h,000h
	db 0b8h,0b0h,001h,0f7h,02eh,05ch,043h,08bh,0d8h,08ah,087h,091h,045h,08bh,01eh,0b6h
	db 043h,088h,087h,0d4h,000h,0b8h,0b0h,001h,0f7h,02eh,05ch,043h,08bh,0d8h,08ah,087h
	db 086h,045h,08bh,01eh,0b6h,043h,088h,087h,0d6h,000h,0b8h,0b0h,001h,0f7h,02eh,05ch
	db 043h,08bh,0d8h,08ah,087h,087h,045h,08bh,01eh,0b6h,043h,088h,087h,0d0h,000h,0e9h
	db 06ah,001h
lcc9f:
	db 08bh,05eh,0feh,080h,07fh,01fh,000h,074h,003h,0e9h,05eh,001h
lccab:
	db 08ah,047h,020h,02ah,0e4h,0b9h,0b0h,001h,0f7h,0e9h,08bh,0d8h,08ah,087h,014h,045h
	db 08bh,01eh,0b6h,043h,088h,087h,086h,000h,08bh,05eh,0feh,08ah,047h,020h,02ah,0e4h
	db 0f7h,0e9h,08bh,0d8h,08ah,087h,015h,045h,08bh,01eh,0b6h,043h,088h,087h,087h,000h
	db 08bh,05eh,0feh,08ah,047h,020h,02ah,0e4h,0f7h,0e9h,08bh,0d8h,08ah,087h,018h,045h
	db 08bh,01eh,0b6h,043h,088h,087h,088h,000h,08bh,05eh,0feh,08ah,047h,020h,02ah,0e4h
	db 0f7h,0e9h,08bh,0d8h,08ah,087h,019h,045h,08bh,01eh,0b6h,043h,088h,087h,089h,000h
	db 0b8h,00eh,000h,050h,0a1h,0b6h,043h,005h,094h,000h,050h,08bh,05eh,0feh,08ah,047h
	db 020h,02ah,0e4h,0f7h,0e9h,005h,03ah,045h,050h
	call movmem_
	db 083h,0c4h,006h,0b8h,008h,000h,050h,0a1h,0b6h,043h,005h,0beh,000h,050h,08bh,05eh
	db 0feh,08ah,047h,020h,02ah,0e4h,0b9h,0b0h,001h,0f7h,0e9h,005h,048h,045h,050h
	call movmem_
	db 083h,0c4h,006h,0c7h,046h,0fch,000h,000h
lcd51:
	db 083h,07eh,0fch,001h,074h,02ch,083h,07eh,0fch,002h,074h,026h,08bh,076h,0fch,08bh
	db 01eh,0b6h,043h,08ah,080h,0beh,000h,098h,050h,08ah,087h,0bfh,000h,098h,08bh,0c8h
	db 058h,003h,0c1h,050h,08ah,087h,0c0h,000h,098h,08bh,0c8h,058h,003h,0c1h,088h,080h
	db 0beh,000h
lcd83:
	db 0ffh,046h,0fch,08bh,046h,0fch,03dh,008h,000h,07ch,0c3h,08bh,05eh,0feh,08ah,047h
	db 020h,02ah,0e4h,0b9h,0b0h,001h,0f7h,0e9h,08bh,0d8h,08ah,087h,093h,045h,08bh,01eh
	db 0b6h,043h,088h,087h,0d3h,000h,08bh,05eh,0feh,08ah,047h,020h,02ah,0e4h,0f7h,0e9h
	db 08bh,0d8h,08ah,087h,092h,045h,08bh,01eh,0b6h,043h,088h,087h,0d5h,000h,08bh,05eh
	db 0feh,08ah,047h,020h,02ah,0e4h,0f7h,0e9h,08bh,0d8h,08ah,087h,091h,045h,08bh,01eh
	db 0b6h,043h,088h,087h,0d4h,000h,08bh,05eh,0feh,08ah,047h,020h,02ah,0e4h,0f7h,0e9h
	db 08bh,0d8h,08ah,087h,086h,045h,08bh,01eh,0b6h,043h,088h,087h,0d6h,000h,08bh,05eh
	db 0feh,08ah,047h,020h,02ah,0e4h,0f7h,0e9h,08bh,0d8h,08ah,087h,087h,045h,08bh,01eh
	db 0b6h,043h,088h,087h,0d0h,000h
lce09:
	db 08bh,05eh,0feh,08ah,047h,01eh,02ah,0e4h,0e9h,043h,002h,08bh,05eh,0feh,08ah,047h
	db 020h,02ah,0e4h,0b9h,02ch,000h,0f7h,0e9h,08bh,0f0h,08ah,047h,01fh,02ah,0e4h,0d1h
	db 0e0h,08bh,0d8h,08bh,09fh,0a8h,043h,080h,078h,022h,003h,072h,003h,0e9h,0aeh,000h
lce39:
	db 080h,078h,02bh,000h,074h,003h,0e9h,0a5h,000h
lce42:
	db 08bh,05eh,0feh,08ah,047h,021h,02ah,0e4h,0b9h,002h,000h,099h,0f7h,0f9h,08bh,0f2h
	db 08ah,040h,01ch,02ah,0e4h,089h,046h,0f6h,083h,03eh,05eh,043h,000h,075h,020h,0b8h
	db 0b0h,001h,0f7h,02eh,05ch,043h,08bh,0c8h,08bh,046h,0f6h,003h,0c8h,08bh,0d9h,08ah
	db 087h,0f8h,044h,02ah,0e4h,03dh,0ffh,000h,075h,005h,0c7h,046h,0f6h,000h,000h
lce81:
	db 08bh,05eh,0feh,08ah,047h,021h,02ah,0e4h,0b9h,002h,000h,099h,0f7h,0f9h,08bh,0c2h
	db 0d1h,0e0h,08bh,0f0h,08bh,040h,00ah,089h,046h,0f4h,051h
	call combat_delay_
	db 059h,0ffh,076h,0f4h,0ffh,076h,0f6h,0ffh,076h,0feh
	call f723e_
	db 083h,0c4h,006h,08bh,046h,0f4h,03dh,003h,000h,074h,005h,03dh,006h,000h,075h,017h
lcebc:
	db 0b8h,004h,000h,050h
	call random_
	db 059h,040h,040h,040h,050h,0ffh,076h,0feh
	call reduce_field6_
	db 083h,0c4h,004h,0ebh,014h
lced3:
	db 0b8h,003h,000h,050h
	call random_
	db 059h,040h,040h,050h,0ffh,076h,0feh
	call reduce_field6_
	db 083h,0c4h,004h
lcee7:
	db 0e9h,07ah,001h,0b8h,002h,000h,050h
	call combat_delay_
	db 059h,0ffh,076h,0feh
	call do_cast_action_
	db 059h,050h,0ffh,076h,0feh
	call reduce_field6_
	db 083h,0c4h,004h,0e9h,05eh,001h,0b8h,002h,000h,050h
	call combat_delay_
	db 059h,0ffh,076h,0feh
	call fb934_
	db 059h,050h,0ffh,076h,0feh
	call reduce_field6_
	db 083h,0c4h,004h,0e9h,042h,001h,08bh,05eh,0feh,083h,07fh,00ah,003h,075h,033h,08bh
	db 047h,008h,0bbh,005h,000h,0f7h,0ebh,0b9h,064h,000h,0bbh,000h,000h
	call $ldv
	db 089h,046h,0fch,050h
	call random_
	db 059h,08bh,05eh,0feh,08bh,04fh,006h,003h,0c1h,040h,089h,047h,006h,08bh,047h,006h
	db 03bh,047h,008h,07eh,006h,08bh,047h,008h,089h,047h,006h
lcf5e:
	db 0e9h,003h,001h,0b8h,002h,000h,050h
	call combat_delay_
	db 059h
	call do_change_equipment_
	db 0b8h,004h,000h,050h
	call random_
	db 059h,040h,040h,040h,050h,0ffh,076h,0feh
	call reduce_field6_
	db 083h,0c4h,004h
	call reset_animation_
	db 0b8h,000h,000h,050h,0ffh,036h,0b6h,04fh
	call clear_window_
	db 083h,0c4h,004h,0c7h,006h,03ah,036h,011h,000h,0c7h,006h,0ceh,04fh,00dh,000h,0a1h
	db 05ch,043h,0a3h,0cch,043h,0e9h,016h,0f7h,0b8h,002h,000h,050h
	call combat_delay_
	db 059h,0ffh,076h,0feh
	call do_use_item_action_
	db 059h,0b8h,003h,000h,050h
	call random_
	db 059h,040h,050h,0ffh,076h,0feh
	call reduce_field6_
	db 083h,0c4h,004h,0e9h,098h,000h,0b8h,002h,000h,050h
	call combat_delay_
	db 059h,08bh,05eh,0feh,0ffh,077h,00ah,0ffh,036h,05ch,043h
	call do_advance_retreat_
	db 083h,0c4h,004h,0b8h,004h,000h,050h
	call random_
	db 059h,040h,040h,040h,050h,0ffh,076h,0feh
	call reduce_field6_
	db 083h,0c4h,004h,0ebh,069h,0b8h,002h,000h,050h
	call combat_delay_
	db 059h,0ffh,076h,0feh
	call do_hide_
	db 059h,0b8h,003h,000h,050h
	call random_
	db 059h,040h,050h,0ffh,076h,0feh
	call reduce_field6_
	db 083h,0c4h,004h,0ebh,045h,0b8h,002h,000h,050h
	call combat_delay_
	db 059h,0ffh,076h,0feh
	call do_run_away_
	db 059h,0b8h,005h,000h,050h
	call random_
	db 059h,005h,005h,000h,050h,0ffh,076h,0feh
	call reduce_field6_
	db 083h,0c4h,004h,0ebh,01fh,014h,0ceh,022h,0cfh,061h,0cfh,0eah,0ceh,0a7h,0cfh,0cch
	db 0cfh,0fbh,0cfh,01fh,0d0h,006h,0cfh
ld057:
	db 03dh,009h,000h,073h,008h,093h,0d1h,0e3h,02eh,0ffh,0a7h,045h,0d0h
ld064:
	db 083h,03eh,05eh,043h,000h,075h,00eh,0b8h,000h,000h,050h,0ffh,036h,05ch,043h
	call draw_member_card_x_
	db 083h,0c4h,004h
ld079:
	db 0e9h,041h,0f6h
#endasm
