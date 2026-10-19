#asm
	public load_maze_level_
	extrn alloc_maze_buffers_:near
	extrn ensure_disk_for_:near
	extrn flood_mark_cells_:near
	extrn get_bitfield_:near
	extrn movmem_:near
	extrn set_bit_:near
	extrn setmem_:near
load_maze_level_:
	db 055h,08bh,0ech,083h,0c4h,0f8h,057h,056h,08bh,046h,004h,0a3h,03ch,036h,050h,0b8h
	db 002h,000h,050h
	call ensure_disk_for_
	db 083h,0c4h,004h,083h,03eh,03ch,036h,000h,07dh,00ch,0c7h,006h,03ah,036h,007h,000h
l495d:
	db 05eh,05fh,08bh,0e5h,05dh,0c3h
l4963:
	db 0c6h,006h,0ebh,04eh,001h,0c6h,006h,0eah,04eh,001h
	call alloc_maze_buffers_
	db 0b8h,00ah,000h,050h,0a1h,03ch,036h,08bh,0d0h,0d1h,0e0h,0d1h,0e0h,003h,0c2h,0d1h
	db 0e0h,005h,0ech,04eh,050h,0a1h,03ch,036h,08bh,0d0h,0d1h,0e0h,0d1h,0e0h,003h,0c2h
	db 0d1h,0e0h,005h,0f8h,033h,050h
	call movmem_
	db 083h,0c4h,006h,0c7h,006h,0ceh,04fh,005h,000h,0c7h,006h,08ah,04fh,0ffh,0ffh,0b8h
	db 000h,000h,050h,0b8h,060h,000h,050h,0b8h,068h,04eh,050h
	call setmem_
	db 083h,0c4h,006h,0a1h,0a8h,04fh,003h,006h,09ch,04fh,08bh,0d8h,08ah,087h,0c0h,006h
	db 02ah,0e4h,0a3h,0e8h,04eh,0beh,000h,000h
l49cf:
	db 08bh,01eh,0a8h,04fh,08ah,080h,0c0h,006h,02ah,0e4h,08bh,0f8h
l49db:
	db 081h,0ffh,090h,000h,07dh,04eh,08bh,01eh,0a8h,04fh,08ah,081h,010h,005h,02ah,0e4h
	db 03bh,0c6h,075h,040h,080h,0b9h,060h,003h,000h,076h,036h,0b8h,001h,000h,050h,08bh
	db 0c6h,0b9h,006h,000h,0d3h,0e0h,050h,08ah,081h,080h,004h,02ah,0e4h,08bh,0c8h,0d1h
	db 0e0h,0d1h,0e0h,0d1h,0e0h,08bh,0c8h,058h,003h,0c1h,050h,08ah,081h,0f0h,003h,02ah
	db 0e4h,08bh,0c8h,058h,003h,0c1h,050h,0b8h,068h,04eh,050h
	call set_bit_
	db 083h,0c4h,006h
l4a2c:
	db 047h,0ebh,0ach
l4a2f:
	db 046h,083h,0feh,00ch,07ch,09ah,0b8h,000h,000h,050h,0b8h,060h,000h,050h,0b8h,008h
	db 04eh,050h
	call setmem_
	db 083h,0c4h,006h,0bfh,000h,000h
l4a4a:
	db 0beh,000h,000h
l4a4d:
	db 0b8h,003h,000h,050h,08bh,0c6h,08bh,0d0h,0d1h,0e0h,0d1h,0e0h,003h,0c2h,003h,0c7h
	db 050h,0a1h,0aah,04fh,005h,0fah,004h,050h
	call get_bitfield_
	db 083h,0c4h,006h,089h,046h,0feh,0b8h,003h,000h,050h,08bh,0c6h,08bh,0d0h,0d1h,0e0h
	db 0d1h,0e0h,003h,0c2h,003h,0c7h,050h,0a1h,0aah,04fh,005h,012h,005h,050h
	call get_bitfield_
	db 083h,0c4h,006h,089h,046h,0fch,003h,046h,0feh,07eh,011h,0b8h,001h,000h,050h,0ffh
	db 076h,0fch,0ffh,076h,0feh,056h
	call flood_mark_cells_
	db 083h,0c4h,008h
l4aa5:
	db 046h,083h,0feh,00ch,07ch,0a2h,047h,083h,0ffh,005h,07ch,099h,083h,03eh,03ch,036h
	db 008h,074h,006h,0c7h,006h,0cah,04eh,000h,000h
l4abe:
	db 0c7h,006h,03ah,036h,005h,000h,0e9h,096h,0feh
#endasm
