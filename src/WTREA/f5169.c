#asm
	public chest_menu_select_
	extrn get_chest_input_:near
	extrn get_message_:near
	extrn print_option_cell_:near
	extrn print_string_:near
	extrn print_string_hi_:near
	extrn set_click_region_:near
	extrn set_cursor_:near
	extrn strlen_:near
chest_menu_select_:
	db 055h,08bh,0ech,081h,0c4h,0deh,0feh,056h,083h,07eh,014h,001h,075h,066h,08bh,01eh
	db 042h,033h,08ah,047h,006h,02ah,0e4h,089h,086h,0e5h,0feh,08ah,047h,007h,02ah,0e4h
	db 089h,086h,0e3h,0feh,08dh,086h,0f1h,0feh,050h,0b8h,0ebh,007h,050h
	call get_message_
	db 083h,0c4h,004h,08dh,086h,0e7h,0feh,050h,0b8h,0ech,007h,050h
	call get_message_
	db 083h,0c4h,004h,083h,03eh,046h,008h,001h,075h,015h,0b8h,003h,000h,050h,08dh,086h
	db 0f1h,0feh,050h,0ffh,036h,042h,033h
	call print_string_hi_
	db 083h,0c4h,006h,0ebh,016h
l51c7:
	db 0b8h,000h,000h,02bh,046h,012h,050h,08dh,086h,0e7h,0feh,050h,0ffh,036h,042h,033h
	call print_string_
	db 083h,0c4h,006h
l51dd:
	db 0c7h,046h,0fch,000h,000h,0c7h,046h,0feh,000h,000h
l51e7:
	db 08bh,046h,0feh,0d1h,0e0h,08bh,0f0h,08bh,05eh,008h,083h,038h,0ffh,075h,003h,0e9h
	db 015h,001h
l51f9:
	db 083h,038h,001h,074h,003h,0e9h,007h,001h
l5201:
	db 08bh,046h,0fch,099h,0f7h,07eh,010h,0f7h,06eh,00eh,003h,046h,00ah,089h,086h,0e1h
	db 0feh,08bh,046h,0fch,099h,0f7h,07eh,010h,08bh,0c2h,003h,046h,00ch,089h,086h,0dfh
	db 0feh,050h,0ffh,0b6h,0e1h,0feh,0ffh,076h,004h
	call set_cursor_
	db 083h,0c4h,006h,08bh,046h,0fch,08bh,0d0h,0b1h,004h,0d3h,0e0h,02bh,0c2h,08dh,08eh
	db 0fbh,0feh,003h,0c1h,050h,08bh,046h,006h,003h,046h,0feh,050h
	call get_message_
	db 083h,0c4h,004h,083h,03eh,046h,008h,000h,075h,030h,083h,07eh,014h,000h,075h,02ah
	db 083h,07eh,0fch,000h,075h,024h,0b8h,000h,000h,02bh,046h,012h,050h,08bh,046h,0fch
	db 08bh,0d0h,0b1h,004h,0d3h,0e0h,02bh,0c2h,08dh,08eh,0fbh,0feh,003h,0c1h,050h,0ffh
	db 076h,004h
	call print_string_
	db 083h,0c4h,006h,0ebh,01fh
l5286:
	db 0b8h,003h,000h,050h,08bh,046h,0fch,08bh,0d0h,0b1h,004h,0d3h,0e0h,02bh,0c2h,08dh
	db 08eh,0fbh,0feh,003h,0c1h,050h,0ffh,076h,004h
	call print_string_hi_
	db 083h,0c4h,006h
l52a5:
	db 08bh,046h,0feh,08bh,04eh,0fch,0d1h,0e1h,08bh,0d9h,003h,0ddh,089h,047h,0dch,08bh
	db 05eh,004h,08ah,047h,003h,02ah,0e4h,003h,086h,0dfh,0feh,050h,08bh,046h,0fch,08bh
	db 0d0h,0b1h,004h,0d3h,0e0h,02bh,0c2h,08dh,08eh,0fbh,0feh,003h,0c1h,050h
	call strlen_
	db 059h,050h,08bh,05eh,004h,08ah,047h,002h,02ah,0e4h,08bh,0c8h,058h,003h,0c1h,003h
	db 086h,0e1h,0feh,048h,050h,08ah,047h,003h,02ah,0e4h,003h,086h,0dfh,0feh,050h,003h
	db 08eh,0e1h,0feh,08bh,0c1h,050h,0ffh,076h,0fch
	call set_click_region_
	db 083h,0c4h,00ah,0ffh,046h,0fch
l5308:
	db 0ffh,046h,0feh,0e9h,0d9h,0feh
l530e:
	db 0b8h,000h,000h,050h,050h,050h,0b8h,0ffh,000h,050h,0ffh,076h,0fch
	call set_click_region_
	db 083h,0c4h,00ah,083h,07eh,014h,001h,075h,05bh,08bh,01eh,042h,033h,08ah,047h,003h
	db 02ah,0e4h,003h,086h,0e3h,0feh,050h,08dh,086h,0e7h,0feh,050h
	call strlen_
	db 059h,050h,08bh,01eh,042h,033h,08ah,047h,002h,02ah,0e4h,08bh,0c8h,058h,003h,0c1h
	db 003h,086h,0e5h,0feh,048h,050h,08ah,047h,003h,02ah,0e4h,003h,086h,0e3h,0feh,050h
	db 003h,08eh,0e5h,0feh,08bh,0c1h,050h,0ffh,076h,0fch
	call set_click_region_
	db 083h,0c4h,00ah,0b8h,000h,000h,050h,050h,050h,0b8h,0ffh,000h,050h,08bh,046h,0fch
	db 040h,050h
	call set_click_region_
	db 083h,0c4h,00ah
l5382:
	db 0b8h,000h,000h,083h,07eh,014h,001h,075h,003h,0b8h,0ffh,0ffh
l538e:
	db 089h,046h,0fah
l5391:
	db 083h,03eh,046h,008h,000h,075h,076h,083h,07eh,0fah,0ffh,075h,02ah,0ffh,0b6h,0e3h
	db 0feh,0ffh,0b6h,0e5h,0feh,0ffh,036h,042h,033h
	call set_cursor_
	db 083h,0c4h,006h,0b8h,000h,000h,02bh,046h,012h,050h,08dh,086h,0e7h,0feh,050h,0ffh
	db 036h,042h,033h
	call print_string_
	db 083h,0c4h,006h,0ebh,046h
l53c8:
	db 08bh,046h,0fah,099h,0f7h,07eh,010h,08bh,0c2h,003h,046h,00ch,050h,08bh,046h,0fah
	db 099h,0f7h,07eh,010h,0f7h,06eh,00eh,003h,046h,00ah,050h,0ffh,076h,004h
	call set_cursor_
	db 083h,0c4h,006h,0b8h,000h,000h,02bh,046h,012h,050h,08bh,046h,0fah,08bh,0d0h,0b1h
	db 004h,0d3h,0e0h,02bh,0c2h,08dh,08eh,0fbh,0feh,003h,0c1h,050h,0ffh,076h,004h
	call print_string_
	db 083h,0c4h,006h
l540e:
	db 0b8h,098h,035h,050h,0b8h,0beh,050h,050h
	call get_chest_input_
	db 083h,0c4h,004h,089h,046h,0feh,083h,03eh,0c4h,04fh,001h,075h,018h,0b8h,0ffh,0ffh
	db 08bh,04eh,0feh,03bh,04eh,0fch,07dh,002h,08bh,0c1h
l5433:
	db 089h,046h,0fah,0c7h,046h,0feh,005h,000h,0e9h,0a1h,001h
l543e:
	db 08bh,046h,0feh,0e9h,07bh,001h
l5444:
	db 083h,07eh,0fah,0ffh,074h,038h,08bh,046h,0fah,02bh,046h,010h,07ch,030h,08bh,046h
	db 0fah,08bh,0d0h,0b1h,004h,0d3h,0e0h,02bh,0c2h,08dh,08eh,0fbh,0feh,003h,0c1h,050h
	db 0ffh,076h,00ch,0ffh,076h,00ah,0ffh,076h,010h,0ffh,076h,00eh,0ffh,076h,0fah,0ffh
	db 076h,004h
	call print_option_cell_
	db 083h,0c4h,00eh,08bh,046h,010h,029h,046h,0fah
l5482:
	db 0e9h,05ah,001h
l5485:
	db 083h,07eh,0fah,0ffh,074h,072h,08bh,046h,0fah,099h,0f7h,07eh,010h,08bh,0c2h,03dh
	db 000h,000h,07eh,02fh,08bh,046h,0fah,08bh,0d0h,0b1h,004h,0d3h,0e0h,02bh,0c2h,08dh
	db 08eh,0fbh,0feh,003h,0c1h,050h,0ffh,076h,00ch,0ffh,076h,00ah,0ffh,076h,010h,0ffh
	db 076h,00eh,0ffh,076h,0fah,0ffh,076h,004h
	call print_option_cell_
	db 083h,0c4h,00eh,0ffh,04eh,0fah,0ebh,035h
l54c8:
	db 083h,07eh,014h,001h,075h,02fh,08bh,046h,0fah,08bh,0d0h,0b1h,004h,0d3h,0e0h,02bh
	db 0c2h,08dh,08eh,0fbh,0feh,003h,0c1h,050h,0ffh,076h,00ch,0ffh,076h,00ah,0ffh,076h
	db 010h,0ffh,076h,00eh,0ffh,076h,0fah,0ffh,076h,004h
	call print_option_cell_
	db 083h,0c4h,00eh,0c7h,046h,0fah,0ffh,0ffh
l54fd:
	db 0e9h,0dfh,000h
l5500:
	db 083h,07eh,0fah,0ffh,074h,03bh,08bh,046h,0fah,003h,046h,010h,03bh,046h,0fch,07dh
	db 030h,08bh,046h,0fah,08bh,0d0h,0b1h,004h,0d3h,0e0h,02bh,0c2h,08dh,08eh,0fbh,0feh
	db 003h,0c1h,050h,0ffh,076h,00ch,0ffh,076h,00ah,0ffh,076h,010h,0ffh,076h,00eh,0ffh
	db 076h,0fah,0ffh,076h,004h
	call print_option_cell_
	db 083h,0c4h,00eh,08bh,046h,010h,001h,046h,0fah
l5541:
	db 0e9h,09bh,000h
l5544:
	db 083h,07eh,0fah,0ffh,075h,02ch,0ffh,0b6h,0e3h,0feh,0ffh,0b6h,0e5h,0feh,0ffh,036h
	db 042h,033h
	call set_cursor_
	db 083h,0c4h,006h,0b8h,003h,000h,050h,08dh,086h,0f1h,0feh,050h,0ffh,036h,042h,033h
	call print_string_hi_
	db 083h,0c4h,006h,0c7h,046h,0fah,000h,000h,0ebh,047h
l5576:
	db 08bh,046h,0fah,099h,0f7h,07eh,010h,08bh,0c2h,08bh,04eh,010h,049h,03bh,0c1h,07dh
	db 036h,08bh,046h,0fah,040h,03bh,046h,0fch,07dh,02dh,08bh,046h,0fah,08bh,0d0h,0b1h
	db 004h,0d3h,0e0h,02bh,0c2h,08dh,08eh,0fbh,0feh,003h,0c1h,050h,0ffh,076h,00ch,0ffh
	db 076h,00ah,0ffh,076h,010h,0ffh,076h,00eh,0ffh,076h,0fah,0ffh,076h,004h
	call print_option_cell_
	db 083h,0c4h,00eh,0ffh,046h,0fah
l55bd:
	db 0ebh,020h
l55bf:
	db 03dh,001h,000h,075h,003h,0e9h,07dh,0feh
l55c7:
	db 03dh,002h,000h,075h,003h,0e9h,0b6h,0feh
l55cf:
	db 03dh,003h,000h,075h,003h,0e9h,029h,0ffh
l55d7:
	db 03dh,004h,000h,075h,003h,0e9h,065h,0ffh
l55df:
	db 083h,07eh,0feh,005h,074h,003h,0e9h,0a9h,0fdh
l55e8:
	db 083h,07eh,0fah,0ffh,075h,008h,0b8h,0ffh,0ffh
l55f1:
	db 05eh,08bh,0e5h,05dh,0c3h
l55f6:
	db 08bh,046h,0fah,0d1h,0e0h,08bh,0d8h,003h,0ddh,08bh,047h,0dch,0ebh,0edh
#endasm
