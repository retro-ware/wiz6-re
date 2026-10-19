#asm
	public ovmain_
	extrn f7860_:near
	extrn f7f30_:near
ovmain_:
	db 0c7h,006h,02ah,050h,000h,000h,0c7h,006h,02ch,050h,000h,000h,0c7h,006h,02eh,050h
	db 0ffh,0ffh,083h,03eh,03ah,036h,013h,075h,008h,0ffh,036h,0cch,043h
	call f7f30_
	db 059h
l4593:
	db 083h,03eh,03ah,036h,014h,075h,008h,0ffh,036h,0cch,043h
	call f7860_
	db 059h
l45a2:
	db 0c7h,006h,03ah,036h,005h,000h,0b8h,000h,000h,0c3h
#endasm
