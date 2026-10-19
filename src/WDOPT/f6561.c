/* Check maze events at the party location for the used item; 1 if one fired. */
#asm
	public check_item_location_event_
	extrn clear_maze_event_:near
	extrn extract_bits_:near
	extrn find_maze_event_:near
	extrn load_sound_dopt_:near
	extrn play_sound_:near
	extrn set_bit_:near
check_item_location_event_:
	db 055h,08bh,0ech,083h,0c4h,0f6h,056h,08bh,01eh,0a8h,04fh,08bh,036h,09ch,04fh,08ah
	db 080h,0c0h,006h,02ah,0e4h,089h,046h,0f8h
l6579:
	db 0ffh,076h,0f8h,0ffh,036h,09ch,04fh,0ffh,036h,09eh,04fh,0ffh,036h,0a0h,04fh
	call find_maze_event_
	db 083h,0c4h,008h,089h,046h,0f8h,03dh,0ffh,0ffh,075h,003h,0e9h,098h,001h
l6599:
	db 08bh,01eh,0a8h,04fh,08bh,0f0h,080h,0b8h,060h,003h,013h,074h,003h,0e9h,0e9h,000h
l65a9:
	db 0b8h,0b0h,001h,0f7h,06eh,004h,08bh,04eh,006h,0d1h,0e1h,0d1h,0e1h,0d1h,0e1h,003h
	db 0c1h,08bh,0d8h,08bh,087h,028h,044h,0d1h,0e6h,08bh,01eh,0a8h,04fh,08bh,008h,03bh
	db 0c1h,074h,003h,0e9h,0c3h,000h
l65cf:
	db 0b8h,008h,000h,050h,0b8h,000h,000h,050h,0ffh,0b0h,040h,002h
	call extract_bits_
	db 083h,0c4h,006h,089h,046h,0f6h,0b8h,000h,000h,050h,0ffh,076h,0f6h,0a1h,03ch,036h
	db 08bh,0d0h,0d1h,0e0h,0d1h,0e0h,003h,0c2h,0d1h,0e0h,005h,0ech,04eh,050h
	call set_bit_
	db 083h,0c4h,006h,0b8h,008h,000h,050h,050h,08bh,046h,0f8h,0d1h,0e0h,08bh,0f0h,08bh
	db 01eh,0a8h,04fh,0ffh,0b0h,040h,002h
	call extract_bits_
	db 083h,0c4h,006h,089h,046h,0f6h,085h,0c0h,074h,01eh,0b8h,001h,000h,050h,0ffh,076h
	db 0f6h,0a1h,03ch,036h,08bh,0d0h,0d1h,0e0h,0d1h,0e0h,003h,0c2h,0d1h,0e0h,005h,0ech
	db 04eh,050h
	call set_bit_
	db 083h,0c4h,006h
l6641:
	db 08bh,01eh,0a8h,04fh,08bh,076h,0f8h,080h,0b8h,030h,006h,000h,076h,034h,080h,0b8h
	db 030h,006h,00eh,072h,01bh,08ah,080h,030h,006h,02ah,0e4h,03bh,006h,036h,043h,074h
	db 005h,050h
	call load_sound_dopt_
	db 059h
l6667:
	db 0b8h,00eh,000h,050h
	call play_sound_
	db 059h,0ebh,012h
l6671:
	db 08bh,01eh,0a8h,04fh,08bh,076h,0f8h,08ah,080h,030h,006h,02ah,0e4h,050h
	call play_sound_
	db 059h
l6683:
	db 08bh,046h,0f8h,040h,0a3h,0e8h,04eh,0b8h,001h,000h
l668d:
	db 05eh,08bh,0e5h,05dh,0c3h
l6692:
	db 08bh,01eh,0a8h,04fh,08bh,076h,0f8h,080h,0b8h,060h,003h,007h,074h,003h,0e9h,088h
	db 000h
l66a3:
	db 0b8h,002h,000h,050h,0a1h,09ah,04fh,0d1h,0e0h,050h,0d1h,0e6h,0ffh,0b0h,040h,002h
	call extract_bits_
	db 083h,0c4h,006h,03dh,001h,000h,074h,024h,0b8h,002h,000h,050h,0a1h,09ah,04fh,0d1h
	db 0e0h,050h,08bh,046h,0f8h,0d1h,0e0h,08bh,0f0h,08bh,01eh,0a8h,04fh,0ffh,0b0h,040h
	db 002h
	call extract_bits_
	db 083h,0c4h,006h,03dh,002h,000h,075h,049h
l66e2:
	db 08bh,046h,0f8h,0d1h,0e0h,08bh,0f0h,08bh,01eh,0a8h,04fh,08bh,080h,020h,001h,089h
	db 046h,0fah,0b8h,0b0h,001h,0f7h,06eh,004h,08bh,04eh,006h,0d1h,0e1h,0d1h,0e1h,0d1h
	db 0e1h,003h,0c1h,08bh,0d8h,08bh,08fh,028h,044h,08bh,046h,0fah,03bh,0c8h,075h,019h
	db 0ffh,076h,0f8h
	call clear_maze_event_
	db 059h,0c7h,006h,02ah,050h,041h,008h,0c7h,006h,02ch,050h,000h,000h,0b8h,001h,000h
	db 0e9h,062h,0ffh
l672b:
	db 0ffh,046h,0f8h,0e9h,048h,0feh
l6731:
	db 0b8h,000h,000h,0e9h,056h,0ffh
#endasm
