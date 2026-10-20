/* Show consecutive message lines starting at p6 in a text window, paging on '@'. */
#asm
	public show_text_pages_
	extrn create_window_:near
	extrn destroy_window_:near
	extrn draw_text_frame_:near
	extrn get_message_:near
	extrn print_string_:near
	extrn set_cursor_:near
	extrn strlen_:near
	extrn wait_key_or_click_:near
show_text_pages_:
	db 055h,08bh,0ech,083h,0c4h,0f6h,0b8h,000h,000h,050h,050h,0b8h,0ffh,0ffh,050h,0b8h
	db 01fh,000h,050h,0b8h,010h,000h,050h,0b8h,028h,000h,050h,0b8h,004h,000h,050h,0b8h
	db 000h,000h,050h
	call create_window_
	db 083h,0c4h,010h,089h,046h,0f8h,050h
	call draw_text_frame_
	db 059h,0c7h,046h,0feh,001h,000h,0c7h,046h,0fch,001h,000h,0c7h,046h,0fah,001h,000h
l8ee4:
	db 0b8h,08eh,055h,050h,0ffh,076h,006h
	call get_message_
	db 083h,0c4h,004h,083h,03eh,042h,030h,000h,074h,003h,0e9h,0a2h,000h
l8efb:
	db 0c7h,046h,0f6h,08eh,055h,08bh,05eh,0f6h,080h,03fh,021h,075h,006h,0ffh,046h,0f6h
	db 0ffh,046h,0feh
l8f0e:
	db 08bh,05eh,0f6h,080h,03fh,040h,075h,008h,0ffh,046h,0f6h,0c7h,046h,0feh,00dh,000h
l8f1e:
	db 083h,07eh,0feh,00dh,075h,013h,0ffh,076h,004h
	call wait_key_or_click_
	db 059h,0ffh,076h,0f8h
	call draw_text_frame_
	db 059h,0c7h,046h,0feh,001h,000h
l8f37:
	db 0ffh,046h,0feh,0ffh,076h,0f6h
	call strlen_
	db 059h,040h,0b9h,002h,000h,099h,0f7h,0f9h,08bh,0c8h,0b8h,014h,000h,02bh,0c1h,089h
	db 046h,0fch,08bh,05eh,0f6h,080h,03fh,024h,075h,00ah,0ffh,046h,0f6h,0c7h,046h,0fch
	db 001h,000h,0ebh,011h
l8f64:
	db 08bh,05eh,0f6h,080h,03fh,05eh,075h,009h,0ffh,046h,0f6h,08bh,046h,0fah,089h,046h
	db 0fch
l8f75:
	db 0ffh,076h,0feh,0ffh,076h,0fch,0ffh,076h,0f8h
	call set_cursor_
	db 083h,0c4h,006h,0ffh,036h,002h,000h,0ffh,076h,0f6h,0ffh,076h,0f8h
	call print_string_
	db 083h,0c4h,006h,08bh,046h,0fch,089h,046h,0fah,0ffh,046h,006h
l8f9d:
	db 083h,03eh,042h,030h,000h,075h,003h,0e9h,03dh,0ffh
l8fa7:
	db 0ffh,076h,004h
	call wait_key_or_click_
	db 059h,0b8h,000h,000h,050h,0ffh,076h,0f8h
	call destroy_window_
	db 083h,0c4h,004h,08bh,0e5h,05dh,0c3h
#endasm
