#asm
	public f9c29_
	extrn f02f0_:near
	extrn f075b_:near
	extrn f280c_:near
	extrn f3118_:near
	extrn f9601_:near
f9c29_:
	db 055h,08bh,0ech,083h,0c4h,0feh,0c7h,006h,024h,050h,0ffh,0ffh,0c7h,006h,080h,052h
	db 002h,000h,0c7h,006h,0c8h,050h,001h,000h,0b8h,0beh,050h,050h,0b8h,0ech,013h,050h
	call f075b_
	db 083h,0c4h,004h,0c7h,006h,02ch,050h,000h,000h
	call f280c_
	db 0ffh,036h,0b0h,04fh
	call f3118_
	db 059h,0ffh,036h,042h,033h
	call f3118_
	db 059h,0ffh,036h,0b2h,04fh
	call f3118_
	db 059h,0b8h,000h,000h,050h,0ffh,036h,0b6h,04fh
	call f02f0_
	db 083h,0c4h,004h,083h,03eh,0c4h,043h,0ffh,074h,009h,0c7h,006h,0ceh,04fh,015h,000h
	call f9601_
l9c8e:
	db 0ffh,006h,0e8h,04eh,08bh,0e5h,05dh,0c3h
#endasm
