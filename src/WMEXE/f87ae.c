#asm
	public f87ae_
	extrn f86aa_:near
f87ae_:
	db 055h,08bh,0ech,083h,0c4h,0feh,0c7h,006h,00ah,050h,002h,000h,083h,07eh,004h,000h
	db 07eh,042h,083h,07eh,004h,006h,07dh,03ch,0c7h,046h,0feh,001h,000h,0ebh,02ah
l87cd:
	db 0ffh,076h,018h,0ffh,076h,016h,0ffh,076h,014h,0ffh,076h,012h,0ffh,076h,010h,0ffh
	db 076h,00eh,0ffh,076h,00ch,0ffh,076h,00ah,0ffh,076h,008h,0ffh,076h,006h,0ffh,076h
	db 0feh
	call f86aa_
	db 083h,0c4h,016h,0ffh,046h,0feh
l87f7:
	db 08bh,046h,0feh,03bh,006h,060h,043h,07eh,0cdh,0ebh,05bh
l8802:
	db 0ffh,076h,018h,0ffh,076h,016h,0ffh,076h,014h,0ffh,076h,012h,0ffh,076h,010h,0ffh
	db 076h,00eh,0ffh,076h,00ch,0ffh,076h,00ah,0ffh,076h,008h,0ffh,076h,006h,0b8h,000h
	db 000h,050h
	call f86aa_
	db 083h,0c4h,016h,08bh,01eh,0b4h,043h,080h,0bfh,09dh,001h,000h,076h,028h,0ffh,076h
	db 018h,0ffh,076h,016h,0ffh,076h,014h,0ffh,076h,012h,0ffh,076h,010h,0ffh,076h,00eh
	db 0ffh,076h,00ch,0ffh,076h,00ah,0ffh,076h,008h,0ffh,076h,006h,0b8h,006h,000h,050h
	call f86aa_
	db 083h,0c4h,016h
l885d:
	db 08bh,0e5h,05dh,0c3h
#endasm
