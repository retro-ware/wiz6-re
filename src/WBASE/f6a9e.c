/* Pick a stored character and add it to the party. */
#asm
	public add_party_member_
	extrn choose_pcfile_char_:near
	extrn draw_member_panel_:near
	extrn find_free_portrait_slot_:near
	extrn load_portrait_:near
	extrn pcfile_record_io_:near
add_party_member_:
	db 055h,08bh,0ech,081h,0c4h,04ch,0feh,057h,056h
	call choose_pcfile_char_
	db 089h,086h,04ch,0feh,03dh,0ffh,0ffh,074h,077h,0d1h,0e0h,08bh,0d8h,08bh,087h,05ah
	db 051h,089h,046h,0feh,0b8h,000h,000h,050h,0ffh,076h,0feh,08dh,086h,04eh,0feh,050h
	call pcfile_record_io_
	db 083h,0c4h,006h,08bh,05eh,0feh,0c6h,087h,0d8h,04fh,002h,08bh,036h,0ceh,043h,0d1h
	db 0e6h,089h,09ch,0dch,043h,0ffh,036h,0ceh,043h
	call find_free_portrait_slot_
	db 059h,08bh,00eh,0ceh,043h,0d1h,0e1h,08bh,0d9h,089h,087h,0d0h,043h,050h,08ah,046h
	db 0eah,02ah,0e4h,050h
	call load_portrait_
	db 083h,0c4h,004h,08dh,0b6h,04eh,0feh,0b8h,0b0h,001h,0f7h,02eh,0ceh,043h,08bh,0f8h
	db 005h,0e8h,043h,08bh,0f8h,08ch,0d9h,08eh,0c1h,0b9h,0d8h,000h,0f3h,0a5h,0ffh,036h
	db 0ceh,043h
	call draw_member_panel_
	db 059h,0ffh,006h,0ceh,043h
l6b2a:
	db 05eh,05fh,08bh,0e5h,05dh,0c3h
#endasm
