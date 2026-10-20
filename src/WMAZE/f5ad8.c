#asm
	public maze_menu_select_
	extrn f5a9d_:near
	extrn get_maze_input_:near
	extrn get_message_:near
	extrn print_string_:near
	extrn print_string_hi_:near
	extrn set_click_region_:near
	extrn set_cursor_:near
	extrn strlen_:near
maze_menu_select_:
	db 055h,08bh,0ech,081h,0c4h,068h,0fdh,056h,083h,07eh,014h,001h,075h,066h,08bh,01eh
	db 042h,033h,08ah,047h,006h,02ah,0e4h,089h,086h,06eh,0fdh,08ah,047h,007h,02ah,0e4h
	db 089h,086h,06ch,0fdh,08dh,086h,07ah,0fdh,050h,0b8h,0ebh,007h,050h
	call get_message_
	db 083h,0c4h,004h,08dh,086h,070h,0fdh,050h,0b8h,0ech,007h,050h
	call get_message_
	db 083h,0c4h,004h,083h,03eh,046h,008h,001h,075h,015h,0b8h,003h,000h,050h,08dh,086h
	db 07ah,0fdh,050h,0ffh,036h,042h,033h
	call print_string_hi_
	db 083h,0c4h,006h,0ebh,016h
l5b36:
	db 0b8h,000h,000h,02bh,046h,012h,050h,08dh,086h,070h,0fdh,050h,0ffh,036h,042h,033h
	call print_string_
	db 083h,0c4h,006h
l5b4c:
	db 0c7h,046h,0fch,000h,000h,0c7h,046h,0feh,000h,000h
l5b56:
	db 08bh,046h,0feh,0d1h,0e0h,08bh,0f0h,08bh,05eh,008h,083h,038h,0ffh,075h,003h,0e9h
	db 025h,001h
l5b68:
	db 083h,038h,001h,074h,003h,0e9h,017h,001h
l5b70:
	db 08bh,046h,0fch,099h,0f7h,07eh,010h,0f7h,06eh,00eh,003h,046h,00ah,089h,086h,06ah
	db 0fdh,08bh,046h,0fch,099h,0f7h,07eh,010h,08bh,0c2h,003h,046h,00ch,089h,086h,068h
	db 0fdh,050h,0ffh,0b6h,06ah,0fdh,0ffh,076h,004h
	call set_cursor_
	db 083h,0c4h,006h,08bh,046h,0fch,08bh,0d0h,0d1h,0e0h,0d1h,0e0h,003h,0c2h,0b1h,003h
	db 0d3h,0e0h,08dh,08eh,084h,0fdh,003h,0c1h,050h,08bh,046h,006h,003h,046h,0feh,050h
	call get_message_
	db 083h,0c4h,004h,083h,03eh,046h,008h,000h,075h,034h,083h,07eh,014h,000h,075h,02eh
	db 083h,07eh,0fch,000h,075h,028h,0b8h,000h,000h,02bh,046h,012h,050h,08bh,046h,0fch
	db 08bh,0d0h,0d1h,0e0h,0d1h,0e0h,003h,0c2h,0b1h,003h,0d3h,0e0h,08dh,08eh,084h,0fdh
	db 003h,0c1h,050h,0ffh,076h,004h
	call print_string_
	db 083h,0c4h,006h,0ebh,023h
l5bfd:
	db 0b8h,003h,000h,050h,08bh,046h,0fch,08bh,0d0h,0d1h,0e0h,0d1h,0e0h,003h,0c2h,0b1h
	db 003h,0d3h,0e0h,08dh,08eh,084h,0fdh,003h,0c1h,050h,0ffh,076h,004h
	call print_string_hi_
	db 083h,0c4h,006h
l5c20:
	db 08bh,046h,0feh,08bh,04eh,0fch,0d1h,0e1h,08bh,0d9h,003h,0ddh,089h,047h,0dch,08bh
	db 05eh,004h,08ah,047h,003h,02ah,0e4h,003h,086h,068h,0fdh,050h,08bh,046h,0fch,08bh
	db 0d0h,0d1h,0e0h,0d1h,0e0h,003h,0c2h,0b1h,003h,0d3h,0e0h,08dh,08eh,084h,0fdh,003h
	db 0c1h,050h
	call strlen_
	db 059h,050h,08bh,05eh,004h,08ah,047h,002h,02ah,0e4h,08bh,0c8h,058h,003h,0c1h,003h
	db 086h,06ah,0fdh,048h,050h,08ah,047h,003h,02ah,0e4h,003h,086h,068h,0fdh,050h,003h
	db 08eh,06ah,0fdh,08bh,0c1h,050h,0ffh,076h,0fch
	call set_click_region_
	db 083h,0c4h,00ah,0ffh,046h,0fch
l5c87:
	db 0ffh,046h,0feh,0e9h,0c9h,0feh
l5c8d:
	db 0b8h,000h,000h,050h,050h,050h,0b8h,0ffh,000h,050h,0ffh,076h,0fch
	call set_click_region_
	db 083h,0c4h,00ah,083h,07eh,014h,001h,075h,05bh,08bh,01eh,042h,033h,08ah,047h,003h
	db 02ah,0e4h,003h,086h,06ch,0fdh,050h,08dh,086h,070h,0fdh,050h
	call strlen_
	db 059h,050h,08bh,01eh,042h,033h,08ah,047h,002h,02ah,0e4h,08bh,0c8h,058h,003h,0c1h
	db 003h,086h,06eh,0fdh,048h,050h,08ah,047h,003h,02ah,0e4h,003h,086h,06ch,0fdh,050h
	db 003h,08eh,06eh,0fdh,08bh,0c1h,050h,0ffh,076h,0fch
	call set_click_region_
	db 083h,0c4h,00ah,0b8h,000h,000h,050h,050h,050h,0b8h,0ffh,000h,050h,08bh,046h,0fch
	db 040h,050h
	call set_click_region_
	db 083h,0c4h,00ah
l5d01:
	db 0b8h,000h,000h,083h,07eh,014h,001h,075h,003h,0b8h,0ffh,0ffh
l5d0d:
	db 089h,046h,0fah
l5d10:
	db 083h,03eh,046h,008h,000h,074h,003h,0e9h,07ah,000h
l5d1a:
	db 083h,07eh,0fah,0ffh,075h,02ah,0ffh,0b6h,06ch,0fdh,0ffh,0b6h,06eh,0fdh,0ffh,036h
	db 042h,033h
	call set_cursor_
	db 083h,0c4h,006h,0b8h,000h,000h,02bh,046h,012h,050h,08dh,086h,070h,0fdh,050h,0ffh
	db 036h,042h,033h
	call print_string_
	db 083h,0c4h,006h,0ebh,04ah
l5d4a:
	db 08bh,046h,0fah,099h,0f7h,07eh,010h,08bh,0c2h,003h,046h,00ch,050h,08bh,046h,0fah
	db 099h,0f7h,07eh,010h,0f7h,06eh,00eh,003h,046h,00ah,050h,0ffh,076h,004h
	call set_cursor_
	db 083h,0c4h,006h,0b8h,000h,000h,02bh,046h,012h,050h,08bh,046h,0fah,08bh,0d0h,0d1h
	db 0e0h,0d1h,0e0h,003h,0c2h,0b1h,003h,0d3h,0e0h,08dh,08eh,084h,0fdh,003h,0c1h,050h
	db 0ffh,076h,004h
	call print_string_
	db 083h,0c4h,006h
l5d94:
	db 0b8h,098h,035h,050h,0b8h,028h,050h,050h
	call get_maze_input_
	db 083h,0c4h,004h,089h,046h,0feh,083h,03eh,0c4h,04fh,001h,075h,018h,0b8h,0ffh,0ffh
	db 08bh,04eh,0feh,03bh,04eh,0fch,07dh,002h,08bh,0c1h
l5db9:
	db 089h,046h,0fah,0c7h,046h,0feh,005h,000h,0e9h,0b8h,001h
l5dc4:
	db 08bh,046h,0feh,0e9h,092h,001h
l5dca:
	db 083h,07eh,0fah,0ffh,074h,03ch,08bh,046h,0fah,02bh,046h,010h,07ch,034h,08bh,046h
	db 0fah,08bh,0d0h,0d1h,0e0h,0d1h,0e0h,003h,0c2h,0b1h,003h,0d3h,0e0h,08dh,08eh,084h
	db 0fdh,003h,0c1h,050h,0ffh,076h,00ch,0ffh,076h,00ah,0ffh,076h,010h,0ffh,076h,00eh
	db 0ffh,076h,0fah,0ffh,076h,004h
	call f5a9d_
	db 083h,0c4h,00eh,08bh,046h,010h,029h,046h,0fah
l5e0c:
	db 0e9h,06dh,001h
l5e0f:
	db 083h,07eh,0fah,0ffh,075h,003h,0e9h,07ah,000h
l5e18:
	db 08bh,046h,0fah,099h,0f7h,07eh,010h,08bh,0c2h,03dh,000h,000h,07eh,033h,08bh,046h
	db 0fah,08bh,0d0h,0d1h,0e0h,0d1h,0e0h,003h,0c2h,0b1h,003h,0d3h,0e0h,08dh,08eh,084h
	db 0fdh,003h,0c1h,050h,0ffh,076h,00ch,0ffh,076h,00ah,0ffh,076h,010h,0ffh,076h,00eh
	db 0ffh,076h,0fah,0ffh,076h,004h
	call f5a9d_
	db 083h,0c4h,00eh,0ffh,04eh,0fah,0ebh,039h
l5e59:
	db 083h,07eh,014h,001h,075h,033h,08bh,046h,0fah,08bh,0d0h,0d1h,0e0h,0d1h,0e0h,003h
	db 0c2h,0b1h,003h,0d3h,0e0h,08dh,08eh,084h,0fdh,003h,0c1h,050h,0ffh,076h,00ch,0ffh
	db 076h,00ah,0ffh,076h,010h,0ffh,076h,00eh,0ffh,076h,0fah,0ffh,076h,004h
	call f5a9d_
	db 083h,0c4h,00eh,0c7h,046h,0fah,0ffh,0ffh
l5e92:
	db 0e9h,0e7h,000h
l5e95:
	db 083h,07eh,0fah,0ffh,074h,03fh,08bh,046h,0fah,003h,046h,010h,03bh,046h,0fch,07dh
	db 034h,08bh,046h,0fah,08bh,0d0h,0d1h,0e0h,0d1h,0e0h,003h,0c2h,0b1h,003h,0d3h,0e0h
	db 08dh,08eh,084h,0fdh,003h,0c1h,050h,0ffh,076h,00ch,0ffh,076h,00ah,0ffh,076h,010h
	db 0ffh,076h,00eh,0ffh,076h,0fah,0ffh,076h,004h
	call f5a9d_
	db 083h,0c4h,00eh,08bh,046h,010h,001h,046h,0fah
l5eda:
	db 0e9h,09fh,000h
l5edd:
	db 083h,07eh,0fah,0ffh,075h,02ch,0ffh,0b6h,06ch,0fdh,0ffh,0b6h,06eh,0fdh,0ffh,036h
	db 042h,033h
	call set_cursor_
	db 083h,0c4h,006h,0b8h,003h,000h,050h,08dh,086h,07ah,0fdh,050h,0ffh,036h,042h,033h
	call print_string_hi_
	db 083h,0c4h,006h,0c7h,046h,0fah,000h,000h,0ebh,04bh
l5f0f:
	db 08bh,046h,0fah,099h,0f7h,07eh,010h,08bh,0c2h,08bh,04eh,010h,049h,03bh,0c1h,07dh
	db 03ah,08bh,046h,0fah,040h,03bh,046h,0fch,07dh,031h,08bh,046h,0fah,08bh,0d0h,0d1h
	db 0e0h,0d1h,0e0h,003h,0c2h,0b1h,003h,0d3h,0e0h,08dh,08eh,084h,0fdh,003h,0c1h,050h
	db 0ffh,076h,00ch,0ffh,076h,00ah,0ffh,076h,010h,0ffh,076h,00eh,0ffh,076h,0fah,0ffh
	db 076h,004h
	call f5a9d_
	db 083h,0c4h,00eh,0ffh,046h,0fah
l5f5a:
	db 0ebh,020h
l5f5c:
	db 03dh,001h,000h,075h,003h,0e9h,066h,0feh
l5f64:
	db 03dh,002h,000h,075h,003h,0e9h,0a3h,0feh
l5f6c:
	db 03dh,003h,000h,075h,003h,0e9h,021h,0ffh
l5f74:
	db 03dh,004h,000h,075h,003h,0e9h,061h,0ffh
l5f7c:
	db 083h,07eh,0feh,005h,074h,003h,0e9h,08bh,0fdh
l5f85:
	db 083h,07eh,0fah,0ffh,075h,008h,0b8h,0ffh,0ffh
l5f8e:
	db 05eh,08bh,0e5h,05dh,0c3h
l5f93:
	db 08bh,046h,0fah,0d1h,0e0h,08bh,0d8h,003h,0ddh,08bh,047h,0dch,0ebh,0edh
#endasm
