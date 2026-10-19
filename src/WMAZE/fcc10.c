#asm
	public try_flag_event_at_
	extrn extract_bits_:near
	extrn set_bit_:near
	extrn set_event_flags_:near
try_flag_event_at_:
	db 055h,08bh,0ech,083h,0c4h,0fah,056h,08bh,046h,004h,0d1h,0e0h,08bh,0f0h,08bh,01eh
	db 0a8h,04fh,08bh,080h,040h,002h,089h,046h,0feh,0b8h,001h,000h,050h,0b8h,00eh,000h
	db 050h,0ffh,076h,0feh
	call extract_bits_
	db 083h,0c4h,006h,03dh,001h,000h,075h,01fh,0b8h,002h,000h,050h,0b8h,00ch,000h,050h
	db 0ffh,076h,0feh
	call extract_bits_
	db 083h,0c4h,006h,03bh,006h,09ah,04fh,074h,008h,0b8h,000h,000h
lcc59:
	db 05eh,08bh,0e5h,05dh,0c3h
lcc5e:
	db 0b8h,008h,000h,050h,0b8h,000h,000h,050h,0ffh,076h,0feh
	call extract_bits_
	db 083h,0c4h,006h,089h,046h,0fch,0b8h,001h,000h,050h,0b8h,00ah,000h,050h,0ffh,076h
	db 0feh
	call extract_bits_
	db 083h,0c4h,006h,089h,046h,0fah,050h,0ffh,076h,0fch,0a1h,03ch,036h,08bh,0d0h,0d1h
	db 0e0h,0d1h,0e0h,003h,0c2h,0d1h,0e0h,005h,0ech,04eh,050h
	call set_bit_
	db 083h,0c4h,006h,08bh,046h,004h,0a3h,0e8h,04eh,0b8h,002h,000h,050h,0b8h,008h,000h
	db 050h,0ffh,076h,0feh
	call extract_bits_
	db 083h,0c4h,006h,089h,046h,0fch,050h
	call set_event_flags_
	db 059h,08bh,046h,004h,040h,0a3h,0e8h,04eh,0c7h,006h,034h,050h,001h,000h,0b8h,001h
	db 000h,0ebh,087h
#endasm
