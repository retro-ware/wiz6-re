#asm
	public show_centered_line_
	extrn clear_window_area_:near
	extrn play_sound_:near
	extrn print_string_:near
	extrn set_cursor_:near
	extrn strlen_:near
	extrn wait_animating_:near
show_centered_line_:
	db 055h,08bh,0ech,0ffh,076h,006h,0b8h,027h,000h,050h,0ffh,076h,006h,0b8h,000h,000h
	db 050h,0ffh,076h,004h
	call clear_window_area_
	db 083h,0c4h,00ah,0b8h,001h,000h,050h
	call wait_animating_
	db 059h,0ffh,076h,006h,0ffh,076h,008h
	call strlen_
	db 059h,040h,0b9h,002h,000h,099h,0f7h,0f9h,08bh,0c8h,0b8h,014h,000h,02bh,0c1h,050h
	db 0ffh,076h,004h
	call set_cursor_
	db 083h,0c4h,006h,0ffh,076h,00ch,0ffh,076h,008h,0ffh,076h,004h
	call print_string_
	db 083h,0c4h,006h,083h,07eh,00ah,000h,074h,008h,0b8h,000h,000h,050h
	call play_sound_
	db 059h
l5a4a:
	db 0ffh,036h,0cah,04fh
	call wait_animating_
	db 059h,08bh,0e5h,05dh,0c3h
#endasm
