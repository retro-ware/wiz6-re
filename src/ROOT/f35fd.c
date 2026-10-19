#asm
	public start_sound_
	extrn sound_driver_:near
start_sound_:
	db 055h,08bh,0ech,01eh,006h,056h,057h,0ffh,076h,00ah,0ffh,076h,008h,0ffh,076h,006h
	db 08bh,05eh,004h,083h,0fbh,0ffh,075h,008h,033h,0c0h,050h,050h,050h,050h,0ebh,015h
l361d:
	db 0d1h,0e3h,0d1h,0e3h,081h,0c3h,079h,035h,02eh,08bh,047h,002h,050h,033h,0c0h,050h
	db 02eh,08bh,01fh,053h,050h
l3632:
	call sound_driver_
	db 083h,0c4h,00eh,05fh,05eh,007h,01fh,08bh,0e5h,05dh,0c3h
#endasm
