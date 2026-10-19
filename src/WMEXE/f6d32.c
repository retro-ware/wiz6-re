#asm
	public print_combat_line_
	extrn print_wrapped_:near
	extrn set_cursor_:near
	extrn strlen_:near
print_combat_line_:
	db 055h,08bh,0ech,083h,0c4h,0fch,08bh,05eh,004h,080h,03fh,000h,074h,005h,0b8h,001h
	db 000h,0ebh,003h
l6d45:
	db 0b8h,000h,000h
l6d48:
	db 08bh,05eh,006h,080h,03fh,000h,074h,005h,0b9h,001h,000h,0ebh,003h
l6d55:
	db 0b9h,000h,000h
l6d58:
	db 003h,0c1h,08bh,05eh,008h,080h,03fh,000h,074h,005h,0b9h,001h,000h,0ebh,003h
l6d67:
	db 0b9h,000h,000h
l6d6a:
	db 003h,0c1h,089h,046h,0fch,0ffh,076h,004h
	call strlen_
	db 059h,050h,0ffh,076h,006h
	call strlen_
	db 059h,08bh,0c8h,058h,003h,0c1h,050h,0ffh,076h,008h
	call strlen_
	db 059h,08bh,0c8h,058h,003h,0c1h,08bh,0c8h,08bh,046h,0fch,003h,0c8h,08bh,0c1h,0b9h
	db 002h,000h,099h,0f7h,0f9h,08bh,0c8h,0b8h,014h,000h,02bh,0c1h,089h,046h,0feh,03dh
	db 000h,000h,07dh,005h,0c7h,046h,0feh,000h,000h
l6db3:
	db 08bh,01eh,0b6h,04fh,08ah,047h,007h,02ah,0e4h,050h,0ffh,076h,0feh,053h
	call set_cursor_
	db 083h,0c4h,006h,08bh,05eh,004h,080h,03fh,000h,074h,00ah,0ffh,076h,00ah,053h
	call print_wrapped_
	db 083h,0c4h,004h
l6dd9:
	db 08bh,05eh,006h,080h,03fh,000h,074h,00ah,0ffh,076h,00ch,053h
	call print_wrapped_
	db 083h,0c4h,004h
l6deb:
	db 08bh,05eh,008h,080h,03fh,000h,074h,00ah,0ffh,076h,00eh,053h
	call print_wrapped_
	db 083h,0c4h,004h
l6dfd:
	db 08bh,0e5h,05dh,0c3h
#endasm
