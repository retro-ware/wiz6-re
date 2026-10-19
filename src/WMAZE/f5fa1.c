#asm
	public f5fa1_
	extrn f030b_:near
	extrn f251d_:near
f5fa1_:
	db 055h,08bh,0ech,083h,0c4h,0feh,056h,08bh,046h,006h,0d1h,0e0h,08bh,0f0h,08bh,05eh
	db 00ah,08bh,000h,089h,046h,0feh,08bh,046h,008h,0d1h,0e0h,08bh,0f0h,08bh,000h,08bh
	db 04eh,006h,0d1h,0e1h,08bh,0f1h,089h,000h,08bh,046h,0feh,08bh,04eh,008h,0d1h,0e1h
	db 08bh,0f1h,08bh,05eh,00ah,089h,000h,08bh,046h,006h,0b9h,002h,000h,099h,0f7h,0f9h
	db 040h,050h,08bh,046h,006h,099h,0f7h,0f9h,08bh,0c2h,08bh,0d0h,0b1h,003h,0d3h,0e0h
	db 003h,0c2h,040h,040h,050h,0ffh,076h,004h
	call f030b_
	db 083h,0c4h,006h,0b8h,003h,000h,050h,08bh,046h,006h,0d1h,0e0h,08bh,0f0h,08bh,05eh
	db 00ah,08bh,000h,0b9h,0b0h,001h,0f7h,0e9h,005h,0e8h,043h,050h,0ffh,076h,004h
	call f251d_
	db 083h,0c4h,006h,08bh,046h,008h,0b9h,002h,000h,099h,0f7h,0f9h,040h,050h,08bh,046h
	db 008h,099h,0f7h,0f9h,08bh,0c2h,08bh,0d0h,0b1h,003h,0d3h,0e0h,003h,0c2h,040h,040h
	db 050h,0ffh,076h,004h
	call f030b_
	db 083h,0c4h,006h,0b8h,003h,000h,050h,08bh,046h,008h,0d1h,0e0h,08bh,0f0h,08bh,05eh
	db 00ah,08bh,000h,0b9h,0b0h,001h,0f7h,0e9h,005h,0e8h,043h,050h,0ffh,076h,004h
	call f251d_
	db 083h,0c4h,006h,05eh,08bh,0e5h,05dh,0c3h
#endasm
