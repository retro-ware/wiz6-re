#asm
	public treasure_after_combat_
	extrn clear_window_:near
	extrn defer_window_draw_:near
	extrn flush_keys_:near
	extrn get_message_:near
	extrn open_treasure_:near
	extrn refresh_all_windows_:near
	extrn share_combat_gold_:near
	extrn show_centered_line_:near
treasure_after_combat_:
	db 055h,08bh,0ech,083h,0c4h,0feh,0c7h,006h,024h,050h,0ffh,0ffh,0c7h,006h,080h,052h
	db 002h,000h,0c7h,006h,0c8h,050h,002h,000h,0b8h,06eh,050h,050h,0b8h,088h,013h,050h
	call get_message_
	db 083h,0c4h,004h,0b8h,0beh,050h,050h,0b8h,0ech,013h,050h
	call get_message_
	db 083h,0c4h,004h,0c7h,006h,02ch,050h,000h,000h
	call flush_keys_
	db 0ffh,036h,0b0h,04fh
	call defer_window_draw_
	db 059h,0ffh,036h,042h,033h
	call defer_window_draw_
	db 059h,0ffh,036h,0b2h,04fh
	call defer_window_draw_
	db 059h,0b8h,000h,000h,050h,0ffh,036h,0b6h,04fh
	call clear_window_
	db 083h,0c4h,004h
	call refresh_all_windows_
	db 0b8h,003h,000h,050h,0b8h,001h,000h,050h,0b8h,06eh,050h,050h,0b8h,000h,000h,050h
	db 0ffh,036h,0b6h,04fh
	call show_centered_line_
	db 083h,0c4h,00ah,083h,03eh,0c8h,043h,000h,07ch,009h,075h,009h,083h,03eh,0c6h,043h
	db 000h,077h,002h
l9c10:
	db 0ebh,003h
l9c12:
	call share_combat_gold_
l9c15:
	db 083h,03eh,0c4h,043h,0ffh,074h,009h,0c7h,006h,0ceh,04fh,00fh,000h
	call open_treasure_
l9c25:
	db 08bh,0e5h,05dh,0c3h
#endasm
