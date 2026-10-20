#asm
	public pick_random_set_bit_
	extrn random_:near
	extrn test_bit_:near
pick_random_set_bit_:
	db 055h,08bh,0ech,083h,0c4h,0fah,0c7h,046h,0feh,0ffh,0ffh,0c7h,046h,0fah,000h,000h
	db 0b8h,008h,000h,050h
	call random_
	db 059h,040h,089h,046h,0fch
l76b2:
	db 08bh,046h,0feh,040h,0b9h,008h,000h,099h,0f7h,0f9h,089h,056h,0feh,052h,0ffh,076h
	db 004h
	call test_bit_
	db 083h,0c4h,004h,03dh,001h,000h,075h,005h,0ffh,04eh,0fch,0ebh,003h
l76d3:
	db 0ffh,046h,0fah
l76d6:
	db 083h,07eh,0fch,000h,07eh,006h,083h,07eh,0fah,064h,07ch,0d0h
l76e2:
	db 08bh,046h,0feh,08bh,0e5h,05dh,0c3h
#endasm
