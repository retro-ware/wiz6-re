#asm
	public fc16d_
	extrn char_index_:near
	extrn fbea1_:near
	extrn get_message_:near
	extrn random_:near
	extrn strcpy_:near
	extrn strncpy_:near
fc16d_:
	db 055h,08bh,0ech,081h,0c4h,07ah,0ffh,056h,08dh,046h,0b0h,050h,0ffh,036h,0b6h,051h
	call get_message_
	db 083h,0c4h,004h,08ah,046h,0b0h,02ah,0e4h,089h,086h,07ch,0ffh,08ah,046h,0b1h,02ah
	db 0e4h,089h,086h,07ah,0ffh,0c7h,046h,0ach,000h,000h,0c7h,046h,0aah,002h,000h
lc19f:
	db 0b8h,02fh,000h,050h,08bh,046h,0aah,08dh,04eh,0b0h,003h,0c1h,050h
	call char_index_
	db 083h,0c4h,004h,089h,046h,0aeh,03dh,0ffh,0ffh,074h,01bh,08bh,046h,0aah,08bh,04eh
	db 0ach,0d1h,0e1h,08bh,0d9h,003h,0ddh,089h,047h,082h,003h,046h,0aeh,040h,089h,046h
	db 0aah,0ffh,046h,0ach,0ebh,0cah
lc1d5:
	db 08bh,046h,0aah,08bh,04eh,0ach,0d1h,0e1h,08bh,0d9h,003h,0ddh,089h,047h,082h,083h
	db 07eh,006h,000h,075h,01dh,08bh,046h,0ach,03bh,086h,07ch,0ffh,07eh,007h,08bh,086h
	db 07ch,0ffh,089h,046h,0ach
lc1fa:
	db 0ffh,076h,0ach
	call random_
	db 059h,089h,086h,07eh,0ffh,0ebh,01ah
lc207:
	db 08bh,086h,07ah,0ffh,029h,046h,0ach,0ffh,076h,0ach
	call random_
	db 059h,08bh,0c8h,08bh,086h,07ah,0ffh,003h,0c8h,089h,08eh,07eh,0ffh
lc221:
	db 08bh,086h,07eh,0ffh,0d1h,0e0h,08bh,0d8h,003h,0ddh,08bh,047h,084h,08bh,04fh,082h
	db 02bh,0c1h,089h,046h,0aeh,050h,08bh,0c1h,08dh,04eh,0b0h,003h,0c1h,050h,0ffh,076h
	db 004h
	call strncpy_
	db 083h,0c4h,006h,08bh,05eh,004h,08bh,076h,0aeh,0c6h,040h,0ffh,000h,0ffh,076h,004h
	db 08dh,046h,0b0h,050h
	call strcpy_
	db 083h,0c4h,004h,08bh,05eh,0aeh,003h,0ddh,0c6h,047h,0afh,020h,0c6h,047h,0b0h,000h
	db 0b8h,096h,058h,050h,08dh,046h,0b0h,050h
	call fbea1_
	db 083h,0c4h,004h,0a3h,094h,058h,05eh,08bh,0e5h,05dh,0c3h
#endasm
