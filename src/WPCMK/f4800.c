/* Menu of consecutive messages with enabled flags laid out in columns; returns the chosen item index. */
#asm
	public menu_select_
	extrn get_menu_input_:near
	extrn get_message_:near
	extrn print_string_:near
	extrn print_string_hi_:near
	extrn set_click_region_:near
	extrn set_cursor_:near
	extrn strlen_:near
menu_select_:
	db 055h,08bh,0ech,081h,0c4h,062h,0feh,056h,0c7h,046h,0fch,000h,000h,0c7h,046h,0feh
	db 000h,000h
l4812:
	db 08bh,046h,0feh,0d1h,0e0h,08bh,0f0h,08bh,05eh,008h,083h,038h,0ffh,075h,003h,0e9h
	db 021h,001h
l4824:
	db 083h,038h,001h,074h,003h,0e9h,013h,001h
l482c:
	db 08bh,046h,0fch,099h,0f7h,07eh,010h,0f7h,06eh,00eh,003h,046h,00ah,089h,086h,065h
	db 0feh,08bh,046h,0fch,099h,0f7h,07eh,010h,08bh,0c2h,003h,046h,00ch,089h,086h,063h
	db 0feh,050h,0ffh,0b6h,065h,0feh,0ffh,076h,004h
	call set_cursor_
	db 083h,0c4h,006h,08bh,046h,0fch,08bh,0d0h,0d1h,0e0h,003h,0c2h,0b1h,003h,0d3h,0e0h
	db 003h,0c2h,08dh,08eh,067h,0feh,003h,0c1h,050h,08bh,046h,006h,003h,046h,0feh,050h
	call get_message_
	db 083h,0c4h,004h,083h,03eh,046h,008h,000h,075h,030h,08bh,046h,014h,03bh,046h,0fch
	db 075h,028h,0b8h,000h,000h,02bh,046h,012h,050h,08bh,046h,0fch,08bh,0d0h,0d1h,0e0h
	db 003h,0c2h,0b1h,003h,0d3h,0e0h,003h,0c2h,08dh,08eh,067h,0feh,003h,0c1h,050h,0ffh
	db 076h,004h
	call print_string_
	db 083h,0c4h,006h,0ebh,023h
l48b5:
	db 0b8h,003h,000h,050h,08bh,046h,0fch,08bh,0d0h,0d1h,0e0h,003h,0c2h,0b1h,003h,0d3h
	db 0e0h,003h,0c2h,08dh,08eh,067h,0feh,003h,0c1h,050h,0ffh,076h,004h
	call print_string_hi_
	db 083h,0c4h,006h
l48d8:
	db 08bh,046h,0feh,08bh,04eh,0fch,0d1h,0e1h,08bh,0d9h,003h,0ddh,089h,047h,0deh,08bh
	db 05eh,004h,08ah,047h,003h,02ah,0e4h,003h,086h,063h,0feh,050h,08bh,046h,0fch,08bh
	db 0d0h,0d1h,0e0h,003h,0c2h,0b1h,003h,0d3h,0e0h,003h,0c2h,08dh,08eh,067h,0feh,003h
	db 0c1h,050h
	call strlen_
	db 059h,050h,08bh,05eh,004h,08ah,047h,002h,02ah,0e4h,08bh,0c8h,058h,003h,0c1h,003h
	db 086h,065h,0feh,048h,050h,08ah,047h,003h,02ah,0e4h,003h,086h,063h,0feh,050h,003h
	db 08eh,065h,0feh,08bh,0c1h,050h,0ffh,076h,0fch
	call set_click_region_
	db 083h,0c4h,00ah,0ffh,046h,0fch
l493f:
	db 0ffh,046h,0feh,0e9h,0cdh,0feh
l4945:
	db 0b8h,000h,000h,050h,050h,050h,0b8h,0ffh,000h,050h,0ffh,076h,0fch
	call set_click_region_
	db 083h,0c4h,00ah
l4958:
	db 083h,03eh,046h,008h,000h,075h,04ah,08bh,046h,014h,099h,0f7h,07eh,010h,08bh,0c2h
	db 003h,046h,00ch,050h,08bh,046h,014h,099h,0f7h,07eh,010h,0f7h,06eh,00eh,003h,046h
	db 00ah,050h,0ffh,076h,004h
	call set_cursor_
	db 083h,0c4h,006h,0b8h,000h,000h,02bh,046h,012h,050h,08bh,046h,014h,08bh,0d0h,0d1h
	db 0e0h,003h,0c2h,0b1h,003h,0d3h,0e0h,003h,0c2h,08dh,08eh,067h,0feh,003h,0c1h,050h
	db 0ffh,076h,004h
	call print_string_
	db 083h,0c4h,006h
l49a9:
	db 0b8h,098h,035h,050h,0b8h,01eh,054h,050h
	call get_menu_input_
	db 083h,0c4h,004h,089h,046h,0feh,083h,03eh,0c4h,04fh,001h,075h,00bh,089h,046h,014h
	db 0c7h,046h,0feh,005h,000h,0e9h,087h,001h
l49cc:
	db 08bh,046h,0feh,0e9h,064h,001h
l49d2:
	db 08bh,046h,014h,02bh,046h,010h,07ch,04dh,08bh,046h,014h,099h,0f7h,07eh,010h,08bh
	db 0c2h,003h,046h,00ch,050h,08bh,046h,014h,099h,0f7h,07eh,010h,0f7h,06eh,00eh,003h
	db 046h,00ah,050h,0ffh,076h,004h
	call set_cursor_
	db 083h,0c4h,006h,0b8h,003h,000h,050h,08bh,046h,014h,08bh,0d0h,0d1h,0e0h,003h,0c2h
	db 0b1h,003h,0d3h,0e0h,003h,0c2h,08dh,08eh,067h,0feh,003h,0c1h,050h,0ffh,076h,004h
	call print_string_hi_
	db 083h,0c4h,006h,08bh,046h,010h,029h,046h,014h
l4a27:
	db 0e9h,029h,001h
l4a2a:
	db 08bh,046h,014h,099h,0f7h,07eh,010h,08bh,0c2h,03dh,000h,000h,07eh,041h,003h,046h
	db 00ch,050h,08bh,046h,014h,099h,0f7h,07eh,010h,0f7h,06eh,00eh,003h,046h,00ah,050h
	db 0ffh,076h,004h
	call set_cursor_
	db 083h,0c4h,006h,0b8h,003h,000h,050h,08bh,046h,014h,08bh,0d0h,0d1h,0e0h,003h,0c2h
	db 0b1h,003h,0d3h,0e0h,003h,0c2h,08dh,08eh,067h,0feh,003h,0c1h,050h,0ffh,076h,004h
	call print_string_hi_
	db 083h,0c4h,006h,0ffh,04eh,014h
l4a79:
	db 0e9h,0d7h,000h
l4a7c:
	db 08bh,046h,014h,003h,046h,010h,03bh,046h,0fch,07dh,04dh,08bh,046h,014h,099h,0f7h
	db 07eh,010h,08bh,0c2h,003h,046h,00ch,050h,08bh,046h,014h,099h,0f7h,07eh,010h,0f7h
	db 06eh,00eh,003h,046h,00ah,050h,0ffh,076h,004h
	call set_cursor_
	db 083h,0c4h,006h,0b8h,003h,000h,050h,08bh,046h,014h,08bh,0d0h,0d1h,0e0h,003h,0c2h
	db 0b1h,003h,0d3h,0e0h,003h,0c2h,08dh,08eh,067h,0feh,003h,0c1h,050h,0ffh,076h,004h
	call print_string_hi_
	db 083h,0c4h,006h,08bh,046h,010h,001h,046h,014h
l4ad4:
	db 0e9h,07ch,000h
l4ad7:
	db 08bh,046h,014h,099h,0f7h,07eh,010h,08bh,0c2h,08bh,04eh,010h,049h,03bh,0c1h,07dh
	db 04ch,08bh,046h,014h,040h,03bh,046h,0fch,07dh,043h,003h,056h,00ch,08bh,0c2h,050h
	db 08bh,046h,014h,099h,0f7h,07eh,010h,0f7h,06eh,00eh,003h,046h,00ah,050h,0ffh,076h
	db 004h
	call set_cursor_
	db 083h,0c4h,006h,0b8h,003h,000h,050h,08bh,046h,014h,08bh,0d0h,0d1h,0e0h,003h,0c2h
	db 0b1h,003h,0d3h,0e0h,003h,0c2h,08dh,08eh,067h,0feh,003h,0c1h,050h,0ffh,076h,004h
	call print_string_hi_
	db 083h,0c4h,006h,0ffh,046h,014h
l4b34:
	db 0ebh,01dh
l4b36:
	db 03dh,001h,000h,075h,003h,0e9h,094h,0feh
l4b3e:
	db 03dh,002h,000h,075h,003h,0e9h,0e4h,0feh
l4b46:
	db 03dh,003h,000h,075h,003h,0e9h,02eh,0ffh
l4b4e:
	db 03dh,004h,000h,074h,084h
l4b53:
	db 083h,07eh,0feh,005h,074h,003h,0e9h,0fch,0fdh
l4b5c:
	db 08bh,046h,014h,0d1h,0e0h,08bh,0d8h,003h,0ddh,08bh,047h,0deh,05eh,08bh,0e5h,05dh
	db 0c3h
#endasm
