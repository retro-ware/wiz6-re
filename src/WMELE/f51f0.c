/* Apply damage/regeneration to one combatant; return 1 if it died. */
#asm
	public update_combatant_
	extrn $ldv:near
	extrn random_:near
	extrn set_bit_:near
update_combatant_:
	db 055h,08bh,0ech,083h,0c4h,0f2h,056h,0b8h,02ch,000h,0f7h,06eh,006h,08bh,0c8h,08bh
	db 046h,004h,0d1h,0e0h,08bh,0d8h,08bh,087h,0a8h,043h,003h,0c1h,089h,046h,0fch,0c7h
	db 046h,0f6h,000h,000h,08bh,0d8h,080h,07fh,010h,000h,076h,033h,08bh,047h,008h,0bbh
	db 005h,000h,0f7h,0ebh,0b9h,064h,000h,0bbh,000h,000h
	call $ldv
	db 089h,046h,0feh,050h
	call random_
	db 059h,08bh,05eh,0fch,08bh,04fh,006h,003h,0c1h,040h,089h,047h,006h,08bh,047h,006h
	db 03bh,047h,008h,07eh,006h,08bh,047h,008h,089h,047h,006h
l524f:
	db 08bh,05eh,0fch,083h,07fh,006h,000h,07fh,016h,0c7h,047h,006h,000h,000h,0b8h,006h
	db 000h,050h
	call random_
	db 059h,005h,006h,000h,08bh,05eh,0fch,088h,047h,010h
l526e:
	db 08bh,046h,008h,02bh,046h,00ah,050h,08bh,05eh,0fch,08ah,047h,023h,02ah,0e4h,08bh
	db 0c8h,058h,02bh,0c1h,089h,046h,0fah,08bh,046h,0fah,001h,047h,002h,08bh,05eh,0fch
	db 08bh,047h,002h,08bh,04fh,004h,03bh,0c1h,07eh,003h,089h,04fh,002h
l529b:
	db 08bh,05eh,0fch,083h,07fh,002h,000h,07eh,003h,0e9h,0ach,000h
l52a7:
	db 0c7h,047h,002h,000h,000h,08bh,05eh,0fch,0c7h,047h,006h,000h,000h,08bh,05eh,0fch
	db 0c6h,047h,022h,003h,0c7h,046h,0f6h,001h,000h,083h,07eh,004h,000h,075h,003h,0e9h
	db 08ah,000h
l52c9:
	db 08bh,05eh,0fch,080h,07fh,02ah,0ffh,074h,056h,08ah,047h,02ah,098h,0b9h,00ah,000h
	db 099h,0f7h,0f9h,089h,046h,0f4h,08ah,047h,02ah,098h,099h,0f7h,0f9h,089h,056h,0f2h
	db 08bh,046h,0f4h,08bh,0d0h,0d1h,0e0h,0d1h,0e0h,003h,0c2h,08bh,056h,0f2h,003h,0c2h
	db 08bh,0d8h,0c6h,087h,048h,043h,000h,0c6h,087h,03eh,043h,000h,08bh,046h,0f4h,08bh
	db 0d0h,0d1h,0e0h,0d1h,0e0h,003h,0c2h,0d1h,0e0h,08bh,04eh,0f2h,0d1h,0e1h,003h,0c1h
	db 08bh,0d8h,0c7h,087h,062h,043h,000h,000h,08bh,05eh,0fch,0c6h,047h,02ah,0ffh
l5328:
	db 08bh,046h,004h,0d1h,0e0h,08bh,0d8h,08bh,09fh,0b6h,043h,08ah,087h,0dch,000h,02ah
	db 0e4h,0a9h,001h,000h,074h,015h,0b8h,001h,000h,050h,08ah,087h,0dah,000h,02ah,0e4h
	db 050h,0b8h,098h,034h,050h
	call set_bit_
	db 083h,0c4h,006h
l5353:
	db 0c7h,046h,0f8h,000h,000h
l5358:
	db 08bh,05eh,0fch,08bh,076h,0f8h,080h,078h,00eh,000h,076h,00dh,08ah,040h,00eh,02ah
	db 0e4h,03dh,0ffh,000h,074h,003h,0feh,048h,00eh
l5371:
	db 0ffh,046h,0f8h,08bh,046h,0f8h,03dh,00ah,000h,07ch,0dch,08bh,05eh,0fch,080h,07fh
	db 013h,000h,075h,004h,0c6h,047h,023h,000h
l5389:
	db 08bh,05eh,0fch,08ah,047h,029h,098h,089h,046h,0f8h,03dh,000h,000h,07dh,003h,040h
	db 0ebh,00bh
l539b:
	db 08bh,046h,0f8h,050h,03dh,000h,000h,058h,07eh,001h,048h
l53a6:
	db 088h,047h,029h,08bh,05eh,0fch,080h,07fh,024h,000h,076h,003h,0feh,04fh,024h
l53b5:
	db 08bh,05eh,0fch,080h,07fh,02bh,003h,075h,004h,0c6h,047h,02bh,000h
l53c2:
	db 08bh,046h,0f6h,05eh,08bh,0e5h,05dh,0c3h
#endasm
