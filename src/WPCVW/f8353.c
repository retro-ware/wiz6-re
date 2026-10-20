/* Learn a new spell of school p10 at level up, offering only spells the member does not yet know. */
#asm
	public learn_new_spell_
	extrn choose_spell_:near
	extrn defer_window_draw_:near
	extrn draw_spell_points_:near
	extrn fill_window_:near
	extrn get_message_:near
	extrn movmem_:near
	extrn print_message_:near
	extrn random_:near
	extrn refresh_window_:near
	extrn replace_char_with_string_:near
	extrn resume_window_draw_:near
	extrn set_bit_:near
	extrn set_cursor_:near
	extrn setmem_:near
	extrn show_centered_msg_:near
	extrn test_bit_:near
learn_new_spell_:
	db 055h,08bh,0ech,083h,0c4h,0d8h,08bh,046h,00ah,0ebh,030h
l835e:
	db 0c7h,046h,0f6h,008h,000h,0c7h,046h,0f4h,01ch,000h,0ebh,038h
l836a:
	db 0c7h,046h,0f6h,004h,000h,0c7h,046h,0f4h,01ah,000h,0ebh,02ch
l8376:
	db 0c7h,046h,0f6h,002h,000h,0c7h,046h,0f4h,01bh,000h,0ebh,020h
l8382:
	db 0c7h,046h,0f6h,001h,000h,0c7h,046h,0f4h,019h,000h,0ebh,014h
l838e:
	db 03dh,000h,000h,074h,0cbh,03dh,001h,000h,074h,0d2h,03dh,002h,000h,074h,0e5h,03dh
	db 003h,000h,074h,0d4h
l83a2:
	db 0b8h,00ch,000h,050h,08dh,046h,0e4h,050h,0b8h,0b0h,001h,0f7h,06eh,008h,005h,070h
	db 045h,050h
	call movmem_
	db 083h,0c4h,006h,0b8h,000h,000h,050h,0b8h,00ch,000h,050h,0b8h,0b0h,001h,0f7h,06eh
	db 008h,005h,070h,045h,050h
	call setmem_
	db 083h,0c4h,006h,0b8h,0b0h,001h,0f7h,06eh,008h,003h,046h,0f4h,08bh,0d8h,08ah,087h
	db 01ch,045h,02ah,0e4h,0b9h,012h,000h,099h,0f7h,0f9h,040h,089h,046h,0f8h,080h,0bfh
	db 01ch,045h,062h,072h,005h,0c7h,046h,0f8h,007h,000h
l83f9:
	db 0c7h,046h,0fch,000h,000h,0c7h,046h,0feh,000h,000h
l8403:
	db 08bh,046h,0feh,08bh,0d0h,0d1h,0e0h,003h,0c2h,0d1h,0e0h,08bh,0d8h,08ah,087h,0e3h
	db 000h,02ah,0e4h,085h,046h,0f6h,074h,036h,08ah,087h,0dfh,000h,02ah,0e4h,03bh,046h
	db 0f8h,07fh,02bh,0ffh,076h,0feh,08dh,046h,0e4h,050h
	call test_bit_
	db 083h,0c4h,004h,085h,0c0h,075h,01ah,0b8h,001h,000h,050h,0ffh,076h,0feh,0b8h,0b0h
	db 001h,0f7h,06eh,008h,005h,070h,045h,050h
	call set_bit_
	db 083h,0c4h,006h,0ffh,046h,0fch
l8451:
	db 0ffh,046h,0feh,08bh,046h,0feh,03dh,052h,000h,07ch,0a7h,083h,07eh,0fch,000h,075h
	db 02ch,0b8h,0b0h,001h,0f7h,06eh,008h,003h,046h,00ah,08bh,0d8h,0c6h,087h,000h,045h
	db 000h,0b8h,00ch,000h,050h,0b8h,0b0h,001h,0f7h,06eh,008h,005h,070h,045h,050h,08dh
	db 046h,0e4h,050h
	call movmem_
	db 083h,0c4h,006h
l848a:
	db 08bh,0e5h,05dh,0c3h
l848e:
	db 0b8h,000h,000h,050h,0b8h,003h,000h,050h,0b8h,020h,000h,050h,0ffh,076h,006h
	call fill_window_
	db 083h,0c4h,008h,0ffh,076h,006h
	call refresh_window_
	db 059h,0b8h,08eh,055h,050h,0b8h,0beh,002h,050h
	call get_message_
	db 083h,0c4h,004h,0b8h,090h,057h,050h,0b8h,0b0h,001h,0f7h,06eh,008h,08bh,0d8h,08ah
	db 087h,087h,045h,02ah,0e4h,005h,078h,000h,050h
	call get_message_
	db 083h,0c4h,004h,0b8h,024h,000h,050h,0b8h,090h,057h,050h,0b8h,08eh,055h,050h
	call replace_char_with_string_
	db 083h,0c4h,006h,0b8h,001h,000h,050h,0b8h,08eh,055h,050h,0ffh,076h,006h
	call show_centered_msg_
	db 083h,0c4h,006h,0b8h,000h,000h,050h,0b8h,003h,000h,050h,0b8h,020h,000h,050h,0ffh
	db 076h,006h
	call fill_window_
	db 083h,0c4h,008h,0ffh,076h,006h
	call defer_window_draw_
	db 059h,0b8h,001h,000h,050h,050h,0ffh,076h,006h
	call set_cursor_
	db 083h,0c4h,006h,0b8h,012h,000h,050h,0ffh,076h,006h,0b8h,0bfh,002h,050h
	call print_message_
	db 083h,0c4h,006h,0ffh,076h,006h
	call resume_window_draw_
	db 059h,0c7h,046h,0feh,000h,000h
l853e:
	db 0b8h,0b0h,001h,0f7h,06eh,008h,08bh,04eh,0feh,0d1h,0e1h,0d1h,0e1h,003h,0c1h,08bh
	db 0d8h,08bh,087h,010h,044h,08bh,04eh,0feh,0d1h,0e1h,08bh,0d9h,003h,0ddh,089h,047h
	db 0d8h,0b8h,0b0h,001h,0f7h,06eh,008h,08bh,04eh,0feh,0d1h,0e1h,0d1h,0e1h,003h,0c1h
	db 08bh,0d8h,0c7h,087h,010h,044h,0e7h,003h,0ffh,046h,0feh,08bh,046h,0feh,03dh,006h
	db 000h,07ch,0bdh
l8581:
	db 0b8h,000h,000h,050h,0ffh,076h,008h,0ffh,076h,006h,0ffh,076h,004h
	call choose_spell_
	db 083h,0c4h,008h,089h,046h,0fah,03dh,0ffh,0ffh,075h,002h,0ebh,0e3h
l859e:
	db 0c7h,006h,03ch,055h,0ffh,0ffh,0b8h,00ch,000h,050h,0b8h,0b0h,001h,0f7h,06eh,008h
	db 005h,070h,045h,050h,08dh,046h,0e4h,050h
	call movmem_
	db 083h,0c4h,006h,0c7h,046h,0feh,000h,000h
l85c1:
	db 08bh,046h,0feh,0d1h,0e0h,08bh,0d8h,003h,0ddh,08bh,047h,0d8h,050h,0b8h,0b0h,001h
	db 0f7h,06eh,008h,08bh,0c8h,08bh,056h,0feh,0d1h,0e2h,0d1h,0e2h,003h,0c2h,08bh,0d8h
	db 058h,089h,087h,010h,044h,0ffh,046h,0feh,08bh,046h,0feh,03dh,006h,000h,07ch,0d0h
	db 0b8h,001h,000h,050h,0ffh,076h,0fah,0b8h,0b0h,001h,0f7h,06eh,008h,005h,070h,045h
	db 050h
	call set_bit_
	db 083h,0c4h,006h,0b8h,0b0h,001h,0f7h,06eh,008h,003h,046h,0f4h,08bh,0d8h,08ah,087h
	db 01ch,045h,02ah,0e4h,0b9h,014h,000h,099h,0f7h,0f9h,050h
	call random_
	db 059h,050h,08bh,046h,0fah,08bh,0d0h,0d1h,0e0h,003h,0c2h,0d1h,0e0h,08bh,0d8h,08ah
	db 087h,0dfh,000h,02ah,0e4h,08bh,0c8h,0d1h,0e0h,08bh,0c8h,058h,003h,0c1h,040h,089h
	db 046h,0feh,08ah,087h,0deh,000h,02ah,0e4h,089h,046h,0fch,0b8h,0b0h,001h,0f7h,06eh
	db 008h,08bh,04eh,0fch,0d1h,0e1h,0d1h,0e1h,003h,0c1h,08bh,0d8h,08bh,087h,012h,044h
	db 003h,046h,0feh,050h,08bh,046h,0fah,08bh,0d0h,0d1h,0e0h,003h,0c2h,0d1h,0e0h,08bh
	db 0d8h,08ah,087h,0e0h,000h,02ah,0e4h,08bh,0c8h,058h,03bh,0c1h,07dh,018h,0b8h,0b0h
	db 001h,0f7h,06eh,008h,08bh,056h,0fch,0d1h,0e2h,0d1h,0e2h,003h,0c2h,08bh,0d8h,02bh
	db 08fh,012h,044h,089h,04eh,0feh
l8699:
	db 08bh,046h,0feh,050h,0b8h,0b0h,001h,0f7h,06eh,008h,08bh,0c8h,08bh,056h,0fch,0d1h
	db 0e2h,0d1h,0e2h,003h,0c2h,08bh,0d8h,058h,001h,087h,012h,044h,001h,087h,010h,044h
	db 003h,04eh,00ah,08bh,0d9h,0feh,08fh,000h,045h,0ffh,076h,008h,0ffh,076h,004h
	call draw_spell_points_
	db 083h,0c4h,004h,0e9h,0b9h,0fdh
#endasm
