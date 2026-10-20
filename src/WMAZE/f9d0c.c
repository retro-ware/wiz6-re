#asm
	public print_text_line_m_
	extrn char_index_:near
	extrn clear_window_:near
	extrn end_text_page_m_:near
	extrn load_sound_bank_:near
	extrn play_sound_:near
	extrn print_string_:near
	extrn set_cursor_:near
	extrn strlen_:near
	extrn wait_animating_m_:near
print_text_line_m_:
	db 055h,08bh,0ech,083h,0c4h,0fch
l9d12:
	db 08bh,05eh,004h,08ah,007h,02ah,0e4h,050h,0b8h,008h,050h,050h
	call char_index_
	db 083h,0c4h,004h,089h,046h,0fch,03dh,000h,000h,07dh,003h,0e9h,0a3h,000h
l9d2f:
	db 0e9h,090h,000h,0ffh,046h,004h,0ffh,006h,02ch,052h,0e9h,093h,000h,0ffh,046h,004h
	db 0ffh,036h,0cah,04fh
	call wait_animating_m_
	db 059h,0e9h,085h,000h,0ffh,046h,004h,0ffh,046h,004h,0e9h,07ch,000h,0ffh,046h,004h
	db 0e9h,076h,000h,0ffh,046h,004h,0b8h,001h,000h,050h,0ffh,036h,02ah,052h
	call clear_window_
	db 083h,0c4h,004h,0c7h,006h,02ch,052h,000h,000h,0ebh,05dh,0ffh,046h,004h,0b8h,000h
	db 000h,050h
	call end_text_page_m_
	db 059h,0ebh,050h,0ffh,046h,004h,08bh,05eh,004h,080h,03fh,00eh,072h,019h,08ah,007h
	db 02ah,0e4h,03bh,006h,036h,043h,074h,005h,050h
	call load_sound_bank_
	db 059h
l9d99:
	db 0b8h,00eh,000h,050h
	call play_sound_
	db 059h,0ebh,00ch
l9da3:
	db 08bh,05eh,004h,08ah,007h,02ah,0e4h,050h
	call play_sound_
	db 059h
l9daf:
	db 0ffh,046h,004h,0ebh,01bh,032h,09dh,03ch,09dh,04ah,09dh,053h,09dh,059h,09dh,072h
	db 09dh,07fh,09dh
l9dc2:
	db 03dh,007h,000h,073h,008h,093h,0d1h,0e3h,02eh,0ffh,0a7h,0b4h,09dh
l9dcf:
	db 0e9h,040h,0ffh
l9dd2:
	db 083h,03eh,02ch,052h,004h,07eh,008h,0b8h,000h,000h,050h
	call end_text_page_m_
	db 059h
l9de1:
	db 0ffh,076h,004h
	call strlen_
	db 059h,040h,0b9h,002h,000h,099h,0f7h,0f9h,08bh,0c8h,0b8h,014h,000h,02bh,0c1h,089h
	db 046h,0feh,08bh,05eh,004h,08ah,007h,02ah,0e4h,0ebh,015h
l9e02:
	db 0ffh,046h,004h,0c7h,046h,0feh,000h,000h,0ebh,015h
l9e0c:
	db 0ffh,046h,004h,0a1h,02eh,052h,089h,046h,0feh,0ebh,00ah
l9e17:
	db 03dh,024h,000h,074h,0e6h,03dh,05eh,000h,074h,0ebh
l9e21:
	db 0ffh,036h,02ch,052h,0ffh,076h,0feh,0ffh,036h,02ah,052h
	call set_cursor_
	db 083h,0c4h,006h,08bh,046h,0feh,0a3h,02eh,052h,0ffh,006h,02ch,052h,0ffh,036h,002h
	db 000h,0ffh,076h,004h,0ffh,036h,02ah,052h
	call print_string_
	db 083h,0c4h,006h,08bh,0e5h,05dh,0c3h
#endasm
