#asm
	public npc_event_
	extrn extract_bits_:near
npc_event_:
	db 055h,08bh,0ech,083h,0c4h,0feh,056h,0a1h,0e8h,04eh,0d1h,0e0h,08bh,0f0h,08bh,01eh
	db 0a8h,04fh,08bh,080h,040h,002h,089h,046h,0feh,0b8h,001h,000h,050h,0b8h,002h,000h
	db 050h,0ffh,076h,0feh
	call extract_bits_
	db 083h,0c4h,006h,03dh,001h,000h,075h,01fh,0b8h,002h,000h,050h,0b8h,000h,000h,050h
	db 0ffh,076h,0feh
	call extract_bits_
	db 083h,0c4h,006h,0a3h,08ah,04fh,03bh,006h,09ah,04fh,074h,005h
lb29b:
	db 05eh,08bh,0e5h,05dh,0c3h
lb2a0:
	db 08bh,01eh,0a8h,04fh,08bh,036h,0e8h,04eh,08ah,080h,030h,006h,02ah,0e4h,08bh,01eh
	db 084h,04fh,089h,007h,0c7h,006h,038h,043h,001h,000h,0c7h,006h,03ah,036h,012h,000h
	db 0ffh,006h,0e8h,04eh,0ebh,0d5h
#endasm
