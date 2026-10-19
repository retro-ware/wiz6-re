/* PC-speaker/timer sound player (programs PIT and hooks IRQ0). */
#asm
	public sound_driver_
	extrn f173d_:near
	extrn f17fe_:near
sound_driver_:
	db 055h,08bh,0ech,057h,056h,006h,01eh,052h,053h,080h,07eh,010h,0ffh,074h,00ah,02eh
	db 0a0h,056h,017h,088h,046h,011h,0e9h,018h,001h
l147b:
	db 0b4h,000h,0cdh,013h,033h,0c0h,08eh,0c0h,0e4h,021h,02eh,0a2h,05dh,017h,0b0h,0feh
	db 0e6h,021h,02eh,0c6h,006h,060h,017h,000h,0fah,033h,0c0h,08eh,0c0h,0bfh,020h,000h
	db 026h,08bh,005h,02eh,0a3h,0ceh,019h,0b8h,088h,018h,0abh,026h,08bh,005h,02eh,0a3h
	db 0cch,019h,08ch,0c8h,0abh,0fbh,02eh,0c6h,006h,0d2h,019h,0ffh,02eh,0a1h,00ch,01ah
l14bb:
	db 02eh,03bh,006h,00ch,01ah,074h,0f9h,02eh,0a1h,00ch,01ah,033h,0c9h
l14c8:
	db 041h,074h,027h,02eh,03bh,006h,00ch,01ah,074h,0f6h,081h,0f9h,000h,080h,077h,006h
	db 02eh,0c6h,006h,0d2h,019h,000h
l14de:
	db 081h,0f9h,000h,045h,077h,00eh,02eh,0feh,006h,060h,017h,081h,0f9h,000h,010h,02eh
	db 0feh,006h,060h,017h
l14f2:
	db 0fah,0b8h,000h,000h,08eh,0c0h,0bfh,020h,000h,02eh,0a1h,0ceh,019h,0abh,02eh,0a1h
	db 0cch,019h,0abh,0fbh,02eh,0a0h,05dh,017h,0e6h,021h,08ah,046h,011h,02eh,0a2h,056h
	db 017h,03ch,004h,074h,073h,03ch,003h,074h,004h,03ch,002h,075h,062h
l151f:
	db 08bh,046h,00ch,02eh,0a3h,057h,017h,040h,02eh,0a3h,059h,017h,040h,080h,07eh,011h
	db 002h,074h,006h,005h,00dh,000h,0feh,04eh,011h
l1538:
	db 02eh,0a3h,05bh,017h,02eh,08bh,016h,057h,017h,0b0h,007h,0eeh,02eh,08bh,016h,059h
	db 017h,0ech,00ch,0c0h,0eeh,02eh,08bh,016h,057h,017h,0b0h,00ah,0eeh,02eh,08bh,016h
	db 059h,017h,0ech,00ch,010h,0eeh,02eh,08bh,016h,057h,017h,0b0h,00fh,0eeh,02eh,08bh
	db 016h,059h,017h,0b0h,070h,0eeh,02eh,08bh,016h,057h,017h,0b0h,00eh,0eeh,02eh,08bh
	db 016h,059h,017h,0b0h,080h,0eeh,0e9h,0b3h,001h
l1581:
	db 080h,07eh,011h,001h,074h,009h,0e9h,006h,000h
l158a:
	db 02eh,0c6h,006h,056h,017h,001h
l1590:
	db 0e9h,0a1h,001h
l1593:
	db 080h,07eh,00eh,000h,075h,00bh
l1599:
	db 02eh,0f6h,006h,064h,017h,0ffh,074h,0f8h,0e9h,09dh,001h
l15a4:
	db 0f6h,046h,010h,002h,074h,00bh,02eh,0f6h,006h,064h,017h,0ffh,075h,003h,0e9h,07fh
	db 001h
l15b5:
	db 02eh,0f6h,006h,064h,017h,0ffh,075h,003h,0e9h,05fh,000h
l15c0:
	db 0e4h,021h,02eh,0a2h,05dh,017h,0fah,033h,0c0h,08eh,0c0h,0bfh,020h,000h,026h,08bh
	db 005h,02eh,0a3h,0ceh,019h,0bah,06ah,019h,080h,07eh,011h,000h,074h,00ch,0bah,001h
	db 019h,080h,07eh,011h,001h,074h,003h,0bah,047h,019h
l15ea:
	db 02eh,0f6h,006h,060h,017h,002h,075h,020h,0bah,008h,01ah,02eh,080h,03eh,0d2h,019h
	db 000h,074h,003h,0bah,0d4h,019h
l1600:
	db 080h,07eh,011h,000h,074h,00ch,0bah,0c3h,018h,080h,07eh,011h,001h,074h,003h,0bah
	db 019h,019h
l1612:
	db 08bh,0c2h,0abh,026h,08bh,005h,02eh,0a3h,0cch,019h,08ch,0c8h,0abh
l161f:
	db 02eh,080h,03eh,056h,017h,000h,075h,006h,0e4h,061h,00ch,003h,0e6h,061h
l162d:
	call f17fe_
	db 0b0h,090h,0e6h,043h
	call f173d_
	db 0b0h,000h,0e6h,042h,0b0h,034h,0e6h,043h
	call f173d_
	db 0e4h,040h,08ah,0e0h
	call f173d_
	db 0e4h,040h,086h,0e0h,02eh,0a3h,0d0h,019h,0b0h,034h,0e6h,043h,0b0h,048h,02eh,0f6h
	db 006h,060h,017h,0ffh,075h,002h,0b0h,024h
l1661:
	db 0e6h,040h
	call f173d_
	db 032h,0c0h,0e6h,040h,0b0h,0feh,0e6h,021h,08bh,046h,004h,003h,046h,00ah,0b1h,004h
	db 0d3h,0e8h,003h,046h,006h,02dh,000h,010h,08eh,0c0h,08eh,0d8h,02eh,0a3h,00ch,01ah
	db 02eh,0a3h,0d8h,019h,02eh,0a3h,0c8h,018h,02eh,0a3h,01eh,019h,08bh,046h,00ah,02bh
	db 046h,008h,0f7h,0d8h,024h,0feh,08bh,0f8h,08bh,0d8h,02eh,0a3h,016h,01ah,02eh,0a3h
	db 0e2h,019h,02eh,0a3h,0cdh,018h,02eh,0a3h,023h,019h,0b0h,0ffh,02ah,046h,00ch,02eh
	db 0f6h,006h,060h,017h,0ffh,075h,002h,0d0h,0e8h
l16bf:
	db 02eh,0a2h,028h,01ah,02eh,0a2h,0f7h,019h,02eh,0a2h,07dh,019h,02eh,0a2h,0ddh,018h
	db 02eh,0a2h,00eh,019h,02eh,0a2h,035h,019h,02eh,0a2h,056h,019h,08ch,0d0h,02eh,0a3h
	db 05eh,017h,08ch,0c8h,08eh,0d8h,0bbh,04bh,01ah,02eh,0c6h,006h,064h,017h,000h,02eh
	db 0f6h,006h,060h,017h,002h,074h,022h,0b0h,0feh,0e6h,021h,08ch,0c0h,08eh,0d8h,0bah
	db 042h,000h,0b9h,0b0h,020h,0fbh,0f4h,0fbh,02eh,0f6h,006h,064h,017h,0ffh,074h,0f6h
	db 02eh,0a0h,05dh,017h,0e6h,021h,0e9h,01ch,000h
l1718:
	db 0b0h,0feh,0e6h,021h,02eh,0a0h,05dh,017h,024h,0feh,0e6h,021h,0fbh,0f6h,046h,010h
	db 001h,074h,009h,0f4h,02eh,0f6h,006h,064h,017h,0ffh,074h,0f7h
l1734:
	db 05bh,05ah,01fh,007h,05eh,05fh,05dh,0fbh,0c3h
#endasm
