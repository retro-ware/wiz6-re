#asm
	public show_message_text_m_
	extrn create_window_:near
	extrn defer_window_draw_:near
	extrn destroy_window_:near
	extrn end_text_page_m_:near
	extrn get_message_:near
	extrn print_text_line_m_:near
	extrn resume_window_draw_:near
show_message_text_m_:
	db 055h,08bh,0ech,083h,0c4h,0b0h,0c7h,006h,02eh,052h,000h,000h,0c7h,006h,02ch,052h
	db 000h,000h,0c7h,006h,030h,052h,001h,000h,0ffh,036h,042h,033h
	call defer_window_draw_
	db 059h,0ffh,036h,0b2h,04fh
	call defer_window_draw_
	db 059h,0b8h,001h,000h,050h,0b8h,000h,000h,050h,0b8h,0ffh,0ffh,050h,0b8h,014h,000h
	db 050h,0b8h,005h,000h,050h,0b8h,028h,000h,050h,0b8h,013h,000h,050h,0b8h,000h,000h
	db 050h
	call create_window_
	db 083h,0c4h,010h,0a3h,02ah,052h
l9ea2:
	db 08dh,046h,0b0h,050h,0ffh,076h,004h
	call get_message_
	db 083h,0c4h,004h,083h,03eh,042h,030h,000h,075h,010h,0ffh,076h,006h,08dh,046h,0b0h
	db 050h
	call print_text_line_m_
	db 083h,0c4h,004h,0ffh,046h,004h
l9ec6:
	db 083h,03eh,042h,030h,000h,074h,0d5h,0ffh,076h,006h
	call end_text_page_m_
	db 059h,0b8h,000h,000h,050h,0ffh,036h,02ah,052h
	call destroy_window_
	db 083h,0c4h,004h,0ffh,036h,042h,033h
	call resume_window_draw_
	db 059h,0ffh,036h,0b2h,04fh
	call resume_window_draw_
	db 059h,08bh,0e5h,05dh,0c3h
#endasm
