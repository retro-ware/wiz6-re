#asm
	public fc363_
	extrn f28af_:near
	extrn f2962_:near
	extrn fa1bc_:near
	extrn fbbe7_:near
fc363_:
	db 055h,08bh,0ech,083h,0c4h,0feh,056h,0a1h,0e8h,04eh,0d1h,0e0h,08bh,0f0h,08bh,01eh
	db 0a8h,04fh,0ffh,030h,0b8h,098h,034h,050h
	call f28af_
	db 083h,0c4h,004h,089h,046h,0feh,050h,08bh,036h,0e8h,04eh,08bh,01eh,0a8h,04fh,08ah
	db 080h,030h,006h,02ah,0e4h,050h,0d1h,0e6h,0ffh,0b0h,020h,001h
	call fbbe7_
	db 083h,0c4h,006h,0b8h,002h,000h,050h,0b8h,000h,000h,050h,0a1h,0e8h,04eh,0d1h,0e0h
	db 08bh,0f0h,08bh,01eh,0a8h,04fh,0ffh,0b0h,040h,002h
	call f2962_
	db 083h,0c4h,006h,050h
	call fa1bc_
	db 059h,05eh,08bh,0e5h,05dh,0c3h
#endasm
