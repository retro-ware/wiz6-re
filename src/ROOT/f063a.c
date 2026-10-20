/* Binary-search the message index for the entry containing a message number. */
#asm
	public find_message_index_
find_message_index_:
	db 055h,08bh,0ech,083h,0c4h,0fch,057h,056h,08bh,03eh,048h,008h,04fh,0c7h,046h,0feh
	db 000h,000h
l064c:
	db 03bh,07eh,0feh,07ch,054h,08bh,0c7h,02bh,046h,0feh,0b9h,002h,000h,099h,0f7h,0f9h
	db 08bh,0f0h,003h,046h,0feh,08bh,0f0h,08bh,0c6h,08bh,0d0h,0d1h,0e0h,003h,0c2h,0d1h
	db 0e0h,005h,04ah,008h,089h,046h,0fch,08bh,0d8h,08bh,007h,03bh,046h,004h,07eh,005h
	db 08bh,0feh,04fh,0ebh,022h
l0681:
	db 08ah,047h,004h,02ah,0e4h,08bh,0c8h,08bh,007h,003h,0c8h,08bh,0c1h,03bh,046h,004h
	db 07dh,008h,08bh,0c6h,040h,089h,046h,0feh,0ebh,008h
l069b:
	db 08bh,0c3h
l069d:
	db 05eh,05fh,08bh,0e5h,05dh,0c3h
l06a3:
	db 0ebh,0a7h
l06a5:
	db 0b8h,000h,000h,0ebh,0f3h
#endasm
