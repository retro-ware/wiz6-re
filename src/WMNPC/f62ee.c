#asm
	public f62ee_
	extrn create_window_:near
	extrn destroy_window_:near
	extrn erase_window_:near
	extrn f0a42_:near
	extrn f541a_:near
	extrn f5994_:near
	extrn f62a9_:near
	extrn fill_window_:near
	extrn get_message_:near
	extrn print_string_:near
	extrn print_string_hi_:near
	extrn refresh_all_windows_:near
	extrn set_click_region_:near
	extrn set_cursor_:near
	extrn strlen_:near
f62ee_:
	db 055h,08bh,0ech,083h,0c4h,0deh,056h,083h,03eh,0ceh,043h,002h,07dh,008h,0b8h,000h
	db 000h
l62ff:
	db 05eh,08bh,0e5h,05dh,0c3h
l6304:
	db 0b8h,000h,000h,050h,050h,0b8h,0fch,0ffh,050h,0b8h,019h,000h,050h,0b8h,005h,000h
	db 050h,0b8h,013h,000h,050h,050h,0b8h,000h,000h,050h
	call create_window_
	db 083h,0c4h,010h,089h,046h,0fch,0b8h,000h,000h,050h,0b8h,003h,000h,050h,0b8h,020h
	db 000h,050h,0ffh,076h,0fch
	call fill_window_
	db 083h,0c4h,008h,0b8h,000h,000h,050h,0ffh,036h,042h,033h
	call erase_window_
	db 083h,0c4h,004h,0b8h,000h,000h,050h,0ffh,036h,042h,033h
	call f0a42_
	db 083h,0c4h,004h,0b8h,0d4h,051h,050h,0ffh,076h,004h
	call get_message_
	db 083h,0c4h,004h,0b8h,000h,000h,083h,07eh,006h,001h,075h,003h,0b8h,005h,000h
l6371:
	db 050h,0b8h,0d4h,051h,050h
	call f541a_
	db 083h,0c4h,004h
	call refresh_all_windows_
	db 083h,07eh,006h,001h,075h,064h,08bh,01eh,042h,033h,0feh,047h,006h,08bh,01eh,042h
	db 033h,08ah,047h,006h,02ah,0e4h,089h,046h,0e4h,08ah,047h,007h,02ah,0e4h,089h,046h
	db 0e2h,08dh,046h,0f0h,050h,0b8h,0ebh,007h,050h
	call get_message_
	db 083h,0c4h,004h,08dh,046h,0e6h,050h,0b8h,0ech,007h,050h
	call get_message_
	db 083h,0c4h,004h,083h,03eh,046h,008h,001h,075h,014h,0b8h,003h,000h,050h,08dh,046h
	db 0f0h,050h,0ffh,036h,042h,033h
	call print_string_hi_
	db 083h,0c4h,006h,0ebh,012h
l63d7:
	db 0b8h,0fbh,0ffh,050h,08dh,046h,0e6h,050h,0ffh,036h,042h,033h
	call print_string_
	db 083h,0c4h,006h
l63e9:
	db 0beh,000h,000h,0e9h,089h,000h
l63ef:
	db 08bh,0c6h,0b9h,002h,000h,099h,0f7h,0f9h,08bh,0c2h,08bh,0d0h,0b1h,003h,0d3h,0e0h
	db 003h,0c2h,040h,040h,089h,046h,0e0h,08bh,0c6h,0b9h,002h,000h,099h,0f7h,0f9h,040h
	db 089h,046h,0deh,050h,0ffh,076h,0e0h,0ffh,076h,0fch
	call set_cursor_
	db 083h,0c4h,006h,0b8h,003h,000h,050h,0b8h,0b0h,001h,0f7h,0eeh,005h,0e8h,043h,050h
	db 0ffh,076h,0fch
	call print_string_hi_
	db 083h,0c4h,006h,08bh,05eh,0fch,08ah,047h,003h,02ah,0e4h,003h,046h,0deh,050h,0b8h
	db 0b0h,001h,0f7h,0eeh,005h,0e8h,043h,050h
	call strlen_
	db 059h,050h,08bh,05eh,0fch,08ah,047h,002h,02ah,0e4h,08bh,0c8h,058h,003h,0c1h,003h
	db 046h,0e0h,048h,050h,08ah,047h,003h,02ah,0e4h,003h,046h,0deh,050h,003h,04eh,0e0h
	db 08bh,0c1h,050h,056h
	call set_click_region_
	db 083h,0c4h,00ah,046h
l6478:
	db 03bh,036h,0ceh,043h,07dh,003h,0e9h,06eh,0ffh
l6481:
	db 0b8h,000h,000h,050h,050h,050h,0b8h,0ffh,000h,050h,0ffh,036h,0ceh,043h
	call set_click_region_
	db 083h,0c4h,00ah,083h,07eh,006h,001h,075h,057h,08bh,01eh,042h,033h,08ah,047h,003h
	db 02ah,0e4h,003h,046h,0e2h,050h,08dh,046h,0e6h,050h
	call strlen_
	db 059h,050h,08bh,01eh,042h,033h,08ah,047h,002h,02ah,0e4h,08bh,0c8h,058h,003h,0c1h
	db 003h,046h,0e4h,048h,050h,08ah,047h,003h,02ah,0e4h,003h,046h,0e2h,050h,003h,04eh
	db 0e4h,08bh,0c1h,050h,0ffh,036h,0ceh,043h
	call set_click_region_
	db 083h,0c4h,00ah,0b8h,000h,000h,050h,050h,050h,0b8h,0ffh,000h,050h,0a1h,0ceh,043h
	db 040h,050h
	call set_click_region_
	db 083h,0c4h,00ah
l64f2:
	db 0b8h,000h,000h,083h,07eh,006h,001h,075h,003h,0b8h,0ffh,0ffh
l64fe:
	db 089h,046h,0fah
l6501:
	db 083h,03eh,046h,008h,000h,075h,068h,083h,07eh,0fah,0ffh,075h,024h,0ffh,076h,0e2h
	db 0ffh,076h,0e4h,0ffh,036h,042h,033h
	call set_cursor_
	db 083h,0c4h,006h,0b8h,0fbh,0ffh,050h,08dh,046h,0e6h,050h,0ffh,036h,042h,033h
	call print_string_
	db 083h,0c4h,006h,0ebh,03eh
l6532:
	db 08bh,046h,0fah,0b9h,002h,000h,099h,0f7h,0f9h,040h,050h,08bh,046h,0fah,099h,0f7h
	db 0f9h,08bh,0c2h,08bh,0d0h,0b1h,003h,0d3h,0e0h,003h,0c2h,040h,040h,050h,0ffh,076h
	db 0fch
	call set_cursor_
	db 083h,0c4h,006h,0b8h,0fbh,0ffh,050h,0b8h,0b0h,001h,0f7h,06eh,0fah,005h,0e8h,043h
	db 050h,0ffh,076h,0fch
	call print_string_
	db 083h,0c4h,006h
l6570:
	db 0b8h,098h,035h,050h,0b8h,06ah,052h,050h
	call f5994_
	db 083h,0c4h,004h,089h,046h,0feh,083h,03eh,0c4h,04fh,001h,075h,019h,0b8h,0ffh,0ffh
	db 08bh,04eh,0feh,03bh,00eh,0ceh,043h,07dh,002h,08bh,0c1h
l6596:
	db 089h,046h,0fah,0c7h,046h,0feh,005h,000h,0e9h,004h,001h
l65a1:
	db 08bh,046h,0feh,0e9h,0e1h,000h
l65a7:
	db 083h,07eh,0fah,0ffh,074h,01fh,08bh,046h,0fah,0b9h,002h,000h,099h,0f7h,0f9h,08bh
	db 0c2h,03dh,000h,000h,07eh,00fh,0ffh,076h,0fah,0ffh,076h,0fch
	call f62a9_
	db 083h,0c4h,004h,0ffh,04eh,0fah
l65cc:
	db 0e9h,0d6h,000h
l65cf:
	db 083h,07eh,0fah,0ffh,074h,032h,08bh,046h,0fah,048h,048h,07ch,014h,0ffh,076h,0fah
	db 0ffh,076h,0fch
	call f62a9_
	db 083h,0c4h,004h,0ffh,04eh,0fah,0ffh,04eh,0fah,0ebh,017h
l65f0:
	db 083h,07eh,006h,001h,075h,011h,0ffh,076h,0fah,0ffh,076h,0fch
	call f62a9_
	db 083h,0c4h,004h,0c7h,046h,0fah,0ffh,0ffh
l6607:
	db 0e9h,09bh,000h
l660a:
	db 08bh,046h,0fah,03dh,0ffh,0ffh,074h,026h,0b9h,002h,000h,099h,0f7h,0f9h,08bh,0c2h
	db 03dh,001h,000h,07dh,019h,08bh,046h,0fah,040h,03bh,006h,0ceh,043h,07dh,00fh,0ffh
	db 076h,0fah,0ffh,076h,0fch
	call f62a9_
	db 083h,0c4h,004h,0ffh,046h,0fah
l6638:
	db 0ebh,06bh
l663a:
	db 083h,07eh,0fah,0ffh,075h,029h,0ffh,076h,0e2h,0ffh,076h,0e4h,0ffh,036h,042h,033h
	call set_cursor_
	db 083h,0c4h,006h,0b8h,003h,000h,050h,08dh,046h,0f0h,050h,0ffh,036h,042h,033h
	call print_string_hi_
	db 083h,0c4h,006h,0c7h,046h,0fah,000h,000h,0ebh,01dh
l6669:
	db 08bh,046h,0fah,040h,040h,03bh,006h,0ceh,043h,07dh,012h,0ffh,076h,0fah,0ffh,076h
	db 0fch
	call f62a9_
	db 083h,0c4h,004h,0ffh,046h,0fah,0ffh,046h,0fah
l6686:
	db 0ebh,01dh
l6688:
	db 03dh,001h,000h,075h,003h,0e9h,017h,0ffh
l6690:
	db 03dh,002h,000h,075h,003h,0e9h,037h,0ffh
l6698:
	db 03dh,003h,000h,075h,003h,0e9h,06ah,0ffh
l66a0:
	db 03dh,004h,000h,074h,095h
l66a5:
	db 083h,07eh,0feh,005h,074h,003h,0e9h,053h,0feh
l66ae:
	db 0b8h,000h,000h,050h,0ffh,036h,042h,033h
	call erase_window_
	db 083h,0c4h,004h,0b8h,000h,000h,050h,0ffh,076h,0fch
	call destroy_window_
	db 083h,0c4h,004h,08bh,046h,0fah,0e9h,030h,0fch
#endasm
