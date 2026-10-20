#asm
	public input_number_
	extrn atol_:near
	extrn defer_window_draw_:near
	extrn fill_window_:near
	extrn input_line_:near
	extrn print_message_:near
	extrn print_string_:near
	extrn refresh_all_windows_:near
	extrn resume_window_draw_:near
	extrn set_cursor_:near
	extrn setmem_:near
input_number_:
	db 055h,08bh,0ech,083h,0c4h,0e8h,0b8h,000h,000h,050h,0b8h,003h,000h,050h,0b8h,020h
	db 000h,050h,0ffh,076h,004h
	call fill_window_
	db 083h,0c4h,008h,0ffh,076h,004h
	call defer_window_draw_
	db 059h,0b8h,001h,000h,050h,0b8h,002h,000h,050h,0ffh,076h,004h
	call set_cursor_
	db 083h,0c4h,006h,0b8h,012h,000h,050h,0ffh,076h,004h,0ffh,076h,006h
	call print_message_
	db 083h,0c4h,006h,08bh,05eh,004h,08ah,047h,006h,02ah,0e4h,089h,046h,0feh,08ah,047h
	db 007h,02ah,0e4h,089h,046h,0fch,0b8h,020h,000h,050h,08bh,046h,008h,040h,050h,08dh
	db 046h,0edh,050h
	call setmem_
	db 083h,0c4h,006h,08bh,05eh,008h,003h,0ddh,0c6h,047h,0eeh,000h,0b8h,001h,000h,050h
	db 08dh,046h,0edh,050h,0ffh,076h,004h
	call print_string_
	db 083h,0c4h,006h,0ffh,076h,004h
	call resume_window_draw_
	db 059h
	call refresh_all_windows_
	db 0ffh,076h,0fch,0ffh,076h,0feh,0ffh,076h,004h
	call set_cursor_
	db 083h,0c4h,006h,0b8h,001h,000h,050h,0b8h,005h,000h,050h,0ffh,076h,008h,08dh,046h
	db 0edh,050h,0ffh,076h,004h
	call input_line_
	db 083h,0c4h,00ah,0c7h,046h,0ebh,000h,000h,0c7h,046h,0e9h,000h,000h,080h,07eh,0edh
	db 000h,074h,00eh,08dh,046h,0edh,050h
	call atol_
	db 059h,089h,056h,0ebh,089h,046h,0e9h
l9698:
	db 08bh,046h,0e9h,08bh,056h,0ebh,08bh,0e5h,05dh,0c3h
#endasm
