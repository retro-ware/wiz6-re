#asm
	public print_status_centered_
	extrn clear_status_line_:near
	extrn get_message_:near
	extrn print_string_hi_:near
	extrn set_cursor_:near
	extrn strlen_:near
print_status_centered_:
	db 055h,08bh,0ech,083h,0c4h,0d8h
	call clear_status_line_
	db 08dh,046h,0d8h,050h,0ffh,076h,004h
	call get_message_
	db 083h,0c4h,004h,0b8h,005h,000h,050h,08dh,046h,0d8h,050h
	call strlen_
	db 059h,040h,0b9h,002h,000h,099h,0f7h,0f9h,08bh,0c8h,0b8h,01eh,000h,02bh,0c1h,050h
	db 0ffh,036h,06eh,054h
	call set_cursor_
	db 083h,0c4h,006h,0b8h,003h,000h,050h,08dh,046h,0d8h,050h,0ffh,036h,06eh,054h
	call print_string_hi_
	db 083h,0c4h,006h,08bh,0e5h,05dh,0c3h
#endasm
