#asm
	public f6e0e_
	extrn print_string_:near
	extrn set_cursor_:near
	extrn strlen_:near
f6e0e_:
	db 055h,08bh,0ech,083h,0c4h,0feh
l6e14:
	db 08bh,05eh,004h,080h,03fh,021h,075h,009h,0ffh,046h,004h,0ffh,006h,066h,052h,0ebh
	db 0efh
l6e25:
	db 0ffh,076h,004h
	call strlen_
	db 059h,040h,0b9h,002h,000h,099h,0f7h,0f9h,08bh,0c8h,0b8h,013h,000h,02bh,0c1h,089h
	db 046h,0feh,08bh,05eh,004h,080h,03fh,05eh,075h,009h,0ffh,046h,004h,0a1h,068h,052h
	db 089h,046h,0feh
l6e4e:
	db 0ffh,036h,066h,052h,0ffh,076h,0feh,0ffh,036h,064h,052h
	call set_cursor_
	db 083h,0c4h,006h,08bh,046h,0feh,0a3h,068h,052h,0ffh,006h,066h,052h,0ffh,036h,002h
	db 000h,0ffh,076h,004h,0ffh,036h,064h,052h
	call print_string_
	db 083h,0c4h,006h,08bh,0e5h,05dh,0c3h
#endasm
