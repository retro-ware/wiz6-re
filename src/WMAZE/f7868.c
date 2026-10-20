/* Make the party flee a number of steps away (game state 23). */
#asm
	public flee_party_
	extrn erase_window_:near
	extrn f7bd2_:near
	extrn random_:near
	extrn redraw_maze_view_:near
	extrn save_position_:near
	extrn set_bit_:near
	extrn setmem_:near
	extrn show_fleeing_msg_:near
	extrn show_prev_position_:near
	extrn tick_effect_timers_:near
	extrn try_step_:near
	extrn wait_animating_m_:near
flee_party_:
	db 055h,08bh,0ech,083h,0c4h,096h,0b8h,000h,000h,050h,0b8h,060h,000h,050h,08dh,046h
	db 096h,050h
	call setmem_
	db 083h,0c4h,006h,0c7h,006h,0ceh,04fh,017h,000h,0c7h,006h,03ah,036h,005h,000h,0b8h
	db 000h,000h,050h,0ffh,036h,042h,033h
	call erase_window_
	db 083h,0c4h,004h,0c7h,046h,0fah,000h,000h,0b8h,001h,000h,050h,0a1h,09ch,04fh,0b9h
	db 006h,000h,0d3h,0e0h,08bh,00eh,09eh,04fh,0d1h,0e1h,0d1h,0e1h,0d1h,0e1h,003h,0c1h
	db 003h,006h,0a0h,04fh,050h,08dh,046h,096h,050h
	call set_bit_
	db 083h,0c4h,006h,0a1h,09ah,04fh,089h,046h,0feh,0a1h,03ch,036h,03bh,006h,098h,04fh
	db 075h,00eh,0a1h,08ch,04fh,040h,040h,0b9h,004h,000h,099h,0f7h,0f9h,089h,056h,0feh
l78e3:
	db 0a1h,09ah,04fh,040h,040h,040h,0b9h,004h,000h,099h,0f7h,0f9h,08bh,0c2h,03bh,046h
	db 0feh,075h,005h,0b8h,003h,000h,0ebh,003h
l78fb:
	db 0b8h,001h,000h
l78fe:
	db 089h,046h,0fch
l7901:
	db 0a1h,09ah,04fh,03bh,046h,0feh,074h,026h,003h,046h,0fch,0b9h,004h,000h,099h,0f7h
	db 0f9h,089h,016h,09ah,04fh
	call redraw_maze_view_
	db 083h,07eh,0fah,000h,075h,006h
	call show_fleeing_msg_
	db 089h,046h,0fah
l7925:
	db 0b8h,002h,000h,050h
	call wait_animating_m_
	db 059h,0ebh,0d2h
l792f:
	db 0c7h,046h,0f8h,0ffh,0ffh
l7934:
	db 0c7h,046h,0f6h,000h,000h
	call save_position_
	db 083h,07eh,0f8h,0ffh,075h,003h,0e9h,075h,000h
l7945:
	db 0b8h,004h,000h,050h
	call random_
	db 059h,085h,0c0h,075h,069h,0a1h,09ah,04fh,003h,046h,0f8h,0b9h,004h,000h,099h,0f7h
	db 0f9h,089h,016h,09ah,04fh,08dh,046h,096h,050h
	call try_step_
	db 059h,085h,0c0h,075h,016h,083h,07eh,0fah,000h,075h,006h
	call show_fleeing_msg_
	db 089h,046h,0fah
l7979:
	call show_prev_position_
	db 0c7h,046h,0f6h,001h,000h,0ebh,037h
l7983:
	db 0a1h,09ah,04fh,040h,040h,0b9h,004h,000h,099h,0f7h,0f9h,089h,016h,09ah,04fh,08dh
	db 046h,096h,050h
	call try_step_
	db 059h,085h,0c0h,075h,016h,083h,07eh,0fah,000h,075h,006h
	call show_fleeing_msg_
	db 089h,046h,0fah
l79aa:
	call show_prev_position_
	db 0c7h,046h,0f6h,001h,000h,0ebh,006h
l79b4:
	db 0a1h,08ch,04fh,0a3h,09ah,04fh
l79ba:
	db 083h,07eh,0f6h,000h,074h,003h,0e9h,078h,000h
l79c3:
	db 08dh,046h,096h,050h
	call try_step_
	db 059h,03dh,001h,000h,075h,06bh,0b8h,002h,000h,050h
	call random_
	db 059h,085h,0c0h,075h,005h,0b8h,001h,000h,0ebh,003h
l79e1:
	db 0b8h,003h,000h
l79e4:
	db 003h,006h,09ah,04fh,0b9h,004h,000h,099h,0f7h,0f9h,089h,016h,09ah,04fh,08dh,046h
	db 096h,050h
	call try_step_
	db 059h,085h,0c0h,075h,005h
	call show_prev_position_
	db 0ebh,038h
l7a03:
	db 0a1h,09ah,04fh,040h,040h,0b9h,004h,000h,099h,0f7h,0f9h,089h,016h,09ah,04fh,08dh
	db 046h,096h,050h
	call try_step_
	db 059h,085h,0c0h,075h,005h
	call show_prev_position_
	db 0ebh,018h
l7a23:
	db 0a1h,08ch,04fh,0a3h,09ah,04fh,0b8h,001h,000h,050h,0ffh,036h,042h,033h
	call erase_window_
	db 083h,0c4h,004h
l7a37:
	db 08bh,0e5h,05dh,0c3h
l7a3b:
	db 0b8h,001h,000h,050h,0a1h,09ch,04fh,0b9h,006h,000h,0d3h,0e0h,08bh,00eh,09eh,04fh
	db 0d1h,0e1h,0d1h,0e1h,0d1h,0e1h,003h,0c1h,003h,006h,0a0h,04fh,050h,08dh,046h,096h
	db 050h
	call set_bit_
	db 083h,0c4h,006h
	call redraw_maze_view_
	db 083h,07eh,0fah,000h,075h,006h
	call show_fleeing_msg_
	db 089h,046h,0fah
l7a71:
	db 0b8h,002h,000h,050h
	call wait_animating_m_
	db 059h,0b8h,002h,000h,050h
	call random_
	db 059h,085h,0c0h,074h,005h,0b8h,001h,000h,0ebh,003h
l7a8a:
	db 0b8h,003h,000h
l7a8d:
	db 089h,046h,0f8h,0ffh,04eh,004h,083h,07eh,004h,000h,07eh,01eh,0ffh,036h,0e8h,04eh
	db 0ffh,036h,09ch,04fh,0ffh,036h,09eh,04fh,0ffh,036h,0a0h,04fh
	call f7bd2_
	db 083h,0c4h,008h,03dh,0ffh,0ffh,075h,003h,0e9h,07dh,0feh
l7ab7:
	db 0b8h,002h,000h,050h
	call tick_effect_timers_
	db 059h,0a1h,0cah,04fh,0b9h,004h,000h,099h,0f7h,0f9h,050h
	call wait_animating_m_
	db 059h,0b8h,001h,000h,050h,0ffh,036h,042h,033h
	call erase_window_
	db 083h,0c4h,004h,0e9h,059h,0ffh
#endasm
