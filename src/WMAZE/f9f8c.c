#asm
	public f9f8c_
	extrn erase_window_:near
	extrn extract_bits_:near
	extrn f9f54_:near
	extrn kill_party_:near
	extrn move_to_maze_cell_m_:near
	extrn random_:near
	extrn redraw_maze_view_:near
	extrn show_maze_message_:near
	extrn step_position_:near
	extrn wait_animating_m_:near
f9f8c_:
	db 055h,08bh,0ech,083h,0c4h,0e2h,056h,0a1h,0e8h,04eh,0d1h,0e0h,08bh,0f0h,08bh,01eh
	db 0a8h,04fh,083h,038h,000h,07eh,01ch,0ffh,030h
	call show_maze_message_
	db 059h,0ffh,036h,0cah,04fh
	call wait_animating_m_
	db 059h,0b8h,001h,000h,050h,0ffh,036h,042h,033h
	call erase_window_
	db 083h,0c4h,004h
l9fbf:
	db 0a1h,0e8h,04eh,0d1h,0e0h,08bh,0f0h,08bh,01eh,0a8h,04fh,08bh,080h,020h,001h,089h
	db 046h,0e2h,08bh,080h,040h,002h,089h,046h,0f2h,0c7h,046h,0feh,000h,000h
l9fdd:
	db 0b8h,001h,000h,050h,08bh,046h,0feh,005h,008h,000h,050h,0ffh,076h,0f2h
	call extract_bits_
	db 083h,0c4h,006h,08bh,04eh,0feh,0d1h,0e1h,08bh,0d9h,003h,0ddh,089h,047h,0f4h,0ffh
	db 046h,0feh,08bh,046h,0feh,03dh,004h,000h,07ch,0d5h,0b8h,008h,000h,050h,0b8h,000h
	db 000h,050h,0ffh,076h,0f2h
	call extract_bits_
	db 083h,0c4h,006h,089h,046h,0f0h,08bh,01eh,0a8h,04fh,08bh,036h,0e8h,04eh,08ah,080h
	db 030h,006h,02ah,0e4h,089h,046h,0eeh,0b8h,001h,000h,050h,0b8h,00ch,000h,050h,0ffh
	db 076h,0f2h
	call extract_bits_
	db 083h,0c4h,006h,089h,046h,0e8h,0b8h,001h,000h,050h,0b8h,00dh,000h,050h,0ffh,076h
	db 0f2h
	call extract_bits_
	db 083h,0c4h,006h,03dh,001h,000h,075h,005h,0b8h,001h,000h,0ebh,003h
la05c:
	db 0b8h,0ffh,0ffh
la05f:
	db 089h,046h,0e6h,0b8h,001h,000h,050h,0b8h,00eh,000h,050h,0ffh,076h,0f2h
	call extract_bits_
	db 083h,0c4h,006h,089h,046h,0e4h,0c7h,046h,0feh,000h,000h,0e9h,02ah,001h
la07e:
	db 08dh,046h,0f4h,050h
	call f9f54_
	db 059h,089h,046h,0eah,083h,07eh,0e8h,001h,075h,068h,03bh,006h,09ah,04fh,074h,062h
	db 083h,07eh,0e6h,001h,075h,012h,02bh,006h,09ah,04fh,005h,004h,000h,0b9h,004h,000h
	db 099h,0f7h,0f9h,089h,056h,0ech,0ebh,012h
la0ad:
	db 0a1h,09ah,04fh,02bh,046h,0eah,005h,004h,000h,0b9h,004h,000h,099h,0f7h,0f9h,089h
	db 056h,0ech
la0bf:
	db 083h,07eh,0eeh,000h,075h,003h,0ffh,04eh,0ech
la0c8:
	db 0c7h,046h,0fch,000h,000h,0ebh,020h
la0cf:
	db 0ffh,076h,0e2h
	call wait_animating_m_
	db 059h,0a1h,09ah,04fh,003h,046h,0e6h,005h,004h,000h,0b9h,004h,000h,099h,0f7h,0f9h
	db 089h,016h,09ah,04fh
	call redraw_maze_view_
	db 0ffh,046h,0fch
la0ef:
	db 08bh,046h,0fch,03bh,046h,0ech,07ch,0d8h
la0f7:
	db 0ffh,076h,0e2h
	call wait_animating_m_
	db 059h,08bh,046h,0eah,0a3h,09ah,04fh,083h,07eh,0eeh,000h,07fh,003h,0e9h,095h,000h
la10d:
	db 0a1h,0a4h,04fh,0a3h,096h,04fh,0a1h,0a2h,04fh,0a3h,094h,04fh,0a1h,0a0h,04fh,0a3h
	db 092h,04fh,0a1h,09eh,04fh,0a3h,090h,04fh,0a1h,09ch,04fh,0a3h,08eh,04fh,0a1h,09ah
	db 04fh,0a3h,08ch,04fh,083h,07eh,0e4h,001h,075h,015h,0ffh,076h,0eeh
	call random_
	db 059h,040h,050h,0ffh,036h,09ah,04fh
	call step_position_
	db 083h,0c4h,004h,0ebh,00dh
la14c:
	db 0ffh,076h,0eeh,0ffh,036h,09ah,04fh
	call step_position_
	db 083h,0c4h,004h
la159:
	db 0ffh,036h,0a2h,04fh,0ffh,036h,0a4h,04fh,0b8h,09ch,04fh,050h,0b8h,09eh,04fh,050h
	db 0b8h,0a0h,04fh,050h
	call move_to_maze_cell_m_
	db 083h,0c4h,00ah,03dh,001h,000h,075h,013h,0b8h,004h,000h,050h,0b8h,0e6h,007h,050h
	call kill_party_
	db 083h,0c4h,004h
la186:
	db 05eh,08bh,0e5h,05dh,0c3h
la18b:
	db 08bh,01eh,0a8h,04fh,08bh,036h,09ch,04fh,08ah,080h,0c0h,006h,02ah,0e4h,0a3h,0e8h
	db 04eh,0c7h,006h,032h,052h,000h,000h
la1a2:
	call redraw_maze_view_
	db 0ffh,046h,0feh
la1a8:
	db 08bh,046h,0feh,03bh,046h,0f0h,07dh,003h,0e9h,0cbh,0feh
la1b3:
	db 0ffh,076h,0e2h
	call wait_animating_m_
	db 059h,0ebh,0cah
#endasm
