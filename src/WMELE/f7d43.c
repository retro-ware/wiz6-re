/* Return the wall type on the right of the cell. */
#asm
	public get_right_wall_
	extrn f7652_:near
	extrn f76b7_:near
	extrn get_bitfield_:near
	extrn step_in_facing_:near
	extrn test_bit_:near
get_right_wall_:
	db 055h,08bh,0ech,083h,0c4h,0fch,057h,056h,083h,07eh,00eh,000h,074h,041h,0b8h,000h
	db 000h,050h,0ffh,076h,00eh,08dh,046h,00ch,050h,08dh,046h,00ah,050h,08dh,046h,008h
	db 050h,08dh,046h,006h,050h,08dh,046h,004h,050h
	call step_in_facing_
	db 083h,0c4h,00eh,085h,0c0h,074h,01ch,083h,03eh,03ch,036h,00ah,074h,007h,083h,03eh
	db 03ch,036h,00ch,075h,009h
l7d84:
	db 0b8h,000h,000h
l7d87:
	db 05eh,05fh,08bh,0e5h,05dh,0c3h
l7d8d:
	db 0b8h,002h,000h,0ebh,0f5h
l7d92:
	db 08bh,046h,00ch,0b9h,006h,000h,0d3h,0e0h,08bh,04eh,00ah,0d1h,0e1h,0d1h,0e1h,0d1h
	db 0e1h,003h,0c1h,08bh,0f0h,003h,046h,008h,08bh,0f0h,056h,0a1h,0aah,04fh,005h,03ah
	db 004h,050h
	call test_bit_
	db 083h,0c4h,004h,03dh,001h,000h,075h,02dh,0a1h,03ch,036h,0ebh,014h
l7dc4:
	db 083h,03eh,03ch,036h,00ch,075h,006h,083h,07eh,00ch,008h,07eh,005h
l7dd1:
	db 0b8h,000h,000h,0ebh,0b1h
l7dd6:
	db 0ebh,014h
l7dd8:
	db 03dh,000h,000h,074h,0e7h,03dh,004h,000h,074h,0e2h,03dh,005h,000h,074h,0ddh,03dh
	db 00ch,000h,074h,0d8h
l7dec:
	db 0bfh,000h,000h,0a1h,09ah,04fh,0ebh,05eh
l7df4:
	db 0b8h,002h,000h,050h,056h,0a1h,0aah,04fh,005h,020h,001h,050h
	call get_bitfield_
	db 083h,0c4h,006h,08bh,0f8h,0ebh,05ch
l7e0a:
	db 0ffh,076h,00ch,0ffh,076h,00ah,0ffh,076h,008h,0ffh,076h,006h,0ffh,076h,004h
	call f7652_
	db 083h,0c4h,00ah,08bh,0f8h,0ebh,043h
l7e23:
	db 0ffh,076h,00ch,0ffh,076h,00ah,0ffh,076h,008h,0ffh,076h,006h,0ffh,076h,004h
	call f76b7_
	db 083h,0c4h,00ah,08bh,0f8h,0ebh,02ah
l7e3c:
	db 0b8h,002h,000h,050h,056h,0a1h,0aah,04fh,005h,060h,000h,050h
	call get_bitfield_
	db 083h,0c4h,006h,08bh,0f8h,0ebh,014h
l7e52:
	db 03dh,000h,000h,074h,09dh,03dh,001h,000h,074h,0aeh,03dh,002h,000h,074h,0c2h,03dh
	db 003h,000h,074h,0d6h
l7e66:
	db 0b8h,004h,000h,050h,056h,0a1h,0aah,04fh,005h,0f8h,001h,050h
	call get_bitfield_
	db 083h,0c4h,006h,089h,046h,0feh,0b8h,002h,000h,050h,056h,0a1h,0aah,04fh,005h,078h
	db 003h,050h
	call get_bitfield_
	db 083h,0c4h,006h,040h,040h,040h,0b9h,004h,000h,099h,0f7h,0f9h,089h,056h,0fch,03bh
	db 016h,09ah,04fh,075h,05eh,08bh,046h,0feh,0ebh,04ch,0bfh,005h,000h,0ebh,054h,0bfh
	db 006h,000h,0ebh,04fh,0bfh,008h,000h,0ebh,04ah,0bfh,009h,000h,0ebh,045h,0bfh,004h
	db 000h,0ebh,040h,0bfh,007h,000h,0ebh,03bh,0bfh,00ah,000h,0ebh,036h,0bfh,00bh,000h
	db 0ebh,031h,0bfh,00ch,000h,0ebh,02ch,0bfh,00dh,000h,0ebh,027h,0fdh,07eh,0a4h,07eh
	db 0a9h,07eh,0aeh,07eh,0b3h,07eh,0fdh,07eh,0fdh,07eh,0b8h,07eh,0bdh,07eh,0c2h,07eh
	db 0c7h,07eh,0cch,07eh,0d1h,07eh
l7ef0:
	db 03dh,00dh,000h,073h,008h,093h,0d1h,0e3h,02eh,0ffh,0a7h,0d6h,07eh
l7efd:
	db 08bh,0c7h,0e9h,085h,0feh
#endasm
