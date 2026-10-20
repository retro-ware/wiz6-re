/* List the inventory and swag of member p6 and let the player pick an item. */
#asm
	public npc_choose_member_item_
	extrn create_window_:near
	extrn defer_window_draw_:near
	extrn destroy_window_:near
	extrn f0a42_:near
	extrn f541a_:near
	extrn f5994_:near
	extrn f80d2_:near
	extrn f88c7_:near
	extrn f9827_:near
	extrn f99e6_:near
	extrn fill_window_:near
	extrn get_message_:near
	extrn print_message_:near
	extrn print_string_:near
	extrn print_string_hi_:near
	extrn refresh_all_windows_:near
	extrn replace_char_with_string_:near
	extrn resume_window_draw_:near
	extrn set_click_region_:near
	extrn set_cursor_:near
	extrn strlen_:near
npc_choose_member_item_:
	db 055h,08bh,0ech,083h,0c4h,0e4h,0b8h,000h,000h,050h,0b8h,003h,000h,050h,0b8h,020h
	db 000h,050h,0ffh,076h,004h
	call fill_window_
	db 083h,0c4h,008h,0b8h,000h,000h,050h,050h,0b8h,0fbh,0ffh,050h,0b8h,014h,000h,050h
	db 0b8h,005h,000h,050h,0b8h,014h,000h,050h,0b8h,013h,000h,050h,0b8h,014h,000h,050h
	call create_window_
	db 083h,0c4h,010h,089h,046h,0f4h,0b8h,000h,000h,050h,0b8h,003h,000h,050h,0b8h,020h
	db 000h,050h,0ffh,076h,0f4h
	call fill_window_
	db 083h,0c4h,008h,08dh,046h,0f6h,050h,0b8h,0b0h,001h,0f7h,06eh,006h,005h,0e8h,043h
	db 050h
	call f80d2_
	db 083h,0c4h,004h,0b8h,0d4h,051h,050h,0b8h,0e4h,005h,050h
	call get_message_
	db 083h,0c4h,004h,0b8h,024h,000h,050h,08dh,046h,0f6h,050h,0b8h,0d4h,051h,050h
	call replace_char_with_string_
	db 083h,0c4h,006h,0b8h,000h,000h,050h,0b8h,0d4h,051h,050h
	call f541a_
	db 083h,0c4h,004h,0b8h,000h,000h,050h,0ffh,036h,0b2h,04fh
	call f0a42_
	db 083h,0c4h,004h,0ffh,076h,004h
	call defer_window_draw_
	db 059h,0b8h,001h,000h,050h,0b8h,002h,000h,050h,0ffh,076h,004h
	call set_cursor_
	db 083h,0c4h,006h,0b8h,012h,000h,050h,0ffh,076h,004h,0ffh,076h,008h
	call print_message_
	db 083h,0c4h,006h,08dh,046h,0eah,050h,0b8h,0f3h,007h,050h
	call get_message_
	db 083h,0c4h,004h,0b8h,003h,000h,050h,0b8h,007h,000h,050h,0ffh,076h,004h
	call set_cursor_
	db 083h,0c4h,006h,0b8h,003h,000h,050h,08dh,046h,0eah,050h,0ffh,076h,004h
	call print_string_hi_
	db 083h,0c4h,006h,0ffh,076h,004h
	call resume_window_draw_
	db 059h,0b8h,000h,000h,050h,0ffh,076h,0f4h
	call f88c7_
	db 083h,0c4h,004h,0c7h,046h,0e4h,000h,000h,0c7h,006h,024h,053h,000h,000h,0c7h,046h
	db 0feh,000h,000h,0ebh,01eh
l9b66:
	db 0ffh,076h,0feh,0ffh,076h,006h
	call f99e6_
	db 083h,0c4h,004h,08bh,046h,00ah,03bh,046h,0feh,075h,007h,0a1h,024h,053h,048h,089h
	db 046h,0e4h
l9b81:
	db 0ffh,046h,0feh
l9b84:
	db 0b8h,0b0h,001h,0f7h,06eh,006h,08bh,0d8h,08ah,087h,094h,045h,02ah,0e4h,03bh,046h
	db 0feh,07fh,0cfh,0c7h,046h,0feh,000h,000h,0ebh,025h
l9b9e:
	db 08bh,046h,0feh,005h,00ah,000h,050h,0ffh,076h,006h
	call f99e6_
	db 083h,0c4h,004h,08bh,046h,0feh,005h,00ah,000h,03bh,046h,00ah,075h,007h,0a1h,024h
	db 053h,048h,089h,046h,0e4h
l9bc0:
	db 0ffh,046h,0feh
l9bc3:
	db 0b8h,0b0h,001h,0f7h,06eh,006h,08bh,0d8h,08ah,087h,095h,045h,02ah,0e4h,03bh,046h
	db 0feh,07fh,0c8h,08bh,046h,0e4h,089h,046h,00ah,03bh,006h,024h,053h,07ch,007h,0a1h
	db 024h,053h,048h,089h,046h,00ah
l9be9:
	call refresh_all_windows_
	db 0c7h,046h,0e8h,000h,000h,08bh,05eh,0f4h,08ah,047h,003h,02ah,0e4h,040h,040h,050h
	db 08ah,047h,002h,02ah,0e4h,005h,010h,000h,050h,08ah,047h,003h,02ah,0e4h,040h,040h
	db 050h,08ah,047h,002h,02ah,0e4h,040h,040h,050h,0b8h,000h,000h,050h
	call set_click_region_
	db 083h,0c4h,00ah,08bh,05eh,0f4h,08ah,047h,003h,02ah,0e4h,050h,08ah,047h,002h,02ah
	db 0e4h,040h,050h,08ah,047h,003h,02ah,0e4h,050h,08ah,047h,002h,02ah,0e4h,040h,050h
	db 0b8h,001h,000h,050h
	call set_click_region_
	db 083h,0c4h,00ah,08bh,05eh,0f4h,08ah,047h,003h,02ah,0e4h,005h,004h,000h,050h,08ah
	db 047h,002h,02ah,0e4h,040h,050h,08ah,047h,003h,02ah,0e4h,005h,004h,000h,050h,08ah
	db 047h,002h,02ah,0e4h,040h,050h,0b8h,002h,000h,050h
	call set_click_region_
	db 083h,0c4h,00ah,08bh,05eh,004h,08ah,047h,003h,02ah,0e4h,040h,040h,040h,050h,08dh
	db 046h,0eah,050h
	call strlen_
	db 059h,050h,08bh,05eh,004h,08ah,047h,002h,02ah,0e4h,08bh,0c8h,058h,003h,0c1h,005h
	db 006h,000h,050h,08ah,047h,003h,02ah,0e4h,040h,040h,040h,050h,083h,0c1h,007h,08bh
	db 0c1h,050h,0b8h,003h,000h,050h
	call set_click_region_
	db 083h,0c4h,00ah,0b8h,000h,000h,050h,050h,050h,0b8h,0ffh,000h,050h,0b8h,004h,000h
	db 050h
	call set_click_region_
	db 083h,0c4h,00ah
l9cc6:
	db 083h,07eh,0e8h,001h,075h,037h,0b8h,003h,000h,050h,0b8h,007h,000h,050h,0ffh,076h
	db 004h
	call set_cursor_
	db 083h,0c4h,006h,0b8h,0fdh,0ffh,050h,08dh,046h,0eah,050h,0ffh,076h,004h
	call print_string_
	db 083h,0c4h,006h,0b8h,000h,000h,050h,0ffh,076h,00ah,0ffh,076h,006h,0ffh,076h,0f4h
	call f9827_
	db 083h,0c4h,008h,0ebh,035h
l9d03:
	db 0b8h,003h,000h,050h,0b8h,007h,000h,050h,0ffh,076h,004h
	call set_cursor_
	db 083h,0c4h,006h,0b8h,003h,000h,050h,08dh,046h,0eah,050h,0ffh,076h,004h
	call print_string_hi_
	db 083h,0c4h,006h,0b8h,001h,000h,050h,0ffh,076h,00ah,0ffh,076h,006h,0ffh,076h,0f4h
	call f9827_
	db 083h,0c4h,008h
l9d38:
	db 0b8h,098h,035h,050h,0b8h,06ah,052h,050h
	call f5994_
	db 083h,0c4h,004h,089h,046h,0feh,083h,03eh,0c4h,04fh,001h,075h,037h,0ebh,021h
l9d52:
	db 0c7h,046h,0feh,005h,000h,0ebh,02eh
l9d59:
	db 0c7h,046h,0feh,002h,000h,0ebh,027h
l9d60:
	db 0c7h,046h,0feh,004h,000h,0ebh,020h
l9d67:
	db 0c7h,046h,0e8h,001h,000h,0c7h,046h,0feh,005h,000h,0ebh,014h
l9d73:
	db 03dh,000h,000h,074h,0dah,03dh,001h,000h,074h,0dch,03dh,002h,000h,074h,0deh,03dh
	db 003h,000h,074h,0e0h
l9d87:
	db 08bh,046h,0feh,0ebh,04eh
l9d8c:
	db 083h,07eh,0e8h,001h,074h,005h,0c7h,046h,0e8h,001h,000h
l9d97:
	db 0ebh,055h
l9d99:
	db 083h,07eh,0e8h,001h,075h,007h,0c7h,046h,0e8h,000h,000h,0ebh,009h
l9da6:
	db 083h,07eh,00ah,000h,07eh,003h,0ffh,04eh,00ah
l9daf:
	db 0ebh,03dh
l9db1:
	db 083h,07eh,0e8h,001h,075h,005h,0c7h,046h,0e8h,000h,000h
l9dbc:
	db 0ebh,030h
l9dbe:
	db 083h,07eh,0e8h,001h,075h,007h,0c7h,046h,0e8h,000h,000h,0ebh,00dh
l9dcb:
	db 08bh,046h,00ah,040h,03bh,006h,024h,053h,07dh,003h,0ffh,046h,00ah
l9dd8:
	db 0ebh,014h
l9dda:
	db 03dh,001h,000h,074h,0adh,03dh,002h,000h,074h,0b5h,03dh,003h,000h,074h,0c8h,03dh
	db 004h,000h,074h,0d0h
l9dee:
	db 083h,07eh,0feh,005h,074h,003h,0e9h,0cfh,0feh
l9df7:
	db 0b8h,000h,000h,050h,0ffh,076h,0f4h
	call destroy_window_
	db 083h,0c4h,004h,083h,07eh,0e8h,001h,075h,007h,0b8h,0ffh,0ffh
l9e0d:
	db 08bh,0e5h,05dh,0c3h
l9e11:
	db 08bh,046h,00ah,0d1h,0e0h,08bh,0d8h,08bh,087h,026h,053h,0ebh,0efh
#endasm
