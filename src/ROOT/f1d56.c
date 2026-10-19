#asm
	public detect_video_adapter_
	extrn f1c9f_:near
detect_video_adapter_:
	db 0b4h,00fh,0cdh,010h,02eh,0a2h,04ch,01bh,08bh,046h,004h,025h,001h,000h,075h,01eh
	db 08bh,046h,004h,025h,002h,000h,075h,02fh,08bh,046h,004h,025h,004h,000h,074h,003h
	db 0e9h,08fh,000h
l1d79:
	db 08bh,046h,004h,025h,008h,000h,074h,016h,0e9h,028h,001h
l1d84:
	db 0b8h,000h,000h,01eh,08eh,0d8h,0bbh,087h,004h,08ah,007h,01fh,00ah,0c0h,074h,003h
	db 0e9h,0ceh,000h
l1d97:
	db 0c7h,046h,0feh,000h,000h,0c3h
l1d9d:
	db 02eh,080h,03eh,04ch,01bh,007h,075h,018h,0bah,0d4h,003h,0b0h,00fh,0eeh,042h,0ech
	db 086h,0e0h,0b0h,064h,0eeh,090h,090h,090h,0ech,03ch,064h,075h,048h,086h,0e0h,0eeh
l1dbd:
	db 02eh,0c6h,006h,04fh,01bh,000h,02eh,0c6h,006h,04eh,01bh,000h,02eh,0c6h,006h,050h
	db 01bh,000h,006h,02bh,0c0h,08eh,0c0h,026h,08ah,016h,010h,004h,02eh,088h,016h,04dh
	db 01bh,080h,0e2h,0cfh,080h,0cah,010h,026h,088h,016h,010h,004h,0b8h,004h,000h,0cdh
	db 010h,007h,0b4h,00bh,0bbh,001h,001h,0cdh,010h,0c7h,046h,0feh,002h,000h,0bbh,024h
	db 01fh,089h,05eh,0fch,0c3h
l1e02:
	db 0c7h,046h,0feh,000h,000h,0c3h
l1e08:
	db 0bah,0bah,003h,0ech,024h,080h,086h,0e0h,0b9h,088h,013h
l1e13:
	db 0ech,024h,080h,03ah,0c4h,075h,008h,0e2h,0f7h,0c7h,046h,0feh,000h,000h,0c3h
l1e22:
	db 02eh,0c6h,006h,04fh,01bh,001h,02eh,0c6h,006h,04eh,01bh,000h,02eh,0c6h,006h,050h
	db 01bh,000h
	call f1c9f_
	db 0c7h,046h,0feh,004h,000h,0bbh,02ch,01fh,089h,05eh,0fch,0c3h,000h,017h,011h,015h
	db 014h,016h,012h,013h,010h,007h,001h,005h,004h,006h,002h,003h,000h,000h,00fh,009h
	db 00dh,00ch,00eh,00ah,00bh,008h,007h,001h,005h,004h,006h,002h,003h,000h
l1e65:
	db 02eh,0c6h,006h,04fh,01bh,000h,02eh,0c6h,006h,050h,01bh,000h,02eh,0c6h,006h,04eh
	db 01bh,001h,006h,02bh,0c0h,08eh,0c0h,026h,08ah,016h,010h,004h,02eh,088h,016h,04dh
	db 01bh,080h,0e2h,0cfh,026h,088h,016h,010h,004h,007h,0b8h,00dh,000h,0cdh,010h,08ch
	db 0c8h,08eh,0c0h,0bah,043h,01eh,0b8h,002h,010h,0cdh,010h,0c7h,046h,0feh,001h,000h
	db 0bbh,01ch,01fh,089h,05eh,0fch,0c3h
l1eac:
	db 02eh,080h,03eh,04ch,01bh,007h,075h,018h,0bah,0d4h,003h,0b0h,00fh,0eeh,042h,0ech
	db 086h,0e0h,0b0h,064h,0eeh,090h,090h,090h,0ech,03ch,064h,075h,04dh,086h,0e0h,0eeh
l1ecc:
	db 02eh,0c6h,006h,04fh,01bh,000h,02eh,0c6h,006h,04eh,01bh,000h,02eh,0c6h,006h,050h
	db 01bh,001h,006h,02bh,0c0h,08eh,0c0h,026h,08ah,016h,010h,004h,02eh,088h,016h,04dh
	db 01bh,080h,0e2h,0cfh,080h,0cah,010h,026h,088h,016h,010h,004h,0b8h,009h,000h,0cdh
	db 010h,007h,08ch,0c8h,08eh,0c0h,0bah,054h,01eh,0b8h,002h,010h,0cdh,010h,0c7h,046h
	db 0feh,008h,000h,0bbh,035h,01fh,089h,05eh,0fch,0c3h
l1f16:
	db 0c7h,046h,0feh,000h,000h,0c3h,065h,067h,061h,02eh,064h,072h,076h,000h,063h,067h
	db 061h,02eh,064h,072h,076h,000h,068h,065h,072h,063h,02eh,064h,072h,076h,000h,074h
	db 061h,06eh,064h,079h,02eh,064h,072h,076h,000h,000h,000h
#endasm
