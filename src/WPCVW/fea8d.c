#asm
	public roll_skill_points_
	extrn raise_skill_:near
	extrn random_:near
roll_skill_points_:
	db 055h,08bh,0ech,083h,0c4h,0f4h,0b8h,0b0h,001h,0f7h,06eh,004h,08bh,0d8h,08ah,087h
	db 015h,045h,02ah,0e4h,089h,046h,0feh,08ah,087h,016h,045h,02ah,0e4h,089h,046h,0fch
	db 08ah,087h,017h,045h,02ah,0e4h,089h,046h,0f6h,08ah,087h,018h,045h,02ah,0e4h,089h
	db 046h,0fah,08ah,087h,019h,045h,02ah,0e4h,089h,046h,0f8h,0b8h,006h,000h,050h
	call random_
	db 059h,005h,005h,000h,050h,0b8h,0b0h,001h,0f7h,06eh,004h,08bh,0d8h,058h,088h,087h
	db 090h,045h,0c7h,046h,0f4h,000h,000h,08ah,087h,087h,045h,02ah,0e4h,0e9h,0fah,001h
	db 0b8h,01ch,000h,050h,0b8h,003h,000h,050h,050h,0ffh,076h,0feh,0ffh,076h,004h
	call raise_skill_
	db 083h,0c4h,00ah,089h,046h,0f4h,0e9h,0ech,001h,0b8h,01ah,000h,050h,0b8h,003h,000h
	db 050h,050h,0ffh,076h,0fch,0ffh,076h,004h
	call raise_skill_
	db 083h,0c4h,00ah,089h,046h,0f4h,0e9h,0d1h,001h,0b8h,00fh,000h,050h,0b8h,003h,000h
	db 050h,0b8h,004h,000h,050h,08bh,046h,0feh,003h,046h,0fah,0b9h,002h,000h,099h,0f7h
	db 0f9h,050h,0ffh,076h,004h
	call raise_skill_
	db 083h,0c4h,00ah,089h,046h,0f4h,0b8h,00eh,000h,050h,0b8h,002h,000h,050h,0b8h,004h
	db 000h,050h,08bh,046h,0fah,003h,046h,0f8h,0b9h,002h,000h,099h,0f7h,0f9h,050h,0ffh
	db 076h,004h
	call raise_skill_
	db 083h,0c4h,00ah,001h,046h,0f4h,0e9h,084h,001h,0b8h,007h,000h,050h,0b8h,002h,000h
	db 050h,0b8h,004h,000h,050h,08bh,046h,0fah,003h,046h,0f8h,0b9h,002h,000h,099h,0f7h
	db 0f9h,050h,0ffh,076h,004h
	call raise_skill_
	db 083h,0c4h,00ah,089h,046h,0f4h,0b8h,00bh,000h,050h,0b8h,002h,000h,050h,0b8h,004h
	db 000h,050h,08bh,046h,0feh,003h,046h,0f6h,0b9h,002h,000h,099h,0f7h,0f9h,050h,0ffh
	db 076h,004h
	call raise_skill_
	db 083h,0c4h,00ah,001h,046h,0f4h,0e9h,037h,001h,0b8h,00ch,000h,050h,0b8h,003h,000h
	db 050h,050h,08bh,046h,0feh,003h,046h,0fah,0b9h,002h,000h,099h,0f7h,0f9h,050h,0ffh
	db 076h,004h
	call raise_skill_
	db 083h,0c4h,00ah,089h,046h,0f4h,0e9h,012h,001h,0b8h,019h,000h,050h,0b8h,003h,000h
	db 050h,050h,0ffh,076h,0feh,0ffh,076h,004h
	call raise_skill_
	db 083h,0c4h,00ah,089h,046h,0f4h,0e9h,0f7h,000h,0b8h,01bh,000h,050h,0b8h,003h,000h
	db 050h,050h,08bh,046h,0feh,003h,046h,0fch,0b9h,002h,000h,099h,0f7h,0f9h,050h,0ffh
	db 076h,004h
	call raise_skill_
	db 083h,0c4h,00ah,089h,046h,0f4h,0e9h,0d2h,000h,0b8h,01ch,000h,050h,0b8h,002h,000h
	db 050h,0b8h,004h,000h,050h,0ffh,076h,0feh,0ffh,076h,004h
	call raise_skill_
	db 083h,0c4h,00ah,089h,046h,0f4h,0b8h,01ah,000h,050h,0b8h,002h,000h,050h,0b8h,004h
	db 000h,050h,0ffh,076h,0fch,0ffh,076h,004h
	call raise_skill_
	db 083h,0c4h,00ah,001h,046h,0f4h,0e9h,099h,000h,0b8h,001h,000h,050h,0b8h,003h,000h
	db 050h,050h,08bh,046h,0fah,003h,046h,0f8h,0b9h,002h,000h,099h,0f7h,0f9h,050h,0ffh
	db 076h,004h
	call raise_skill_
	db 083h,0c4h,00ah,089h,046h,0f4h,0ebh,075h,0b8h,009h,000h,050h,0b8h,003h,000h,050h
	db 0b8h,004h,000h,050h,08bh,046h,0fah,003h,046h,0f8h,0b9h,002h,000h,099h,0f7h,0f9h
	db 050h,0ffh,076h,004h
	call raise_skill_
	db 083h,0c4h,00ah,089h,046h,0f4h,0b8h,010h,000h,050h,0b8h,002h,000h,050h,0b8h,004h
	db 000h,050h,08bh,046h,0fah,003h,046h,0f8h,0b9h,002h,000h,099h,0f7h,0f9h,050h,0ffh
	db 076h,004h
	call raise_skill_
	db 083h,0c4h,00ah,001h,046h,0f4h,0ebh,029h,0f6h,0ech,0efh,0eah,00ah,0ebh,025h,0ebh
	db 072h,0ebh,0e4h,0ebh,0bfh,0ebh,0ffh,0ebh,0f6h,0ech,024h,0ech,0f6h,0ech,05dh,0ech
	db 0f6h,0ech,081h,0ech
lece9:
	db 03dh,00eh,000h,073h,008h,093h,0d1h,0e3h,02eh,0ffh,0a7h,0cdh,0ech
lecf6:
	db 0b8h,0b0h,001h,0f7h,06eh,004h,08bh,0d8h,08ah,087h,090h,045h,02ah,0e4h,03bh,046h
	db 0f4h,07eh,00fh,08ah,087h,090h,045h,02ah,0e4h,02bh,046h,0f4h,088h,087h,090h,045h
	db 0ebh,005h
led18:
	db 0c6h,087h,090h,045h,000h
led1d:
	db 08bh,0e5h,05dh,0c3h
#endasm
