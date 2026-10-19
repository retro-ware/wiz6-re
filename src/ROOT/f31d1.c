#asm
	public resume_window_draw_
	extrn f3250_:near
resume_window_draw_:
	db 055h,08bh,0ech,083h,0ech,00ch,01eh,006h,056h,057h,08bh,076h,004h,080h,064h,005h
	db 0feh,08dh,03eh,0d2h,01bh,02eh,08bh,01dh,0bah,001h,000h
l31ec:
	db 03bh,0f3h,074h,010h,00bh,0dbh,075h,003h,0e9h,051h,000h
l31f7:
	db 083h,0c7h,002h,02eh,08bh,01dh,042h,0ebh,0ech
l3200:
	db 089h,07eh,0feh,089h,056h,0fch,08bh,05eh,0feh,02eh,08bh,037h
	call f3250_
	db 02eh,0a1h,060h,01bh,08eh,0d8h,08bh,046h,0f8h,0b3h,028h,0f6h,0e3h,003h,046h,0fah
	db 08bh,0f0h,08bh,05eh,0fch,08ah,0c3h,00ch,080h
l3228:
	db 056h,08bh,04eh,0f6h
l322c:
	db 08ah,024h,080h,0e4h,07fh,080h,0fch,000h,074h,004h,03ah,0e3h,07ch,002h
l323a:
	db 088h,004h
l323c:
	db 046h,0e2h,0edh,05eh,083h,0c6h,028h,0ffh,04eh,0f4h,075h,0e0h
l3248:
	db 05fh,05eh,007h,01fh,08bh,0e5h,05dh,0c3h
#endasm
