#asm
	public fdb60_
	extrn fd62c_:near
	extrn fd691_:near
	extrn fd6f6_:near
	extrn get_bitfield_:near
	extrn test_bit_:near
fdb60_:
	db 055h,08bh,0ech,083h,0c4h,0fch,057h,056h,083h,07eh,00eh,000h,074h,041h,0b8h,000h
	db 000h,050h,0ffh,076h,00eh,08dh,046h,00ch,050h,08dh,046h,00ah,050h,08dh,046h,008h
	db 050h,08dh,046h,006h,050h,08dh,046h,004h,050h
	call fd6f6_
	db 083h,0c4h,00eh,085h,0c0h,074h,01ch,083h,03eh,03ch,036h,00ah,074h,007h,083h,03eh
	db 03ch,036h,00ch,075h,009h
ldba1:
	db 0b8h,000h,000h
ldba4:
	db 05eh,05fh,08bh,0e5h,05dh,0c3h
ldbaa:
	db 0b8h,002h,000h,0ebh,0f5h
ldbaf:
	db 08bh,046h,00ch,0b9h,006h,000h,0d3h,0e0h,08bh,04eh,00ah,0d1h,0e1h,0d1h,0e1h,0d1h
	db 0e1h,003h,0c1h,08bh,0f0h,003h,046h,008h,08bh,0f0h,056h,0a1h,0aah,04fh,005h,03ah
	db 004h,050h
	call test_bit_
	db 083h,0c4h,004h,03dh,001h,000h,075h,02dh,0a1h,03ch,036h,0ebh,014h
ldbe1:
	db 083h,03eh,03ch,036h,00ch,075h,006h,083h,07eh,00ch,008h,07eh,005h
ldbee:
	db 0b8h,000h,000h,0ebh,0b1h
ldbf3:
	db 0ebh,014h
ldbf5:
	db 03dh,000h,000h,074h,0e7h,03dh,004h,000h,074h,0e2h,03dh,005h,000h,074h,0ddh,03dh
	db 00ch,000h,074h,0d8h
ldc09:
	db 0bfh,000h,000h,0a1h,09ah,04fh,0ebh,05eh
ldc11:
	db 0ffh,076h,00ch,0ffh,076h,00ah,0ffh,076h,008h,0ffh,076h,006h,0ffh,076h,004h
	call fd691_
	db 083h,0c4h,00ah,08bh,0f8h,0ebh,059h
ldc2a:
	db 0b8h,002h,000h,050h,056h,0a1h,0aah,04fh,005h,060h,000h,050h
	call get_bitfield_
	db 083h,0c4h,006h,08bh,0f8h,0ebh,043h
ldc40:
	db 0b8h,002h,000h,050h,056h,0a1h,0aah,04fh,005h,020h,001h,050h
	call get_bitfield_
	db 083h,0c4h,006h,08bh,0f8h,0ebh,02dh
ldc56:
	db 0ffh,076h,00ch,0ffh,076h,00ah,0ffh,076h,008h,0ffh,076h,006h,0ffh,076h,004h
	call fd62c_
	db 083h,0c4h,00ah,08bh,0f8h,0ebh,014h
ldc6f:
	db 03dh,000h,000h,074h,09dh,03dh,001h,000h,074h,0b1h,03dh,002h,000h,074h,0c2h,03dh
	db 003h,000h,074h,0d3h
ldc83:
	db 0b8h,004h,000h,050h,056h,0a1h,0aah,04fh,005h,0f8h,001h,050h
	call get_bitfield_
	db 083h,0c4h,006h,089h,046h,0feh,0b8h,002h,000h,050h,056h,0a1h,0aah,04fh,005h,078h
	db 003h,050h
	call get_bitfield_
	db 083h,0c4h,006h,040h,0b9h,004h,000h,099h,0f7h,0f9h,089h,056h,0fch,03bh,016h,09ah
	db 04fh,075h,05eh,08bh,046h,0feh,0ebh,04ch,0bfh,005h,000h,0ebh,054h,0bfh,006h,000h
	db 0ebh,04fh,0bfh,008h,000h,0ebh,04ah,0bfh,009h,000h,0ebh,045h,0bfh,004h,000h,0ebh
	db 040h,0bfh,007h,000h,0ebh,03bh,0bfh,00ah,000h,0ebh,036h,0bfh,00bh,000h,0ebh,031h
	db 0bfh,00ch,000h,0ebh,02ch,0bfh,00dh,000h,0ebh,027h,018h,0ddh,0bfh,0dch,0c4h,0dch
	db 0c9h,0dch,0ceh,0dch,018h,0ddh,018h,0ddh,0d3h,0dch,0d8h,0dch,0ddh,0dch,0e2h,0dch
	db 0e7h,0dch,0ech,0dch
ldd0b:
	db 03dh,00dh,000h,073h,008h,093h,0d1h,0e3h,02eh,0ffh,0a7h,0f1h,0dch
ldd18:
	db 08bh,0c7h,0e9h,087h,0feh
#endasm
