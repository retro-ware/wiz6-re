/* Print a zero-terminated string into a window with a color. */
#asm
	public print_string_
	extrn put_char_:near
print_string_:
	db 055h,08bh,0ech,083h,0ech,004h,056h,006h,01eh,08bh,076h,006h,089h,076h,0feh,08bh
	db 076h,004h
l24fb:
	db 08bh,05eh,0feh,0ffh,046h,0feh,08ah,007h,032h,0e4h,00ah,0c0h,074h,00dh,0ffh,076h
	db 008h,050h,056h
	call put_char_
	db 083h,0c4h,006h,0ebh,0e5h
l2516:
	db 01fh,007h,05eh,08bh,0e5h,05dh,0c3h
#endasm
