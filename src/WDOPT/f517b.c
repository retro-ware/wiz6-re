/* Try to open a lock with spell power; sets the success/failure/jammed message. */
#asm
	public try_open_lock_
	extrn clear_maze_event_:near
	extrn extract_bits_:near
	extrn find_lock_event_:near
	extrn random_:near
try_open_lock_:
	db 055h,08bh,0ech,083h,0c4h,0f2h,056h
	call find_lock_event_
	db 089h,046h,0f2h,03dh,0ffh,0ffh,075h,008h,0b8h,0ffh,0ffh
l5190:
	db 05eh,08bh,0e5h,05dh,0c3h
l5195:
	db 08bh,046h,0f2h,0d1h,0e0h,08bh,0f0h,08bh,01eh,0a8h,04fh,08bh,080h,020h,001h,089h
	db 046h,0fah,08bh,076h,0f2h,08ah,080h,030h,006h,02ah,0e4h,089h,046h,0feh,0b8h,005h
	db 000h,050h,0b8h,000h,000h,050h,0ffh,076h,0feh
	call extract_bits_
	db 083h,0c4h,006h,089h,046h,0fch,0c7h,046h,0f6h,000h,000h,08bh,046h,0f2h,0d1h,0e0h
	db 08bh,0f0h,08bh,01eh,0a8h,04fh,08bh,080h,040h,002h,089h,046h,0feh,0b8h,002h,000h
	db 050h,0a1h,09ah,04fh,0d1h,0e0h,050h,0ffh,076h,0feh
	call extract_bits_
	db 083h,0c4h,006h,03dh,002h,000h,075h,00bh,083h,07eh,0fch,000h,075h,005h,0c7h,046h
	db 0f6h,001h,000h
l5201:
	db 0c7h,046h,0f4h,000h,000h,08bh,046h,004h,0d1h,0e0h,050h
	call random_
	db 059h,050h,08bh,046h,004h,0d1h,0e0h,050h
	call random_
	db 059h,08bh,0c8h,058h,003h,0c1h,050h,08bh,046h,004h,0d1h,0e0h,050h
	call random_
	db 059h,08bh,0c8h,058h,003h,0c1h,040h,040h,040h,0b9h,002h,000h,099h,0f7h,0f9h,089h
	db 046h,0f8h,03bh,046h,0fch,07dh,005h,0c7h,046h,0f4h,001h,000h
l5246:
	db 083h,07eh,0f6h,000h,074h,005h,0c7h,046h,0f4h,002h,000h
l5251:
	db 083h,07eh,0f4h,000h,075h,007h,0ffh,076h,0f2h
	call clear_maze_event_
	db 059h
l525e:
	db 08bh,046h,0f4h,005h,041h,008h,0a3h,02ah,050h,08bh,046h,0f4h,0a3h,02ch,050h,0b8h
	db 000h,000h,0e9h,01dh,0ffh
#endasm
