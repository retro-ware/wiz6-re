#asm
	public level_up_entry_
	extrn check_level_up_:near
	extrn defer_window_draw_:near
	extrn erase_window_:near
	extrn f0a42_:near
	extrn fill_window_:near
	extrn get_message_:near
	extrn put_char_hi_:near
	extrn resume_window_draw_:near
	extrn set_cursor_:near
level_up_entry_:
	db 055h,08bh,0ech,083h,0c4h,0fch,0c7h,006h,0ceh,04fh,005h,000h,0c7h,006h,03ah,036h
	db 005h,000h,0b8h,03eh,055h,050h,0b8h,02ch,001h,050h
	call get_message_
	db 083h,0c4h,004h,0c7h,046h,0feh,000h,000h,0ebh,00ah
lfa37:
	db 0ffh,076h,0feh
	call check_level_up_
	db 059h,0ffh,046h,0feh
lfa41:
	db 08bh,046h,0feh,03bh,006h,0ceh,043h,07ch,0edh,0ffh,036h,0b0h,04fh
	call resume_window_draw_
	db 059h,0ffh,036h,042h,033h
	call resume_window_draw_
	db 059h,0ffh,036h,0b2h,04fh
	call resume_window_draw_
	db 059h,0b8h,000h,000h,050h,0ffh,036h,042h,033h
	call erase_window_
	db 083h,0c4h,004h,0b8h,000h,000h,050h,0b8h,003h,000h,050h,0b8h,01ah,000h,050h,0ffh
	db 036h,0b6h,04fh
	call fill_window_
	db 083h,0c4h,008h,0ffh,036h,0b6h,04fh
	call defer_window_draw_
	db 059h,0c7h,046h,0fch,000h,000h
lfa93:
	db 0ffh,076h,0fch,0b8h,013h,000h,050h,0ffh,036h,0b6h,04fh
	call set_cursor_
	db 083h,0c4h,006h,0b8h,003h,000h,050h,0b8h,01bh,000h,050h,0ffh,036h,0b6h,04fh
	call put_char_hi_
	db 083h,0c4h,006h,0ffh,046h,0fch,08bh,046h,0fch,03dh,005h,000h,07ch,0d2h,0ffh,036h
	db 0b6h,04fh
	call resume_window_draw_
	db 059h,0b8h,000h,000h,050h,0ffh,036h,0b2h,04fh
	call f0a42_
	db 083h,0c4h,004h,08bh,0e5h,05dh,0c3h
#endasm
