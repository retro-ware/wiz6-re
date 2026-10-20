/* Choose an action and target for each monster of a group (attack, spell, breath). */
#asm
	public choose_group_actions_
	extrn find_most_wounded_:near
	extrn pick_random_row_:near
	extrn pick_random_set_bit_:near
	extrn random_:near
choose_group_actions_:
	db 055h,08bh,0ech,083h,0c4h,0e6h,056h,0c7h,046h,0feh,000h,000h,0e9h,098h,005h
l848f:
	db 0b8h,02ch,000h,0f7h,06eh,0feh,08bh,0c8h,08bh,046h,004h,0d1h,0e0h,08bh,0d8h,08bh
	db 087h,0a8h,043h,003h,0c1h,089h,046h,0f8h,0b8h,00ah,000h,050h
	call random_
	db 059h,050h,0b8h,02ch,000h,0f7h,06eh,0feh,08bh,0f0h,08bh,046h,004h,0d1h,0e0h,08bh
	db 0d8h,08bh,09fh,0a8h,043h,08ah,040h,029h,098h,08bh,0c8h,058h,003h,0c1h,050h,08bh
	db 046h,004h,0d1h,0e0h,08bh,0d8h,08bh,09fh,0b6h,043h,08ah,087h,0d3h,000h,02ah,0e4h
	db 08bh,0c8h,058h,003h,0c1h,089h,046h,0f6h,03dh,001h,000h,07dh,005h,0c7h,046h,0f6h
	db 001h,000h
l84f0:
	db 08bh,046h,0f6h,050h,08ah,087h,0d5h,000h,02ah,0e4h,08bh,0c8h,058h,099h,0f7h,0f9h
	db 089h,046h,0f4h,08ah,087h,0dch,000h,02ah,0e4h,0a9h,002h,000h,074h,007h,08bh,05eh
	db 0f8h,0c6h,047h,024h,001h
l8515:
	db 08bh,05eh,0f8h,080h,07fh,024h,000h,076h,031h,08bh,046h,0f6h,0b9h,002h,000h,099h
	db 0f7h,0f9h,050h
	call random_
	db 059h,050h,0b8h,014h,000h,050h
	call random_
	db 059h,08bh,0c8h,058h,003h,0c1h,050h,08bh,046h,0f6h,0b9h,002h,000h,099h,0f7h,0f9h
	db 08bh,0c8h,058h,003h,0c1h,08bh,05eh,0f8h,088h,047h,025h
l854f:
	db 08bh,05eh,0f8h,0c6h,047h,021h,000h,0ffh,076h,004h
	call pick_random_row_
	db 059h,08bh,05eh,0f8h,088h,047h,01ch,0c7h,046h,0eah,000h,000h
l8568:
	db 0ffh,076h,004h
	call pick_random_row_
	db 059h,08bh,05eh,0f8h,088h,047h,01dh,0ffh,046h,0eah,08bh,05eh,0f8h,08ah,047h,01dh
	db 08ah,04fh,01ch,03ah,0c1h,075h,006h,083h,07eh,0eah,003h,07ch,0ddh
l858b:
	db 0c7h,046h,0f2h,000h,000h
l8590:
	db 08bh,046h,004h,0d1h,0e0h,08bh,0d8h,08bh,09fh,0b6h,043h,08ah,087h,0d5h,000h,02ah
	db 0e4h,03bh,046h,0f2h,07eh,015h,08bh,05eh,0f8h,080h,07fh,022h,002h,073h,00ch,080h
	db 07fh,011h,000h,077h,006h,080h,07fh,010h,000h,076h,00ch
l85bb:
	db 08bh,05eh,0f8h,08bh,076h,0f2h,0c6h,040h,018h,000h,0ebh,012h
l85c7:
	db 08ah,046h,0f6h,08bh,05eh,0f8h,08bh,076h,0f2h,088h,040h,018h,08bh,046h,0f4h,029h
	db 046h,0f6h
l85d9:
	db 0ffh,046h,0f2h,08bh,046h,0f2h,03dh,004h,000h,07ch,0ach,0c7h,046h,0e8h,0ffh,0ffh
	db 08ah,046h,006h,08bh,05eh,0f8h,088h,047h,01fh
l85f2:
	db 08bh,046h,006h,0d1h,0e0h,08bh,0d8h,08bh,09fh,0a8h,043h,08ah,087h,09dh,001h,02ah
	db 0e4h,050h
	call random_
	db 059h,08bh,05eh,0f8h,088h,047h,020h,08bh,05eh,0f8h,08ah,047h,020h,02ah,0e4h,0b9h
	db 02ch,000h,0f7h,0e9h,08bh,0f0h,08ah,047h,01fh,02ah,0e4h,0d1h,0e0h,08bh,0d8h,08bh
	db 09fh,0a8h,043h,080h,078h,022h,003h,073h,0c2h,0b8h,064h,000h,050h
	call random_
	db 059h,050h,08bh,046h,004h,0d1h,0e0h,08bh,0d8h,08bh,09fh,0b6h,043h,08ah,087h,0a8h
	db 000h,02ah,0e4h,08bh,0c8h,058h,03bh,0c1h,07ch,003h,0e9h,037h,001h
l8654:
	db 0c7h,046h,0e8h,003h,000h,08bh,05eh,0f8h,0c6h,047h,01eh,003h,0b8h,064h,000h,050h
	call random_
	db 059h,089h,046h,0eeh,0c7h,046h,0eah,005h,000h,0c7h,046h,0f0h,000h,000h,0c7h,046h
	db 0e6h,0ffh,0ffh
l867a:
	db 08bh,046h,0eeh,03bh,046h,0eah,07dh,017h,08bh,046h,004h,0d1h,0e0h,08bh,0d8h,08bh
	db 09fh,0b6h,043h,08bh,076h,0f0h,08ah,080h,08ah,000h,02ah,0e4h,089h,046h,0e6h
l8699:
	db 0ffh,046h,0f0h,083h,07eh,0eah,00fh,07dh,006h,083h,046h,0eah,005h,0ebh,010h
l86a8:
	db 083h,07eh,0eah,037h,07dh,006h,083h,046h,0eah,00ah,0ebh,004h
l86b4:
	db 083h,046h,0eah,00fh
l86b8:
	db 083h,07eh,0e6h,0ffh,074h,0bch,08bh,046h,0e6h,08bh,0d0h,0d1h,0e0h,003h,0c2h,0d1h
	db 0e0h,08bh,0d8h,080h,0bfh,0e2h,000h,001h,075h,05bh,083h,07eh,004h,006h,075h,029h
	db 0b8h,000h,000h,050h,0ffh,076h,0f8h
	call find_most_wounded_
	db 083h,0c4h,004h,085h,0c0h,075h,016h,0b8h,006h,000h,050h,0ffh,076h,0f8h
	call find_most_wounded_
	db 083h,0c4h,004h,085h,0c0h,075h,005h,0c7h,046h,0e8h,0ffh,0ffh
l86ff:
	db 0ebh,02ch
l8701:
	db 0ffh,076h,004h,0ffh,076h,0f8h
	call find_most_wounded_
	db 083h,0c4h,004h,085h,0c0h,075h,01ch,0ffh,036h,060h,043h
	call random_
	db 059h,040h,050h,0ffh,076h,0f8h
	call find_most_wounded_
	db 083h,0c4h,004h,085h,0c0h,075h,005h,0c7h,046h,0e8h,0ffh,0ffh
l872d:
	db 08bh,046h,0e6h,08bh,0d0h,0d1h,0e0h,003h,0c2h,0d1h,0e0h,08bh,0d8h,08ah,087h,0dfh
	db 000h,02ah,0e4h,08bh,0c8h,08bh,05eh,0f8h,08bh,007h,02bh,0c1h,040h,089h,046h,0eeh
	db 0b8h,001h,000h,08bh,04eh,0eeh,083h,0f9h,001h,07ch,00ch,08bh,0c1h,050h,03dh,006h
	db 000h,058h,07eh,003h,0b8h,006h,000h
l8764:
	db 089h,046h,0eeh
l8767:
	db 08bh,05eh,0f8h,0ffh,037h
	call random_
	db 059h,040h,03bh,046h,0eeh,07dh,005h,0ffh,04eh,0eeh,0ebh,0ech
l877b:
	db 08bh,046h,0eeh,086h,0e0h,02ah,0c0h,003h,046h,0e6h,08bh,05eh,0f8h,089h,047h,00ah
l878b:
	db 083h,07eh,0e8h,0ffh,075h,044h,0b8h,064h,000h,050h
	call random_
	db 059h,050h,08bh,046h,004h,0d1h,0e0h,08bh,0d8h,08bh,09fh,0b6h,043h,08ah,087h,0aah
	db 000h,02ah,0e4h,08bh,0c8h,058h,03bh,0c1h,07dh,023h,0c7h,046h,0e8h,008h,000h,08bh
	db 05eh,0f8h,0c6h,047h,01eh,008h,08bh,046h,004h,0d1h,0e0h,08bh,0d8h,08bh,09fh,0b6h
	db 043h,08ah,087h,0d8h,000h,02ah,0e4h,08bh,05eh,0f8h,089h,047h,00ah
l87d5:
	db 083h,07eh,0e8h,0ffh,074h,003h,0e9h,07ah,001h
l87de:
	db 0c7h,046h,0eeh,000h,000h,08bh,05eh,0f8h,080h,07fh,022h,002h,072h,003h,0e9h,080h
	db 000h
l87ef:
	db 080h,07fh,011h,000h,074h,003h,0e9h,077h,000h
l87f8:
	db 080h,07fh,010h,000h,074h,003h,0e9h,06eh,000h
l8801:
	db 08ah,047h,01ch,02ah,0e4h,089h,046h,0ech,083h,07eh,004h,006h,075h,007h,0c7h,046h
	db 0eeh,009h,000h,0ebh,059h
l8816:
	db 083h,07eh,004h,003h,07ch,01bh,08bh,046h,004h,0d1h,0e0h,08bh,0d8h,08bh,09fh,0b6h
	db 043h,08bh,046h,0ech,0b9h,004h,000h,0d3h,0e0h,08bh,0f0h,080h,078h,051h,001h,076h
	db 038h
l8837:
	db 0c7h,046h,0eeh,003h,000h,0b8h,002h,000h,083h,07eh,004h,003h,07dh,003h,0b8h,000h
	db 000h
l8848:
	db 050h,08bh,046h,004h,0d1h,0e0h,08bh,0d8h,08bh,09fh,0b6h,043h,08bh,046h,0ech,0b9h
	db 004h,000h,0d3h,0e0h,08bh,0f0h,08ah,040h,051h,02ah,0e4h,08bh,0c8h,058h,03bh,0c1h
	db 07dh,005h,0c7h,046h,0eeh,006h,000h
l886f:
	db 08bh,046h,006h,0d1h,0e0h,08bh,0d8h,08bh,09fh,0a8h,043h,08ah,087h,09dh,001h,02ah
	db 0e4h,03bh,046h,0eeh,07dh,003h,089h,046h,0eeh
l8888:
	db 0c7h,046h,0f0h,000h,000h,0c7h,046h,0eah,000h,000h,0ebh,01fh
l8894:
	db 0b8h,02ch,000h,0f7h,06eh,0eah,08bh,0f0h,08bh,046h,006h,0d1h,0e0h,08bh,0d8h,08bh
	db 09fh,0a8h,043h,080h,078h,022h,003h,073h,003h,0ffh,046h,0f0h
l88b0:
	db 0ffh,046h,0eah
l88b3:
	db 08bh,046h,0eah,03bh,046h,0eeh,07ch,0d9h,083h,07eh,0f0h,000h,07fh,003h,0e9h,08dh
	db 000h
l88c4:
	db 08bh,05eh,0f8h,0c6h,047h,01eh,000h,08ah,046h,006h,08bh,05eh,0f8h,088h,047h,01fh
	db 0ffh,076h,0f0h
	call random_
	db 059h,08bh,05eh,0f8h,088h,047h,020h,08bh,05eh,0f8h,08ah,047h,01ch,02ah,0e4h,089h
	db 046h,0ech,08bh,046h,004h,0d1h,0e0h,08bh,0d8h,08bh,09fh,0b6h,043h,08bh,076h,0ech
	db 080h,0b8h,080h,000h,002h,075h,00ah,08bh,05eh,0f8h,0c7h,047h,00ah,004h,000h,0ebh
	db 044h
l890b:
	db 08bh,046h,004h,0d1h,0e0h,08bh,0d8h,08bh,09fh,0b6h,043h,08bh,076h,0ech,080h,0b8h
	db 080h,000h,003h,075h,00ah,08bh,05eh,0f8h,0c7h,047h,00ah,008h,000h,0ebh,025h
l892a:
	db 08bh,046h,004h,0d1h,0e0h,08bh,0d8h,08bh,087h,0b6h,043h,08bh,056h,0ech,0b9h,004h
	db 000h,0d3h,0e2h,08bh,0cah,003h,0c1h,005h,053h,000h,050h
	call pick_random_set_bit_
	db 059h,08bh,05eh,0f8h,089h,047h,00ah
l894f:
	db 0ebh,007h
l8951:
	db 08bh,05eh,0f8h,0c6h,047h,018h,000h
l8958:
	db 08bh,05eh,0f8h,0c7h,047h,00ch,0ffh,0ffh,08bh,05eh,0f8h,080h,07fh,01eh,000h,074h
	db 003h,0e9h,09eh,000h
l896c:
	db 08ah,047h,01dh,02ah,0e4h,089h,046h,0ech,083h,07eh,004h,003h,07ch,01bh,08bh,046h
	db 004h,0d1h,0e0h,08bh,0d8h,08bh,09fh,0b6h,043h,08bh,046h,0ech,0b9h,004h,000h,0d3h
	db 0e0h,08bh,0f0h,080h,078h,051h,001h,076h,065h
l8995:
	db 08bh,046h,004h,0d1h,0e0h,08bh,0d8h,08bh,09fh,0b6h,043h,08bh,076h,0ech,080h,0b8h
	db 080h,000h,002h,075h,00ah,08bh,05eh,0f8h,0c7h,047h,00ch,004h,000h,0ebh,044h
l89b4:
	db 08bh,046h,004h,0d1h,0e0h,08bh,0d8h,08bh,09fh,0b6h,043h,08bh,076h,0ech,080h,0b8h
	db 080h,000h,003h,075h,00ah,08bh,05eh,0f8h,0c7h,047h,00ch,008h,000h,0ebh,025h
l89d3:
	db 08bh,046h,004h,0d1h,0e0h,08bh,0d8h,08bh,087h,0b6h,043h,08bh,056h,0ech,0b9h,004h
	db 000h,0d3h,0e2h,08bh,0cah,003h,0c1h,005h,053h,000h,050h
	call pick_random_set_bit_
	db 059h,08bh,05eh,0f8h,089h,047h,00ch
l89f8:
	db 0ebh,00eh
l89fa:
	db 08bh,05eh,0f8h,0c6h,047h,019h,000h,08bh,05eh,0f8h,0c6h,047h,01bh,000h
l8a08:
	db 0ebh,01ah
l8a0a:
	db 0c7h,046h,0fch,001h,000h
l8a0f:
	db 08bh,05eh,0f8h,08bh,076h,0fch,0c6h,040h,018h,000h,0ffh,046h,0fch,08bh,046h,0fch
	db 03dh,004h,000h,07ch,0ebh
l8a24:
	db 0ffh,046h,0feh
l8a27:
	db 08bh,046h,004h,0d1h,0e0h,08bh,0d8h,08bh,09fh,0a8h,043h,08ah,087h,09dh,001h,02ah
	db 0e4h,03bh,046h,0feh,07eh,003h,0e9h,04fh,0fah
l8a40:
	db 05eh,08bh,0e5h,05dh,0c3h
#endasm
