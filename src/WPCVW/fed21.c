#asm
	public fed21_
	extrn get_message_:near
	extrn int_to_string_:near
	extrn print_int_:near
	extrn random_:near
	extrn replace_char_with_string_:near
	extrn set_cursor_:near
	extrn show_centered_msg_:near
fed21_:
	db 055h,08bh,0ech,083h,0c4h,0f4h,0b8h,0b0h,001h,0f7h,06eh,008h,08bh,0d8h,08ah,087h
	db 014h,045h,02ah,0e4h,089h,046h,0f8h,08ah,087h,017h,045h,02ah,0e4h,089h,046h,0f6h
	db 08ah,087h,087h,045h,02ah,0e4h,0e9h,08ch,000h,0b8h,005h,000h,050h
	call random_
	db 059h,005h,006h,000h,089h,046h,0fch,0e9h,088h,000h,0b8h,003h,000h,050h
	call random_
	db 059h,040h,040h,089h,046h,0fch,0ebh,079h,0b8h,004h,000h,050h
	call random_
	db 059h,005h,004h,000h,089h,046h,0fch,0ebh,069h,0b8h,004h,000h,050h
	call random_
	db 059h,040h,040h,040h,089h,046h,0fch,0ebh,059h,0b8h,003h,000h,050h
	call random_
	db 059h,040h,040h,040h,089h,046h,0fch,0ebh,049h,0b8h,005h,000h,050h
	call random_
	db 059h,005h,005h,000h,089h,046h,0fch,0ebh,039h,0b8h,005h,000h,050h
	call random_
	db 059h,005h,004h,000h,089h,046h,0fch,0ebh,029h,04ah,0edh,05bh,0edh,06ah,0edh,07ah
	db 0edh,04ah,0edh,06ah,0edh,08ah,0edh,08ah,0edh,09ah,0edh,08ah,0edh,04ah,0edh,09ah
	db 0edh,06ah,0edh,0aah,0edh
ledd6:
	db 03dh,00eh,000h,073h,008h,093h,0d1h,0e3h,02eh,0ffh,0a7h,0bah,0edh
lede3:
	db 0b8h,004h,000h,050h
	call random_
	db 059h,050h,08bh,046h,0f8h,003h,046h,0f6h,0b9h,006h,000h,099h,0f7h,0f9h,08bh,0c8h
	db 058h,003h,0c1h,089h,046h,0fah,083h,07eh,0f6h,008h,07dh,003h,0ffh,04eh,0fch
lee09:
	db 083h,07eh,0f6h,00fh,07eh,003h,0ffh,046h,0fch
lee12:
	db 083h,07eh,0f6h,011h,07eh,003h,0ffh,046h,0fch
lee1b:
	db 083h,07eh,0fch,001h,07dh,005h,0c7h,046h,0fch,001h,000h
lee26:
	db 0b8h,0b0h,001h,0f7h,06eh,008h,08bh,0d8h,08bh,087h,00ch,044h,050h,08ah,087h,097h
	db 045h,02ah,0e4h,08bh,0c8h,058h,03bh,0c1h,07dh,00ah,0c7h,046h,0fch,001h,000h,0c7h
	db 046h,0fah,001h,000h
lee4a:
	db 08bh,046h,0fch,001h,087h,000h,044h,001h,087h,002h,044h,08bh,046h,0fah,001h,087h
	db 004h,044h,001h,087h,006h,044h,0b8h,08eh,055h,050h,0b8h,095h,013h,050h
	call get_message_
	db 083h,0c4h,004h,0b8h,008h,000h,050h,0b8h,00fh,000h,050h,0ffh,076h,004h
	call set_cursor_
	db 083h,0c4h,006h,0b8h,0b0h,001h,0f7h,06eh,008h,08bh,0d8h,08bh,087h,004h,044h,0b9h
	db 064h,000h,0f7h,0e9h,08bh,08fh,006h,044h,099h,0f7h,0f9h,089h,046h,0f4h,03dh,001h
	db 000h,07dh,00ch,083h,0bfh,004h,044h,000h,07eh,005h,0c7h,046h,0f4h,001h,000h
leeab:
	db 0b8h,0fah,0ffh,050h,0b8h,003h,000h,050h,0ffh,076h,0f4h,0ffh,076h,004h
	call print_int_
	db 083h,0c4h,008h,0b8h,001h,000h,050h,0b8h,08eh,055h,050h,0ffh,076h,006h
	call show_centered_msg_
	db 083h,0c4h,006h,0b8h,008h,000h,050h,0b8h,00fh,000h,050h,0ffh,076h,004h
	call set_cursor_
	db 083h,0c4h,006h,0b8h,006h,000h,050h,0b8h,003h,000h,050h,0ffh,076h,0f4h,0ffh,076h
	db 004h
	call print_int_
	db 083h,0c4h,008h,0b8h,08eh,055h,050h,0b8h,094h,013h,083h,07eh,0fch,001h,075h,003h
	db 0b8h,093h,013h
lef05:
	db 050h
	call get_message_
	db 083h,0c4h,004h,0b8h,090h,057h,050h,0ffh,076h,0fch
	call int_to_string_
	db 083h,0c4h,004h,0b8h,024h,000h,050h,0b8h,090h,057h,050h,0b8h,08eh,055h,050h
	call replace_char_with_string_
	db 083h,0c4h,006h,0b8h,005h,000h,050h,0b8h,00eh,000h,050h,0ffh,076h,004h
	call set_cursor_
	db 083h,0c4h,006h,0b8h,0fah,0ffh,050h,0b8h,004h,000h,050h,0b8h,0b0h,001h,0f7h,06eh
	db 008h,08bh,0d8h,0ffh,0b7h,000h,044h,0ffh,076h,004h
	call print_int_
	db 083h,0c4h,008h,0b8h,006h,000h,050h,0b8h,00eh,000h,050h,0ffh,076h,004h
	call set_cursor_
	db 083h,0c4h,006h,0b8h,0fah,0ffh,050h,0b8h,004h,000h,050h,0b8h,0b0h,001h,0f7h,06eh
	db 008h,08bh,0d8h,0ffh,0b7h,002h,044h,0ffh,076h,004h
	call print_int_
	db 083h,0c4h,008h,0b8h,001h,000h,050h,0b8h,08eh,055h,050h,0ffh,076h,006h
	call show_centered_msg_
	db 083h,0c4h,006h,0b8h,005h,000h,050h,0b8h,00eh,000h,050h,0ffh,076h,004h
	call set_cursor_
	db 083h,0c4h,006h,0b8h,006h,000h,050h,0b8h,004h,000h,050h,0b8h,0b0h,001h,0f7h,06eh
	db 008h,08bh,0d8h,0ffh,0b7h,000h,044h,0ffh,076h,004h
	call print_int_
	db 083h,0c4h,008h,0b8h,006h,000h,050h,0b8h,00eh,000h,050h,0ffh,076h,004h
	call set_cursor_
	db 083h,0c4h,006h,0b8h,006h,000h,050h,0b8h,004h,000h,050h,0b8h,0b0h,001h,0f7h,06eh
	db 008h,08bh,0d8h,0ffh,0b7h,002h,044h,0ffh,076h,004h
	call print_int_
	db 083h,0c4h,008h,08bh,0e5h,05dh,0c3h
#endasm
