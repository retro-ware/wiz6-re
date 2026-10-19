#asm
	public trap_event_
	extrn clear_window_:near
	extrn create_window_:near
	extrn defer_window_draw_:near
	extrn destroy_window_:near
	extrn extract_bits_:near
	extrn get_message_:near
	extrn inflict_condition_:near
	extrn inflict_status_:near
	extrn kill_party_:near
	extrn load_sound_bank_:near
	extrn play_sound_:near
	extrn print_string_:near
	extrn random_:near
	extrn refresh_all_windows_:near
	extrn resume_window_draw_:near
	extrn set_cursor_:near
	extrn set_event_flags_:near
	extrn show_message_text_m_:near
	extrn strlen_:near
	extrn trap_damage_member_:near
	extrn wait_animating_m_:near
trap_event_:
	db 055h,08bh,0ech,083h,0c4h,0a0h,056h,0a1h,0e8h,04eh,0d1h,0e0h,08bh,0f0h,08bh,01eh
	db 0a8h,04fh,08bh,080h,040h,002h,089h,046h,0fah,0b8h,004h,000h,050h,0b8h,008h,000h
	db 050h,0ffh,076h,0fah
	call extract_bits_
	db 083h,0c4h,006h,03dh,004h,000h,075h,013h,0b8h,004h,000h,050h,0b8h,010h,027h,050h
	call kill_party_
	db 083h,0c4h,004h
lae86:
	db 05eh,08bh,0e5h,05dh,0c3h
lae8b:
	db 0c7h,006h,030h,052h,001h,000h,08bh,01eh,0a8h,04fh,08bh,036h,0e8h,04eh,080h,0b8h
	db 030h,006h,000h,076h,035h,080h,0b8h,030h,006h,00eh,072h,01bh,08ah,080h,030h,006h
	db 02ah,0e4h,03bh,006h,036h,043h,074h,005h,050h
	call load_sound_bank_
	db 059h
laeb8:
	db 0b8h,00eh,000h,050h
	call play_sound_
	db 059h,0ebh,013h
laec2:
	db 08bh,01eh,0a8h,04fh,08bh,036h,0e8h,04eh,08ah,080h,030h,006h,02ah,0e4h,050h
	call play_sound_
	db 059h
laed5:
	db 0a1h,0e8h,04eh,0d1h,0e0h,08bh,0f0h,08bh,01eh,0a8h,04fh,083h,038h,000h,07eh,00ch
	db 0b8h,000h,000h,050h,0ffh,030h
	call show_message_text_m_
	db 083h,0c4h,004h
laef1:
	db 0ffh,036h,042h,033h
	call defer_window_draw_
	db 059h,0ffh,036h,0b2h,04fh
	call defer_window_draw_
	db 059h,0b8h,000h,000h,050h,050h,0b8h,0ffh,0ffh,050h,0b8h,014h,000h,050h,0b8h,005h
	db 000h,050h,0b8h,028h,000h,050h,0b8h,013h,000h,050h,0b8h,000h,000h,050h
	call create_window_
	db 083h,0c4h,010h,0a3h,02ah,052h,0b8h,004h,000h,050h,0b8h,008h,000h,050h,0ffh,076h
	db 0fah
	call extract_bits_
	db 083h,0c4h,006h,089h,046h,0fch,0b8h,004h,000h,050h,0b8h,000h,000h,050h,0ffh,076h
	db 0fah
	call extract_bits_
	db 083h,0c4h,006h,089h,046h,0f6h,0b8h,004h,000h,050h,050h,0ffh,076h,0fah
	call extract_bits_
	db 083h,0c4h,006h,089h,046h,0f8h,0b8h,001h,000h,050h,0b8h,00ch,000h,050h,0ffh,076h
	db 0fah
	call extract_bits_
	db 083h,0c4h,006h,089h,046h,0f0h,0b8h,001h,000h,050h,0b8h,00fh,000h,050h,0ffh,076h
	db 0fah
	call extract_bits_
	db 083h,0c4h,006h,089h,046h,0f2h,083h,07eh,0f0h,000h,074h,072h,083h,03eh,0dch,04eh
	db 000h,07eh,06bh,0c7h,046h,0f2h,001h,000h,08dh,046h,0a0h,050h,0b8h,008h,008h,050h
	call get_message_
	db 083h,0c4h,004h,0b8h,000h,000h,050h,0ffh,036h,02ah,052h
	call clear_window_
	db 083h,0c4h,004h
	call refresh_all_windows_
	db 0b8h,001h,000h,050h,08dh,046h,0a0h,050h
	call strlen_
	db 059h,040h,0b9h,002h,000h,099h,0f7h,0f9h,08bh,0c8h,0b8h,014h,000h,02bh,0c1h,050h
	db 0ffh,036h,02ah,052h
	call set_cursor_
	db 083h,0c4h,006h,0b8h,006h,000h,050h,08dh,046h,0a0h,050h,0ffh,036h,02ah,052h
	call print_string_
	db 083h,0c4h,006h,0b8h,000h,000h,050h
	call play_sound_
	db 059h,0ffh,036h,0cah,04fh
	call wait_animating_m_
	db 059h
lb000:
	db 0a1h,0e8h,04eh,0d1h,0e0h,08bh,0f0h,08bh,01eh,0a8h,04fh,08bh,080h,020h,001h,089h
	db 046h,0f4h,0c7h,046h,0feh,000h,000h,0e9h,0bah,000h
lb01a:
	db 0b8h,036h,000h,050h
	call random_
	db 059h,050h,0b8h,0b0h,001h,0f7h,06eh,0feh,08bh,0d8h,08ah,087h,018h,045h,02ah,0e4h
	db 08bh,0c8h,02bh,046h,0f8h,08bh,0c8h,058h,03bh,0c1h,07fh,003h,0e9h,091h,000h
lb040:
	db 083h,07eh,0f2h,000h,075h,043h,083h,07eh,0f4h,000h,074h,02eh,0b8h,064h,000h,050h
	call random_
	db 059h,050h,0b8h,0b0h,001h,0f7h,06eh,0feh,003h,046h,0f4h,08bh,0d8h,08ah,087h,03ah
	db 045h,02ah,0e4h,08bh,0c8h,08bh,046h,0f8h,08bh,0d0h,0d1h,0e0h,003h,0c2h,08bh,0d0h
	db 02bh,0c8h,058h,03bh,0c1h,07eh,00fh
lb07a:
	db 0ffh,076h,0f6h,0ffh,076h,0f8h,0ffh,076h,0feh
	call trap_damage_member_
	db 083h,0c4h,006h
lb089:
	db 083h,07eh,0fch,000h,07eh,042h,083h,07eh,0fch,006h,07dh,018h,0ffh,076h,0fch,0ffh
	db 076h,0f4h,08bh,046h,0fch,005h,08dh,014h,050h,0ffh,076h,0feh
	call inflict_condition_
	db 083h,0c4h,008h,0ebh,024h
lb0ad:
	db 0ffh,076h,0f8h,0b8h,00ah,000h,050h,0ffh,076h,0f8h,08bh,046h,0fch,005h,0fah,0ffh
	db 050h,0ffh,076h,0f4h,08bh,046h,0fch,005h,07ch,014h,050h,0ffh,076h,0feh
	call inflict_status_
	db 083h,0c4h,00eh
lb0d1:
	db 0ffh,046h,0feh
lb0d4:
	db 08bh,046h,0feh,03bh,006h,0ceh,043h,07dh,003h,0e9h,03ah,0ffh
lb0e0:
	db 0b8h,002h,000h,050h,0b8h,00dh,000h,050h,0a1h,0e8h,04eh,0d1h,0e0h,08bh,0f0h,08bh
	db 01eh,0a8h,04fh,0ffh,0b0h,040h,002h
	call extract_bits_
	db 083h,0c4h,006h,050h
	call set_event_flags_
	db 059h,0b8h,000h,000h,050h,0ffh,036h,02ah,052h
	call destroy_window_
	db 083h,0c4h,004h,0ffh,036h,042h,033h
	call resume_window_draw_
	db 059h,0ffh,036h,0b2h,04fh
	call resume_window_draw_
	db 059h,0e9h,063h,0fdh
#endasm
