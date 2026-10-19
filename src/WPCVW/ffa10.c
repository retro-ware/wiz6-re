#asm
	public ffa10_
	extrn f030b_:near
	extrn f075b_:near
	extrn f09fb_:near
	extrn f0a42_:near
	extrn f23e3_:near
	extrn f3118_:near
	extrn f31d1_:near
	extrn f32be_:near
	extrn ff8c6_:near
ffa10_:
	db 055h,08bh,0ech,083h,0c4h,0fch,0c7h,006h,0ceh,04fh,005h,000h,0c7h,006h,03ah,036h
	db 005h,000h,0b8h,03eh,055h,050h,0b8h,02ch,001h,050h
	call f075b_
	db 083h,0c4h,004h,0c7h,046h,0feh,000h,000h,0ebh,00ah
lfa37:
	db 0ffh,076h,0feh
	call ff8c6_
	db 059h,0ffh,046h,0feh
lfa41:
	db 08bh,046h,0feh,03bh,006h,0ceh,043h,07ch,0edh,0ffh,036h,0b0h,04fh
	call f31d1_
	db 059h,0ffh,036h,042h,033h
	call f31d1_
	db 059h,0ffh,036h,0b2h,04fh
	call f31d1_
	db 059h,0b8h,000h,000h,050h,0ffh,036h,042h,033h
	call f09fb_
	db 083h,0c4h,004h,0b8h,000h,000h,050h,0b8h,003h,000h,050h,0b8h,01ah,000h,050h,0ffh
	db 036h,0b6h,04fh
	call f32be_
	db 083h,0c4h,008h,0ffh,036h,0b6h,04fh
	call f3118_
	db 059h,0c7h,046h,0fch,000h,000h
lfa93:
	db 0ffh,076h,0fch,0b8h,013h,000h,050h,0ffh,036h,0b6h,04fh
	call f030b_
	db 083h,0c4h,006h,0b8h,003h,000h,050h,0b8h,01bh,000h,050h,0ffh,036h,0b6h,04fh
	call f23e3_
	db 083h,0c4h,006h,0ffh,046h,0fch,08bh,046h,0fch,03dh,005h,000h,07ch,0d2h,0ffh,036h
	db 0b6h,04fh
	call f31d1_
	db 059h,0b8h,000h,000h,050h,0ffh,036h,0b2h,04fh
	call f0a42_
	db 083h,0c4h,004h,08bh,0e5h,05dh,0c3h
#endasm
