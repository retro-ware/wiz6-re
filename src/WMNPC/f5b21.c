#asm
	public f5b21_
	extrn char_index_:near
	extrn clear_window_:near
	extrn f4572_:near
	extrn f5508_:near
	extrn f5690_:near
	extrn f5a1e_:near
	extrn f5af3_:near
	extrn print_string_:near
	extrn set_cursor_:near
	extrn strlen_:near
f5b21_:
	db 055h,08bh,0ech,083h,0c4h,0fch
l5b27:
	db 08bh,05eh,004h,08ah,007h,02ah,0e4h,050h,0b8h,004h,050h,050h
	call char_index_
	db 083h,0c4h,004h,089h,046h,0fch,03dh,000h,000h,07dh,003h,0e9h,09ch,000h
l5b44:
	db 0e9h,089h,000h,0ffh,046h,004h,0ffh,006h,066h,052h,0e9h,08ch,000h,0ffh,046h,004h
	db 0ffh,036h,0cah,04fh
	call f5a1e_
	db 059h,0e9h,07eh,000h,0ffh,046h,004h,0b8h,004h,000h,050h,08bh,05eh,004h,08ah,007h
	db 02ah,0e4h,050h
	call f5508_
	db 083h,0c4h,004h,0c7h,006h,062h,043h,004h,000h,0b8h,000h,000h,050h,0b8h,004h,000h
	db 050h
	call f4572_
	db 083h,0c4h,004h
	call f5690_
	db 0ffh,046h,004h,0ebh,04dh,0ffh,046h,004h,0c7h,006h,062h,043h,000h,000h
	call f5690_
	db 0ebh,03fh,0ffh,046h,004h,0b8h,001h,000h,050h,0ffh,036h,064h,052h
	call clear_window_
	db 083h,0c4h,004h,0c7h,006h,066h,052h,000h,000h,0ebh,026h,0ffh,046h,004h,0b8h,000h
	db 000h,050h
	call f5af3_
	db 059h,0ebh,019h,047h,05bh,051h,05bh,05fh,05bh,090h,05bh,09eh,05bh,0b7h,05bh
l5bd0:
	db 03dh,006h,000h,073h,008h,093h,0d1h,0e3h,02eh,0ffh,0a7h,0c4h,05bh
l5bdd:
	db 0e9h,047h,0ffh
l5be0:
	db 0a1h,066h,052h,03bh,006h,062h,052h,07eh,008h,0b8h,000h,000h,050h
	call f5af3_
	db 059h
l5bf1:
	db 0ffh,076h,004h
	call strlen_
	db 059h,040h,0b9h,002h,000h,099h,0f7h,0f9h,08bh,0c8h,0b8h,014h,000h,02bh,0c1h,089h
	db 046h,0feh,08bh,05eh,004h,08ah,007h,02ah,0e4h,0ebh,015h
l5c12:
	db 0ffh,046h,004h,0c7h,046h,0feh,000h,000h,0ebh,015h
l5c1c:
	db 0ffh,046h,004h,0a1h,068h,052h,089h,046h,0feh,0ebh,00ah
l5c27:
	db 03dh,024h,000h,074h,0e6h,03dh,05eh,000h,074h,0ebh
l5c31:
	db 0ffh,036h,066h,052h,0ffh,076h,0feh,0ffh,036h,064h,052h
	call set_cursor_
	db 083h,0c4h,006h,08bh,046h,0feh,0a3h,068h,052h,0ffh,006h,066h,052h,0ffh,036h,002h
	db 000h,0ffh,076h,004h,0ffh,036h,064h,052h
	call print_string_
	db 083h,0c4h,006h,08bh,0e5h,05dh,0c3h
#endasm
