/* Let the player pick an available PCFILE character; return its list index or -1. */
#asm
	public choose_pcfile_char_
	extrn create_window_:near
	extrn defer_window_draw_:near
	extrn destroy_window_:near
	extrn draw_list_frame_:near
	extrn draw_pcfile_list_:near
	extrn erase_window_:near
	extrn f0a42_:near
	extrn fill_window_:near
	extrn get_menu_choice_animated_:near
	extrn get_message_:near
	extrn pcfile_record_io_:near
	extrn print_message_:near
	extrn print_string_:near
	extrn print_string_hi_:near
	extrn refresh_all_windows_:near
	extrn resume_window_draw_:near
	extrn set_click_region_:near
	extrn set_cursor_:near
	extrn show_title_text_:near
	extrn strcpy_:near
	extrn strlen_:near
choose_pcfile_char_:
	db 055h,08bh,0ech,081h,0c4h,0e8h,0fdh,0c7h,046h,0f8h,000h,000h,0c7h,046h,0fah,000h
	db 000h,0ebh,061h
l66ba:
	db 08bh,05eh,0fah,080h,0bfh,0d8h,04fh,001h,075h,054h,0b8h,000h,000h,050h,053h,08dh
	db 086h,044h,0feh,050h
	call pcfile_record_io_
	db 083h,0c4h,006h,08dh,086h,044h,0feh,050h,08bh,046h,0f8h,0d1h,0e0h,0d1h,0e0h,0d1h
	db 0e0h,005h,07ah,050h,050h
	call strcpy_
	db 083h,0c4h,004h,08ah,046h,0e2h,02ah,0e4h,08bh,04eh,0f8h,0d1h,0e1h,08bh,0d9h,089h
	db 087h,0fah,050h,08ah,046h,0e1h,02ah,0e4h,089h,087h,01ah,051h,08ah,046h,0e3h,02ah
	db 0e4h,089h,087h,03ah,051h,08bh,046h,0fah,089h,087h,05ah,051h,0ffh,046h,0f8h
l6718:
	db 0ffh,046h,0fah
l671b:
	db 08bh,046h,0fah,03bh,006h,0d2h,04fh,07ch,096h,083h,07eh,0f8h,000h,075h,007h,0b8h
	db 0ffh,0ffh
l672d:
	db 08bh,0e5h,05dh,0c3h
l6731:
	db 08bh,046h,0f8h,089h,086h,042h,0feh,0b8h,000h,000h,050h,050h,0b8h,0fch,0ffh,050h
	db 0b8h,00ah,000h,050h,0b8h,005h,000h,050h,0b8h,013h,000h,050h,050h,0b8h,000h,000h
	db 050h
	call create_window_
	db 083h,0c4h,010h,089h,046h,0feh,0b8h,000h,000h,050h,0b8h,003h,000h,050h,0b8h,020h
	db 000h,050h,0ffh,076h,0feh
	call fill_window_
	db 083h,0c4h,008h,0b8h,000h,000h,050h,050h,0b8h,0fbh,0ffh,050h,0b8h,014h,000h,050h
	db 0b8h,005h,000h,050h,0b8h,014h,000h,050h,0b8h,013h,000h,050h,0b8h,014h,000h,050h
	call create_window_
	db 083h,0c4h,010h,089h,046h,0fch,0b8h,000h,000h,050h,0b8h,003h,000h,050h,0b8h,020h
	db 000h,050h,0ffh,076h,0fch
	call fill_window_
	db 083h,0c4h,008h,08dh,086h,0f2h,0fdh,050h,0b8h,0b1h,004h,050h
	call get_message_
	db 083h,0c4h,004h,08dh,086h,0f2h,0fdh,050h
	call strlen_
	db 059h,040h,0b9h,002h,000h,099h,0f7h,0f9h,08bh,0c8h,0b8h,00ah,000h,02bh,0c1h,050h
	db 08dh,086h,0f2h,0fdh,050h
	call show_title_text_
	db 083h,0c4h,004h,0b8h,000h,000h,050h,0ffh,036h,0b2h,04fh
	call f0a42_
	db 083h,0c4h,004h,0ffh,076h,0feh
	call defer_window_draw_
	db 059h,0b8h,001h,000h,050h,0b8h,006h,000h,050h,0ffh,076h,0feh
	call set_cursor_
	db 083h,0c4h,006h,0b8h,012h,000h,050h,0ffh,076h,0feh,0b8h,0b6h,004h,050h
	call print_message_
	db 083h,0c4h,006h,0ffh,076h,0feh
	call resume_window_draw_
	db 059h,0b8h,000h,000h,050h,0ffh,076h,0fch
	call draw_list_frame_
	db 083h,0c4h,004h
	call refresh_all_windows_
	db 08dh,086h,0e8h,0fdh,050h,0b8h,0b7h,004h,050h
	call get_message_
	db 083h,0c4h,004h,0c7h,046h,0f6h,000h,000h,0c7h,046h,0f4h,000h,000h,08bh,05eh,0fch
	db 08ah,047h,003h,02ah,0e4h,040h,040h,050h,08ah,047h,002h,02ah,0e4h,005h,012h,000h
	db 050h,08ah,047h,003h,02ah,0e4h,040h,040h,050h,08ah,047h,002h,02ah,0e4h,040h,040h
	db 050h,0b8h,000h,000h,050h
	call set_click_region_
	db 083h,0c4h,00ah,08bh,05eh,0fch,08ah,047h,003h,02ah,0e4h,050h,08ah,047h,002h,02ah
	db 0e4h,040h,050h,08ah,047h,003h,02ah,0e4h,050h,08ah,047h,002h,02ah,0e4h,040h,050h
	db 0b8h,001h,000h,050h
	call set_click_region_
	db 083h,0c4h,00ah,08bh,05eh,0fch,08ah,047h,003h,02ah,0e4h,005h,004h,000h,050h,08ah
	db 047h,002h,02ah,0e4h,040h,050h,08ah,047h,003h,02ah,0e4h,005h,004h,000h,050h,08ah
	db 047h,002h,02ah,0e4h,040h,050h,0b8h,002h,000h,050h
	call set_click_region_
	db 083h,0c4h,00ah,08bh,05eh,0feh,08ah,047h,003h,02ah,0e4h,040h,040h,040h,050h,08dh
	db 086h,0e8h,0fdh,050h
	call strlen_
	db 059h,050h,08bh,05eh,0feh,08ah,047h,002h,02ah,0e4h,08bh,0c8h,058h,003h,0c1h,005h
	db 006h,000h,050h,08ah,047h,003h,02ah,0e4h,040h,040h,040h,050h,083h,0c1h,007h,08bh
	db 0c1h,050h,0b8h,003h,000h,050h
	call set_click_region_
	db 083h,0c4h,00ah,0b8h,000h,000h,050h,050h,050h,0b8h,0ffh,000h,050h,0b8h,004h,000h
	db 050h
	call set_click_region_
	db 083h,0c4h,00ah
l691a:
	db 083h,03eh,046h,008h,000h,075h,03fh,083h,07eh,0f4h,001h,075h,039h,0b8h,003h,000h
	db 050h,0b8h,007h,000h,050h,0ffh,076h,0feh
	call set_cursor_
	db 083h,0c4h,006h,0b8h,0fbh,0ffh,050h,08dh,086h,0e8h,0fdh,050h,0ffh,076h,0feh
	call print_string_
	db 083h,0c4h,006h,0ffh,0b6h,042h,0feh,0b8h,000h,000h,050h,0ffh,076h,0f6h,0ffh,076h
	db 0fch
	call draw_pcfile_list_
	db 083h,0c4h,008h,0ebh,037h
l6960:
	db 0b8h,003h,000h,050h,0b8h,007h,000h,050h,0ffh,076h,0feh
	call set_cursor_
	db 083h,0c4h,006h,0b8h,003h,000h,050h,08dh,086h,0e8h,0fdh,050h,0ffh,076h,0feh
	call print_string_hi_
	db 083h,0c4h,006h,0ffh,0b6h,042h,0feh,0b8h,001h,000h,050h,0ffh,076h,0f6h,0ffh,076h
	db 0fch
	call draw_pcfile_list_
	db 083h,0c4h,008h
l6997:
	db 0b8h,098h,035h,050h,0b8h,066h,050h,050h
	call get_menu_choice_animated_
	db 083h,0c4h,004h,089h,046h,0fah,083h,03eh,0c4h,04fh,001h,075h,037h,0ebh,021h
l69b1:
	db 0c7h,046h,0fah,005h,000h,0ebh,02eh
l69b8:
	db 0c7h,046h,0fah,002h,000h,0ebh,027h
l69bf:
	db 0c7h,046h,0fah,004h,000h,0ebh,020h
l69c6:
	db 0c7h,046h,0f4h,001h,000h,0c7h,046h,0fah,005h,000h,0ebh,014h
l69d2:
	db 03dh,000h,000h,074h,0dah,03dh,001h,000h,074h,0dch,03dh,002h,000h,074h,0deh,03dh
	db 003h,000h,074h,0e0h
l69e6:
	db 08bh,046h,0fah,0ebh,04eh
l69eb:
	db 083h,07eh,0f4h,001h,074h,005h,0c7h,046h,0f4h,001h,000h
l69f6:
	db 0ebh,055h
l69f8:
	db 083h,07eh,0f4h,001h,075h,007h,0c7h,046h,0f4h,000h,000h,0ebh,009h
l6a05:
	db 083h,07eh,0f6h,000h,07eh,003h,0ffh,04eh,0f6h
l6a0e:
	db 0ebh,03dh
l6a10:
	db 083h,07eh,0f4h,001h,075h,005h,0c7h,046h,0f4h,000h,000h
l6a1b:
	db 0ebh,030h
l6a1d:
	db 083h,07eh,0f4h,001h,075h,007h,0c7h,046h,0f4h,000h,000h,0ebh,00dh
l6a2a:
	db 08bh,046h,0f6h,040h,03bh,086h,042h,0feh,07dh,003h,0ffh,046h,0f6h
l6a37:
	db 0ebh,014h
l6a39:
	db 03dh,001h,000h,074h,0adh,03dh,002h,000h,074h,0b5h,03dh,003h,000h,074h,0c8h,03dh
	db 004h,000h,074h,0d0h
l6a4d:
	db 083h,07eh,0fah,005h,074h,003h,0e9h,0c4h,0feh
l6a56:
	db 0b8h,000h,000h,050h,0ffh,076h,0feh
	call destroy_window_
	db 083h,0c4h,004h,0b8h,000h,000h,050h,0ffh,076h,0fch
	call destroy_window_
	db 083h,0c4h,004h,0b8h,000h,000h,050h,0ffh,036h,042h,033h
	call erase_window_
	db 083h,0c4h,004h,0b8h,000h,000h,050h,0ffh,036h,0b2h,04fh
	call f0a42_
	db 083h,0c4h,004h,083h,07eh,0f4h,000h,075h,006h,08bh,046h,0f6h,0e9h,095h,0fch
l6a98:
	db 0b8h,0ffh,0ffh,0e9h,08fh,0fch
#endasm
