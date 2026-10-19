#asm
	public show_message_text_
	extrn create_window_:near
	extrn destroy_window_:near
	extrn end_text_page_:near
	extrn get_message_:near
	extrn print_text_line_:near
show_message_text_:
	db 055h,08bh,0ech,083h,0c4h,0b0h,0c7h,006h,032h,050h,000h,000h,0c7h,006h,030h,050h
	db 000h,000h,0b8h,001h,000h,050h,0b8h,000h,000h,050h,0b8h,0ffh,0ffh,050h,0b8h,014h
	db 000h,050h,0b8h,005h,000h,050h,0b8h,028h,000h,050h,0b8h,013h,000h,050h,0b8h,000h
	db 000h,050h
	call create_window_
	db 083h,0c4h,010h,0a3h,02eh,050h
l4b71:
	db 08dh,046h,0b0h,050h,0ffh,076h,004h
	call get_message_
	db 083h,0c4h,004h,083h,03eh,042h,030h,000h,075h,010h,0ffh,076h,006h,08dh,046h,0b0h
	db 050h
	call print_text_line_
	db 083h,0c4h,004h,0ffh,046h,004h
l4b95:
	db 083h,03eh,042h,030h,000h,074h,0d5h,0ffh,076h,006h
	call end_text_page_
	db 059h,0b8h,000h,000h,050h,0ffh,036h,02eh,050h
	call destroy_window_
	db 083h,0c4h,004h,08bh,0e5h,05dh,0c3h
#endasm
