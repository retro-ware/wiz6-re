#asm
	public select_monster_group_
	extrn draw_monster_groups_:near
	extrn fill_window_:near
	extrn get_combat_input_:near
	extrn get_message_:near
	extrn print_string_:near
	extrn print_string_hi_:near
	extrn put_char_:near
	extrn refresh_all_windows_:near
	extrn replace_char_with_string_:near
	extrn set_click_region_:near
	extrn set_cursor_:near
	extrn strlen_:near
select_monster_group_:
	db 055h,08bh,0ech,081h,0c4h,052h,0ffh,083h,03eh,060h,043h,001h,075h,007h,0b8h,001h
	db 000h
l55de:
	db 08bh,0e5h,05dh,0c3h
l55e2:
	db 0b8h,000h,000h,050h,0b8h,003h,000h,050h,0b8h,020h,000h,050h,0ffh,076h,004h
	call fill_window_
	db 083h,0c4h,008h
	call refresh_all_windows_
	db 08dh,046h,0b0h,050h,0b8h,010h,00eh,050h
	call get_message_
	db 083h,0c4h,004h,08dh,086h,060h,0ffh,050h,0ffh,076h,006h
	call get_message_
	db 083h,0c4h,004h,0b8h,024h,000h,050h,08dh,086h,060h,0ffh,050h,08dh,046h,0b0h,050h
	call replace_char_with_string_
	db 083h,0c4h,006h,08dh,046h,0b0h,050h
	call strlen_
	db 059h,040h,0b9h,002h,000h,099h,0f7h,0f9h,08bh,0c8h,0b8h,00ah,000h,02bh,0c1h,089h
	db 086h,054h,0ffh,0b8h,001h,000h,050h,0ffh,0b6h,054h,0ffh,0ffh,076h,004h
	call set_cursor_
	db 083h,0c4h,006h,0b8h,003h,000h,050h,08dh,046h,0b0h,050h,0ffh,076h,004h
	call print_string_hi_
	db 083h,0c4h,006h,08dh,086h,056h,0ffh,050h,0b8h,016h,00eh,050h
	call get_message_
	db 083h,0c4h,004h,0b8h,003h,000h,050h,0b8h,007h,000h,050h,0ffh,076h,004h
	call set_cursor_
	db 083h,0c4h,006h,0b8h,003h,000h,050h,08dh,086h,056h,0ffh,050h,0ffh,076h,004h
	call print_string_hi_
	db 083h,0c4h,006h,0c7h,086h,052h,0ffh,005h,000h,08bh,046h,008h,0ebh,018h
l56a2:
	db 0c7h,086h,052h,0ffh,002h,000h,0ebh,024h
l56aa:
	db 0c7h,086h,052h,0ffh,003h,000h,0ebh,01ch
l56b2:
	db 0c7h,086h,052h,0ffh,005h,000h,0ebh,014h
l56ba:
	db 03dh,000h,000h,074h,0e3h,03dh,001h,000h,074h,0deh,03dh,002h,000h,074h,0e1h,03dh
	db 003h,000h,074h,0e4h
l56ce:
	db 08bh,086h,052h,0ffh,050h,03bh,006h,060h,043h,058h,07eh,003h,0a1h,060h,043h
l56dd:
	db 089h,086h,052h,0ffh,0c7h,086h,054h,0ffh,000h,000h,0ebh,035h
l56e9:
	db 08bh,01eh,08ch,043h,08ah,047h,003h,02ah,0e4h,003h,086h,054h,0ffh,050h,08ah,047h
	db 002h,02ah,0e4h,005h,013h,000h,050h,08ah,047h,003h,02ah,0e4h,003h,086h,054h,0ffh
	db 050h,08ah,047h,002h,02ah,0e4h,050h,0ffh,0b6h,054h,0ffh
	call set_click_region_
	db 083h,0c4h,00ah,0ffh,086h,054h,0ffh
l571e:
	db 08bh,086h,054h,0ffh,03bh,086h,052h,0ffh,07ch,0c1h,08bh,05eh,004h,08ah,047h,003h
	db 02ah,0e4h,040h,040h,040h,050h,08dh,086h,056h,0ffh,050h
	call strlen_
	db 059h,050h,08bh,05eh,004h,08ah,047h,002h,02ah,0e4h,08bh,0c8h,058h,003h,0c1h,005h
	db 006h,000h,050h,08ah,047h,003h,02ah,0e4h,040h,040h,040h,050h,083h,0c1h,007h,08bh
	db 0c1h,050h,0ffh,0b6h,052h,0ffh
	call set_click_region_
	db 083h,0c4h,00ah,0b8h,000h,000h,050h,050h,050h,0b8h,0ffh,000h,050h,08bh,086h,052h
	db 0ffh,040h,050h
	call set_click_region_
	db 083h,0c4h,00ah
l577e:
	db 083h,03eh,046h,008h,000h,074h,003h,0e9h,000h,001h
l5788:
	db 083h,07eh,00ah,0ffh,075h,026h,0b8h,003h,000h,050h,0b8h,007h,000h,050h,0ffh,076h
	db 004h
	call set_cursor_
	db 083h,0c4h,006h,0b8h,0f9h,0ffh,050h,08dh,086h,056h,0ffh,050h,0ffh,076h,004h
	call print_string_
	db 083h,0c4h,006h,0e9h,0d4h,000h
l57b4:
	db 0ffh,076h,00ah,0b8h,000h,000h,050h,0ffh,036h,08ch,043h
	call set_cursor_
	db 083h,0c4h,006h,0b8h,0f9h,0ffh,050h,08bh,046h,00ah,0d1h,0e0h,08bh,0d8h,08bh,09fh
	db 0aah,043h,08ah,087h,09dh,001h,02ah,0e4h,005h,030h,000h,02ah,0e4h,050h,0ffh,036h
	db 08ch,043h
	call put_char_
	db 083h,0c4h,006h,0b8h,0f9h,0ffh,050h,0b8h,020h,000h,050h,0ffh,036h,08ch,043h
	call put_char_
	db 083h,0c4h,006h,0b8h,0f9h,0ffh,050h,08bh,046h,00ah,0d1h,0e0h,08bh,0d8h,08bh,09fh
	db 0aah,043h,080h,0bfh,09dh,001h,001h,075h,005h,0b8h,000h,000h,0ebh,003h
l5817:
	db 0b8h,001h,000h
l581a:
	db 0b9h,004h,000h,0d3h,0e0h,08bh,0c8h,051h,08ah,087h,09ch,001h,02ah,0e4h,0b9h,005h
	db 000h,0d3h,0e0h,059h,003h,0c8h,08bh,046h,00ah,0d1h,0e0h,08bh,0d8h,08bh,087h,0b8h
	db 043h,003h,0c1h,050h,0ffh,036h,08ch,043h
	call print_string_
	db 083h,0c4h,006h
l5848:
	db 08bh,01eh,08ch,043h,080h,07fh,006h,013h,073h,011h,0b8h,0f9h,0ffh,050h,0b8h,020h
	db 000h,050h,053h
	call put_char_
	db 083h,0c4h,006h,0ebh,0e5h
l5863:
	db 0b8h,0f9h,0ffh,050h,08bh,046h,00ah,0d1h,0e0h,08bh,0d8h,08bh,09fh,0aah,043h,08ah
	db 087h,09eh,001h,02ah,0e4h,005h,030h,000h,02ah,0e4h,050h,0ffh,036h,08ch,043h
	call put_char_
	db 083h,0c4h,006h
l5888:
	db 0b8h,098h,035h,050h,0b8h,076h,043h,050h
	call get_combat_input_
	db 083h,0c4h,004h,089h,086h,054h,0ffh,083h,03eh,0c4h,04fh,001h,075h,01bh,0b8h,0ffh
	db 0ffh,08bh,08eh,054h,0ffh,03bh,08eh,052h,0ffh,07dh,002h,08bh,0c1h
l58b0:
	db 089h,046h,00ah,0c7h,086h,054h,0ffh,005h,000h,0e9h,015h,001h
l58bc:
	db 08bh,086h,054h,0ffh,0e9h,0f1h,000h
l58c3:
	db 083h,07eh,00ah,0ffh,074h,013h,0b8h,001h,000h,050h,0ffh,036h,08ch,043h
	call draw_monster_groups_
	db 083h,0c4h,004h,0c7h,046h,00ah,0ffh,0ffh
l58dc:
	db 0e9h,0f2h,000h
l58df:
	db 083h,07eh,00ah,0ffh,075h,02ah,0b8h,003h,000h,050h,0b8h,007h,000h,050h,0ffh,076h
	db 004h
	call set_cursor_
	db 083h,0c4h,006h,0b8h,003h,000h,050h,08dh,086h,056h,0ffh,050h,0ffh,076h,004h
	call print_string_hi_
	db 083h,0c4h,006h,0c7h,046h,00ah,000h,000h,0ebh,01eh
l590f:
	db 0b8h,001h,000h,050h,0ffh,036h,08ch,043h
	call draw_monster_groups_
	db 083h,0c4h,004h,08bh,046h,00ah,048h,07ch,005h,0ffh,04eh,00ah,0ebh,005h
l5928:
	db 0c7h,046h,00ah,0ffh,0ffh
l592d:
	db 0e9h,0a1h,000h
l5930:
	db 083h,07eh,00ah,0ffh,075h,028h,0b8h,003h,000h,050h,0b8h,007h,000h,050h,0ffh,076h
	db 004h
	call set_cursor_
	db 083h,0c4h,006h,0b8h,003h,000h,050h,08dh,086h,056h,0ffh,050h,0ffh,076h,004h
	call print_string_hi_
	db 083h,0c4h,006h,0c7h,046h,00ah,000h,000h
l595e:
	db 0ebh,071h
l5960:
	db 083h,07eh,00ah,0ffh,075h,02ah,0b8h,003h,000h,050h,0b8h,007h,000h,050h,0ffh,076h
	db 004h
	call set_cursor_
	db 083h,0c4h,006h,0b8h,003h,000h,050h,08dh,086h,056h,0ffh,050h,0ffh,076h,004h
	call print_string_hi_
	db 083h,0c4h,006h,0c7h,046h,00ah,000h,000h,0ebh,022h
l5990:
	db 0b8h,001h,000h,050h,0ffh,036h,08ch,043h
	call draw_monster_groups_
	db 083h,0c4h,004h,08bh,046h,00ah,040h,03bh,086h,052h,0ffh,07dh,005h,0ffh,046h,00ah
	db 0ebh,005h
l59ad:
	db 0c7h,046h,00ah,0ffh,0ffh
l59b2:
	db 0ebh,01dh
l59b4:
	db 03dh,001h,000h,075h,003h,0e9h,007h,0ffh
l59bc:
	db 03dh,002h,000h,075h,003h,0e9h,01bh,0ffh
l59c4:
	db 03dh,003h,000h,075h,003h,0e9h,064h,0ffh
l59cc:
	db 03dh,004h,000h,074h,08fh
l59d1:
	db 083h,0beh,054h,0ffh,005h,074h,003h,0e9h,0a3h,0fdh
l59db:
	db 083h,07eh,00ah,0ffh,075h,006h,0b8h,0ffh,0ffh,0e9h,0f7h,0fbh
l59e7:
	db 08bh,046h,00ah,040h,0e9h,0f0h,0fbh
#endasm
