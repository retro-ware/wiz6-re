#asm
	public check_locked_door_at_
	extrn extract_bits_:near
check_locked_door_at_:
	db 055h,08bh,0ech,083h,0c4h,0feh,056h,08bh,046h,004h,0d1h,0e0h,08bh,0f0h,08bh,01eh
	db 0a8h,04fh,08bh,080h,040h,002h,089h,046h,0feh,0b8h,001h,000h,050h,0b8h,00eh,000h
	db 050h,0ffh,076h,0feh
	call extract_bits_
	db 083h,0c4h,006h,03dh,001h,000h,075h,01fh,0b8h,002h,000h,050h,0b8h,00ch,000h,050h
	db 0ffh,076h,0feh
	call extract_bits_
	db 083h,0c4h,006h,03bh,006h,09ah,04fh,074h,008h,0b8h,000h,000h
ldadf:
	db 05eh,08bh,0e5h,05dh,0c3h
ldae4:
	db 0b8h,001h,000h,050h,0b8h,008h,000h,050h,0ffh,076h,0feh
	call extract_bits_
	db 083h,0c4h,006h,085h,0c0h,075h,005h,0b8h,000h,000h,0ebh,0e1h
ldafe:
	db 08bh,046h,004h,0a3h,0e8h,04eh,08bh,01eh,0a8h,04fh,08bh,0f0h,08ah,080h,030h,006h
	db 02ah,0e4h,0a3h,0c4h,043h,0c7h,006h,03ah,036h,015h,000h,0b8h,001h,000h,0ebh,0c1h
#endasm
