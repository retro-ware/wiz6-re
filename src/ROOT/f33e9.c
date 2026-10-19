#asm
	public load_sound_slot_
	extrn f34bc_:near
	extrn free_sounds_:near
load_sound_slot_:
	db 055h,08bh,0ech,083h,0ech,008h,01eh,006h,056h,057h,08bh,05eh,00eh,0d1h,0e3h,0d1h
	db 0e3h,081h,0c3h,079h,035h,089h,05eh,0feh
	call free_sounds_
	db 0b4h,042h,0b0h,000h,08bh,05eh,004h,08bh,04eh,008h,08bh,056h,006h,0cdh,021h,02eh
	db 0a1h,07ch,01bh,08eh,0d8h,033h,0d2h,08bh,05eh,004h,0b9h,002h,000h,0b4h,03fh,0cdh
	db 021h,033h,0dbh,08bh,007h,00bh,0c0h,075h,042h,08bh,05eh,0feh,08bh,046h,00ah,02dh
	db 002h,000h,02eh,089h,047h,002h,005h,00fh,000h,0b1h,004h,0d3h,0e8h,08bh,0d8h,0b4h
	db 048h,0cdh,021h,072h,021h,08bh,05eh,0feh,02eh,089h,007h,08eh,0d8h,033h,0d2h,08bh
	db 05eh,004h,08bh,04eh,00ah,083h,0e9h,002h,0b4h,03fh,0cdh,021h,033h,0c0h
l3462:
	db 05fh,05eh,007h,01fh,08bh,0e5h,05dh,0c3h
l346a:
	db 08bh,046h,0feh,0ebh,0f3h
l346f:
	db 08bh,0c8h,02eh,0a1h,07ch,01bh,08eh,0d8h,033h,0d2h,08bh,05eh,004h,0b4h,03fh,0cdh
	db 021h,0bah,000h,004h,08bh,05eh,004h,0b9h,000h,010h,0b4h,03fh,0cdh,021h,0beh,000h
	db 004h,0bfh,000h,000h,0adh,089h,046h,0fch,08bh,05eh,0feh,02eh,089h,047h,002h,005h
	db 00fh,000h,0b1h,004h,0d3h,0e8h,08bh,0d8h,0b4h,048h,0cdh,021h,072h,0bdh,08bh,05eh
	db 0feh,02eh,089h,007h,08eh,0c0h
	call f34bc_
	db 033h,0c0h,0ebh,0a6h
#endasm
