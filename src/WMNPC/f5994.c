#asm
	public f5994_
	extrn char_index_:near
	extrn check_click_regions_:near
	extrn f55dc_:near
	extrn f591a_:near
	extrn flush_keys_:near
	extrn get_key_:near
	extrn key_available_:near
f5994_:
	db 055h,08bh,0ech,083h,0c4h,0fch,0a1h,046h,036h,089h,046h,0fch,083h,03eh,02ch,052h
	db 0ffh,074h,003h
	call f591a_
l59aa:
	call flush_keys_
	db 0c7h,006h,0c4h,04fh,000h,000h
l59b3:
	db 0b8h,001h,000h,050h
	call key_available_
	db 059h,089h,046h,0feh,085h,0c0h,075h,03ah,0ffh,076h,006h
	call check_click_regions_
	db 059h,089h,046h,0feh,083h,03eh,096h,035h,001h,075h,00bh,0c7h,006h,0c4h,04fh,001h
	db 000h,048h
l59da:
	db 08bh,0e5h,05dh,0c3h
l59de:
	call f55dc_
	db 083h,03eh,058h,043h,0feh,075h,012h,083h,03eh,02ch,052h,0ffh,074h,00bh,0a1h,046h
	db 036h,03bh,046h,0fch,075h,003h
	call f591a_
l59fa:
	db 0ebh,0b7h
l59fc:
	db 0b8h,001h,000h,050h
	call get_key_
	db 059h,02ah,0e4h,050h,0ffh,076h,004h
	call char_index_
	db 083h,0c4h,004h,089h,046h,0feh,03dh,000h,000h,07ch,002h,0ebh,0c0h
l5a1a:
	db 0ebh,097h,0ebh,0bch
#endasm
