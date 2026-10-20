#asm
	public f88ea_
	extrn f81f9_:near
	extrn f825e_:near
	extrn f82c3_:near
	extrn get_bitfield_:near
	extrn test_bit_:near
f88ea_:
	db 055h,08bh,0ech,083h,0c4h,0fch,057h,056h,083h,07eh,00eh,000h,074h,041h,0b8h,000h
	db 000h,050h,0ffh,076h,00eh,08dh,046h,00ch,050h,08dh,046h,00ah,050h,08dh,046h,008h
	db 050h,08dh,046h,006h,050h,08dh,046h,004h,050h
	call f82c3_
	db 083h,0c4h,00eh,085h,0c0h,074h,01ch,083h,03eh,03ch,036h,00ah,074h,007h,083h,03eh
	db 03ch,036h,00ch,075h,009h
l892b:
	db 0b8h,000h,000h
l892e:
	db 05eh,05fh,08bh,0e5h,05dh,0c3h
l8934:
	db 0b8h,002h,000h,0ebh,0f5h
l8939:
	db 08bh,046h,00ch,0b9h,006h,000h,0d3h,0e0h,08bh,04eh,00ah,0d1h,0e1h,0d1h,0e1h,0d1h
	db 0e1h,003h,0c1h,08bh,0f0h,003h,046h,008h,08bh,0f0h,056h,0a1h,0aah,04fh,005h,03ah
	db 004h,050h
	call test_bit_
	db 083h,0c4h,004h,03dh,001h,000h,075h,02dh,0a1h,03ch,036h,0ebh,014h
l896b:
	db 083h,03eh,03ch,036h,00ch,075h,006h,083h,07eh,00ch,008h,07eh,005h
l8978:
	db 0b8h,000h,000h,0ebh,0b1h
l897d:
	db 0ebh,014h
l897f:
	db 03dh,000h,000h,074h,0e7h,03dh,004h,000h,074h,0e2h,03dh,005h,000h,074h,0ddh,03dh
	db 00ch,000h,074h,0d8h
l8993:
	db 0bfh,000h,000h,0a1h,09ah,04fh,0ebh,05eh
l899b:
	db 0b8h,002h,000h,050h,056h,0a1h,0aah,04fh,005h,020h,001h,050h
	call get_bitfield_
	db 083h,0c4h,006h,08bh,0f8h,0ebh,05ch
l89b1:
	db 0ffh,076h,00ch,0ffh,076h,00ah,0ffh,076h,008h,0ffh,076h,006h,0ffh,076h,004h
	call f81f9_
	db 083h,0c4h,00ah,08bh,0f8h,0ebh,043h
l89ca:
	db 0ffh,076h,00ch,0ffh,076h,00ah,0ffh,076h,008h,0ffh,076h,006h,0ffh,076h,004h
	call f825e_
	db 083h,0c4h,00ah,08bh,0f8h,0ebh,02ah
l89e3:
	db 0b8h,002h,000h,050h,056h,0a1h,0aah,04fh,005h,060h,000h,050h
	call get_bitfield_
	db 083h,0c4h,006h,08bh,0f8h,0ebh,014h
l89f9:
	db 03dh,000h,000h,074h,09dh,03dh,001h,000h,074h,0aeh,03dh,002h,000h,074h,0c2h,03dh
	db 003h,000h,074h,0d6h
l8a0d:
	db 0b8h,004h,000h,050h,056h,0a1h,0aah,04fh,005h,0f8h,001h,050h
	call get_bitfield_
	db 083h,0c4h,006h,089h,046h,0feh,0b8h,002h,000h,050h,056h,0a1h,0aah,04fh,005h,078h
	db 003h,050h
	call get_bitfield_
	db 083h,0c4h,006h,040h,040h,040h,0b9h,004h,000h,099h,0f7h,0f9h,089h,056h,0fch,03bh
	db 016h,09ah,04fh,075h,05eh,08bh,046h,0feh,0ebh,04ch,0bfh,005h,000h,0ebh,054h,0bfh
	db 006h,000h,0ebh,04fh,0bfh,008h,000h,0ebh,04ah,0bfh,009h,000h,0ebh,045h,0bfh,004h
	db 000h,0ebh,040h,0bfh,007h,000h,0ebh,03bh,0bfh,00ah,000h,0ebh,036h,0bfh,00bh,000h
	db 0ebh,031h,0bfh,00ch,000h,0ebh,02ch,0bfh,00dh,000h,0ebh,027h,0a4h,08ah,04bh,08ah
	db 050h,08ah,055h,08ah,05ah,08ah,0a4h,08ah,0a4h,08ah,05fh,08ah,064h,08ah,069h,08ah
	db 06eh,08ah,073h,08ah,078h,08ah
l8a97:
	db 03dh,00dh,000h,073h,008h,093h,0d1h,0e3h,02eh,0ffh,0a7h,07dh,08ah
l8aa4:
	db 08bh,0c7h,0e9h,085h,0feh
#endasm
