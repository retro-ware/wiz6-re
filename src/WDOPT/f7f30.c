/* Cast a spell for member: choose it, pay spell points and stamina, apply it. */
#asm
	public do_cast_spell_
	extrn choose_spell_:near
	extrn create_window_:near
	extrn defer_window_draw_:near
	extrn destroy_window_:near
	extrn erase_window_:near
	extrn f0a42_:near
	extrn f6054_:near
	extrn fill_window_:near
	extrn get_message_:near
	extrn random_:near
	extrn resume_window_draw_:near
	extrn show_result_message_:near
do_cast_spell_:
	db 055h,08bh,0ech,083h,0c4h,0fah,0b8h,0bch,050h,050h,0b8h,0d1h,007h,050h
	call get_message_
	db 083h,0c4h,004h,0c7h,006h,06ah,050h,000h,000h,0ffh,036h,0b0h,04fh
	call defer_window_draw_
	db 059h,0b8h,000h,000h,050h,050h,0b8h,0fch,0ffh,050h,0b8h,00ah,000h,050h,0b8h,005h
	db 000h,050h,0b8h,013h,000h,050h,050h,0b8h,000h,000h,050h
	call create_window_
	db 083h,0c4h,010h,089h,046h,0feh,0b8h,000h,000h,050h,0b8h,003h,000h,050h,0b8h,020h
	db 000h,050h,0ffh,076h,0feh
	call fill_window_
	db 083h,0c4h,008h,0ffh,076h,004h,0ffh,076h,0feh
	call choose_spell_
	db 083h,0c4h,004h,089h,046h,0fch,0c7h,006h,02eh,050h,0ffh,0ffh,03dh,0ffh,0ffh,075h
	db 003h,0e9h,0abh,000h
l7fa7:
	db 0b9h,000h,001h,099h,0f7h,0f9h,089h,046h,0fah,089h,056h,0fch,08bh,0c2h,08bh,0d0h
	db 0d1h,0e0h,003h,0c2h,0d1h,0e0h,08bh,0d8h,08ah,087h,0e0h,000h,02ah,0e4h,0f7h,06eh
	db 0fah,050h,0b8h,0b0h,001h,0f7h,06eh,004h,08bh,0c8h,08ah,087h,0deh,000h,02ah,0e4h
	db 08bh,0d0h,0d1h,0e0h,0d1h,0e0h,08bh,0d0h,003h,0c8h,08bh,0d9h,058h,029h,087h,010h
	db 044h,0ffh,036h,0b6h,051h,0ffh,076h,0fah,0ffh,076h,0fch,0ffh,076h,004h
	call f6054_
	db 083h,0c4h,008h,0ffh,076h,0fah
	call random_
	db 059h,050h,08bh,046h,0fch,08bh,0d0h,0d1h,0e0h,003h,0c2h,0d1h,0e0h,08bh,0d8h,08ah
	db 087h,0dfh,000h,02ah,0e4h,08bh,0c8h,058h,003h,0c1h,003h,046h,0fah,050h,0b8h,0b0h
	db 001h,0f7h,06eh,004h,08bh,0d8h,058h,029h,087h,004h,044h,083h,0bfh,004h,044h,000h
	db 07dh,01fh,0c7h,087h,004h,044h,000h,000h,0b8h,006h,000h,050h
	call random_
	db 059h,005h,006h,000h,050h,0b8h,0b0h,001h,0f7h,06eh,004h,08bh,0d8h,058h,088h,087h
	db 00ch,045h
l8052:
	db 0b8h,000h,000h,050h,0ffh,076h,0feh
	call destroy_window_
	db 083h,0c4h,004h,0ffh,036h,0b0h,04fh
	call resume_window_draw_
	db 059h,0b8h,000h,000h,050h,0ffh,036h,042h,033h
	call erase_window_
	db 083h,0c4h,004h,0b8h,000h,000h,050h,0ffh,036h,0b2h,04fh
	call f0a42_
	db 083h,0c4h,004h,083h,03eh,02ah,050h,000h,07eh,008h,0ffh,036h,02ah,050h
	call show_result_message_
	db 059h
l8092:
	db 08bh,0e5h,05dh,0c3h
#endasm
