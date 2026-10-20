#asm
	public f8fa8_
	extrn access_scenario_record_:near
	extrn combat_delay_:near
	extrn get_message_:near
	extrn int_to_string_:near
	extrn print_combat_line_:near
	extrn print_msg_centered_:near
	extrn random_:near
	extrn roll_dice_x_:near
	extrn set_cursor_:near
	extrn setmem_:near
	extrn strcpy_:near
	extrn strlen_:near
f8fa8_:
	db 055h,08bh,0ech,081h,0c4h,058h,0feh,057h,056h,0a1h,0c8h,04fh,0b9h,004h,000h,099h
	db 0f7h,0f9h,050h
	call combat_delay_
	db 059h,0c7h,006h,016h,051h,000h,000h,083h,03eh,05eh,043h,000h,074h,008h,0a1h,05eh
	db 043h,03dh,006h,000h,075h,031h
l8fd4:
	db 0c7h,046h,0fch,006h,000h,08bh,046h,0fch,0d1h,0e0h,08bh,0d8h,08bh,09fh,0a8h,043h
	db 080h,0bfh,09dh,001h,000h,076h,018h,0b8h,002h,000h,050h,0b8h,006h,000h,050h,0b8h
	db 091h,00ch,050h
	call print_msg_centered_
	db 083h,0c4h,006h
l8ffd:
	db 05eh,05fh,08bh,0e5h,05dh,0c3h
l9003:
	db 0ebh,02dh
l9005:
	db 083h,07eh,010h,000h,07eh,013h,083h,03eh,060h,043h,005h,07dh,00ch,0ffh,006h,060h
	db 043h,0a1h,060h,043h,089h,046h,0fch,0ebh,014h
l901e:
	db 0b8h,002h,000h,050h,0b8h,006h,000h,050h,0b8h,091h,00ch,050h
	call print_msg_centered_
	db 083h,0c4h,006h,0ebh,0cbh
l9032:
	db 0b8h,000h,000h,050h,0b8h,0a0h,001h,050h,08bh,046h,0fch,0d1h,0e0h,08bh,0d8h,0ffh
	db 0b7h,0a8h,043h
	call setmem_
	db 083h,0c4h,006h,0c7h,086h,058h,0feh,000h,000h
l9051:
	db 0ffh,086h,058h,0feh,0ffh,04eh,010h,083h,07eh,010h,000h,07eh,013h,0b8h,003h,000h
	db 050h
	call random_
	db 059h,085h,0c0h,075h,007h,083h,0beh,058h,0feh,003h,07ch,0e0h
l9071:
	db 08bh,046h,010h,0ebh,04bh,08bh,046h,004h,089h,086h,05ah,0feh,0ebh,051h,08bh,046h
	db 006h,089h,086h,05ah,0feh,0ebh,048h,08bh,046h,008h,089h,086h,05ah,0feh,0ebh,03fh
	db 08bh,046h,00ah,089h,086h,05ah,0feh,0ebh,036h,08bh,046h,00ch,089h,086h,05ah,0feh
	db 0ebh,02dh,08bh,046h,00eh,089h,086h,05ah,0feh,0ebh,024h
l90ac:
	db 08bh,046h,004h,089h,086h,05ah,0feh,0ebh,01bh,076h,090h,07fh,090h,088h,090h,091h
	db 090h,09ah,090h,0a3h,090h
l90c1:
	db 03dh,006h,000h,073h,008h,093h,0d1h,0e3h,02eh,0ffh,0a7h,0b5h,090h
l90ce:
	db 0ebh,0dch
l90d0:
	db 0b8h,000h,000h,050h,0ffh,0b6h,05ah,0feh,08bh,046h,0fch,0d1h,0e0h,08bh,0d8h,0ffh
	db 0b7h,0b6h,043h,0b8h,004h,000h,050h
	call access_scenario_record_
	db 083h,0c4h,008h,08ah,086h,05ah,0feh,08bh,04eh,0fch,0d1h,0e1h,08bh,0d9h,08bh,09fh
	db 0a8h,043h,088h,087h,09ah,001h,08ah,086h,058h,0feh,08bh,04eh,0fch,0d1h,0e1h,08bh
	db 0d9h,08bh,09fh,0b6h,043h,088h,047h,076h,08bh,086h,058h,0feh,048h,08bh,04eh,0fch
	db 0d1h,0e1h,08bh,0d9h,08bh,09fh,0b6h,043h,089h,047h,074h,08bh,046h,0fch,0d1h,0e0h
	db 08bh,0d8h,08bh,08fh,0b6h,043h,083h,0c1h,074h,083h,0ech,004h,08bh,0c4h,08ch,0d2h
	db 08eh,0c2h,08bh,0f1h,08bh,0f8h,0a5h,0a5h
	call roll_dice_x_
	db 083h,0c4h,004h,08bh,04eh,0fch,0d1h,0e1h,08bh,0d9h,08bh,09fh,0a8h,043h,088h,087h
	db 09dh,001h,08bh,046h,0fch,0d1h,0e0h,08bh,0d8h,08bh,09fh,0a8h,043h,080h,0bfh,09dh
	db 001h,001h,073h,005h,0c6h,087h,09dh,001h,001h
l916e:
	db 08bh,046h,0fch,0d1h,0e0h,08bh,0d8h,08bh,09fh,0a8h,043h,080h,0bfh,09dh,001h,009h
	db 076h,005h,0c6h,087h,09dh,001h,009h
l9185:
	db 0c7h,046h,0feh,000h,000h
l918a:
	db 08bh,046h,0fch,0d1h,0e0h,08bh,0d8h,08bh,09fh,0a8h,043h,08bh,076h,0feh,0c6h,080h
	db 08ch,001h,000h,0ffh,046h,0feh,08bh,046h,0feh,03dh,006h,000h,07ch,0e2h,0c7h,046h
	db 0feh,000h,000h
l91ad:
	db 08bh,046h,0fch,0d1h,0e0h,08bh,0d8h,08bh,09fh,0a8h,043h,08bh,076h,0feh,0c6h,080h
	db 092h,001h,000h,0ffh,046h,0feh,08bh,046h,0feh,03dh,004h,000h,07ch,0e2h,08bh,046h
	db 0fch,0d1h,0e0h,08bh,0d8h,08bh,09fh,0a8h,043h,0c6h,087h,09ch,001h,000h,0c7h,046h
	db 0feh,000h,000h,0e9h,02eh,001h
l91e3:
	db 08bh,046h,0fch,0d1h,0e0h,08bh,0d8h,08bh,09fh,0b6h,043h,08ah,047h,07ah,02ah,0e4h
	db 050h,0b8h,02ch,000h,0f7h,06eh,0feh,08bh,0f0h,08bh,046h,0fch,0d1h,0e0h,08bh,0d8h
	db 08bh,09fh,0a8h,043h,058h,089h,000h,08bh,046h,0fch,0d1h,0e0h,08bh,0d8h,08bh,08fh
	db 0b6h,043h,083h,0c1h,078h,083h,0ech,004h,08bh,0c4h,08ch,0d2h,08eh,0c2h,08bh,0f1h
	db 08bh,0f8h,0a5h,0a5h
	call roll_dice_x_
	db 083h,0c4h,004h,050h,0b8h,02ch,000h,0f7h,06eh,0feh,08bh,0f0h,08bh,046h,0fch,0d1h
	db 0e0h,08bh,0d8h,08bh,09fh,0a8h,043h,058h,089h,040h,004h,0b8h,02ch,000h,0f7h,06eh
	db 0feh,08bh,0f0h,08bh,046h,0fch,0d1h,0e0h,08bh,0d8h,08bh,09fh,0a8h,043h,08bh,040h
	db 004h,089h,040h,002h,08bh,046h,0fch,0d1h,0e0h,08bh,0d8h,08bh,08fh,0b6h,043h,083h
	db 0c1h,07ch,083h,0ech,004h,08bh,0c4h,08ch,0d2h,08eh,0c2h,08bh,0f1h,08bh,0f8h,0a5h
	db 0a5h
	call roll_dice_x_
	db 083h,0c4h,004h,050h,0b8h,02ch,000h,0f7h,06eh,0feh,08bh,0f0h,08bh,046h,0fch,0d1h
	db 0e0h,08bh,0d8h,08bh,09fh,0a8h,043h,058h,089h,040h,008h,0b8h,02ch,000h,0f7h,06eh
	db 0feh,08bh,0f0h,08bh,046h,0fch,0d1h,0e0h,08bh,0d8h,08bh,09fh,0a8h,043h,08bh,040h
	db 008h,089h,040h,006h,0b8h,02ch,000h,0f7h,06eh,0feh,08bh,0f0h,08bh,046h,0fch,0d1h
	db 0e0h,08bh,0d8h,08bh,09fh,0a8h,043h,0c6h,040h,02ah,0ffh,0b8h,02ch,000h,0f7h,06eh
	db 0feh,08bh,0f0h,08bh,046h,0fch,0d1h,0e0h,08bh,0d8h,08bh,09fh,0a8h,043h,0c6h,040h
	db 01eh,00ah,0b8h,02ch,000h,0f7h,06eh,0feh,08bh,0f0h,08bh,046h,0fch,0d1h,0e0h,08bh
	db 0d8h,08bh,09fh,0a8h,043h,0c6h,040h,021h,000h,0b8h,02ch,000h,0f7h,06eh,0feh,08bh
	db 0f0h,08bh,046h,0fch,0d1h,0e0h,08bh,0d8h,08bh,09fh,0a8h,043h,0c6h,040h,018h,000h
	db 0ffh,046h,0feh
l9311:
	db 08bh,046h,0fch,0d1h,0e0h,08bh,0d8h,08bh,09fh,0a8h,043h,08ah,087h,09dh,001h,02ah
	db 0e4h,03bh,046h,0feh,07eh,003h,0e9h,0b9h,0feh
l932a:
	db 0b8h,00ch,050h,050h,08bh,046h,0fch,0d1h,0e0h,08bh,0d8h,08bh,09fh,0a8h,043h,08ah
	db 087h,09dh,001h,02ah,0e4h,050h
	call int_to_string_
	db 083h,0c4h,004h,08bh,046h,0fch,0d1h,0e0h,08bh,0d8h,08bh,09fh,0a8h,043h,080h,0bfh
	db 09dh,001h,001h,075h,005h,0b8h,000h,000h,0ebh,003h
l935d:
	db 0b8h,001h,000h
l9360:
	db 0b9h,004h,000h,0d3h,0e0h,08bh,0c8h,08bh,046h,0fch,0d1h,0e0h,08bh,0d8h,08bh,087h
	db 0b6h,043h,003h,0c1h,050h,0b8h,0ach,050h,050h
	call strcpy_
	db 083h,0c4h,004h,0b8h,05ch,050h,050h,08bh,046h,0fch,0d1h,0e0h,08bh,0d8h,08bh,09fh
	db 0a8h,043h,080h,0bfh,09dh,001h,001h,075h,005h,0b8h,08fh,00ch,0ebh,003h
l939a:
	db 0b8h,090h,00ch
l939d:
	db 050h
	call get_message_
	db 083h,0c4h,004h,0b8h,002h,000h,050h,0b8h,00ch,050h,050h
	call strlen_
	db 059h,050h,0b8h,0ach,050h,050h
	call strlen_
	db 059h,08bh,0c8h,058h,003h,0c1h,050h,0b8h,05ch,050h,050h
	call strlen_
	db 059h,08bh,0c8h,058h,003h,0c1h,040h,040h,040h,0b9h,002h,000h,099h,0f7h,0f9h,08bh
	db 0c8h,0b8h,014h,000h,02bh,0c1h,050h,0ffh,036h,0b6h,04fh
	call set_cursor_
	db 083h,0c4h,006h,0b8h,006h,000h,050h,050h,0b8h,001h,000h,050h,0b8h,05ch,050h,050h
	db 0b8h,0ach,050h,050h,0b8h,00ch,050h,050h
	call print_combat_line_
	db 083h,0c4h,00ch,0e9h,0f8h,0fbh
#endasm
