/* NPC shop list: let the party buy items from the NPC. */
#asm
	public do_npc_buy_
	extrn defer_window_draw_:near
	extrn erase_window_:near
	extrn f5994_:near
	extrn f9fcf_:near
	extrn fa206_:near
	extrn get_message_:near
	extrn print_string_:near
	extrn print_string_hi_:near
	extrn refresh_window_:near
	extrn resume_window_draw_:near
	extrn set_click_region_:near
	extrn set_cursor_:near
	extrn strlen_:near
do_npc_buy_:
	db 055h,08bh,0ech,083h,0c4h,0e4h,0c7h,046h,0e6h,00ch,000h,0c7h,046h,0e4h,000h,000h
	db 0ffh,036h,042h,033h
	call defer_window_draw_
	db 059h,0b8h,000h,000h,050h,0ffh,036h,042h,033h
	call erase_window_
	db 083h,0c4h,004h,0b8h,0d4h,051h,050h,0b8h,0e5h,005h,050h
	call get_message_
	db 083h,0c4h,004h,0b8h,000h,000h,050h,0b8h,002h,000h,050h,0ffh,036h,042h,033h
	call set_cursor_
	db 083h,0c4h,006h,0b8h,003h,000h,050h,0b8h,0d4h,051h,050h,0ffh,036h,042h,033h
	call print_string_hi_
	db 083h,0c4h,006h,0ffh,036h,042h,033h
	call resume_window_draw_
	db 059h,0ffh,036h,042h,033h
	call refresh_window_
	db 059h,0ffh,036h,0b2h,04fh
	call refresh_window_
	db 059h,08dh,046h,0f2h,050h,0b8h,0e2h,005h,050h
	call get_message_
	db 083h,0c4h,004h,08dh,046h,0e8h,050h,0b8h,0e3h,005h,050h
	call get_message_
	db 083h,0c4h,004h
	call fa206_
	db 083h,03eh,0b2h,054h,000h,07fh,007h,0b8h,0ffh,0ffh
la411:
	db 08bh,0e5h,05dh,0c3h
la415:
	db 08bh,046h,008h,03bh,006h,0b2h,054h,07ch,007h,0a1h,0b2h,054h,048h,089h,046h,008h
la425:
	db 0c7h,046h,0fch,000h,000h,08bh,05eh,004h,08ah,047h,003h,02ah,0e4h,040h,040h,050h
	db 08ah,047h,002h,02ah,0e4h,005h,010h,000h,050h,08ah,047h,003h,02ah,0e4h,040h,040h
	db 050h,08ah,047h,002h,02ah,0e4h,040h,040h,050h,0b8h,000h,000h,050h
	call set_click_region_
	db 083h,0c4h,00ah,08bh,05eh,004h,08ah,047h,003h,02ah,0e4h,050h,08ah,047h,002h,02ah
	db 0e4h,040h,050h,08ah,047h,003h,02ah,0e4h,050h,08ah,047h,002h,02ah,0e4h,040h,050h
	db 0b8h,001h,000h,050h
	call set_click_region_
	db 083h,0c4h,00ah,08bh,05eh,004h,08ah,047h,003h,02ah,0e4h,005h,004h,000h,050h,08ah
	db 047h,002h,02ah,0e4h,040h,050h,08ah,047h,003h,02ah,0e4h,005h,004h,000h,050h,08ah
	db 047h,002h,02ah,0e4h,040h,050h,0b8h,002h,000h,050h
	call set_click_region_
	db 083h,0c4h,00ah,08bh,01eh,042h,033h,08ah,047h,003h,02ah,0e4h,003h,046h,0e4h,050h
	db 08dh,046h,0f2h,050h
	call strlen_
	db 059h,050h,08bh,01eh,042h,033h,08ah,047h,002h,02ah,0e4h,08bh,0c8h,058h,003h,0c1h
	db 003h,046h,0e6h,048h,050h,08ah,047h,003h,02ah,0e4h,003h,046h,0e4h,050h,003h,04eh
	db 0e6h,08bh,0c1h,050h,0b8h,003h,000h,050h
	call set_click_region_
	db 083h,0c4h,00ah,0b8h,000h,000h,050h,050h,050h,0b8h,0ffh,000h,050h,0b8h,004h,000h
	db 050h
	call set_click_region_
	db 083h,0c4h,00ah
la502:
	db 083h,07eh,0fch,001h,075h,037h,0ffh,076h,0e4h,0ffh,076h,0e6h,0ffh,036h,042h,033h
	call set_cursor_
	db 083h,0c4h,006h,0b8h,0fdh,0ffh,050h,08dh,046h,0e8h,050h,0ffh,036h,042h,033h
	call print_string_
	db 083h,0c4h,006h,0b8h,000h,000h,050h,0ffh,076h,008h,0ffh,076h,006h,0ffh,076h,004h
	call f9fcf_
	db 083h,0c4h,008h,0ebh,035h
la53f:
	db 0ffh,076h,0e4h,0ffh,076h,0e6h,0ffh,036h,042h,033h
	call set_cursor_
	db 083h,0c4h,006h,0b8h,003h,000h,050h,08dh,046h,0f2h,050h,0ffh,036h,042h,033h
	call print_string_hi_
	db 083h,0c4h,006h,0b8h,001h,000h,050h,0ffh,076h,008h,0ffh,076h,006h,0ffh,076h,004h
	call f9fcf_
	db 083h,0c4h,008h
la574:
	db 0b8h,098h,035h,050h,0b8h,06ah,052h,050h
	call f5994_
	db 083h,0c4h,004h,089h,046h,0feh,083h,03eh,0c4h,04fh,001h,075h,037h,0ebh,021h
la58e:
	db 0c7h,046h,0feh,005h,000h,0ebh,02eh
la595:
	db 0c7h,046h,0feh,002h,000h,0ebh,027h
la59c:
	db 0c7h,046h,0feh,004h,000h,0ebh,020h
la5a3:
	db 0c7h,046h,0fch,001h,000h,0c7h,046h,0feh,005h,000h,0ebh,014h
la5af:
	db 03dh,000h,000h,074h,0dah,03dh,001h,000h,074h,0dch,03dh,002h,000h,074h,0deh,03dh
	db 003h,000h,074h,0e0h
la5c3:
	db 08bh,046h,0feh,0ebh,04eh
la5c8:
	db 083h,07eh,0fch,001h,074h,005h,0c7h,046h,0fch,001h,000h
la5d3:
	db 0ebh,055h
la5d5:
	db 083h,07eh,0fch,001h,075h,007h,0c7h,046h,0fch,000h,000h,0ebh,009h
la5e2:
	db 083h,07eh,008h,000h,07eh,003h,0ffh,04eh,008h
la5eb:
	db 0ebh,03dh
la5ed:
	db 083h,07eh,0fch,001h,075h,005h,0c7h,046h,0fch,000h,000h
la5f8:
	db 0ebh,030h
la5fa:
	db 083h,07eh,0fch,001h,075h,007h,0c7h,046h,0fch,000h,000h,0ebh,00dh
la607:
	db 08bh,046h,008h,040h,03bh,006h,0b2h,054h,07dh,003h,0ffh,046h,008h
la614:
	db 0ebh,014h
la616:
	db 03dh,001h,000h,074h,0adh,03dh,002h,000h,074h,0b5h,03dh,003h,000h,074h,0c8h,03dh
	db 004h,000h,074h,0d0h
la62a:
	db 083h,07eh,0feh,005h,074h,003h,0e9h,0cfh,0feh
la633:
	db 083h,07eh,0fch,001h,075h,006h,0b8h,0ffh,0ffh,0e9h,0d2h,0fdh
la63f:
	db 08bh,046h,008h,0e9h,0cch,0fdh
#endasm
