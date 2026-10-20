#asm
	public f7ddc_
	extrn clear_window_area_:near
	extrn combat_delay_:near
	extrn do_damage_effect_:near
	extrn draw_member_card_x_:near
	extrn f7af7_:near
	extrn get_combatant_name_:near
	extrn get_message_:near
	extrn int_to_string_:near
	extrn movmem_:near
	extrn play_sound_:near
	extrn print_combat_centered_:near
	extrn print_combat_line_:near
	extrn print_msg_centered_:near
	extrn random_:near
	extrn set_cursor_:near
f7ddc_:
	db 055h,08bh,0ech,083h,0c4h,0e0h,056h,0c7h,006h,00ah,050h,004h,000h,0b8h,02ch,000h
	db 0f7h,06eh,006h,08bh,0f0h,08bh,046h,004h,0d1h,0e0h,08bh,0d8h,08bh,09fh,0a8h,043h
	db 080h,078h,022h,003h,073h,006h,080h,078h,02bh,000h,074h,008h
l7e08:
	db 0b8h,000h,000h
l7e0b:
	db 05eh,08bh,0e5h,05dh,0c3h
l7e10:
	db 0c7h,046h,0feh,000h,000h,08bh,046h,00ch,089h,046h,0fah
l7e1b:
	db 083h,07eh,0fah,000h,07eh,024h,08bh,046h,008h,089h,046h,0f8h
l7e27:
	db 083h,07eh,0f8h,000h,07eh,013h,0ffh,076h,00ah
	call random_
	db 059h,003h,046h,0feh,040h,089h,046h,0feh,0ffh,04eh,0f8h,0ebh,0e7h
l7e40:
	db 0ffh,04eh,0fah,0ebh,0d6h
l7e45:
	db 083h,07eh,004h,000h,075h,01bh,0b8h,00eh,000h,050h,0a1h,0b6h,043h,005h,094h,000h
	db 050h,0b8h,0b0h,001h,0f7h,06eh,006h,005h,03ah,045h,050h
	call movmem_
	db 083h,0c4h,006h
l7e66:
	db 0b8h,064h,000h,050h
	call random_
	db 059h,050h,08bh,046h,004h,0d1h,0e0h,08bh,0d8h,08bh,09fh,0b6h,043h,08bh,076h,00eh
	db 08ah,080h,094h,000h,02ah,0e4h,08bh,0c8h,02bh,046h,010h,08bh,0c8h,058h,03bh,0c1h
	db 07eh,015h,0ffh,076h,010h,056h,0ffh,076h,0feh,0ffh,076h,004h
	call f7af7_
	db 083h,0c4h,008h,089h,046h,0feh,0ebh,005h
l7ea4:
	db 0c7h,046h,0feh,000h,000h
l7ea9:
	db 0b8h,004h,000h,050h,0b8h,027h,000h,050h,0b8h,002h,000h,050h,0b8h,000h,000h,050h
	db 0ffh,036h,0b6h,04fh
	call clear_window_area_
	db 083h,0c4h,00ah,0b8h,002h,000h,050h,0b8h,001h,000h,050h,0ffh,036h,0b6h,04fh
	call set_cursor_
	db 083h,0c4h,006h,0b8h,001h,000h,050h
	call combat_delay_
	db 059h,0ffh,076h,006h,0ffh,076h,004h,0b8h,00ch,050h,050h
	call get_combatant_name_
	db 083h,0c4h,006h,0b8h,002h,000h,050h,0b8h,006h,000h,083h,07eh,004h,000h,075h,003h
	db 0b8h,001h,000h
l7efd:
	db 050h,0b8h,00ch,050h,050h
	call print_combat_centered_
	db 083h,0c4h,006h,083h,07eh,0feh,000h,07fh,003h,0e9h,0ffh,000h
l7f11:
	db 0b8h,003h,000h,050h,0b8h,004h,000h,050h,0b8h,0e6h,00ch,050h
	call print_msg_centered_
	db 083h,0c4h,006h,0b8h,002h,000h,050h
	call combat_delay_
	db 059h,0b8h,00ch,050h,050h,0ffh,076h,0feh
	call int_to_string_
	db 083h,0c4h,004h,0b8h,0ach,050h,050h,0b8h,0edh,00ch,050h
	call get_message_
	db 083h,0c4h,004h,0b8h,004h,000h,050h,0b8h,000h,000h,050h,0ffh,036h,0b6h,04fh
	call set_cursor_
	db 083h,0c4h,006h,0c6h,006h,05ch,050h,000h,0b8h,000h,000h,050h,0b8h,005h,000h,050h
	db 050h,0b8h,05ch,050h,050h,0b8h,0ach,050h,050h,0b8h,00ch,050h,050h
	call print_combat_line_
	db 083h,0c4h,00ch,08bh,046h,0feh,050h,0b8h,02ch,000h,0f7h,06eh,006h,08bh,0f0h,08bh
	db 046h,004h,0d1h,0e0h,08bh,0d8h,08bh,09fh,0a8h,043h,058h,029h,040h,002h,0b8h,02ch
	db 000h,0f7h,06eh,006h,08bh,0f0h,08bh,046h,004h,0d1h,0e0h,08bh,0d8h,08bh,09fh,0a8h
	db 043h,083h,078h,002h,000h,07fh,039h,0a1h,0c8h,04fh,0b9h,004h,000h,099h,0f7h,0f9h
	db 050h
	call combat_delay_
	db 059h,0b8h,000h,000h,050h,0b8h,050h,00dh,050h,0b8h,006h,000h,050h,050h,0b8h,000h
	db 000h,050h,0b8h,003h,000h,050h,0b8h,000h,000h,050h,0b8h,09eh,00dh,050h,0ffh,076h
	db 006h,0ffh,076h,004h
	call do_damage_effect_
	db 083h,0c4h,014h,0ebh,029h
l7fe5:
	db 083h,07eh,004h,000h,075h,015h,0b8h,002h,000h,050h
	call play_sound_
	db 059h,0b8h,001h,000h,050h,0ffh,076h,006h
	call draw_member_card_x_
	db 083h,0c4h,004h
l8000:
	db 0a1h,0c8h,04fh,0b9h,004h,000h,099h,0f7h,0f9h,050h
	call combat_delay_
	db 059h
l800e:
	db 0ebh,012h
l8010:
	db 0b8h,003h,000h,050h,0b8h,00eh,000h,050h,0b8h,0eeh,00ch,050h
	call print_msg_centered_
	db 083h,0c4h,006h
l8022:
	db 0a1h,0c8h,04fh,0b9h,004h,000h,099h,0f7h,0f9h,050h
	call combat_delay_
	db 059h,08bh,046h,0feh,0e9h,0d5h,0fdh
#endasm
