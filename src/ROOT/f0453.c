/* Convert a signed long to a decimal string. */
#asm
	public long_to_string_
	extrn $ldv:near
	extrn $lrm:near
	extrn reverse_string_:near
long_to_string_:
	db 055h,08bh,0ech,083h,0c4h,0fch,057h,056h,08bh,046h,004h,08bh,056h,006h,089h,056h
	db 0feh,089h,046h,0fch,083h,0fah,000h,07fh,007h,075h,007h,03dh,000h,000h,072h,002h
l0473:
	db 0ebh,00dh
l0475:
	db 0f7h,0dah,0f7h,0d8h,083h,0dah,000h,089h,056h,006h,089h,046h,004h
l0482:
	db 0beh,000h,000h
l0485:
	db 08bh,046h,004h,08bh,056h,006h,0b9h,00ah,000h,0bbh,000h,000h
	call $lrm
	db 005h,030h,000h,083h,0d2h,000h,08bh,0feh,046h,08bh,05eh,008h,088h,001h,08bh,046h
	db 004h,08bh,056h,006h,0b9h,00ah,000h,0bbh,000h,000h
	call $ldv
	db 089h,056h,006h,089h,046h,004h,083h,0fah,000h,07fh,007h,075h,007h,03dh,000h,000h
	db 076h,002h
l04c3:
	db 0ebh,0c0h
l04c5:
	db 083h,07eh,0feh,000h,07fh,008h,075h,008h,083h,07eh,0fch,000h,072h,002h
l04d3:
	db 0ebh,009h
l04d5:
	db 08bh,0feh,046h,08bh,05eh,008h,0c6h,001h,02dh
l04de:
	db 08bh,05eh,008h,0c6h,000h,000h,0ffh,076h,008h
	call reverse_string_
	db 059h,05eh,05fh,08bh,0e5h,05dh,0c3h
#endasm
