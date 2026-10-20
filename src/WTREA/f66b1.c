/* Pick a random trap from the chest's trap bitset and store its name. */
#asm
	public pick_chest_trap_
	extrn get_message_:near
	extrn random_:near
	extrn strcpy_:near
	extrn test_bit_:near
pick_chest_trap_:
	db 055h,08bh,0ech,083h,0c4h,0fch,0c7h,006h,092h,051h,000h,000h,0b8h,064h,000h,050h
	call random_
	db 059h,040h,089h,046h,0feh,0c7h,046h,0fch,000h,000h
l66ce:
	db 083h,07eh,0feh,000h,07eh,036h,083h,07eh,0fch,064h,07dh,030h,0ffh,006h,092h,051h
	db 0a1h,092h,051h,03dh,00fh,000h,07eh,009h,0c7h,006h,092h,051h,000h,000h,0ffh,046h
	db 0fch
l66ef:
	db 0ffh,036h,092h,051h,08bh,046h,004h,005h,024h,000h,050h
	call test_bit_
	db 083h,0c4h,004h,03dh,001h,000h,075h,003h,0ffh,04eh,0feh
l6708:
	db 0ebh,0c4h
l670a:
	db 0b8h,0cah,050h,050h,0a1h,092h,051h,005h,0b4h,014h,050h
	call get_message_
	db 083h,0c4h,004h,0b8h,0cah,050h,050h,0b8h,0deh,050h,050h
	call strcpy_
	db 083h,0c4h,004h,08bh,0e5h,05dh,0c3h
#endasm
