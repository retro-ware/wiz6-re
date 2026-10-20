#asm
	public raise_skill_
	extrn random_:near
raise_skill_:
	db 055h,08bh,0ech,083h,0c4h,0feh,0ffh,076h,00ah
	call random_
	db 059h,050h,08bh,046h,006h,099h,0f7h,07eh,008h,08bh,0c8h,058h,003h,0c1h,050h,0b8h
	db 0b0h,001h,0f7h,06eh,004h,08bh,0d8h,08bh,087h,00ch,044h,0b9h,003h,000h,099h,0f7h
	db 0f9h,08bh,0c8h,058h,02bh,0c1h,089h,046h,0feh,03dh,000h,000h,07ch,00ah,003h,05eh
	db 00ch,080h,0bfh,01ch,045h,032h,076h,005h
lea69:
	db 0c7h,046h,0feh,000h,000h
lea6e:
	db 0b8h,0b0h,001h,0f7h,06eh,004h,003h,046h,00ch,08bh,0d8h,08ah,087h,01ch,045h,02ah
	db 0e4h,003h,046h,0feh,088h,087h,01ch,045h,08bh,046h,0feh,08bh,0e5h,05dh,0c3h
#endasm
