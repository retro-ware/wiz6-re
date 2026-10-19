#asm
	public f5c61_
	extrn f011a_:near
	extrn f02d2_:near
	extrn f075b_:near
	extrn f3118_:near
	extrn f31d1_:near
	extrn f5af3_:near
	extrn f5b21_:near
f5c61_:
	db 055h,08bh,0ech,083h,0c4h,0b0h,0c7h,006h,068h,052h,000h,000h,0c7h,006h,066h,052h
	db 000h,000h,0ffh,036h,042h,033h
	call f3118_
	db 059h,0ffh,036h,0b2h,04fh
	call f3118_
	db 059h,0b8h,001h,000h,050h,0b8h,000h,000h,050h,0b8h,0ffh,0ffh,050h,0b8h,01eh,000h
	db 050h,0b8h,005h,000h,050h,0b8h,028h,000h,050h,0b8h,013h,000h,050h,0b8h,000h,000h
	db 050h
	call f011a_
	db 083h,0c4h,010h,0a3h,064h,052h,0c7h,006h,062h,052h,004h,000h
l5cb2:
	db 08dh,046h,0b0h,050h,0ffh,076h,004h
	call f075b_
	db 083h,0c4h,004h,083h,03eh,042h,030h,000h,075h,010h,0ffh,076h,006h,08dh,046h,0b0h
	db 050h
	call f5b21_
	db 083h,0c4h,004h,0ffh,046h,004h
l5cd6:
	db 083h,03eh,042h,030h,000h,074h,0d5h,0ffh,076h,006h
	call f5af3_
	db 059h,0b8h,000h,000h,050h,0ffh,036h,064h,052h
	call f02d2_
	db 083h,0c4h,004h,0c7h,006h,064h,052h,000h,000h,0ffh,036h,042h,033h
	call f31d1_
	db 059h,0ffh,036h,0b2h,04fh
	call f31d1_
	db 059h,08bh,0e5h,05dh,0c3h
#endasm
