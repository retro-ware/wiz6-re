#asm
	public fc3eb_
	extrn fc282_:near
	extrn fc2bf_:near
	extrn strcpy_:near
	extrn strlen_:near
	extrn strncpy_:near
fc3eb_:
	db 055h,08bh,0ech,081h,0c4h,058h,0ffh,056h,0ffh,076h,004h,08dh,046h,0aeh,050h
	call strcpy_
	db 083h,0c4h,004h,0c7h,086h,058h,0ffh,000h,000h,0c7h,086h,05ch,0ffh,000h,000h
lc40c:
	db 08bh,09eh,05ch,0ffh,003h,0ddh,080h,07fh,0aeh,020h,075h,006h,0ffh,086h,05ch,0ffh
	db 0ebh,0eeh
lc41e:
	db 0ffh,0b6h,05ch,0ffh,08dh,046h,0aeh,050h
	call fc282_
	db 083h,0c4h,004h,089h,086h,05ah,0ffh,03dh,0ffh,0ffh,074h,075h,02bh,086h,05ch,0ffh
	db 050h,08bh,086h,05ch,0ffh,08dh,04eh,0aeh,003h,0c1h,050h,08dh,086h,05eh,0ffh,050h
	call strncpy_
	db 083h,0c4h,006h,08bh,086h,05ah,0ffh,02bh,086h,05ch,0ffh,08bh,0d8h,003h,0ddh,0c6h
	db 087h,05eh,0ffh,020h,0c6h,087h,05fh,0ffh,000h,08dh,086h,05eh,0ffh,050h
	call fc2bf_
	db 059h,0c7h,046h,0feh,000h,000h,0ebh,01ah
lc475:
	db 08bh,05eh,0feh,003h,0ddh,08ah,087h,05eh,0ffh,08bh,08eh,058h,0ffh,003h,04eh,0feh
	db 08bh,0f1h,08bh,05eh,004h,088h,000h,0ffh,046h,0feh
lc48f:
	db 08dh,086h,05eh,0ffh,050h
	call strlen_
	db 059h,03bh,046h,0feh,07fh,0d8h,08dh,086h,05eh,0ffh,050h
	call strlen_
	db 059h,001h,086h,058h,0ffh
lc4aa:
	db 08bh,086h,05ah,0ffh,089h,086h,05ch,0ffh,03dh,0ffh,0ffh,074h,003h,0e9h,052h,0ffh
lc4ba:
	db 08bh,05eh,004h,08bh,0b6h,058h,0ffh,0c6h,000h,000h,05eh,08bh,0e5h,05dh,0c3h
#endasm
