#asm
	public fb123_
	extrn extract_bits_:near
	extrn set_event_flags_:near
	extrn show_message_text_m_:near
fb123_:
	db 055h,08bh,0ech,083h,0c4h,0feh,056h,0a1h,0e8h,04eh,0d1h,0e0h,08bh,0f0h,08bh,01eh
	db 0a8h,04fh,08bh,080h,040h,002h,089h,046h,0feh,0b8h,001h,000h,050h,0b8h,006h,000h
	db 050h,0ffh,076h,0feh
	call extract_bits_
	db 083h,0c4h,006h,03dh,001h,000h,075h,01fh,0b8h,002h,000h,050h,0b8h,004h,000h,050h
	db 0ffh,076h,0feh
	call extract_bits_
	db 083h,0c4h,006h,0a3h,08ah,04fh,03bh,006h,09ah,04fh,074h,005h
lb16c:
	db 05eh,08bh,0e5h,05dh,0c3h
lb171:
	db 0b8h,001h,000h,050h,0b8h,002h,000h,050h,0a1h,0e8h,04eh,0d1h,0e0h,08bh,0f0h,08bh
	db 01eh,0a8h,04fh,0ffh,0b0h,040h,002h
	call extract_bits_
	db 083h,0c4h,006h,050h,0a1h,0e8h,04eh,0d1h,0e0h,08bh,0f0h,08bh,01eh,0a8h,04fh,0ffh
	db 030h
	call show_message_text_m_
	db 083h,0c4h,004h,0b8h,002h,000h,050h,0b8h,000h,000h,050h,0a1h,0e8h,04eh,0d1h,0e0h
	db 08bh,0f0h,08bh,01eh,0a8h,04fh,0ffh,0b0h,040h,002h
	call extract_bits_
	db 083h,0c4h,006h,050h
	call set_event_flags_
	db 059h,0ebh,0a6h
#endasm
