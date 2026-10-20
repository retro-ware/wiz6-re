/* Move the party one step, handling bumps into walls and doors. */
#asm
	public move_party_
	extrn f567c_:near
	extrn get_wall_in_direction_:near
	extrn play_sound_:near
	extrn redraw_maze_view_:near
	extrn try_move_:near
	extrn wait_seconds_or_enter_:near
move_party_:
	db 055h,08bh,0ech,083h,0c4h,0fch,0c7h,006h,03ah,050h,0e4h,007h,0a1h,09ah,04fh,003h
	db 046h,004h,005h,004h,000h,0b9h,004h,000h,099h,0f7h,0f9h,089h,056h,0fch,0ffh,036h
	db 0a2h,04fh,0ffh,036h,0a4h,04fh,0ffh,036h,09eh,04fh,0ffh,036h,0a0h,04fh,0ffh,036h
	db 09ch,04fh,052h
	call get_wall_in_direction_
	db 083h,0c4h,00ch,089h,046h,0feh,08bh,046h,0fch,0d1h,0e0h,08bh,0d8h,08bh,087h,0e0h
	db 04eh,0e9h,0f0h,000h
l5993:
	db 083h,07eh,0feh,002h,07dh,011h,0ffh,076h,0fch
	call try_move_
	db 059h,085h,0c0h,074h,004h
l59a4:
	db 08bh,0e5h,05dh,0c3h
l59a8:
	db 0ebh,054h
l59aa:
	db 083h,07eh,0feh,003h,075h,04eh,08bh,046h,0fch,03bh,006h,09ah,04fh,075h,045h,0b8h
	db 004h,000h,050h
	call play_sound_
	db 059h,0c7h,006h,03eh,036h,001h,000h
	call redraw_maze_view_
	db 0b8h,00dh,000h,050h
	call play_sound_
	db 059h,0b8h,002h,000h,050h
	call wait_seconds_or_enter_
	db 059h,0c7h,006h,03eh,036h,002h,000h
	call redraw_maze_view_
	db 0b8h,002h,000h,050h
	call wait_seconds_or_enter_
	db 059h,0c7h,006h,03eh,036h,000h,000h,0ffh,076h,0fch
	call try_move_
	db 059h,085h,0c0h,074h,002h,0ebh,0a6h
l59fe:
	db 083h,03eh,034h,050h,000h,075h,01dh,0b8h,002h,000h,050h,0b8h,000h,000h,081h,03eh
	db 03ah,050h,0e4h,007h,075h,003h,0b8h,002h,000h
l5a17:
	db 050h,0ffh,036h,03ah,050h
	call f567c_
	db 083h,0c4h,006h
l5a22:
	db 0e9h,075h,000h
l5a25:
	db 083h,07eh,0feh,003h,075h,020h,08bh,046h,0fch,03bh,006h,09ah,04fh,075h,017h,0a1h
	db 0cah,04fh,0b9h,002h,000h,099h,0f7h,0f9h,050h,051h,0b8h,0e5h,007h,050h
	call f567c_
	db 083h,0c4h,006h,0ebh,00fh
l5a4b:
	db 0b8h,002h,000h,050h,050h,0ffh,036h,03ah,050h
	call f567c_
	db 083h,0c4h,006h
l5a5a:
	db 0ebh,03eh
l5a5c:
	db 083h,07eh,0feh,002h,075h,010h,0ffh,076h,0fch
	call try_move_
	db 059h,085h,0c0h,074h,003h,0e9h,034h,0ffh
l5a70:
	db 0ebh,00fh
l5a72:
	db 0b8h,002h,000h,050h,050h,0ffh,036h,03ah,050h
	call f567c_
	db 083h,0c4h,006h
l5a81:
	db 0ebh,017h
l5a83:
	db 03dh,000h,000h,075h,003h,0e9h,008h,0ffh
l5a8b:
	db 03dh,001h,000h,074h,095h,03dh,002h,000h,074h,090h,03dh,003h,000h,074h,0c2h
l5a9a:
	db 0e9h,007h,0ffh
#endasm
