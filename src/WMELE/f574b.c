/* Let monster groups advance and swap places, announcing 'ADVANCE(S)!'. */
#asm
	public advance_monster_groups_
	extrn $ldv:near
	extrn arrange_monster_positions_:near
	extrn clear_window_:near
	extrn defer_window_draw_:near
	extrn get_message_:near
	extrn load_group_pics_:near
	extrn place_group_sprites_:near
	extrn play_sound_:near
	extrn print_string_:near
	extrn random_:near
	extrn redraw_view_background_:near
	extrn refresh_all_windows_:near
	extrn set_cursor_:near
	extrn show_encounter_view_:near
	extrn strcpy_:near
	extrn strlen_:near
	extrn swapmem_:near
	extrn wait_animating_view_:near
advance_monster_groups_:
	db 055h,08bh,0ech,081h,0c4h,0c4h,0fch,056h,0ffh,036h,042h,033h
	call defer_window_draw_
	db 059h,0ffh,036h,0b2h,04fh
	call defer_window_draw_
	db 059h,0c7h,046h,0feh,001h,000h,0e9h,0fch,001h
l576b:
	db 08bh,046h,0feh,0d1h,0e0h,08bh,0d8h,003h,0ddh,0c7h,047h,0e6h,000h,000h,0c7h,046h
	db 0fch,000h,000h,0e9h,0a0h,000h
l5781:
	db 0b8h,02ch,000h,0f7h,06eh,0fch,08bh,0f0h,08bh,046h,0feh,0d1h,0e0h,08bh,0d8h,08bh
	db 09fh,0a8h,043h,080h,078h,022h,000h,074h,003h,0e9h,081h,000h
l579d:
	db 080h,078h,010h,000h,074h,003h,0e9h,078h,000h
l57a6:
	db 080h,078h,011h,000h,075h,072h,0c7h,046h,0f4h,000h,000h,0c7h,046h,0f6h,000h,000h
l57b6:
	db 0b8h,02ch,000h,0f7h,06eh,0fch,003h,046h,0f6h,08bh,0f0h,08bh,046h,0feh,0d1h,0e0h
	db 08bh,0d8h,08bh,09fh,0a8h,043h,080h,078h,00eh,000h,076h,014h,0b8h,02ch,000h,0f7h
	db 06eh,0fch,08bh,0f0h,08bh,040h,002h,0b9h,004h,000h,099h,0f7h,0f9h,001h,046h,0f4h
l57e6:
	db 0ffh,046h,0f6h,08bh,046h,0f6h,03dh,00ah,000h,07ch,0c5h,0b8h,02ch,000h,0f7h,06eh
	db 0fch,08bh,0f0h,08bh,046h,0feh,0d1h,0e0h,08bh,0d8h,08bh,09fh,0a8h,043h,08bh,040h
	db 002h,03bh,046h,0f4h,07eh,012h,08bh,040h,002h,02bh,046h,0f4h,08bh,04eh,0feh,0d1h
	db 0e1h,08bh,0d9h,003h,0ddh,001h,047h,0e6h
l581e:
	db 0ffh,046h,0fch
l5821:
	db 08bh,046h,0feh,0d1h,0e0h,08bh,0d8h,08bh,09fh,0a8h,043h,08ah,087h,09dh,001h,02ah
	db 0e4h,03bh,046h,0fch,07eh,003h,0e9h,047h,0ffh
l583a:
	db 08bh,046h,0feh,0d1h,0e0h,08bh,0d8h,08bh,09fh,0b6h,043h,080h,0bfh,0a8h,000h,000h
	db 076h,02bh,08bh,0d8h,003h,0ddh,08bh,047h,0e6h,050h,08bh,046h,0feh,0d1h,0e0h,08bh
	db 0f0h,08bh,0b4h,0b6h,043h,08ah,084h,0a8h,000h,02ah,0e4h,0b9h,00ah,000h,099h,0f7h
	db 0f9h,08bh,0c8h,040h,08bh,0c8h,058h,099h,0f7h,0f9h,089h,047h,0e6h
l5877:
	db 08bh,046h,0feh,0d1h,0e0h,08bh,0d8h,08bh,09fh,0b6h,043h,080h,0bfh,0aah,000h,000h
	db 076h,04eh,08bh,0d8h,003h,0ddh,08bh,047h,0e6h,050h,08bh,046h,0feh,0d1h,0e0h,08bh
	db 0d8h,08bh,09fh,0b6h,043h,08ah,087h,0aah,000h,02ah,0e4h,08bh,0c8h,058h,08bh,0d9h
	db 0f7h,0ebh,0b9h,064h,000h,0bbh,000h,000h
	call $ldv
	db 050h,052h,08bh,046h,0feh,0d1h,0e0h,08bh,0d8h,003h,0ddh,08bh,047h,0e6h,099h,08bh
	db 0c8h,08bh,0dah,05ah,058h,003h,0c1h,013h,0d3h,08bh,04eh,0feh,0d1h,0e1h,08bh,0d9h
	db 003h,0ddh,089h,047h,0e6h
l58d7:
	db 08bh,046h,0feh,0d1h,0e0h,08bh,0d8h,08bh,09fh,0b6h,043h,080h,0bfh,0abh,000h,000h
	db 076h,04eh,08bh,0d8h,003h,0ddh,08bh,047h,0e6h,050h,08bh,046h,0feh,0d1h,0e0h,08bh
	db 0d8h,08bh,09fh,0b6h,043h,08ah,087h,0abh,000h,02ah,0e4h,08bh,0c8h,058h,08bh,0d9h
	db 0f7h,0ebh,0b9h,064h,000h,0bbh,000h,000h
	call $ldv
	db 050h,052h,08bh,046h,0feh,0d1h,0e0h,08bh,0d8h,003h,0ddh,08bh,047h,0e6h,099h,08bh
	db 0c8h,08bh,0dah,05ah,058h,003h,0c1h,013h,0d3h,08bh,04eh,0feh,0d1h,0e1h,08bh,0d9h
	db 003h,0ddh,089h,047h,0e6h
l5937:
	db 08bh,046h,0feh,0d1h,0e0h,08bh,0d8h,08bh,09fh,0a8h,043h,08ah,087h,09bh,001h,02ah
	db 0e4h,0b9h,03ah,001h,0f7h,0e9h,08bh,0d8h,080h,0bfh,013h,038h,000h,074h,00eh,08bh
	db 046h,0feh,0d1h,0e0h,08bh,0d8h,003h,0ddh,0c7h,047h,0e6h,000h,000h
l5964:
	db 0ffh,046h,0feh
l5967:
	db 08bh,046h,0feh,03bh,006h,060h,043h,07fh,003h,0e9h,0f8h,0fdh
l5973:
	db 0a1h,060h,043h,089h,046h,0feh,0e9h,069h,002h
l597c:
	db 08bh,046h,0feh,0d1h,0e0h,08bh,0d8h,003h,0ddh,0ffh,077h,0e6h
	call random_
	db 059h,050h,08bh,046h,0feh,0d1h,0e0h,08bh,0d8h,003h,0ddh,0ffh,077h,0e4h
	call random_
	db 059h,08bh,0c8h,058h,03bh,0c1h,07fh,003h,0e9h,03bh,002h
l59a7:
	db 0b8h,000h,000h,050h,0ffh,036h,0b6h,04fh
	call clear_window_
	db 083h,0c4h,004h
	call refresh_all_windows_
	db 0b8h,001h,000h,050h
	call wait_animating_view_
	db 059h,08bh,046h,0feh,0d1h,0e0h,08bh,0d8h,08bh,09fh,0a8h,043h,080h,0bfh,09dh,001h
	db 001h,075h,005h,0b8h,000h,000h,0ebh,003h
l59d7:
	db 0b8h,001h,000h
l59da:
	db 0b9h,004h,000h,0d3h,0e0h,08bh,0c8h,051h,08ah,087h,09ch,001h,02ah,0e4h,0b9h,005h
	db 000h,0d3h,0e0h,059h,003h,0c8h,08bh,046h,0feh,0d1h,0e0h,08bh,0d8h,08bh,087h,0b6h
	db 043h,003h,0c1h,050h,0b8h,014h,050h,050h
	call strcpy_
	db 083h,0c4h,004h,0b8h,064h,050h,050h,08bh,046h,0feh,0d1h,0e0h,08bh,0d8h,08bh,09fh
	db 0a8h,043h,080h,0bfh,09dh,001h,001h,075h,005h,0b8h,0b6h,00dh,0ebh,003h
l5a23:
	db 0b8h,0b7h,00dh
l5a26:
	db 050h
	call get_message_
	db 083h,0c4h,004h,0b8h,000h,000h,050h,0b8h,014h,050h,050h
	call strlen_
	db 059h,050h,0b8h,064h,050h,050h
	call strlen_
	db 059h,08bh,0c8h,058h,003h,0c1h,040h,0b9h,002h,000h,099h,0f7h,0f9h,08bh,0c8h,0b8h
	db 014h,000h,02bh,0c1h,050h,0ffh,036h,0b6h,04fh
	call set_cursor_
	db 083h,0c4h,006h,0b8h,006h,000h,050h,0b8h,014h,050h,050h,0ffh,036h,0b6h,04fh
	call print_string_
	db 083h,0c4h,006h,0b8h,00eh,000h,050h,0b8h,064h,050h,050h,0ffh,036h,0b6h,04fh
	call print_string_
	db 083h,0c4h,006h,0b8h,000h,000h,050h
	call play_sound_
	db 059h,0c7h,046h,0fch,000h,000h,0ebh,04fh
l5a93:
	db 0b8h,02ch,000h,0f7h,06eh,0fch,08bh,0f0h,08bh,046h,0feh,0d1h,0e0h,08bh,0d8h,08bh
	db 09fh,0a6h,043h,080h,078h,02ah,0ffh,074h,033h,08ah,040h,02ah,098h,0b9h,00ah,000h
	db 099h,0f7h,0f9h,089h,046h,0fah,08ah,040h,02ah,098h,099h,0f7h,0f9h,089h,056h,0f8h
	db 08bh,046h,0fah,08bh,0d0h,0d1h,0e0h,0d1h,0e0h,003h,0c2h,0d1h,0e0h,08bh,04eh,0f8h
	db 0d1h,0e1h,003h,0c1h,08bh,0d8h,0c7h,087h,0b4h,050h,001h,000h
l5adf:
	db 0ffh,046h,0fch
l5ae2:
	db 08bh,046h,0feh,0d1h,0e0h,08bh,0d8h,08bh,09fh,0a6h,043h,08ah,087h,09dh,001h,02ah
	db 0e4h,03bh,046h,0fch,07fh,09bh,0b8h,001h,000h,050h
	call show_encounter_view_
	db 059h,0c7h,046h,0fch,000h,000h,0ebh,05eh
l5b07:
	db 0b8h,02ch,000h,0f7h,06eh,0fch,08bh,0f0h,08bh,046h,0feh,0d1h,0e0h,08bh,0d8h,08bh
	db 09fh,0a6h,043h,080h,078h,02ah,0ffh,074h,042h,08ah,040h,02ah,098h,0b9h,00ah,000h
	db 099h,0f7h,0f9h,089h,046h,0fah,08ah,040h,02ah,098h,099h,0f7h,0f9h,089h,056h,0f8h
	db 08bh,046h,0fah,08bh,0d0h,0d1h,0e0h,0d1h,0e0h,003h,0c2h,0d1h,0e0h,08bh,04eh,0f8h
	db 0d1h,0e1h,003h,0c1h,08bh,0d8h,0c7h,087h,062h,043h,000h,000h,08bh,046h,0feh,0d1h
	db 0e0h,08bh,0d8h,08bh,09fh,0a6h,043h,0c6h,040h,02ah,0ffh
l5b62:
	db 0ffh,046h,0fch
l5b65:
	db 08bh,046h,0feh,0d1h,0e0h,08bh,0d8h,08bh,09fh,0a6h,043h,08ah,087h,09dh,001h,02ah
	db 0e4h,03bh,046h,0fch,07fh,08ch
	call redraw_view_background_
	db 08bh,046h,0feh,0d1h,0e0h,08bh,0d8h,003h,0ddh,08bh,047h,0e6h,089h,046h,0fah,08bh
	db 047h,0e4h,089h,047h,0e6h,08bh,046h,0fah,089h,047h,0e4h,0b8h,0a0h,001h,050h,08bh
	db 046h,0feh,0d1h,0e0h,08bh,0d8h,0ffh,0b7h,0a6h,043h,0ffh,0b7h,0a8h,043h
	call swapmem_
	db 083h,0c4h,006h,0b8h,0deh,000h,050h,08bh,046h,0feh,0d1h,0e0h,08bh,0d8h,0ffh,0b7h
	db 0b4h,043h,0ffh,0b7h,0b6h,043h
	call swapmem_
	db 083h,0c4h,006h
	call load_group_pics_
	db 08bh,046h,0feh,048h,050h
	call place_group_sprites_
	db 059h
	call arrange_monster_positions_
	db 0b8h,000h,000h,050h
	call show_encounter_view_
	db 059h
l5be2:
	db 0ffh,04eh,0feh
l5be5:
	db 083h,07eh,0feh,002h,07ch,003h,0e9h,08eh,0fdh
l5bee:
	db 05eh,08bh,0e5h,05dh,0c3h
#endasm
