#asm
	public init_hp_stamina_
	extrn init_class_skills_:near
	extrn random_:near
init_hp_stamina_:
	db 055h,08bh,0ech,083h,0c4h,0f6h,0c6h,006h,016h,056h,001h,0c6h,006h,017h,056h,00ah
	db 0b8h,0e8h,003h,050h
	call random_
	db 059h,005h,0aah,019h,099h,089h,016h,07ah,054h,0a3h,078h,054h,0a0h,09ch,055h,02ah
	db 0e4h,089h,046h,0f8h,0a0h,09fh,055h,02ah,0e4h,089h,046h,0f6h,0a0h,00fh,056h,02ah
	db 0e4h,0e9h,00eh,002h,0b8h,005h,000h,050h
	call random_
	db 059h,005h,006h,000h,089h,046h,0feh,0b8h,000h,000h,050h,050h,0b8h,004h,000h,050h
	call init_class_skills_
	db 083h,0c4h,006h,0e9h,0fbh,001h,0b8h,003h,000h,050h
	call random_
	db 059h,040h,040h,089h,046h,0feh,0b8h,003h,000h,050h,0b8h,000h,000h,050h,0b8h,001h
	db 000h,050h
	call init_class_skills_
	db 083h,0c4h,006h,0e9h,0d9h,001h,0b8h,004h,000h,050h
	call random_
	db 059h,005h,004h,000h,089h,046h,0feh,0b8h,003h,000h,050h,0b8h,000h,000h,050h,0b8h
	db 001h,000h,050h
	call init_class_skills_
	db 083h,0c4h,006h,0e9h,0b6h,001h,0b8h,004h,000h,050h
	call random_
	db 059h,040h,040h,040h,089h,046h,0feh,0b8h,001h,000h,050h,0b8h,002h,000h,050h,0b8h
	db 001h,000h,050h
	call init_class_skills_
	db 083h,0c4h,006h,0e9h,093h,001h,0b8h,004h,000h,050h
	call random_
	db 059h,050h,0b8h,004h,000h,050h
	call random_
	db 059h,08bh,0c8h,058h,003h,0c1h,005h,006h,000h,089h,046h,0feh,0b8h,000h,000h,050h
	db 0b8h,002h,000h,050h,050h
	call init_class_skills_
	db 083h,0c4h,006h,0e9h,065h,001h,0b8h,004h,000h,050h
	call random_
	db 059h,040h,040h,040h,089h,046h,0feh,0b8h,003h,000h,050h,0b8h,001h,000h,050h,0b8h
	db 000h,000h,050h
	call init_class_skills_
	db 083h,0c4h,006h,0e9h,042h,001h,0b8h,004h,000h,050h
	call random_
	db 059h,040h,040h,089h,046h,0feh,0b8h,001h,000h,050h,0b8h,002h,000h,050h,0b8h,001h
	db 000h,050h
	call init_class_skills_
	db 083h,0c4h,006h,0e9h,020h,001h,0b8h,003h,000h,050h
	call random_
	db 059h,040h,040h,040h,089h,046h,0feh,0b8h,003h,000h,050h,0b8h,001h,000h,050h,0b8h
	db 000h,000h,050h
	call init_class_skills_
	db 083h,0c4h,006h,0e9h,0fdh,000h,0b8h,005h,000h,050h
	call random_
	db 059h,005h,005h,000h,089h,046h,0feh,0b8h,000h,000h,050h,0b8h,001h,000h,050h,0b8h
	db 003h,000h,050h
	call init_class_skills_
	db 083h,0c4h,006h,0e9h,0dah,000h,0b8h,004h,000h,050h
	call random_
	db 059h,040h,040h,040h,089h,046h,0feh,0b8h,004h,000h,050h,0b8h,000h,000h,050h,050h
	call init_class_skills_
	db 083h,0c4h,006h,0e9h,0bah,000h,0b8h,007h,000h,050h
	call random_
	db 059h,005h,008h,000h,089h,046h,0feh,0b8h,002h,000h,050h,0b8h,001h,000h,050h,0b8h
	db 002h,000h,050h
	call init_class_skills_
	db 083h,0c4h,006h,0e9h,097h,000h,0b8h,004h,000h,050h
	call random_
	db 059h,050h,0b8h,004h,000h,050h
	call random_
	db 059h,08bh,0c8h,058h,003h,0c1h,005h,006h,000h,089h,046h,0feh,0b8h,001h,000h,050h
	db 050h,0b8h,002h,000h,050h
	call init_class_skills_
	db 083h,0c4h,006h,0ebh,06ah,0b8h,004h,000h,050h
	call random_
	db 059h,005h,004h,000h,089h,046h,0feh,0b8h,001h,000h,050h,0b8h,002h,000h,050h,0b8h
	db 001h,000h,050h
	call init_class_skills_
	db 083h,0c4h,006h,0ebh,048h,0b8h,005h,000h,050h
	call random_
	db 059h,005h,004h,000h,089h,046h,0feh,0b8h,001h,000h,050h,0b8h,002h,000h,050h,050h
	call init_class_skills_
	db 083h,0c4h,006h,0ebh,029h,028h,08bh,048h,08bh,06ah,08bh,08dh,08bh,0b0h,08bh,0deh
	db 08bh,001h,08ch,023h,08ch,046h,08ch,069h,08ch,089h,08ch,0ach,08ch,0d9h,08ch,0fbh
	db 08ch
l8d36:
	db 03dh,00eh,000h,073h,008h,093h,0d1h,0e3h,02eh,0ffh,0a7h,01ah,08dh
l8d43:
	db 08bh,046h,0f6h,0d1h,0e0h,003h,046h,0f8h,08bh,0d0h,0d1h,0e0h,003h,0c2h,089h,046h
	db 0fch,08bh,046h,0f8h,0d1h,0e0h,003h,046h,0f6h,08bh,0d0h,0d1h,0e0h,003h,0c2h,089h
	db 046h,0fah,083h,07eh,0f6h,008h,07dh,003h,0ffh,04eh,0feh
l8d6e:
	db 083h,07eh,0f6h,00fh,07eh,009h,0ffh,046h,0feh,08bh,046h,0f6h,001h,046h,0fch
l8d7d:
	db 083h,07eh,0f6h,011h,07eh,009h,0ffh,046h,0feh,08bh,046h,0f6h,001h,046h,0fch
l8d8c:
	db 083h,07eh,0f8h,00fh,07eh,006h,08bh,046h,0f8h,001h,046h,0fah
l8d98:
	db 083h,07eh,0f8h,011h,07eh,006h,08bh,046h,0f8h,001h,046h,0fah
l8da4:
	db 08bh,046h,0feh,0a3h,088h,054h,0a3h,08ah,054h,08bh,046h,0fch,0a3h,08ch,054h,0a3h
	db 08eh,054h,0c7h,006h,090h,054h,000h,000h,08bh,046h,0fah,08bh,0d0h,0b1h,004h,0d3h
	db 0e0h,02bh,0c2h,0a3h,092h,054h,080h,03eh,00dh,056h,005h,075h,00bh,0d1h,0e0h,0b9h
	db 003h,000h,099h,0f7h,0f9h,0a3h,092h,054h
l8ddc:
	db 08bh,0e5h,05dh,0c3h
#endasm
