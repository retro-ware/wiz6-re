#asm
	public show_centered_msg_
	extrn fill_window_:near
	extrn play_sound_:near
	extrn print_string_hi_:near
	extrn refresh_window_:near
	extrn set_cursor_:near
	extrn strlen_:near
	extrn wait_seconds_or_enter_:near
show_centered_msg_:
	db 055h,08bh,0ech,0b8h,000h,000h,050h,0b8h,003h,000h,050h,0b8h,020h,000h,050h,0ffh
	db 076h,004h
	call fill_window_
	db 083h,0c4h,008h,0ffh,076h,004h
	call refresh_window_
	db 059h,0b8h,001h,000h,050h,0ffh,076h,006h
	call strlen_
	db 059h,040h,0b9h,002h,000h,099h,0f7h,0f9h,08bh,0c8h,0b8h,014h,000h,02bh,0c1h,050h
	db 0ffh,076h,004h
	call set_cursor_
	db 083h,0c4h,006h,0b8h,003h,000h,050h,0ffh,076h,006h,0ffh,076h,004h
	call print_string_hi_
	db 083h,0c4h,006h,083h,07eh,008h,000h,07eh,008h,0b8h,000h,000h,050h
	call play_sound_
	db 059h
le916:
	db 0ffh,036h,0cah,04fh
	call wait_seconds_or_enter_
	db 059h,08bh,0e5h,05dh,0c3h
#endasm
