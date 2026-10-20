#asm
	public print_member_message_
	extrn clear_window_:near
	extrn print_string_:near
	extrn set_cursor_:near
	extrn strlen_:near
print_member_message_:
	db 055h,08bh,0ech,083h,0c4h,0feh,0b8h,001h,000h,050h,0ffh,036h,0b6h,04fh
	call clear_window_
	db 083h,0c4h,004h,08bh,05eh,006h,080h,03fh,000h,074h,005h,0b8h,001h,000h,0ebh,003h
l5b17:
	db 0b8h,000h,000h
l5b1a:
	db 08bh,05eh,008h,080h,03fh,000h,074h,005h,0b9h,001h,000h,0ebh,003h
l5b27:
	db 0b9h,000h,000h
l5b2a:
	db 003h,0c1h,08bh,05eh,00ah,080h,03fh,000h,074h,005h,0b9h,001h,000h,0ebh,003h
l5b39:
	db 0b9h,000h,000h
l5b3c:
	db 003h,0c1h,040h,089h,046h,0feh,0b8h,001h,000h,050h,0b8h,0b0h,001h,0f7h,06eh,004h
	db 005h,0e8h,043h,050h
	call strlen_
	db 059h,050h,0ffh,076h,006h
	call strlen_
	db 059h,08bh,0c8h,058h,003h,0c1h,050h,0ffh,076h,008h
	call strlen_
	db 059h,08bh,0c8h,058h,003h,0c1h,050h,0ffh,076h,00ah
	call strlen_
	db 059h,08bh,0c8h,058h,003h,0c1h,003h,046h,0feh,0b9h,002h,000h,099h,0f7h,0f9h,08bh
	db 0c8h,0b8h,014h,000h,02bh,0c1h,050h,0ffh,036h,0b6h,04fh
	call set_cursor_
	db 083h,0c4h,006h,0ffh,076h,00ch,0b8h,0b0h,001h,0f7h,06eh,004h,005h,0e8h,043h,050h
	db 0ffh,036h,0b6h,04fh
	call print_string_
	db 083h,0c4h,006h,08bh,01eh,0b6h,04fh,0feh,047h,006h,08bh,05eh,006h,080h,03fh,000h
	db 074h,015h,0ffh,076h,00eh,053h,0ffh,036h,0b6h,04fh
	call print_string_
	db 083h,0c4h,006h,08bh,01eh,0b6h,04fh,0feh,047h,006h
l5bd1:
	db 08bh,05eh,008h,080h,03fh,000h,074h,015h,0ffh,076h,010h,053h,0ffh,036h,0b6h,04fh
	call print_string_
	db 083h,0c4h,006h,08bh,01eh,0b6h,04fh,0feh,047h,006h
l5bee:
	db 08bh,05eh,00ah,080h,03fh,000h,074h,015h,0ffh,076h,012h,053h,0ffh,036h,0b6h,04fh
	call print_string_
	db 083h,0c4h,006h,08bh,01eh,0b6h,04fh,0feh,047h,006h
l5c0b:
	db 08bh,0e5h,05dh,0c3h
#endasm
