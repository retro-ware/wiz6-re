/* Pick animation frames for the members of group g shown at view position pos. */
#asm
	public choose_monster_frames_
	extrn random_:near
choose_monster_frames_:
	db 055h,08bh,0ech,083h,0c4h,0fch,057h,056h,08bh,046h,004h,0d1h,0e0h,08bh,0d8h,08bh
	db 09fh,0a8h,043h,08ah,087h,09bh,001h,02ah,0e4h,08bh,0f0h,0bfh,000h,000h,0e9h,029h
	db 001h
l4f23:
	db 0b8h,03ah,001h,0f7h,0eeh,08bh,0d8h,080h,0bfh,013h,038h,000h,076h,03ch,08ah,087h
	db 013h,038h,02ah,0e4h,03dh,0ffh,000h,074h,031h,080h,0bch,02ch,043h,02eh,074h,02ah
	db 080h,0bch,02ch,043h,024h,074h,023h,0b9h,019h,000h,099h,0f7h,0f9h,089h,046h,0feh
	db 089h,056h,0fch,080h,0bch,02ch,043h,036h,075h,00eh,085h,0ffh,075h,00ah,0c7h,046h
	db 0feh,000h,000h,0c7h,046h,0fch,000h,000h
l4f6b:
	db 0ebh,057h
l4f6d:
	db 003h,0dfh,08ah,087h,03ch,037h,02ah,0e4h,050h
	call random_
	db 059h,050h,0b8h,03ah,001h,0f7h,0eeh,003h,0c7h,08bh,0d8h,08ah,087h,032h,037h,02ah
	db 0e4h,08bh,0c8h,058h,003h,0c1h,089h,046h,0feh,0b8h,03ah,001h,0f7h,0eeh,08bh,0c8h
	db 08bh,046h,0feh,003h,0c8h,08bh,0d9h,08ah,087h,050h,037h,02ah,0e4h,050h
	call random_
	db 059h,050h,0b8h,03ah,001h,0f7h,0eeh,003h,046h,0feh,08bh,0d8h,08ah,087h,046h,037h
	db 02ah,0e4h,08bh,0c8h,058h,003h,0c1h,089h,046h,0fch
l4fc4:
	db 08ah,046h,0feh,050h,08bh,046h,006h,08bh,0d0h,0b1h,004h,0d3h,0e0h,02bh,0c2h,0d1h
	db 0e0h,08bh,0c8h,08bh,0c7h,08bh,0d0h,0d1h,0e0h,003h,0c2h,08bh,0d0h,003h,0c8h,08bh
	db 0d9h,058h,088h,087h,048h,036h,08ah,046h,0fch,088h,087h,049h,036h,0b8h,03ah,001h
	db 0f7h,0eeh,08bh,04eh,0fch,0d1h,0e1h,0d1h,0e1h,003h,0c1h,08bh,0d8h,08ah,087h,05ch
	db 037h,02ah,0e4h,050h
	call random_
	db 059h,050h,0b8h,03ah,001h,0f7h,0eeh,08bh,04eh,0fch,0d1h,0e1h,0d1h,0e1h,003h,0c1h
	db 08bh,0d8h,08ah,087h,05bh,037h,02ah,0e4h,08bh,0c8h,058h,003h,0c1h,050h,08bh,046h
	db 006h,08bh,0d0h,0b1h,004h,0d3h,0e0h,02bh,0c2h,0d1h,0e0h,08bh,0c8h,08bh,0c7h,08bh
	db 0d0h,0d1h,0e0h,003h,0c2h,08bh,0d0h,003h,0c8h,08bh,0d9h,058h,088h,087h,04ah,036h
	db 047h
l504c:
	db 0b8h,03ah,001h,0f7h,0eeh,08bh,0d8h,08ah,087h,016h,038h,02ah,0e4h,03bh,0c7h,07eh
	db 003h,0e9h,0c3h,0feh
l5060:
	db 05eh,05fh,08bh,0e5h,05dh,0c3h
#endasm
