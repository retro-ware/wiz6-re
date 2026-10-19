#asm
	public f6e7e_
	extrn check_screen_click_:near
	extrn create_window_:near
	extrn delay_tick_:near
	extrn f6d9d_:near
	extrn f6de9_:near
	extrn f6e0e_:near
	extrn flush_keys_:near
	extrn get_key_:near
	extrn get_message_:near
	extrn key_available_:near
	extrn put_char_:near
	extrn put_char_hi_:near
	extrn set_bit_:near
	extrn set_cursor_:near
f6e7e_:
	db 055h,08bh,0ech,083h,0c4h,0a8h,0c7h,006h,068h,052h,000h,000h,0c7h,006h,066h,052h
	db 000h,000h,0c7h,046h,0aeh,000h,000h,083h,03eh,064h,052h,000h,074h,008h
	call f6de9_
	db 0c7h,046h,0aeh,001h,000h
l6ea4:
	db 0b8h,001h,000h,050h,0b8h,000h,000h,050h,0b8h,001h,000h,050h,0b8h,01eh,000h,050h
	db 0b8h,017h,000h,050h,0b8h,026h,000h,050h,0b8h,001h,000h,050h,050h
	call create_window_
	db 083h,0c4h,010h,0a3h,064h,052h,0c7h,006h,062h,052h,015h,000h
l6ed0:
	db 08dh,046h,0b0h,050h,0ffh,076h,004h
	call get_message_
	db 083h,0c4h,004h,083h,03eh,042h,030h,000h,075h,00bh,08dh,046h,0b0h,050h
	call f6e0e_
	db 059h,0ffh,046h,004h
l6eef:
	db 083h,03eh,042h,030h,000h,074h,0dah,0c7h,046h,0ach,003h,000h,0c7h,046h,0aah,000h
	db 000h
	call flush_keys_
	db 0c7h,046h,0a8h,001h,000h
l6f08:
	db 083h,07eh,0aah,00ah,075h,052h,0c7h,046h,0aah,000h,000h,0ffh,036h,062h,052h,0b8h
	db 025h,000h,050h,0ffh,036h,064h,052h
	call set_cursor_
	db 083h,0c4h,006h,083h,07eh,0ach,002h,07dh,014h,0b8h,001h,000h,050h,0b8h,020h,000h
	db 050h,0ffh,036h,064h,052h
	call put_char_
	db 083h,0c4h,006h,0ebh,012h
l6f3f:
	db 0b8h,001h,000h,050h,0b8h,07eh,000h,050h,0ffh,036h,064h,052h
	call put_char_hi_
	db 083h,0c4h,006h
l6f51:
	db 08bh,046h,0ach,040h,0b9h,004h,000h,099h,0f7h,0f9h,089h,056h,0ach,0ebh,009h
l6f60:
	db 0ffh,046h,0aah
	call delay_tick_
	call delay_tick_
l6f69:
	call check_screen_click_
	db 085h,0c0h,074h,005h,0c7h,046h,0a8h,000h,000h
l6f75:
	db 0b8h,001h,000h,050h
	call key_available_
	db 059h,03dh,001h,000h,075h,011h,0b8h,001h,000h,050h
	call get_key_
	db 059h,03ch,00dh,075h,005h,0c7h,046h,0a8h,000h,000h
l6f93:
	db 083h,07eh,0a8h,000h,074h,003h,0e9h,06ch,0ffh
l6f9c:
	call f6de9_
	db 083h,07eh,0aeh,001h,075h,003h
	call f6d9d_
l6fa8:
	db 0c7h,006h,062h,052h,004h,000h,08bh,046h,006h,0ebh,06ch
l6fb3:
	db 0c7h,006h,0a4h,04fh,089h,000h,0c7h,006h,0a2h,04fh,097h,000h,0c7h,006h,0a0h,04fh
	db 001h,000h,0c7h,006h,09eh,04fh,004h,000h,0c7h,006h,09ch,04fh,002h,000h,0c7h,006h
	db 03ch,036h,00ch,000h,0c7h,006h,09ah,04fh,002h,000h,0c7h,046h,0aah,000h,000h,0ebh
	db 01ah
l6fe4:
	db 0b8h,001h,000h,050h,0ffh,076h,006h,0b8h,0b0h,001h,0f7h,06eh,0aah,005h,080h,045h
	db 050h
	call set_bit_
	db 083h,0c4h,006h,0ffh,046h,0aah
l6ffe:
	db 08bh,046h,0aah,03bh,006h,0ceh,043h,07ch,0ddh,0c7h,006h,03ah,036h,006h,000h,0c7h
	db 006h,0ceh,04fh,012h,000h,0b8h,001h,000h
l7016:
	db 08bh,0e5h,05dh,0c3h
l701a:
	db 0b8h,001h,000h,0ebh,0f7h
l701f:
	db 03dh,000h,000h,074h,08fh,03dh,001h,000h,074h,08ah,03dh,002h,000h,074h,085h,03dh
	db 003h,000h,074h,0e7h,0b8h,000h,000h,0ebh,0deh
#endasm
