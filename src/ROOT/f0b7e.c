/* Print a string centered on a 40-column row. */
#asm
	public print_centered_
	extrn print_string_:near
	extrn print_string_hi_:near
	extrn set_cursor_:near
	extrn strlen_:near
print_centered_:
	db 055h,08bh,0ech,0ffh,076h,008h,0ffh,076h,006h
	call strlen_
	db 059h,040h,0b9h,002h,000h,099h,0f7h,0f9h,08bh,0c8h,0b8h,014h,000h,02bh,0c1h,050h
	db 0ffh,076h,004h
	call set_cursor_
	db 083h,0c4h,006h,083h,07eh,00ah,010h,07ch,015h,08bh,046h,00ah,005h,0f1h,0ffh,050h
	db 0ffh,076h,006h,0ffh,076h,004h
	call print_string_hi_
	db 083h,0c4h,006h,0ebh,00fh
l0bbe:
	db 0ffh,076h,00ah,0ffh,076h,006h,0ffh,076h,004h
	call print_string_
	db 083h,0c4h,006h
l0bcd:
	db 08bh,0e5h,05dh,0c3h
#endasm
