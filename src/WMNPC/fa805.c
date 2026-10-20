#asm
	public fa805_
	extrn $ldv:near
	extrn access_scenario_record_:near
	extrn f5078_:near
	extrn f5e0c_:near
	extrn f6835_:near
	extrn f7f76_:near
	extrn fa645_:near
	extrn fill_window_:near
	extrn get_message_:near
	extrn long_to_string_:near
	extrn print_string_hi_:near
	extrn refresh_window_:near
	extrn replace_char_with_string_:near
	extrn set_cursor_:near
	extrn strlen_:near
fa805_:
	db 055h,08bh,0ech,083h,0c4h,0a2h,0c7h,046h,0feh,000h,000h,0b8h,0b0h,001h,0f7h,06eh
	db 006h,08bh,04eh,008h,0d1h,0e1h,0d1h,0e1h,0d1h,0e1h,003h,0c1h,08bh,0d8h,08bh,087h
	db 028h,044h,089h,046h,0ach,0b8h,000h,000h,050h,0ffh,076h,0ach,08dh,046h,0b2h,050h
	db 0b8h,001h,000h,050h
	call access_scenario_record_
	db 083h,0c4h,008h,08ah,046h,0c8h,02ah,0e4h,050h,08ah,046h,0c9h,02ah,0e4h,08bh,0c8h
	db 058h,0f7h,0e9h,003h,046h,0c6h,089h,046h,0b0h,03dh,001h,000h,07dh,005h,0c7h,046h
	db 0b0h,001h,000h
la85f:
	db 0b8h,0b0h,001h,0f7h,06eh,006h,08bh,04eh,008h,0d1h,0e1h,0d1h,0e1h,0d1h,0e1h,003h
	db 0c1h,08bh,0d8h,08ah,087h,02eh,044h,02ah,0e4h,089h,046h,0aeh,03dh,001h,000h,07dh
	db 005h,0c7h,046h,0aeh,001h,000h
la885:
	db 08ah,046h,0eeh,02ah,0e4h,08bh,0d8h,080h,0bfh,0cch,000h,001h,075h,01fh,08bh,046h
	db 0aeh,099h,050h,052h,0f7h,066h,0c4h,08bh,0c8h,058h,0f7h,066h,0c2h,003h,0c8h,058h
	db 0f7h,066h,0c2h,003h,0d1h,089h,056h,0c4h,089h,046h,0c2h,0ebh,04eh
la8b2:
	db 08bh,046h,0c2h,08bh,056h,0c4h,050h,092h,0bbh,064h,000h,0f7h,0e3h,08bh,0c8h,058h
	db 0f7h,0e3h,003h,0d1h,050h,052h,08bh,046h,0b0h,099h,08bh,0c8h,08bh,0dah,05ah,058h
	call $ldv
	db 050h,052h,08bh,046h,0aeh,099h,08bh,0c8h,08bh,0dah,05ah,058h,050h,052h,0f7h,0e3h
	db 08bh,0d8h,058h,0f7h,0e1h,003h,0d8h,058h,0f7h,0e1h,003h,0d3h,0b9h,064h,000h,0bbh
	db 000h,000h
	call $ldv
	db 089h,056h,0c4h,089h,046h,0c2h
la900:
	db 0a1h,0bah,051h,099h,050h,052h,0f7h,066h,0c4h,08bh,0c8h,058h,0f7h,066h,0c2h,003h
	db 0c8h,058h,0f7h,066h,0c2h,003h,0d1h,0b9h,064h,000h,0bbh,000h,000h
	call $ldv
	db 089h,056h,0c4h,089h,046h,0c2h,08ah,046h,0edh,02ah,0e4h,0a9h,002h,000h,074h,01eh
	db 08bh,046h,0ach,03bh,006h,0bch,051h,074h,015h,03bh,006h,0beh,051h,074h,00fh,0b8h
	db 0f9h,005h,050h
	call fa645_
	db 059h,08bh,046h,0feh
la94a:
	db 08bh,0e5h,05dh,0c3h
la94e:
	db 083h,07eh,0c4h,000h,07fh,008h,075h,008h,083h,07eh,0c2h,000h,076h,002h
la95c:
	db 0ebh,016h
la95e:
	db 08bh,046h,0ach,03bh,006h,0bch,051h,074h,00dh,0b8h,0eeh,005h,050h
	call fa645_
	db 059h,08bh,046h,0feh,0ebh,0d6h
la974:
	db 0b8h,0b0h,001h,0f7h,06eh,006h,08bh,04eh,008h,0d1h,0e1h,0d1h,0e1h,0d1h,0e1h,003h
	db 0c1h,08bh,0d8h,08ah,087h,02fh,044h,02ah,0e4h,0a9h,001h,000h,074h,00dh,0b8h,0f8h
	db 005h,050h
	call fa645_
	db 059h,08bh,046h,0feh,0ebh,0abh
la99f:
	db 0b8h,0d4h,051h,050h,0b8h,0f5h,005h,050h
	call get_message_
	db 083h,0c4h,004h,0b8h,07ch,052h,050h,0ffh,076h,0c4h,0ffh,076h,0c2h
	call long_to_string_
	db 083h,0c4h,006h,0b8h,024h,000h,050h,0b8h,07ch,052h,050h,0b8h,0d4h,051h,050h
	call replace_char_with_string_
	db 083h,0c4h,006h,0b8h,000h,000h,050h,0b8h,003h,000h,050h,0b8h,020h,000h,050h,0ffh
	db 076h,004h
	call fill_window_
	db 083h,0c4h,008h,0ffh,076h,004h
	call refresh_window_
	db 059h,0b8h,001h,000h,050h,0b8h,0d4h,051h,050h
	call strlen_
	db 059h,040h,0b9h,002h,000h,099h,0f7h,0f9h,08bh,0c8h,0b8h,00ah,000h,02bh,0c1h,050h
	db 0ffh,076h,004h
	call set_cursor_
	db 083h,0c4h,006h,0b8h,003h,000h,050h,0b8h,0d4h,051h,050h,0ffh,076h,004h
	call print_string_hi_
	db 083h,0c4h,006h,0c7h,046h,0fch,000h,000h
laa25:
	db 08bh,046h,0fch,0d1h,0e0h,08bh,0d8h,003h,0ddh,0c7h,047h,0a2h,001h,000h,0ffh,046h
	db 0fch,08bh,046h,0fch,03dh,001h,000h,07eh,0e7h,0c7h,046h,0a6h,0ffh,0ffh,0b8h,001h
	db 000h,050h,0b8h,000h,000h,050h,0b8h,005h,000h,050h,0b8h,001h,000h,050h,0b8h,005h
	db 000h,050h,0b8h,003h,000h,050h,0b8h,006h,000h,050h,08dh,046h,0a2h,050h,0b8h,0f6h
	db 005h,050h,0ffh,076h,004h
	call f5e0c_
	db 083h,0c4h,014h,089h,046h,0fch,083h,07eh,0fch,000h,075h,065h,0b8h,0b0h,001h,0f7h
	db 06eh,006h,08bh,04eh,008h,0d1h,0e1h,0d1h,0e1h,0d1h,0e1h,003h,0c1h,08bh,0d8h,08bh
	db 087h,028h,044h,089h,046h,0ach,0ffh,076h,008h,0ffh,076h,006h
	call f6835_
	db 083h,0c4h,004h,08bh,046h,0c2h,08bh,056h,0c4h,050h,052h,0b8h,0b0h,001h,0f7h,06eh
	db 006h,08bh,0d8h,05ah,058h,001h,087h,0fch,043h,011h,097h,0feh,043h,0ffh,036h,07ah
	db 052h,0ffh,076h,006h
	call f5078_
	db 083h,0c4h,004h,0b8h,000h,000h,050h,050h,0ffh,076h,0ach,0b8h,003h,000h,050h,0ffh
	db 076h,006h
	call f7f76_
	db 083h,0c4h,00ah,089h,046h,0feh
laade:
	db 08bh,046h,0feh,0e9h,066h,0feh
#endasm
