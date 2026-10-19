#asm
	public f6d9d_
	extrn f011a_:near
	extrn f3118_:near
f6d9d_:
	db 0c7h,006h,044h,051h,000h,000h,0c7h,006h,068h,052h,000h,000h,0c7h,006h,066h,052h
	db 000h,000h,0ffh,036h,042h,033h
	call f3118_
	db 059h,0ffh,036h,0b2h,04fh
	call f3118_
	db 059h,0b8h,001h,000h,050h,0b8h,000h,000h,050h,0b8h,0ffh,0ffh,050h,0b8h,01eh,000h
	db 050h,0b8h,005h,000h,050h,0b8h,028h,000h,050h,0b8h,013h,000h,050h,0b8h,000h,000h
	db 050h
	call f011a_
	db 083h,0c4h,010h,0a3h,064h,052h,0c3h
#endasm
