#asm
	public f4b36_
	extrn f011a_:near
	extrn f02d2_:near
	extrn f075b_:near
	extrn f4a03_:near
	extrn f4a31_:near
f4b36_:
	db 055h,08bh,0ech,083h,0c4h,0b0h,0c7h,006h,032h,050h,000h,000h,0c7h,006h,030h,050h
	db 000h,000h,0b8h,001h,000h,050h,0b8h,000h,000h,050h,0b8h,0ffh,0ffh,050h,0b8h,014h
	db 000h,050h,0b8h,005h,000h,050h,0b8h,028h,000h,050h,0b8h,013h,000h,050h,0b8h,000h
	db 000h,050h
	call f011a_
	db 083h,0c4h,010h,0a3h,02eh,050h
l4b71:
	db 08dh,046h,0b0h,050h,0ffh,076h,004h
	call f075b_
	db 083h,0c4h,004h,083h,03eh,042h,030h,000h,075h,010h,0ffh,076h,006h,08dh,046h,0b0h
	db 050h
	call f4a31_
	db 083h,0c4h,004h,0ffh,046h,004h
l4b95:
	db 083h,03eh,042h,030h,000h,074h,0d5h,0ffh,076h,006h
	call f4a03_
	db 059h,0b8h,000h,000h,050h,0ffh,036h,02eh,050h
	call f02d2_
	db 083h,0c4h,004h,08bh,0e5h,05dh,0c3h
#endasm
