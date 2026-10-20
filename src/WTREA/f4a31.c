#asm
	public print_text_line_
	extrn char_index_:near
	extrn clear_window_:near
	extrn end_text_page_:near
	extrn print_string_:near
	extrn set_cursor_:near
	extrn strlen_:near
	extrn wait_animating_:near
print_text_line_:
	db 055h,08bh,0ech,083h,0c4h,0fch
l4a37:
	db 08bh,05eh,004h,08ah,007h,02ah,0e4h,050h,0b8h,0eeh,04fh,050h
	call char_index_
	db 083h,0c4h,004h,089h,046h,0fch,03dh,000h,000h,07ch,066h,0ebh,055h,0ffh,046h,004h
	db 0ffh,006h,030h,050h,0ebh,059h,0ffh,046h,004h,0ffh,036h,0cah,04fh
	call wait_animating_
	db 059h,0ebh,04ch,0ffh,046h,004h,0ffh,046h,004h,0ebh,044h,0ffh,046h,004h,0ebh,03fh
	db 0ffh,046h,004h,0b8h,001h,000h,050h,0ffh,036h,02eh,050h
	call clear_window_
	db 083h,0c4h,004h,0c7h,006h,030h,050h,000h,000h,0ebh,026h,0ffh,046h,004h,0b8h,000h
	db 000h,050h
	call end_text_page_
	db 059h,0ebh,019h,053h,04ah,05ch,04ah,069h,04ah,071h,04ah,076h,04ah,08fh,04ah
l4aa8:
	db 03dh,006h,000h,073h,008h,093h,0d1h,0e3h,02eh,0ffh,0a7h,09ch,04ah
l4ab5:
	db 0ebh,080h
l4ab7:
	db 083h,03eh,030h,050h,004h,07eh,008h,0b8h,000h,000h,050h
	call end_text_page_
	db 059h
l4ac6:
	db 0ffh,076h,004h
	call strlen_
	db 059h,040h,0b9h,002h,000h,099h,0f7h,0f9h,08bh,0c8h,0b8h,014h,000h,02bh,0c1h,089h
	db 046h,0feh,08bh,05eh,004h,08ah,007h,02ah,0e4h,0ebh,015h
l4ae7:
	db 0ffh,046h,004h,0c7h,046h,0feh,000h,000h,0ebh,015h
l4af1:
	db 0ffh,046h,004h,0a1h,032h,050h,089h,046h,0feh,0ebh,00ah
l4afc:
	db 03dh,024h,000h,074h,0e6h,03dh,05eh,000h,074h,0ebh
l4b06:
	db 0ffh,036h,030h,050h,0ffh,076h,0feh,0ffh,036h,02eh,050h
	call set_cursor_
	db 083h,0c4h,006h,08bh,046h,0feh,0a3h,032h,050h,0ffh,006h,030h,050h,0ffh,036h,002h
	db 000h,0ffh,076h,004h,0ffh,036h,02eh,050h
	call print_string_
	db 083h,0c4h,006h,08bh,0e5h,05dh,0c3h
#endasm
