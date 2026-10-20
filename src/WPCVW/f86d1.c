/* Cast-a-spell menu: pick a spell, pay spell points and stamina, then cast it. */
#asm
	public do_cast_menu_
	extrn cast_spell_:near
	extrn choose_spell_:near
	extrn defer_window_draw_:near
	extrn fill_window_:near
	extrn print_message_:near
	extrn random_:near
	extrn resume_window_draw_:near
	extrn set_cursor_:near
do_cast_menu_:
	db 055h,08bh,0ech,083h,0c4h,0fah,0b8h,000h,000h,050h,0b8h,003h,000h,050h,0b8h,020h
	db 000h,050h,0ffh,076h,006h
	call fill_window_
	db 083h,0c4h,008h,0ffh,076h,006h
	call defer_window_draw_
	db 059h,0b8h,001h,000h,050h,0b8h,008h,000h,050h,0ffh,076h,006h
	call set_cursor_
	db 083h,0c4h,006h,0b8h,012h,000h,050h,0ffh,076h,006h,0b8h,0bdh,002h,050h
	call print_message_
	db 083h,0c4h,006h,0ffh,076h,006h
	call resume_window_draw_
	db 059h,083h,07eh,00ah,000h,075h,01ch,0b8h,000h,000h,050h,0ffh,076h,008h,0ffh,076h
	db 006h,0ffh,076h,004h
	call choose_spell_
	db 083h,0c4h,008h,0c7h,006h,03ch,055h,0ffh,0ffh,0e9h,0d5h,000h
l873e:
	db 0b8h,001h,000h,050h,0ffh,076h,008h,0ffh,076h,006h,0ffh,076h,004h
	call choose_spell_
	db 083h,0c4h,008h,089h,046h,0feh,03dh,0ffh,0ffh,075h,003h,0e9h,0b7h,000h
l875c:
	db 0c7h,006h,03ch,055h,0ffh,0ffh,0b9h,000h,001h,099h,0f7h,0f9h,089h,046h,0fah,089h
	db 056h,0fch,08bh,0c2h,08bh,0d0h,0d1h,0e0h,003h,0c2h,0d1h,0e0h,08bh,0d8h,08ah,087h
	db 0e0h,000h,02ah,0e4h,0f7h,06eh,0fah,050h,0b8h,0b0h,001h,0f7h,06eh,008h,08bh,0c8h
	db 08ah,087h,0deh,000h,02ah,0e4h,08bh,0d0h,0d1h,0e0h,0d1h,0e0h,08bh,0d0h,003h,0c8h
	db 08bh,0d9h,058h,029h,087h,010h,044h,0ffh,076h,0fah
	call random_
	db 059h,050h,08bh,046h,0fch,08bh,0d0h,0d1h,0e0h,003h,0c2h,0d1h,0e0h,08bh,0d8h,08ah
	db 087h,0dfh,000h,02ah,0e4h,08bh,0c8h,058h,003h,0c1h,003h,046h,0fah,050h,0b8h,0b0h
	db 001h,0f7h,06eh,008h,08bh,0d8h,058h,029h,087h,004h,044h,083h,0bfh,004h,044h,000h
	db 07dh,01fh,0c7h,087h,004h,044h,000h,000h,0b8h,006h,000h,050h
	call random_
	db 059h,005h,006h,000h,050h,0b8h,0b0h,001h,0f7h,06eh,008h,08bh,0d8h,058h,088h,087h
	db 00ch,045h
l87fa:
	db 0ffh,076h,006h,0ffh,076h,004h,0ffh,036h,08eh,057h,0ffh,076h,0fah,0ffh,076h,0fch
	db 0ffh,076h,008h
	call cast_spell_
	db 083h,0c4h,00ch
l8813:
	db 08bh,0e5h,05dh,0c3h
#endasm
