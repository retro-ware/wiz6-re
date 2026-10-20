#asm
	public do_cast_spell_
	extrn $ldv:near
	extrn calc_spell_level_value_:near
	extrn clamp_toward_x_:near
	extrn clear_msg_line_:near
	extrn combat_delay_:near
	extrn draw_member_card_x_:near
	extrn f5eea_:near
	extrn f7af7_:near
	extrn f7ddc_:near
	extrn f8149_:near
	extrn f825f_:near
	extrn f83f3_:near
	extrn f861e_:near
	extrn f87ae_:near
	extrn f88b1_:near
	extrn f8bdb_:near
	extrn f8efc_:near
	extrn f8fa8_:near
	extrn print_msg_centered_:near
	extrn random_:near
	extrn roll_dice_x_:near
do_cast_spell_:
	db 055h,08bh,0ech,083h,0c4h,0f4h,057h,056h,08bh,05eh,004h,08ah,047h,01fh,02ah,0e4h
	db 089h,046h,0fah,08ah,047h,020h,089h,046h,0f8h,0c7h,006h,016h,051h,000h,000h,0ffh
	db 076h,008h,0ffh,076h,006h
	call calc_spell_level_value_
	db 083h,0c4h,004h,080h,07eh,0fah,0ffh,074h,01ch,050h,0b8h,02ch,000h,0f7h,06eh,0f8h
	db 08bh,0f0h,08bh,046h,0fah,0d1h,0e0h,08bh,0d8h,08bh,09fh,0a8h,043h,058h,02bh,000h
	db 08bh,05eh,004h,003h,007h
l9452:
	db 089h,046h,0f6h,08bh,046h,006h,0e9h,0b9h,01bh,0b8h,001h,000h,050h,0b8h,002h,000h
	db 050h,0ffh,076h,0f8h,0ffh,076h,0fah
	call f8efc_
	db 083h,0c4h,008h,0ffh,076h,0f6h,0b8h,001h,000h,050h,0ffh,076h,008h,0b8h,007h,000h
	db 050h,0b8h,001h,000h,050h,0ffh,076h,0f8h,0ffh,076h,0fah
	call f8149_
	db 083h,0c4h,00eh,0e9h,091h,01bh,0b8h,000h,000h,050h,0b8h,003h,000h,050h,0ffh,076h
	db 0f8h,0ffh,076h,0fah
	call f8efc_
	db 083h,0c4h,008h,0b8h,000h,000h,050h,050h,0ffh,076h,008h,0b8h,002h,000h,050h,0ffh
	db 076h,008h,0b8h,000h,000h,050h,0ffh,076h,0f6h,0b8h,004h,000h,050h,0b8h,002h,000h
	db 050h,0b8h,094h,00dh,050h,0b8h,000h,000h,08bh,04eh,008h,041h,02bh,0c1h,050h,0ffh
	db 076h,0fah
	call f825f_
	db 083h,0c4h,018h,0e9h,045h,01bh,0b8h,001h,000h,050h,0b8h,000h,000h,050h,050h,0ffh
	db 076h,0fah
	call f8efc_
	db 083h,0c4h,008h,0ffh,076h,0f6h,0b8h,001h,000h,050h,0ffh,076h,008h,0b8h,005h,000h
	db 050h,0b8h,002h,000h,050h,0b8h,000h,000h,08bh,04eh,008h,041h,041h,041h,02bh,0c1h
	db 050h,0ffh,076h,0fah
	call f8149_
	db 083h,0c4h,00eh,0e9h,009h,01bh,0b8h,000h,000h,050h,0a1h,05eh,043h,0d1h,0e0h,08bh
	db 0d8h,08bh,09fh,0a8h,043h,08ah,087h,08ch,001h,02ah,0e4h,050h,08bh,046h,008h,08bh
	db 0d0h,0b1h,004h,0d3h,0e0h,02bh,0c2h,050h
	call clamp_toward_x_
	db 083h,0c4h,006h,08bh,00eh,05eh,043h,0d1h,0e1h,08bh,0d9h,08bh,09fh,0a8h,043h,088h
	db 087h,08ch,001h,0e9h,0ceh,01ah,0b8h,001h,000h,050h,0b8h,000h,000h,050h,050h,0ffh
	db 076h,0fah
	call f8efc_
	db 083h,0c4h,008h,0ffh,076h,0f6h,0b8h,001h,000h,050h,0ffh,076h,008h,0b8h,003h,000h
	db 050h,050h,0b8h,000h,000h,08bh,04eh,008h,083h,0c1h,004h,02bh,0c1h,050h,0ffh,076h
	db 0fah
	call f8149_
	db 083h,0c4h,00eh,0e9h,095h,01ah,0b8h,001h,000h,050h,0b8h,002h,000h,050h,0b8h,000h
	db 000h,050h,0ffh,076h,0fah
	call f8efc_
	db 083h,0c4h,008h,0ffh,076h,0f6h,0b8h,001h,000h,050h,0ffh,076h,008h,0b8h,00ah,000h
	db 050h,0b8h,001h,000h,050h,0b8h,000h,000h,08bh,04eh,008h,041h,041h,041h,02bh,0c1h
	db 050h,0ffh,076h,0fah
	call f8149_
	db 083h,0c4h,00eh,0e9h,056h,01ah,0b8h,001h,000h,050h,0b8h,002h,000h,050h,0b8h,000h
	db 000h,050h,0ffh,076h,0fah
	call f8efc_
	db 083h,0c4h,008h,0ffh,076h,0f6h,0ffh,076h,008h,0b8h,000h,000h,08bh,04eh,008h,041h
	db 041h,041h,02bh,0c1h,050h,0ffh,076h,0fah
	call f8bdb_
	db 083h,0c4h,008h,0e9h,023h,01ah,0b8h,001h,000h,050h,0b8h,000h,000h,050h,050h,0ffh
	db 076h,0fah
	call f8efc_
	db 083h,0c4h,008h,0ffh,076h,0f6h,0b8h,001h,000h,050h,0ffh,076h,008h,0b8h,004h,000h
	db 050h,0b8h,002h,000h,050h,0b8h,0f6h,0ffh,050h,0ffh,076h,0fah
	call f8149_
	db 083h,0c4h,00eh,08bh,046h,0fah,0d1h,0e0h,08bh,0d8h,08bh,09fh,0a8h,043h,08ah,087h
	db 092h,001h,02ah,0e4h,089h,046h,0feh,03bh,046h,008h,07dh,006h,08bh,046h,008h,089h
	db 046h,0feh
l964e:
	db 08bh,046h,0feh,040h,088h,087h,092h,001h,0a1h,05ah,043h,040h,08bh,04eh,0fah,0d1h
	db 0e1h,08bh,0d9h,08bh,09fh,0a8h,043h,088h,087h,096h,001h,0e9h,0b5h,019h,0b8h,001h
	db 000h,050h,0b8h,000h,000h,050h,050h,083h,03eh,05eh,043h,000h,075h,003h,0b8h,001h
	db 000h
l967f:
	db 050h
	call f8efc_
	db 083h,0c4h,008h,0ffh,076h,0f6h,0b8h,001h,000h,050h,0ffh,076h,008h,0b8h,005h,000h
	db 050h,050h,083h,03eh,05eh,043h,000h,074h,008h,0a1h,05eh,043h,03dh,006h,000h,075h
	db 005h
l96a4:
	db 0b8h,001h,000h,0ebh,003h
l96a9:
	db 0b8h,000h,000h
l96ac:
	db 050h
	call f861e_
	db 083h,0c4h,00ch,0e9h,06bh,019h,0b8h,001h,000h,050h,050h,0ffh,076h,0f8h,0ffh,076h
	db 0fah
	call f8efc_
	db 083h,0c4h,008h,0ffh,076h,0f6h,0b8h,003h,000h,050h,0ffh,076h,008h,0b8h,006h,000h
	db 050h,0b8h,001h,000h,050h,0ffh,076h,0f8h,0ffh,076h,0fah
	call f8149_
	db 083h,0c4h,00eh,0e9h,039h,019h,0b8h,000h,000h,050h,0b8h,010h,000h,050h,0b8h,000h
	db 000h,050h,0ffh,076h,0fah
	call f8efc_
	db 083h,0c4h,008h,0b8h,000h,000h,050h,050h,0ffh,076h,008h,0b8h,003h,000h,050h,0ffh
	db 076h,008h,0b8h,000h,000h,050h,0ffh,076h,0f6h,0b8h,001h,000h,050h,0b8h,00ah,000h
	db 050h,0b8h,091h,00dh,050h,0b8h,0f6h,0ffh,050h,0ffh,076h,0fah
	call f825f_
	db 083h,0c4h,018h,0e9h,0f2h,018h,0b8h,000h,000h,050h,0b8h,010h,000h,050h,0b8h,000h
	db 000h,050h,0ffh,076h,0fah
	call f8efc_
	db 083h,0c4h,008h,0b8h,001h,000h,050h,0ffh,076h,008h,0ffh,076h,0f6h,0b8h,000h,000h
	db 08bh,04eh,008h,041h,041h,041h,02bh,0c1h,050h,0ffh,076h,0fah
	call f88b1_
	db 083h,0c4h,00ah,0e9h,0bbh,018h,0b8h,000h,000h,050h,0b8h,010h,000h,050h,0b8h,000h
	db 000h,050h,0ffh,076h,0fah
	call f8efc_
	db 083h,0c4h,008h,0b8h,000h,000h,050h,0ffh,076h,008h,0ffh,076h,0f6h,08bh,04eh,008h
	db 041h,041h,041h,02bh,0c1h,050h,0ffh,076h,0fah
	call f88b1_
	db 083h,0c4h,00ah,0e9h,087h,018h,0c7h,046h,0feh,000h,000h,0ebh,049h
l97a1:
	db 0b8h,02ch,000h,0f7h,06eh,0feh,08bh,0f0h,0a1h,05eh,043h,0d1h,0e0h,08bh,0d8h,08bh
	db 09fh,0a8h,043h,080h,078h,022h,003h,073h,02dh,0b8h,000h,000h,050h,08ah,040h,029h
	db 098h,050h,08bh,046h,008h,0d1h,0e0h,050h
	call clamp_toward_x_
	db 083h,0c4h,006h,050h,0b8h,02ch,000h,0f7h,06eh,0feh,08bh,0f0h,0a1h,05eh,043h,0d1h
	db 0e0h,08bh,0d8h,08bh,09fh,0a8h,043h,058h,088h,040h,029h
l97e7:
	db 0ffh,046h,0feh
l97ea:
	db 0a1h,05eh,043h,0d1h,0e0h,08bh,0d8h,08bh,09fh,0a8h,043h,08ah,087h,09dh,001h,02ah
	db 0e4h,03bh,046h,0feh,07fh,0a1h,0e9h,01eh,018h,0b8h,000h,000h,050h,0a1h,05eh,043h
	db 0d1h,0e0h,08bh,0d8h,08bh,09fh,0a8h,043h,08ah,087h,08dh,001h,02ah,0e4h,050h,08bh
	db 046h,008h,08bh,0d0h,0b1h,004h,0d3h,0e0h,02bh,0c2h,050h
	call clamp_toward_x_
	db 083h,0c4h,006h,08bh,00eh,05eh,043h,0d1h,0e1h,08bh,0d9h,08bh,09fh,0a8h,043h,088h
	db 087h,08dh,001h,0e9h,0e3h,017h,0b8h,001h,000h,050h,050h,0b8h,000h,000h,050h,0ffh
	db 076h,0fah
	call f8efc_
	db 083h,0c4h,008h,0ffh,076h,0f6h,0b8h,003h,000h,050h,0ffh,076h,008h,0b8h,004h,000h
	db 050h,0b8h,003h,000h,050h,0b8h,000h,000h,08bh,04eh,008h,083h,0c1h,004h,02bh,0c1h
	db 050h,0ffh,076h,0fah
	call f8149_
	db 083h,0c4h,00eh,0e9h,0a7h,017h,0b8h,000h,000h,050h,0b8h,010h,000h,050h,0ffh,076h
	db 0f8h,0ffh,076h,0fah
	call f8efc_
	db 083h,0c4h,008h,0b8h,000h,000h,050h,050h,0ffh,076h,008h,0b8h,001h,000h,050h,08bh
	db 046h,008h,0d1h,0e0h,050h,0b8h,000h,000h,050h,0ffh,076h,0f6h,0b8h,003h,000h,050h
	db 0b8h,004h,000h,050h,0b8h,093h,00dh,050h,0ffh,076h,0f8h,0ffh,076h,0fah
	call f825f_
	db 083h,0c4h,018h,0e9h,05fh,017h,0b8h,001h,000h,050h,050h,0ffh,076h,0f8h,0ffh,076h
	db 0fah
	call f8efc_
	db 083h,0c4h,008h,0ffh,076h,0f6h,0b8h,003h,000h,050h,0ffh,076h,008h,0b8h,00ah,000h
	db 050h,0b8h,003h,000h,050h,0ffh,076h,0f8h,0ffh,076h,0fah
	call f8149_
	db 083h,0c4h,00eh,0e9h,02dh,017h,0b8h,000h,000h,050h,0b8h,003h,000h,050h,0ffh,076h
	db 0f8h,0ffh,076h,0fah
	call f8efc_
	db 083h,0c4h,008h,0b8h,000h,000h,050h,050h,0ffh,076h,008h,0b8h,002h,000h,050h,08bh
	db 046h,008h,08bh,0d0h,0d1h,0e0h,0d1h,0e0h,003h,0c2h,0d1h,0e0h,050h,0b8h,000h,000h
	db 050h,0b8h,005h,000h,050h,050h,0b8h,001h,000h,050h,0ffh,076h,0f6h,0ffh,076h,008h
	db 0b8h,006h,000h,050h,0b8h,095h,00dh,050h,0ffh,076h,0f8h,0ffh,076h,0fah
	call f83f3_
	db 083h,0c4h,01eh,0e9h,0d5h,016h,0b8h,000h,000h,050h,0a1h,05eh,043h,0d1h,0e0h,08bh
	db 0d8h,08bh,09fh,0a8h,043h,08ah,087h,08eh,001h,02ah,0e4h,050h,08bh,046h,008h,08bh
	db 0d0h,0b1h,004h,0d3h,0e0h,02bh,0c2h,050h
	call clamp_toward_x_
	db 083h,0c4h,006h,08bh,00eh,05eh,043h,0d1h,0e1h,08bh,0d9h,08bh,09fh,0a8h,043h,088h
	db 087h,08eh,001h,0e9h,09ah,016h,0b8h,001h,000h,050h,0b8h,003h,000h,050h,0b8h,000h
	db 000h,050h,0ffh,076h,0fah
	call f8efc_
	db 083h,0c4h,008h,0b8h,000h,000h,050h,050h,0ffh,076h,008h,0b8h,004h,000h,050h,0ffh
	db 076h,008h,0b8h,000h,000h,050h,0b8h,008h,000h,050h,0b8h,006h,000h,050h,0b8h,001h
	db 000h,050h,0ffh,076h,0f6h,0ffh,076h,008h,0b8h,005h,000h,050h,0b8h,098h,00dh,050h
	db 0b8h,0fdh,0ffh,050h,0ffh,076h,0fah
	call f83f3_
	db 083h,0c4h,01eh,0e9h,048h,016h,0b8h,000h,000h,050h,0a1h,05eh,043h,0d1h,0e0h,08bh
	db 0d8h,08bh,09fh,0a8h,043h,08ah,087h,08fh,001h,02ah,0e4h,050h,08bh,046h,008h,08bh
	db 0d0h,0b1h,004h,0d3h,0e0h,02bh,0c2h,050h
	call clamp_toward_x_
	db 083h,0c4h,006h,08bh,00eh,05eh,043h,0d1h,0e1h,08bh,0d9h,08bh,09fh,0a8h,043h,088h
	db 087h,08fh,001h,0e9h,00dh,016h,0b8h,000h,000h,050h,0b8h,010h,000h,050h,0b8h,000h
	db 000h,050h,0ffh,076h,0fah
	call f8efc_
	db 083h,0c4h,008h,0b8h,000h,000h,050h,050h,050h,0b8h,002h,000h,050h,0ffh,076h,008h
	db 0b8h,000h,000h,050h,0ffh,076h,0f6h,050h,0b8h,00ch,000h,050h,0b8h,090h,00dh,050h
	db 0b8h,000h,000h,08bh,04eh,008h,041h,041h,041h,02bh,0c1h,050h,0ffh,076h,0fah
	call f825f_
	db 083h,0c4h,018h,0e9h,0c3h,015h,0b8h,000h,000h,050h,0b8h,003h,000h,050h,0b8h,000h
	db 000h,050h,0ffh,076h,0fah
	call f8efc_
	db 083h,0c4h,008h,0b8h,000h,000h,050h,050h,0ffh,076h,008h,0b8h,002h,000h,050h,08bh
	db 046h,008h,08bh,0d0h,0d1h,0e0h,0d1h,0e0h,003h,0c2h,0d1h,0e0h,050h,0b8h,000h,000h
	db 050h,0b8h,005h,000h,050h,0b8h,004h,000h,050h,0b8h,001h,000h,050h,0ffh,076h,0f6h
	db 0ffh,076h,008h,0b8h,006h,000h,050h,0b8h,095h,00dh,050h,0b8h,0f6h,0ffh,050h,0ffh
	db 076h,0fah
	call f83f3_
	db 083h,0c4h,01eh,08bh,046h,0fah,0d1h,0e0h,08bh,0d8h,08bh,09fh,0a8h,043h,08ah,087h
	db 093h,001h,02ah,0e4h,089h,046h,0feh,03bh,046h,008h,07dh,006h,08bh,046h,008h,089h
	db 046h,0feh
l9ad7:
	db 08bh,046h,0feh,040h,088h,087h,093h,001h,0a1h,05ah,043h,040h,08bh,04eh,0fah,0d1h
	db 0e1h,08bh,0d9h,08bh,09fh,0a8h,043h,088h,087h,097h,001h,0e9h,02ch,015h,0b8h,000h
	db 000h,050h,0b8h,004h,000h,050h,0b8h,000h,000h,050h,0ffh,076h,0fah
	call f8efc_
	db 083h,0c4h,008h,0ffh,076h,0f6h,0b8h,005h,000h,050h,0ffh,076h,008h,0b8h,007h,000h
	db 050h,0b8h,001h,000h,050h,0b8h,000h,000h,08bh,04eh,008h,041h,041h,041h,02bh,0c1h
	db 050h,0ffh,076h,0fah
	call f8149_
	db 083h,0c4h,00eh,0e9h,0edh,014h,0b8h,003h,000h,050h
	call clear_msg_line_
	db 059h,0b8h,003h,000h,050h,050h,0b8h,098h,00ch,050h
	call print_msg_centered_
	db 083h,0c4h,006h,0a1h,0c8h,04fh,0b9h,002h,000h,099h,0f7h,0f9h,050h
	call combat_delay_
	db 059h,0c7h,046h,0feh,000h,000h
l9b5e:
	db 0a1h,05eh,043h,0d1h,0e0h,08bh,0d8h,08bh,09fh,0a8h,043h,08bh,076h,0feh,08ah,080h
	db 092h,001h,02ah,0e4h,02bh,046h,008h,089h,046h,0fch,03dh,000h,000h,07dh,005h,0c7h
	db 046h,0fch,000h,000h
l9b82:
	db 08ah,046h,0fch,088h,080h,092h,001h,0ffh,046h,0feh,08bh,046h,0feh,03dh,004h,000h
	db 07ch,0cah,0a1h,05eh,043h,0d1h,0e0h,08bh,0d8h,08bh,09fh,0a8h,043h,080h,0bfh,08fh
	db 001h,000h,076h,04bh,08bh,046h,008h,08bh,0d0h,0d1h,0e0h,0d1h,0e0h,003h,0c2h,0d1h
	db 0e0h,08bh,0c8h,08ah,087h,08fh,001h,02ah,0e4h,02bh,0c1h,089h,046h,0fch,03dh,000h
	db 000h,07dh,005h,0c7h,046h,0fch,000h,000h
l9bca:
	db 08ah,046h,0fch,088h,087h,08fh,001h,0b8h,003h,000h,050h
	call clear_msg_line_
	db 059h,0b8h,003h,000h,050h,050h,0b8h,09ah,00ch,083h,07eh,0fch,000h,075h,003h,0b8h
	db 099h,00ch
l9bea:
	db 050h
	call print_msg_centered_
	db 083h,0c4h,006h
l9bf1:
	db 0e9h,02dh,014h,0b8h,000h,000h,050h,0b8h,003h,000h,050h,0ffh,076h,0f8h,0ffh,076h
	db 0fah
	call f8efc_
	db 083h,0c4h,008h,0b8h,064h,000h,050h
	call random_
	db 059h,050h,08bh,046h,008h,08bh,0d0h,0d1h,0e0h,0d1h,0e0h,003h,0c2h,08bh,0c8h,058h
	db 03bh,0c1h,07dh,02fh,0b8h,006h,000h,050h,0b8h,00eh,000h,050h,0b8h,000h,000h,050h
	db 050h,050h,0b8h,001h,000h,050h,0ffh,076h,0f6h,0b8h,003h,000h,050h,0b8h,006h,000h
	db 050h,0b8h,0a1h,00dh,050h,0ffh,076h,0f8h,0ffh,076h,0fah
	call f825f_
	db 083h,0c4h,018h,0ebh,04ch
l9c52:
	db 0b8h,000h,000h,050h,050h,08bh,046h,008h,08bh,0d0h,0d1h,0e0h,0d1h,0e0h,003h,0c2h
	db 0d1h,0e0h,050h,0b8h,004h,000h,050h,08bh,046h,008h,08bh,0d0h,0d1h,0e0h,0d1h,0e0h
	db 003h,0c2h,0d1h,0e0h,050h,0b8h,000h,000h,050h,0b8h,005h,000h,050h,050h,0b8h,003h
	db 000h,050h,0ffh,076h,0f6h,0ffh,076h,008h,0b8h,006h,000h,050h,0b8h,095h,00dh,050h
	db 0ffh,076h,0f8h,0ffh,076h,0fah
	call f83f3_
	db 083h,0c4h,01eh
l9c9e:
	db 0e9h,080h,013h,0b8h,000h,000h,050h,0b8h,003h,000h,050h,0b8h,000h,000h,050h,0ffh
	db 076h,0fah
	call f8efc_
	db 083h,0c4h,008h,0b8h,000h,000h,050h,050h,0ffh,076h,008h,0b8h,004h,000h,050h,0ffh
	db 076h,008h,0b8h,000h,000h,050h,0b8h,008h,000h,050h,0b8h,003h,000h,050h,0b8h,002h
	db 000h,050h,0ffh,076h,0f6h,0ffh,076h,008h,0b8h,005h,000h,050h,0b8h,098h,00dh,050h
	db 0b8h,0f6h,0ffh,050h,0ffh,076h,0fah
	call f83f3_
	db 083h,0c4h,01eh,08bh,046h,0fah,0d1h,0e0h,08bh,0d8h,08bh,09fh,0a8h,043h,08ah,087h
	db 094h,001h,02ah,0e4h,089h,046h,0feh,03bh,046h,008h,07dh,006h,08bh,046h,008h,089h
	db 046h,0feh
l9d0f:
	db 08bh,046h,0feh,040h,088h,087h,094h,001h,0a1h,05ah,043h,040h,08bh,04eh,0fah,0d1h
	db 0e1h,08bh,0d9h,08bh,09fh,0a8h,043h,088h,087h,098h,001h,0e9h,0f4h,012h,0b8h,001h
	db 000h,050h,0b8h,003h,000h,050h,0b8h,000h,000h,050h,0ffh,076h,0fah
	call f8efc_
	db 083h,0c4h,008h,0b8h,000h,000h,050h,050h,0ffh,076h,008h,0b8h,004h,000h,050h,0ffh
	db 076h,008h,0b8h,000h,000h,050h,0b8h,008h,000h,050h,0b8h,006h,000h,050h,0b8h,001h
	db 000h,050h,0ffh,076h,0f6h,0ffh,076h,008h,0b8h,005h,000h,050h,0b8h,098h,00dh,050h
	db 0b8h,000h,000h,08bh,04eh,008h,041h,041h,041h,02bh,0c1h,050h,0ffh,076h,0fah
	call f83f3_
	db 083h,0c4h,01eh,0e9h,09ah,012h,0b8h,000h,000h,050h,0b8h,004h,000h,050h,0b8h,000h
	db 000h,050h,0ffh,076h,0fah
	call f8efc_
	db 083h,0c4h,008h,0b8h,006h,000h,050h,0b8h,00eh,000h,050h,0ffh,076h,008h,0ffh,076h
	db 008h,0ffh,076h,008h,0b8h,001h,000h,050h,0ffh,076h,0f6h,0b8h,003h,000h,050h,0b8h
	db 005h,000h,050h,0b8h,0a2h,00dh,050h,083h,03eh,05eh,043h,000h,074h,008h,0a1h,05eh
	db 043h,03dh,006h,000h,075h,005h
l9dcf:
	db 0b8h,001h,000h,0ebh,003h
l9dd4:
	db 0b8h,000h,000h
l9dd7:
	db 050h
	call f87ae_
	db 083h,0c4h,016h,0e9h,040h,012h,0b8h,000h,000h,050h,0b8h,004h,000h,050h,0b8h,000h
	db 000h,050h,083h,03eh,05eh,043h,000h,075h,003h,0b8h,001h,000h
l9df7:
	db 050h
	call f8efc_
	db 083h,0c4h,008h,0ffh,076h,0f6h,0b8h,005h,000h,050h,0ffh,076h,008h,0b8h,004h,000h
	db 050h,050h,083h,03eh,05eh,043h,000h,074h,008h,0a1h,05eh,043h,03dh,006h,000h,075h
	db 005h
l9e1c:
	db 0b8h,001h,000h,0ebh,003h
l9e21:
	db 0b8h,000h,000h
l9e24:
	db 050h
	call f861e_
	db 083h,0c4h,00ch,0e9h,0f3h,011h,0b8h,001h,000h,050h,0b8h,003h,000h,050h,0ffh,076h
	db 0f8h,0ffh,076h,0fah
	call f8efc_
	db 083h,0c4h,008h,0ffh,076h,0f6h,0b8h,008h,000h,050h,0ffh,076h,008h,0b8h,007h,000h
	db 050h,0b8h,001h,000h,050h,0ffh,076h,0f8h,0ffh,076h,0fah
	call f8149_
	db 083h,0c4h,00eh,0e9h,0beh,011h,0b8h,000h,000h,050h,0b8h,003h,000h,050h,0ffh,076h
	db 0f8h,0ffh,076h,0fah
	call f8efc_
	db 083h,0c4h,008h,0b8h,000h,000h,050h,050h,0ffh,076h,008h,0b8h,002h,000h,050h,0ffh
	db 076h,008h,0b8h,000h,000h,050h,0ffh,076h,0f6h,0b8h,009h,000h,050h,0b8h,008h,000h
	db 050h,0b8h,09fh,00dh,050h,0b8h,0fdh,0ffh,050h,0ffh,076h,0fah
	call f825f_
	db 083h,0c4h,018h,0e9h,078h,011h,0b8h,001h,000h,050h,0b8h,02ch,000h,0f7h,06eh,0f8h
	db 08bh,0f0h,08bh,046h,0fah,0d1h,0e0h,08bh,0d8h,08bh,09fh,0a8h,043h,08ah,040h,026h
	db 098h,050h,0ffh,076h,008h
	call clamp_toward_x_
	db 083h,0c4h,006h,050h,0b8h,02ch,000h,0f7h,06eh,0f8h,08bh,0f0h,08bh,046h,0fah,0d1h
	db 0e0h,08bh,0d8h,08bh,09fh,0a8h,043h,058h,088h,040h,026h,0e9h,038h,011h,0b8h,000h
	db 000h,050h,0b8h,00fh,000h,050h,0b8h,000h,000h,050h,0ffh,076h,0fah
	call f8efc_
	db 083h,0c4h,008h,0ffh,076h,0f6h,0b8h,007h,000h,050h,0ffh,076h,008h,0b8h,004h,000h
	db 050h,0b8h,002h,000h,050h,0b8h,000h,000h,08bh,04eh,008h,041h,041h,041h,02bh,0c1h
	db 050h,0ffh,076h,0fah
	call f8149_
	db 083h,0c4h,00eh,0e9h,0f9h,010h,0b8h,000h,000h,050h,0b8h,002h,000h,050h,0ffh,076h
	db 0f8h,0ffh,076h,0fah
	call f8efc_
	db 083h,0c4h,008h,0b8h,000h,000h,050h,050h,0ffh,076h,008h,0b8h,001h,000h,050h,08bh
	db 046h,008h,0d1h,0e0h,050h,0b8h,000h,000h,050h,0ffh,076h,0f6h,0b8h,003h,000h,050h
	db 0b8h,004h,000h,050h,0b8h,0a0h,00dh,050h,0ffh,076h,0f8h,0ffh,076h,0fah
	call f825f_
	db 083h,0c4h,018h,0e9h,0b1h,010h,0b8h,001h,000h,050h,0b8h,003h,000h,050h,0b8h,000h
	db 000h,050h,0ffh,076h,0fah
	call f8efc_
	db 083h,0c4h,008h,0ffh,076h,0f6h,0b8h,008h,000h,050h,0ffh,076h,008h,0b8h,006h,000h
	db 050h,0b8h,001h,000h,050h,0b8h,0f6h,0ffh,050h,0ffh,076h,0fah
	call f8149_
	db 083h,0c4h,00eh,08bh,046h,0fah,0d1h,0e0h,08bh,0d8h,08bh,09fh,0a8h,043h,08ah,087h
	db 095h,001h,02ah,0e4h,089h,046h,0feh,03bh,046h,008h,07dh,006h,08bh,046h,008h,089h
	db 046h,0feh
l9fc3:
	db 08bh,046h,0feh,040h,088h,087h,095h,001h,0a1h,05ah,043h,040h,08bh,04eh,0fah,0d1h
	db 0e1h,08bh,0d9h,08bh,09fh,0a8h,043h,088h,087h,099h,001h,0e9h,040h,010h,0b8h,001h
	db 000h,050h,0b8h,004h,000h,050h,0ffh,076h,0f8h,0ffh,076h,0fah
	call f8efc_
	db 083h,0c4h,008h,0ffh,076h,0f6h,0b8h,000h,000h,050h,0ffh,076h,008h,0ffh,076h,0fah
	call f7af7_
	db 083h,0c4h,008h,089h,046h,0fch,0c7h,046h,0feh,000h,000h,0ebh,040h
la012:
	db 0b8h,000h,000h,050h,0b8h,02ch,000h,0f7h,06eh,0feh,08bh,0f0h,08bh,046h,0fah,0d1h
	db 0e0h,08bh,0d8h,08bh,09fh,0a8h,043h,08ah,040h,026h,098h,050h,0ffh,076h,0fch
	call clamp_toward_x_
	db 083h,0c4h,006h,050h,0b8h,02ch,000h,0f7h,06eh,0feh,08bh,0f0h,08bh,046h,0fah,0d1h
	db 0e0h,08bh,0d8h,08bh,09fh,0a8h,043h,058h,088h,040h,026h,0ffh,046h,0feh
la052:
	db 08bh,046h,0fah,0d1h,0e0h,08bh,0d8h,08bh,09fh,0a8h,043h,08ah,087h,09dh,001h,02ah
	db 0e4h,03bh,046h,0feh,07fh,0aah,0e9h,0b6h,00fh,083h,03eh,05eh,043h,000h,074h,008h
	db 0a1h,05eh,043h,03dh,006h,000h,075h,023h
la07a:
	db 0ffh,076h,008h,0b8h,0d9h,000h,050h,0b8h,0d8h,000h,050h,0b8h,0d7h,000h,050h,0b8h
	db 0d6h,000h,050h,0b8h,0d5h,000h,050h,0b8h,0d4h,000h,050h
	call f8fa8_
	db 083h,0c4h,00eh,0ebh,070h
la09d:
	db 0a1h,03ch,036h,0ebh,05ah
la0a2:
	db 0ffh,076h,008h,0b8h,0d6h,000h,050h,050h,050h,050h,050h,050h
	call f8fa8_
	db 083h,0c4h,00eh,0ebh,057h
la0b6:
	db 0ffh,076h,008h,0b8h,0d8h,000h,050h,050h,0b8h,0d7h,000h,050h,050h,0b8h,0d6h,000h
	db 050h,050h
	call f8fa8_
	db 083h,0c4h,00eh,0ebh,03dh
la0d0:
	db 0ffh,076h,008h,0b8h,0d9h,000h,050h,0b8h,0d7h,000h,050h,050h,0b8h,0d6h,000h,050h
	db 050h,050h
	call f8fa8_
	db 083h,0c4h,00eh,0ebh,023h
la0ea:
	db 0b8h,000h,000h,050h,050h,050h,050h,050h,050h,050h
	call f8fa8_
	db 083h,0c4h,00eh,0ebh,011h
la0fc:
	db 03dh,00ah,000h,074h,0a1h,03dh,00bh,000h,074h,0b0h,03dh,00ch,000h,074h,0c5h,0ebh
	db 0ddh
la10d:
	db 0e9h,011h,00fh,0b8h,001h,000h,050h,0b8h,010h,000h,050h,0ffh,076h,0f8h,0ffh,076h
	db 0fah
	call f8efc_
	db 083h,0c4h,008h,0b8h,000h,000h,050h,050h,0ffh,076h,008h,0b8h,001h,000h,050h,0ffh
	db 076h,008h,0b8h,000h,000h,050h,0b8h,007h,000h,050h,050h,0b8h,001h,000h,050h,0ffh
	db 076h,0f6h,0ffh,076h,008h,0b8h,00ah,000h,050h,0b8h,097h,00dh,050h,0ffh,076h,0f8h
	db 0ffh,076h,0fah
	call f83f3_
	db 083h,0c4h,01eh,0e9h,0c4h,00eh,0b8h,000h,000h,050h,0b8h,010h,000h,050h,0b8h,000h
	db 000h,050h,0ffh,076h,0fah
	call f8efc_
	db 083h,0c4h,008h,0b8h,000h,000h,050h,050h,050h,0b8h,002h,000h,050h,0ffh,076h,008h
	db 0b8h,000h,000h,050h,0ffh,076h,0f6h,0b8h,002h,000h,050h,0b8h,009h,000h,050h,0b8h
	db 092h,00dh,050h,0b8h,000h,000h,08bh,04eh,008h,041h,041h,041h,02bh,0c1h,050h,0ffh
	db 076h,0fah
	call f825f_
	db 083h,0c4h,018h,0e9h,077h,00eh,08bh,046h,008h,048h,0b9h,002h,000h,099h,0f7h,0f9h
	db 040h,089h,046h,0fch,0c7h,046h,0feh,000h,000h,0ebh,07dh
la1bf:
	db 0b8h,001h,000h,050h,0b8h,02ch,000h,0f7h,06eh,0feh,08bh,0f0h,0a1h,05eh,043h,0d1h
	db 0e0h,08bh,0d8h,08bh,09fh,0a8h,043h,08ah,040h,026h,098h,050h,0ffh,076h,0fch
	call clamp_toward_x_
	db 083h,0c4h,006h,050h,0b8h,02ch,000h,0f7h,06eh,0feh,08bh,0f0h,0a1h,05eh,043h,0d1h
	db 0e0h,08bh,0d8h,08bh,09fh,0a8h,043h,058h,088h,040h,026h,0b8h,001h,000h,050h,0b8h
	db 02ch,000h,0f7h,06eh,0feh,08bh,0f0h,0a1h,05eh,043h,0d1h,0e0h,08bh,0d8h,08bh,09fh
	db 0a8h,043h,08ah,040h,027h,098h,050h,0ffh,076h,0fch
	call clamp_toward_x_
	db 083h,0c4h,006h,050h,0b8h,02ch,000h,0f7h,06eh,0feh,08bh,0f0h,0a1h,05eh,043h,0d1h
	db 0e0h,08bh,0d8h,08bh,09fh,0a8h,043h,058h,088h,040h,027h,0ffh,046h,0feh
la23c:
	db 0a1h,05eh,043h,0d1h,0e0h,08bh,0d8h,08bh,09fh,0a8h,043h,08ah,087h,09dh,001h,02ah
	db 0e4h,03bh,046h,0feh,07eh,003h,0e9h,06ah,0ffh
la255:
	db 0e9h,0c9h,00dh,0b8h,000h,000h,050h,0b8h,010h,000h,050h,0ffh,076h,0f8h,0ffh,076h
	db 0fah
	call f8efc_
	db 083h,0c4h,008h,0b8h,000h,000h,050h,050h,0ffh,076h,008h,0b8h,001h,000h,050h,08bh
	db 046h,008h,0d1h,0e0h,050h,0b8h,000h,000h,050h,0ffh,076h,0f6h,0b8h,003h,000h,050h
	db 0b8h,009h,000h,050h,0b8h,0a8h,00dh,050h,0ffh,076h,0f8h,0ffh,076h,0fah
	call f825f_
	db 083h,0c4h,018h,0e9h,081h,00dh,0c7h,046h,0feh,001h,000h,0ebh,046h
la2a7:
	db 0b8h,064h,000h,050h
	call random_
	db 059h,050h,08bh,046h,008h,08bh,0d0h,0d1h,0e0h,0d1h,0e0h,003h,0c2h,0d1h,0e0h,08bh
	db 0c8h,005h,050h,000h,08bh,0c8h,0a1h,03ch,036h,051h,08bh,0d0h,0d1h,0e0h,0d1h,0e0h
	db 003h,0c2h,059h,08bh,0d0h,02bh,0c8h,058h,03bh,0c1h,07dh,010h,08bh,046h,0feh,0d1h
	db 0e0h,08bh,0d8h,08bh,09fh,0a8h,043h,0c6h,087h,09ch,001h,000h
la2ea:
	db 0ffh,046h,0feh
la2ed:
	db 08bh,046h,0feh,03bh,006h,060h,043h,07eh,0b1h,0e9h,028h,00dh,0b8h,000h,000h,050h
	db 0b8h,010h,000h,050h,0ffh,076h,0f8h,0ffh,076h,0fah
	call f8efc_
	db 083h,0c4h,008h,0b8h,000h,000h,050h,050h,050h,0b8h,002h,000h,050h,0ffh,076h,008h
	db 0b8h,000h,000h,050h,0ffh,076h,0f6h,0b8h,003h,000h,050h,0b8h,009h,000h,050h,0b8h
	db 0a4h,00dh,050h,0b8h,000h,000h,08bh,04eh,008h,041h,041h,041h,02bh,0c1h,050h,0ffh
	db 076h,0fah
	call f825f_
	db 083h,0c4h,018h,0e9h,0dch,00ch,0b8h,001h,000h,050h,0b8h,010h,000h,050h,0b8h,000h
	db 000h,050h,0ffh,076h,0fah
	call f8efc_
	db 083h,0c4h,008h,0b8h,000h,000h,050h,050h,0ffh,076h,008h,0b8h,002h,000h,050h,08bh
	db 046h,008h,0d1h,0e0h,050h,0b8h,000h,000h,050h,0b8h,007h,000h,050h,050h,0b8h,001h
	db 000h,050h,0ffh,076h,0f6h,0ffh,076h,008h,0b8h,00ah,000h,050h,0b8h,097h,00dh,050h
	db 0b8h,000h,000h,08bh,04eh,008h,041h,041h,041h,02bh,0c1h,050h,0ffh,076h,0fah
	call f83f3_
	db 083h,0c4h,01eh,0e9h,082h,00ch,083h,03eh,05eh,043h,000h,074h,008h,0a1h,05eh,043h
	db 03dh,006h,000h,075h,024h
la3ae:
	db 0ffh,076h,008h,0b8h,0dfh,000h,050h,0b8h,0deh,000h,050h,0b8h,0ddh,000h,050h,0b8h
	db 0dch,000h,050h,0b8h,0dbh,000h,050h,0b8h,0dah,000h,050h
	call f8fa8_
	db 083h,0c4h,00eh,0e9h,0a0h,000h
la3d2:
	db 0a1h,03ch,036h,0e9h,081h,000h
la3d8:
	db 0ffh,076h,008h,0b8h,0deh,000h,050h,0b8h,0dbh,000h,050h,050h,050h,0b8h,0dah,000h
	db 050h,050h
	call f8fa8_
	db 083h,0c4h,00eh,0e9h,07fh,000h
la3f3:
	db 0ffh,076h,008h,0b8h,0dfh,000h,050h,0b8h,0deh,000h,050h,050h,0b8h,0dbh,000h,050h
	db 050h,050h
	call f8fa8_
	db 083h,0c4h,00eh,0ebh,065h
la40d:
	db 0ffh,076h,008h,0b8h,0d8h,000h,050h,0b8h,0d2h,000h,050h,0b8h,0d8h,000h,050h,0b8h
	db 0d2h,000h,050h,0b8h,0d6h,000h,050h,050h
	call f8fa8_
	db 083h,0c4h,00eh,0ebh,045h
la42d:
	db 0ffh,076h,008h,0b8h,0dfh,000h,050h,0b8h,0deh,000h,050h,050h,0b8h,0dbh,000h,050h
	db 050h,050h
	call f8fa8_
	db 083h,0c4h,00eh,0ebh,02bh
la447:
	db 0b8h,000h,000h,050h,050h,050h,050h,050h,050h,050h
	call f8fa8_
	db 083h,0c4h,00eh,0ebh,019h
la459:
	db 03dh,009h,000h,075h,003h,0e9h,077h,0ffh
la461:
	db 03dh,00ah,000h,074h,08dh,03dh,00bh,000h,074h,0a2h,03dh,00ch,000h,074h,0bdh,0ebh
	db 0d5h
la472:
	db 0e9h,0ach,00bh,0b8h,000h,000h,050h,0b8h,010h,000h,050h,0ffh,076h,0f8h,0ffh,076h
	db 0fah
	call f8efc_
	db 083h,0c4h,008h,0b8h,006h,000h,050h,0b8h,00eh,000h,050h,0b8h,000h,000h,050h,050h
	db 050h,0b8h,001h,000h,050h,08bh,046h,0f6h,005h,0ddh,0ffh,050h,0b8h,003h,000h,050h
	db 0b8h,00bh,000h,050h,0b8h,09ah,00dh,050h,0ffh,076h,0f8h,0ffh,076h,0fah
	call f825f_
	db 083h,0c4h,018h,0e9h,064h,00bh,0b8h,001h,000h,050h,0b8h,010h,000h,050h,0b8h,000h
	db 000h,050h,0ffh,076h,0fah
	call f8efc_
	db 083h,0c4h,008h,0ffh,076h,0f6h,0b8h,00ah,000h,050h,0ffh,076h,008h,0b8h,004h,000h
	db 050h,050h,083h,03eh,05eh,043h,000h,074h,008h,0a1h,05eh,043h,03dh,006h,000h,075h
	db 005h
la4f0:
	db 0b8h,001h,000h,0ebh,003h
la4f5:
	db 0b8h,000h,000h
la4f8:
	db 050h
	call f861e_
	db 083h,0c4h,00ch,0e9h,01fh,00bh,0b8h,000h,000h,050h,0b8h,00fh,000h,050h,0ffh,076h
	db 0f8h,0ffh,076h,0fah
	call f8efc_
	db 083h,0c4h,008h,0ffh,076h,0f6h,0b8h,00ch,000h,050h,0ffh,076h,008h,0b8h,008h,000h
	db 050h,0b8h,001h,000h,050h,0ffh,076h,0f8h,0ffh,076h,0fah
	call f8149_
	db 083h,0c4h,00eh,0e9h,0eah,00ah,0b8h,001h,000h,050h,0b8h,002h,000h,050h,0b8h,000h
	db 000h,050h,0ffh,076h,0fah
	call f8efc_
	db 083h,0c4h,008h,0ffh,076h,0f6h,0b8h,00ch,000h,050h,0ffh,076h,008h,0b8h,007h,000h
	db 050h,0b8h,001h,000h,050h,0b8h,000h,000h,08bh,04eh,008h,041h,02bh,0c1h,050h,0ffh
	db 076h,0fah
	call f8149_
	db 083h,0c4h,00eh,0e9h,0adh,00ah,0b8h,001h,000h,050h,0b8h,002h,000h,050h,0b8h,000h
	db 000h,050h,0ffh,076h,0fah
	call f8efc_
	db 083h,0c4h,008h,08bh,046h,0fah,0d1h,0e0h,08bh,0d8h,08bh,09fh,0b6h,043h,080h,0bfh
	db 0d0h,000h,014h,074h,007h,0c7h,046h,0f6h,09ch,0ffh,0ebh,025h
la5a2:
	db 0b8h,02ch,000h,0f7h,06eh,0f8h,08bh,0f0h,08bh,046h,0fah,0d1h,0e0h,08bh,0d8h,08bh
	db 09fh,0a8h,043h,08bh,008h,08bh,05eh,004h,08bh,007h,02bh,0c1h,08bh,0d0h,0d1h,0e0h
	db 003h,0c2h,001h,046h,0f6h
la5c7:
	db 0b8h,006h,000h,050h,0b8h,00eh,000h,050h,0b8h,000h,000h,050h,050h,050h,0b8h,001h
	db 000h,050h,0ffh,076h,0f6h,0b8h,003h,000h,050h,0b8h,00bh,000h,050h,0b8h,0a5h,00dh
	db 050h,0b8h,000h,000h,02bh,046h,008h,050h,0ffh,076h,0fah
	call f825f_
	db 083h,0c4h,018h,0e9h,026h,00ah,0b8h,02ch,000h,0f7h,02eh,05ch,043h,08bh,0f0h,0a1h
	db 05eh,043h,0d1h,0e0h,08bh,0d8h,08bh,09fh,0a8h,043h,080h,078h,024h,000h,075h,036h
	db 0a1h,05ah,043h,0b9h,002h,000h,099h,0f7h,0f9h,050h
	call random_
	db 059h,050h,0a1h,05ah,043h,0b9h,002h,000h,099h,0f7h,0f9h,08bh,0c8h,058h,003h,0c1h
	db 050h,0b8h,02ch,000h,0f7h,02eh,05ch,043h,08bh,0f0h,0a1h,05eh,043h,0d1h,0e0h,08bh
	db 0d8h,08bh,09fh,0a8h,043h,058h,088h,040h,025h
la64b:
	db 0b8h,02ch,000h,0f7h,02eh,05ch,043h,08bh,0f0h,0a1h,05eh,043h,0d1h,0e0h,08bh,0d8h
	db 08bh,09fh,0a8h,043h,08ah,040h,024h,02ah,0e4h,050h,08bh,046h,008h,08bh,0d0h,0d1h
	db 0e0h,003h,0c2h,08bh,0c8h,058h,003h,0c1h,088h,040h,024h,0e9h,0a8h,009h,083h,03eh
	db 05eh,043h,000h,074h,008h,0a1h,05eh,043h,03dh,006h,000h,075h,053h
la688:
	db 0b8h,002h,000h,050h
	call random_
	db 059h,085h,0c0h,075h,023h,0ffh,076h,008h,0b8h,0cdh,000h,050h,0b8h,0cch,000h,050h
	db 0b8h,0cbh,000h,050h,0b8h,0cah,000h,050h,0b8h,0c9h,000h,050h,0b8h,0c8h,000h,050h
	call f8fa8_
	db 083h,0c4h,00eh,0ebh,021h
la6b7:
	db 0ffh,076h,008h,0b8h,0d3h,000h,050h,0b8h,0d2h,000h,050h,0b8h,0d1h,000h,050h,0b8h
	db 0d0h,000h,050h,0b8h,0cfh,000h,050h,0b8h,0ceh,000h,050h
	call f8fa8_
	db 083h,0c4h,00eh
la6d8:
	db 0e9h,0d3h,000h
la6db:
	db 0a1h,05eh,043h,0d1h,0e0h,08bh,0d8h,08bh,09fh,0a8h,043h,08ah,087h,09ah,001h,02ah
	db 0e4h,03dh,096h,000h,074h,005h,03dh,099h,000h,075h,016h
la6f6:
	db 0b8h,001h,000h,050h,0b8h,0d3h,000h,050h,050h,050h,050h,050h,050h
	call f8fa8_
	db 083h,0c4h,00eh,0e9h,0a2h,000h
la70c:
	db 0a1h,03ch,036h,0e9h,083h,000h
la712:
	db 0ffh,076h,008h,0b8h,0d1h,000h,050h,0b8h,0cbh,000h,050h,0b8h,0d0h,000h,050h,0b8h
	db 0cah,000h,050h,0b8h,0cfh,000h,050h,0b8h,0c8h,000h,050h
	call f8fa8_
	db 083h,0c4h,00eh,0ebh,079h
la735:
	db 0ffh,076h,008h,0b8h,0d0h,000h,050h,050h,050h,050h,0b8h,0c9h,000h,050h,050h
	call f8fa8_
	db 083h,0c4h,00eh,0ebh,062h
la74c:
	db 0ffh,076h,008h,0b8h,0d2h,000h,050h,0b8h,0cbh,000h,050h,050h,0b8h,0d0h,000h,050h
	db 0b8h,0cah,000h,050h,050h
	call f8fa8_
	db 083h,0c4h,00eh,0ebh,045h
la769:
	db 0ffh,076h,008h,0b8h,0d1h,000h,050h,050h,0b8h,0d0h,000h,050h,050h,0b8h,0ceh,000h
	db 050h,050h
	call f8fa8_
	db 083h,0c4h,00eh,0ebh,02bh
la783:
	db 0b8h,000h,000h,050h,050h,050h,050h,050h,050h,050h
	call f8fa8_
	db 083h,0c4h,00eh,0ebh,019h
la795:
	db 03dh,009h,000h,075h,003h,0e9h,075h,0ffh
la79d:
	db 03dh,00ah,000h,074h,093h,03dh,00bh,000h,074h,0a5h,03dh,00ch,000h,074h,0bdh,0ebh
	db 0d5h
la7ae:
	db 0e9h,070h,008h,0b8h,000h,000h,050h,08bh,046h,0fah,0d1h,0e0h,08bh,0d8h,08bh,09fh
	db 0a8h,043h,08ah,087h,091h,001h,02ah,0e4h,050h,08bh,046h,008h,0d1h,0e0h,050h
	call clamp_toward_x_
	db 083h,0c4h,006h,08bh,04eh,0fah,0d1h,0e1h,08bh,0d9h,08bh,09fh,0a8h,043h,088h,087h
	db 091h,001h,0e9h,03ch,008h,0b8h,001h,000h,050h,0b8h,002h,000h,050h,0b8h,000h,000h
	db 050h,0ffh,076h,0fah
	call f8efc_
	db 083h,0c4h,008h,08bh,046h,0fah,0d1h,0e0h,08bh,0d8h,08bh,09fh,0b6h,043h,080h,0bfh
	db 0d0h,000h,015h,074h,007h,0c7h,046h,0f6h,09ch,0ffh,0ebh,025h
la813:
	db 0b8h,02ch,000h,0f7h,06eh,0f8h,08bh,0f0h,08bh,046h,0fah,0d1h,0e0h,08bh,0d8h,08bh
	db 09fh,0a8h,043h,08bh,008h,08bh,05eh,004h,08bh,007h,02bh,0c1h,08bh,0d0h,0d1h,0e0h
	db 003h,0c2h,001h,046h,0f6h
la838:
	db 0b8h,006h,000h,050h,0b8h,00eh,000h,050h,0b8h,000h,000h,050h,050h,050h,0b8h,001h
	db 000h,050h,0ffh,076h,0f6h,0b8h,003h,000h,050h,0b8h,00bh,000h,050h,0b8h,0a9h,00dh
	db 050h,0b8h,000h,000h,02bh,046h,008h,050h,0ffh,076h,0fah
	call f825f_
	db 083h,0c4h,018h,0e9h,0b5h,007h,0b8h,000h,000h,050h,0b8h,004h,000h,050h,0b8h,000h
	db 000h,050h,0ffh,076h,0fah
	call f8efc_
	db 083h,0c4h,008h,0ffh,076h,0f6h,0b8h,00bh,000h,050h,0ffh,076h,008h,0b8h,004h,000h
	db 050h,050h,083h,03eh,05eh,043h,000h,074h,008h,0a1h,05eh,043h,03dh,006h,000h,075h
	db 005h
la89f:
	db 0b8h,001h,000h,0ebh,003h
la8a4:
	db 0b8h,000h,000h
la8a7:
	db 050h
	call f861e_
	db 083h,0c4h,00ch,0e9h,070h,007h,0b8h,000h,000h,050h,0b8h,010h,000h,050h,0b8h,000h
	db 000h,050h,0ffh,076h,0fah
	call f8efc_
	db 083h,0c4h,008h,0b8h,006h,000h,050h,0b8h,00eh,000h,050h,0ffh,076h,008h,0ffh,076h
	db 008h,0ffh,076h,008h,0b8h,001h,000h,050h,0ffh,076h,0f6h,0b8h,003h,000h,050h,0b8h
	db 00bh,000h,050h,0b8h,09eh,00dh,050h,083h,03eh,05eh,043h,000h,074h,008h,0a1h,05eh
	db 043h,03dh,006h,000h,075h,005h
la8f9:
	db 0b8h,001h,000h,0ebh,003h
la8fe:
	db 0b8h,000h,000h
la901:
	db 050h
	call f87ae_
	db 083h,0c4h,016h,0e9h,016h,007h,0b8h,000h,000h,050h,0b8h,004h,000h,050h,0ffh,076h
	db 0f8h,0ffh,076h,0fah
	call f8efc_
	db 083h,0c4h,008h,08bh,046h,0fah,0d1h,0e0h,08bh,0d8h,08bh,09fh,0b6h,043h,08ah,087h
	db 0d0h,000h,03ch,016h,075h,007h,083h,03eh,052h,043h,000h,075h,00dh
la939:
	db 03ch,014h,074h,009h,03ch,015h,074h,005h,0c7h,046h,0f6h,09ch,0ffh
la946:
	db 0b8h,02ch,000h,0f7h,06eh,0f8h,08bh,0f0h,08bh,046h,0fah,0d1h,0e0h,08bh,0d8h,08bh
	db 09fh,0a8h,043h,08bh,040h,002h,099h,0d1h,0e0h,0d1h,0d2h,0d1h,0e0h,0d1h,0d2h,0d1h
	db 0e0h,0d1h,0d2h,050h,052h,08bh,040h,004h,099h,08bh,0c8h,08bh,0dah,05ah,058h
	call $ldv
	db 089h,046h,0fch,03dh,002h,000h,07dh,005h,0c7h,046h,0fch,002h,000h
la985:
	db 0ffh,076h,0f6h,0b8h,000h,000h,050h,0ffh,076h,008h,0ffh,076h,0fch,0b8h,001h,000h
	db 050h,0ffh,076h,0f8h,0ffh,076h,0fah
	call f8149_
	db 083h,0c4h,00eh,0e9h,07ch,006h,0ffh,076h,008h,0b8h,008h,000h,050h,08bh,046h,008h
	db 0d1h,0e0h,050h
	call f5eea_
	db 083h,0c4h,006h,08bh,0c8h,083h,0ech,004h,08bh,0c4h,08ch,0d2h,08eh,0c2h,08bh,0f1h
	db 08bh,0f8h,0a5h,0a5h
	call roll_dice_x_
	db 083h,0c4h,004h,089h,046h,0feh,08bh,046h,0feh,050h,0b8h,02ch,000h,0f7h,06eh,0f8h
	db 08bh,0f0h,08bh,046h,0fah,0d1h,0e0h,08bh,0d8h,08bh,09fh,0a8h,043h,058h,001h,040h
	db 006h,0b8h,02ch,000h,0f7h,06eh,0f8h,08bh,0f0h,08bh,046h,0fah,0d1h,0e0h,08bh,0d8h
	db 08bh,09fh,0a8h,043h,08bh,040h,006h,08bh,048h,008h,03bh,0c1h,07eh,003h,089h,048h
	db 006h
laa0d:
	db 083h,07eh,0fah,000h,075h,00dh,0b8h,000h,000h,050h,0ffh,076h,0f8h
	call draw_member_card_x_
	db 083h,0c4h,004h
laa20:
	db 0e9h,0feh,005h,0b8h,02ch,000h,0f7h,06eh,0f8h,08bh,0f0h,08bh,046h,0fah,0d1h,0e0h
	db 08bh,0d8h,08bh,09fh,0a8h,043h,08ah,040h,011h,02ah,0e4h,050h,08bh,046h,008h,08bh
	db 0d0h,0d1h,0e0h,003h,0c2h,0b1h,003h,0d3h,0e0h,003h,0c2h,08bh,0c8h,058h,02bh,0c1h
	db 089h,046h,0feh,03dh,000h,000h,07dh,005h,0c7h,046h,0feh,000h,000h
laa5d:
	db 08ah,046h,0feh,088h,040h,011h,083h,07eh,0fah,000h,075h,00dh,0b8h,000h,000h,050h
	db 0ffh,076h,0f8h
	call draw_member_card_x_
	db 083h,0c4h,004h
laa76:
	db 0e9h,0a8h,005h,0b8h,02ch,000h,0f7h,06eh,0f8h,08bh,0f0h,08bh,046h,0fah,0d1h,0e0h
	db 08bh,0d8h,08bh,09fh,0a8h,043h,08ah,040h,023h,02ah,0e4h,02bh,046h,008h,089h,046h
	db 0feh,03dh,000h,000h,07fh,009h,0c7h,046h,0feh,000h,000h,0c6h,040h,013h,000h
laaa5:
	db 08ah,046h,0feh,050h,0b8h,02ch,000h,0f7h,06eh,0f8h,08bh,0f0h,08bh,046h,0fah,0d1h
	db 0e0h,08bh,0d8h,08bh,09fh,0a8h,043h,058h,088h,040h,023h,0b8h,02ch,000h,0f7h,06eh
	db 0f8h,08bh,0f0h,08bh,046h,0fah,0d1h,0e0h,08bh,0d8h,08bh,09fh,0a8h,043h,08ah,040h
	db 013h,02ah,0e4h,050h,08bh,046h,008h,08bh,0d0h,0d1h,0e0h,0d1h,0e0h,003h,0c2h,08bh
	db 0c8h,058h,02bh,0c1h,089h,046h,0feh,03dh,000h,000h,07fh,009h,0c7h,046h,0feh,000h
	db 000h,0c6h,040h,023h,000h
laafa:
	db 08ah,046h,0feh,050h,0b8h,02ch,000h,0f7h,06eh,0f8h,08bh,0f0h,08bh,046h,0fah,0d1h
	db 0e0h,08bh,0d8h,08bh,09fh,0a8h,043h,058h,088h,040h,013h,083h,07eh,0fah,000h,075h
	db 00dh,0b8h,000h,000h,050h,0ffh,076h,0f8h
	call draw_member_card_x_
	db 083h,0c4h,004h
lab28:
	db 0e9h,0f6h,004h,0b8h,02ch,000h,0f7h,06eh,0f8h,08bh,0f0h,08bh,046h,0fah,0d1h,0e0h
	db 08bh,0d8h,08bh,09fh,0a8h,043h,08ah,040h,015h,02ah,0e4h,050h,08bh,046h,008h,08bh
	db 0d0h,0d1h,0e0h,003h,0c2h,0b1h,003h,0d3h,0e0h,003h,0c2h,08bh,0c8h,058h,02bh,0c1h
	db 089h,046h,0feh,03dh,000h,000h,07dh,005h,0c7h,046h,0feh,000h,000h
lab65:
	db 08ah,046h,0feh,088h,040h,015h,083h,07eh,0fah,000h,075h,00dh,0b8h,000h,000h,050h
	db 0ffh,076h,0f8h
	call draw_member_card_x_
	db 083h,0c4h,004h
lab7e:
	db 0e9h,0a0h,004h,0c7h,046h,0fch,001h,000h
lab86:
	db 08bh,046h,0fch,03dh,001h,000h,074h,014h,03dh,002h,000h,074h,00fh,03dh,004h,000h
	db 074h,00ah,03dh,008h,000h,074h,005h,03dh,009h,000h,075h,039h
laba2:
	db 0b8h,02ch,000h,0f7h,06eh,0f8h,08bh,0c8h,08bh,046h,0fch,003h,0c8h,08bh,0f1h,08bh
	db 046h,0fah,0d1h,0e0h,08bh,0d8h,08bh,09fh,0a8h,043h,08ah,040h,00eh,02ah,0e4h,08bh
	db 04eh,008h,0d1h,0e1h,02bh,0c1h,089h,046h,0feh,03dh,000h,000h,07dh,005h,0c7h,046h
	db 0feh,000h,000h
labd5:
	db 08ah,046h,0feh,088h,040h,00eh
labdb:
	db 0ffh,046h,0fch,08bh,046h,0fch,03dh,009h,000h,07eh,0a0h,083h,07eh,0fah,000h,075h
	db 00dh,0b8h,000h,000h,050h,0ffh,076h,0f8h
	call draw_member_card_x_
	db 083h,0c4h,004h
labf9:
	db 0e9h,025h,004h,0b8h,000h,000h,050h,0b8h,004h,000h,050h,0b8h,000h,000h,050h,0ffh
	db 076h,0fah
	call f8efc_
	db 083h,0c4h,008h,0ffh,076h,0f6h,0b8h,00bh,000h,050h,08bh,046h,008h,0d1h,0e0h,0d1h
	db 0e0h,050h,0b8h,004h,000h,050h,08bh,046h,008h,0d1h,0e0h,0d1h,0e0h,050h,0ffh,076h
	db 0f8h,0ffh,076h,0fah
	call f7ddc_
	db 083h,0c4h,00eh,089h,046h,0feh,083h,07eh,0fah,000h,075h,00dh,0b8h,000h,000h,050h
	db 0ffh,076h,0f8h
	call draw_member_card_x_
	db 083h,0c4h,004h
lac4e:
	db 0a1h,05eh,043h,089h,046h,0fah,0a1h,05ch,043h,089h,046h,0f8h,08bh,046h,0feh,0b9h
	db 007h,000h,099h,0f7h,0f9h,089h,046h,008h,0ffh,076h,008h,0b8h,007h,000h,050h,0ffh
	db 076h,008h
	call f5eea_
	db 083h,0c4h,006h,08bh,0c8h,083h,0ech,004h,08bh,0c4h,08ch,0d2h,08eh,0c2h,08bh,0f1h
	db 08bh,0f8h,0a5h,0a5h
	call roll_dice_x_
	db 083h,0c4h,004h,089h,046h,0feh,08bh,046h,0feh,050h,0b8h,02ch,000h,0f7h,06eh,0f8h
	db 08bh,0f0h,08bh,046h,0fah,0d1h,0e0h,08bh,0d8h,08bh,09fh,0a8h,043h,058h,001h,040h
	db 002h,0b8h,02ch,000h,0f7h,06eh,0f8h,08bh,0f0h,08bh,046h,0fah,0d1h,0e0h,08bh,0d8h
	db 08bh,09fh,0a8h,043h,08bh,040h,002h,08bh,048h,004h,03bh,0c1h,07eh,003h,089h,048h
	db 002h
laccb:
	db 083h,07eh,0fah,000h,075h,00dh,0b8h,000h,000h,050h,0ffh,076h,0f8h
	call draw_member_card_x_
	db 083h,0c4h,004h
lacde:
	db 0e9h,040h,003h,0ffh,076h,008h,0b8h,008h,000h,050h,0ffh,076h,008h
	call f5eea_
	db 083h,0c4h,006h,08bh,0c8h,083h,0ech,004h,08bh,0c4h,08ch,0d2h,08eh,0c2h,08bh,0f1h
	db 08bh,0f8h,0a5h,0a5h
	call roll_dice_x_
	db 083h,0c4h,004h,089h,046h,0feh,08bh,046h,0feh,050h,0b8h,02ch,000h,0f7h,02eh,05ch
	db 043h,08bh,0f0h,0a1h,05eh,043h,0d1h,0e0h,08bh,0d8h,08bh,09fh,0a8h,043h,058h,001h
	db 040h,006h,0b8h,02ch,000h,0f7h,02eh,05ch,043h,08bh,0f0h,0a1h,05eh,043h,0d1h,0e0h
	db 08bh,0d8h,08bh,09fh,0a8h,043h,08bh,040h,006h,08bh,048h,008h,03bh,0c1h,07eh,003h
	db 089h,048h,006h
lad48:
	db 0b8h,000h,000h,050h,0b8h,002h,000h,050h,0ffh,076h,008h
	call f5eea_
	db 083h,0c4h,006h,08bh,0c8h,083h,0ech,004h,08bh,0c4h,08ch,0d2h,08eh,0c2h,08bh,0f1h
	db 08bh,0f8h,0a5h,0a5h
	call roll_dice_x_
	db 083h,0c4h,004h,089h,046h,0feh,08bh,046h,0feh,050h,0b8h,02ch,000h,0f7h,02eh,05ch
	db 043h,08bh,0f0h,0a1h,05eh,043h,0d1h,0e0h,08bh,0d8h,08bh,09fh,0a8h,043h,058h,001h
	db 040h,002h,0b8h,02ch,000h,0f7h,02eh,05ch,043h,08bh,0f0h,0a1h,05eh,043h,0d1h,0e0h
	db 08bh,0d8h,08bh,09fh,0a8h,043h,08bh,040h,002h,08bh,048h,004h,03bh,0c1h,07eh,003h
	db 089h,048h,002h
ladb0:
	db 083h,03eh,05eh,043h,000h,075h,00eh,0b8h,000h,000h,050h,0ffh,036h,05ch,043h
	call draw_member_card_x_
	db 083h,0c4h,004h
ladc5:
	db 0e9h,059h,002h,083h,03eh,05eh,043h,000h,075h,067h,0c7h,046h,0feh,000h,000h
ladd4:
	db 0b8h,000h,000h,050h,0b8h,00ah,000h,050h,0ffh,076h,008h
	call f5eea_
	db 083h,0c4h,006h,08bh,0c8h,083h,0ech,004h,08bh,0c4h,08ch,0d2h,08eh,0c2h,08bh,0f1h
	db 08bh,0f8h,0a5h,0a5h
	call roll_dice_x_
	db 083h,0c4h,004h,089h,046h,0fch,050h,0b8h,0b0h,001h,0f7h,02eh,05ch,043h,08bh,0c8h
	db 08bh,056h,0feh,0d1h,0e2h,0d1h,0e2h,003h,0c2h,08bh,0d8h,058h,001h,087h,010h,044h
	db 08bh,087h,010h,044h,03bh,087h,012h,044h,07eh,008h,08bh,087h,012h,044h,089h,087h
	db 010h,044h
lae2b:
	db 0ffh,046h,0feh,08bh,046h,0feh,03dh,006h,000h,07ch,09eh
lae36:
	db 0e9h,0e8h,001h,08bh,046h,008h,08bh,0d0h,0d1h,0e0h,003h,0c2h,0b1h,003h,0d3h,0e0h
	db 003h,0c2h,0d1h,0e0h,001h,006h,0d0h,04eh,0b8h,000h,000h,050h,0ffh,036h,0d2h,04eh
	db 08bh,046h,008h,08bh,0d0h,0d1h,0e0h,0d1h,0e0h,003h,0c2h,005h,046h,000h,050h
	call clamp_toward_x_
	db 083h,0c4h,006h,0a3h,0d2h,04eh,0e9h,0b0h,001h,08bh,046h,008h,08bh,0d0h,0b1h,004h
	db 0d3h,0e0h,003h,0c2h,0d1h,0e0h,003h,0c2h,001h,006h,0d4h,04eh,0b8h,000h,000h,050h
	db 0ffh,036h,0d6h,04eh,08bh,046h,008h,048h,0b9h,002h,000h,099h,0f7h,0f9h,040h,050h
	call clamp_toward_x_
	db 083h,0c4h,006h,0a3h,0d6h,04eh,0e9h,07dh,001h,08bh,046h,008h,08bh,0d0h,0d1h,0e0h
	db 003h,0c2h,0b1h,003h,0d3h,0e0h,003h,0c2h,0d1h,0e0h,001h,006h,0cch,04eh,0b8h,000h
	db 000h,050h,0ffh,036h,0ceh,04eh,08bh,046h,008h,048h,0b9h,002h,000h,099h,0f7h,0f9h
	db 040h,050h
	call clamp_toward_x_
	db 083h,0c4h,006h,0a3h,0ceh,04eh,0e9h,048h,001h,08bh,046h,008h,08bh,0d0h,0d1h,0e0h
	db 0d1h,0e0h,003h,0c2h,001h,006h,0dch,04eh,0e9h,036h,001h,0b8h,064h,000h,0f7h,06eh
	db 008h,001h,006h,0c8h,04eh,0e9h,029h,001h,0b8h,000h,000h,050h,0a1h,05eh,043h,0d1h
	db 0e0h,08bh,0d8h,08bh,09fh,0a8h,043h,08ah,087h,090h,001h,02ah,0e4h,050h,08bh,046h
	db 008h,08bh,0d0h,0d1h,0e0h,0d1h,0e0h,003h,0c2h,0d1h,0e0h,050h
	call clamp_toward_x_
	db 083h,0c4h,006h,08bh,00eh,05eh,043h,0d1h,0e1h,08bh,0d9h,08bh,09fh,0a8h,043h,088h
	db 087h,090h,001h,083h,03eh,05eh,043h,000h,075h,034h,08bh,046h,008h,08bh,0d0h,0d1h
	db 0e0h,003h,0c2h,0b1h,003h,0d3h,0e0h,003h,0c2h,0d1h,0e0h,001h,006h,0d8h,04eh,0b8h
	db 000h,000h,050h,0ffh,036h,0dah,04eh,08bh,046h,008h,08bh,0d0h,0d1h,0e0h,0d1h,0e0h
	db 003h,0c2h,0d1h,0e0h,050h
	call clamp_toward_x_
	db 083h,0c4h,006h,0a3h,0dah,04eh
laf6d:
	db 0e9h,0b1h,000h,05bh,094h,090h,094h,0dch,094h,018h,095h,053h,095h,08ch,095h,0cbh
	db 095h,0feh,095h,06ch,096h,0b6h,096h,0a5h,0a9h,0e8h,096h,02fh,097h,066h,097h,09ah
	db 097h,023h,0aah,003h,098h,03eh,098h,07ah,098h,0c2h,098h,0f4h,098h,04ch,099h,087h
	db 099h,0d9h,099h,014h,09ah,05eh,09ah,079h,0aah,0f5h,09ah,034h,09bh,0f4h,09bh,0d9h
	db 0aeh,0a1h,09ch,02dh,09dh,087h,09dh,0e1h,09dh,02eh,09eh,063h,09eh,0a9h,09eh,0ebh
	db 0aeh,021h,0b0h,0e9h,09eh,0a4h,0aeh,028h,09fh,070h,09fh,0e1h,09fh,06bh,0a0h,021h
	db 0b0h,010h,0a1h,05dh,0a1h,0aah,0a1h,058h,0a2h,081h,0abh,021h,0b0h,039h,0aeh,0a0h
	db 0a2h,0f9h,0a2h,021h,0b0h,02bh,0abh,045h,0a3h,09fh,0a3h,021h,0b0h,075h,0a4h,021h
	db 0b0h,0bdh,0a4h,066h,0ach,002h,0a5h,037h,0a5h,074h,0a5h,071h,0aeh,0fbh,0a5h,0f8h
	db 0aeh,079h,0a6h,0b1h,0a7h,021h,0b0h,0fch,0abh,0e5h,0a7h,06ch,0a8h,021h,0b0h,0b1h
	db 0a8h,00bh,0a9h,0e1h,0ach,0c8h,0adh
lb014:
	db 03dh,052h,000h,073h,008h,093h,0d1h,0e3h,02eh,0ffh,0a7h,070h,0afh
lb021:
	db 083h,03eh,016h,051h,000h,075h,00eh,0a1h,0c8h,04fh,0b9h,002h,000h,099h,0f7h,0f9h
	db 050h
	call combat_delay_
	db 059h
lb036:
	db 05eh,05fh,08bh,0e5h,05dh,0c3h
#endasm
