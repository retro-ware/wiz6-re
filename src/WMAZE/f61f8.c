#asm
	public heal_member_
	extrn $ldv:near
	extrn draw_member_status_m_:near
	extrn play_sound_:near
	extrn random_:near
heal_member_:
	db 055h,08bh,0ech,083h,0c4h,0fah,0b8h,0b0h,001h,0f7h,06eh,004h,08bh,0d8h,080h,0bfh
	db 089h,045h,003h,072h,003h,0e9h,0e0h,001h
l6210:
	db 0ffh,076h,006h
	call random_
	db 059h,050h,0b8h,0b0h,001h,0f7h,06eh,004h,08bh,0d8h,08ah,087h,08ah,045h,02ah,0e4h
	db 0f7h,06eh,00ah,08bh,0c8h,058h,003h,0c1h,050h,08ah,087h,08bh,045h,02ah,0e4h,0f7h
	db 06eh,00ah,08bh,0c8h,058h,02bh,0c1h,050h,08ah,087h,08ch,045h,02ah,0e4h,0f7h,06eh
	db 00ah,08bh,0c8h,058h,02bh,0c1h,001h,087h,000h,044h,08bh,087h,000h,044h,03bh,087h
	db 002h,044h,07eh,008h,08bh,087h,002h,044h,089h,087h,000h,044h
l6262:
	db 083h,0bfh,000h,044h,000h,07fh,022h,0c7h,087h,000h,044h,000h,000h,0c7h,087h,004h
	db 044h,000h,000h,0c6h,087h,089h,045h,003h,08ah,087h,086h,045h,02ah,0e4h,005h,008h
	db 000h,050h
	call play_sound_
	db 059h,0e9h,05eh,001h
l628b:
	db 0b8h,0b0h,001h,0f7h,06eh,004h,08bh,0d8h,083h,0bfh,004h,044h,000h,07fh,01fh,0c7h
	db 087h,004h,044h,000h,000h,0b8h,006h,000h,050h
	call random_
	db 059h,005h,006h,000h,050h,0b8h,0b0h,001h,0f7h,06eh,004h,08bh,0d8h,058h,088h,087h
	db 00ch,045h
l62b9:
	db 083h,07eh,008h,000h,07eh,060h,0b8h,0b0h,001h,0f7h,06eh,004h,08bh,0d8h,08bh,087h
	db 006h,044h,08bh,04eh,008h,08bh,0d9h,0f7h,0ebh,0b9h,064h,000h,0bbh,000h,000h
	call $ldv
	db 089h,046h,0fah,0b9h,002h,000h,099h,0f7h,0f9h,050h
	call random_
	db 059h,050h,0b8h,0b0h,001h,0f7h,06eh,004h,08bh,0d8h,08bh,08fh,004h,044h,058h,003h
	db 0c1h,050h,08bh,046h,0fah,0b9h,002h,000h,099h,0f7h,0f9h,08bh,0c8h,058h,003h,0c1h
	db 040h,089h,087h,004h,044h,08bh,087h,004h,044h,03bh,087h,006h,044h,07eh,008h,08bh
	db 087h,006h,044h,089h,087h,004h,044h
l631f:
	db 0c7h,046h,0fch,000h,000h
l6324:
	db 0b8h,0b0h,001h,0f7h,06eh,004h,003h,046h,0fch,08bh,0d8h,08ah,087h,00ah,045h,02ah
	db 0e4h,089h,046h,0fah,03dh,000h,000h,07eh,01dh,03dh,0ffh,000h,074h,018h,08bh,046h
	db 00ah,029h,046h,0fah,083h,07eh,0fah,000h,07dh,005h,0c7h,046h,0fah,000h,000h
l6353:
	db 08ah,046h,0fah,088h,087h,00ah,045h
l635a:
	db 0ffh,046h,0fch,08bh,046h,0fch,03dh,00ah,000h,07ch,0bfh,0b8h,0b0h,001h,0f7h,06eh
	db 004h,08bh,0d8h,080h,0bfh,00fh,045h,000h,074h,007h,080h,0bfh,08ch,045h,000h,075h
	db 00ah
l637b:
	db 0c6h,087h,00fh,045h,000h,0c6h,087h,08ch,045h,000h
l6385:
	db 083h,07eh,00ch,000h,07eh,05eh,0c7h,046h,0fch,000h,000h
l6390:
	db 0b8h,0b0h,001h,0f7h,06eh,004h,003h,046h,0fch,08bh,0d8h,080h,0bfh,004h,045h,001h
	db 073h,005h,0c6h,087h,004h,045h,001h
l63a7:
	db 08ah,087h,004h,045h,02ah,0e4h,040h,050h
	call random_
	db 059h,050h,0b8h,0b0h,001h,0f7h,06eh,004h,08bh,0c8h,08bh,056h,0fch,0d1h,0e2h,0d1h
	db 0e2h,003h,0c2h,08bh,0d8h,058h,001h,087h,010h,044h,08bh,087h,010h,044h,03bh,087h
	db 012h,044h,07eh,008h,08bh,087h,012h,044h,089h,087h,010h,044h
l63de:
	db 0ffh,046h,0fch,08bh,046h,0fch,03dh,006h,000h,07ch,0a7h
l63e9:
	db 0ffh,076h,004h
	call draw_member_status_m_
	db 059h
l63f0:
	db 08bh,0e5h,05dh,0c3h
#endasm
