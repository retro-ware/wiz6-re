#asm
	public f541a_
	extrn defer_window_draw_:near
	extrn erase_window_:near
	extrn f0a42_:near
	extrn f53e5_:near
	extrn print_string_hi_:near
	extrn resume_window_draw_:near
	extrn set_cursor_:near
	extrn strlen_:near
f541a_:
	db 055h,08bh,0ech,0b8h,000h,000h,050h,0ffh,036h,042h,033h
	call erase_window_
	db 083h,0c4h,004h,0b8h,000h,000h,050h,0ffh,036h,042h,033h
	call f0a42_
	db 083h,0c4h,004h
	call f53e5_
	db 0ffh,036h,042h,033h
	call defer_window_draw_
	db 059h,0b8h,000h,000h,050h,0ffh,076h,004h
	call strlen_
	db 059h,003h,046h,006h,040h,0b9h,002h,000h,099h,0f7h,0f9h,08bh,0c8h,0b8h,00ah,000h
	db 02bh,0c1h,050h,0ffh,036h,042h,033h
	call set_cursor_
	db 083h,0c4h,006h,0b8h,003h,000h,050h,0ffh,076h,004h,0ffh,036h,042h,033h
	call print_string_hi_
	db 083h,0c4h,006h,0ffh,036h,042h,033h
	call resume_window_draw_
	db 059h,08bh,0e5h,05dh,0c3h
#endasm
