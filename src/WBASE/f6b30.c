/* Remove party member i, mark it available and redraw the panels. */
#asm
	public remove_party_member_
	extrn draw_member_panel_:near
	extrn fill_window_:near
remove_party_member_:
	db 055h,08bh,0ech,083h,0c4h,0feh,057h,056h,08bh,046h,004h,0d1h,0e0h,08bh,0d8h,08bh
	db 09fh,0dch,043h,0c6h,087h,0d8h,04fh,001h,0ffh,00eh,0ceh,043h,08bh,046h,004h,089h
	db 046h,0feh,0ebh,03dh
l6b54:
	db 0b8h,0b0h,001h,0f7h,06eh,0feh,08bh,0f0h,005h,098h,045h,08bh,0f0h,0b8h,0b0h,001h
	db 0f7h,06eh,0feh,08bh,0f8h,005h,0e8h,043h,08bh,0f8h,08ch,0d9h,08eh,0c1h,0b9h,0d8h
	db 000h,0f3h,0a5h,08bh,046h,0feh,0d1h,0e0h,08bh,0d8h,08bh,087h,0deh,043h,089h,087h
	db 0dch,043h,08bh,087h,0d2h,043h,089h,087h,0d0h,043h,0ffh,046h,0feh
l6b91:
	db 08bh,046h,0feh,03bh,006h,0ceh,043h,07ch,0bah,0b8h,000h,000h,050h,0b8h,003h,000h
	db 050h,0b8h,020h,000h,050h,0ffh,036h,0bah,04fh
	call fill_window_
	db 083h,0c4h,008h,0b8h,000h,000h,050h,0b8h,003h,000h,050h,0b8h,020h,000h,050h,0ffh
	db 036h,0b8h,04fh
	call fill_window_
	db 083h,0c4h,008h,0c7h,046h,0feh,000h,000h,0ebh,00ah
l6bcd:
	db 0ffh,076h,0feh
	call draw_member_panel_
	db 059h,0ffh,046h,0feh
l6bd7:
	db 08bh,046h,0feh,03bh,006h,0ceh,043h,07ch,0edh,05eh,05fh,08bh,0e5h,05dh,0c3h
#endasm
