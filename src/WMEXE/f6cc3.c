#asm
	public print_combat_centered_
	extrn print_wrapped_:near
	extrn set_cursor_:near
	extrn strlen_:near
print_combat_centered_:
	db 055h,08bh,0ech,083h,0c4h,0feh,0ffh,076h,004h
	call strlen_
	db 059h,040h,0b9h,002h,000h,099h,0f7h,0f9h,08bh,0c8h,0b8h,014h,000h,02bh,0c1h,089h
	db 046h,0feh,03dh,000h,000h,07dh,005h,0c7h,046h,0feh,000h,000h
l6ceb:
	db 0ffh,076h,008h,0ffh,076h,0feh,0ffh,036h,0b6h,04fh
	call set_cursor_
	db 083h,0c4h,006h,0ffh,076h,006h,0ffh,076h,004h
	call print_wrapped_
	db 083h,0c4h,004h,08bh,0e5h,05dh,0c3h
#endasm
