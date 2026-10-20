/* Build the animation char string for group g at view position pos. */
#asm
	public get_monster_anim_chars_
	extrn random_:near
get_monster_anim_chars_:
	db 055h,08bh,0ech,083h,0c4h,0f4h,057h,056h,08bh,046h,004h,0d1h,0e0h,08bh,0d8h,08bh
	db 09fh,0a8h,043h,08ah,087h,09bh,001h,02ah,0e4h,08bh,0f0h,0c7h,046h,0f6h,000h,000h
	db 0c7h,046h,0f8h,000h,000h,0ebh,029h
l634d:
	db 0b8h,02ch,000h,0f7h,06eh,0f8h,08bh,0c8h,08bh,046h,004h,0d1h,0e0h,08bh,0d8h,08bh
	db 087h,0a8h,043h,003h,0c1h,08bh,0d8h,08ah,047h,02ah,098h,03bh,046h,006h,075h,006h
	db 08bh,046h,0f8h,089h,046h,0f6h
l6373:
	db 0ffh,046h,0f8h
l6376:
	db 08bh,046h,004h,0d1h,0e0h,08bh,0d8h,08bh,09fh,0a8h,043h,08ah,087h,09dh,001h,02ah
	db 0e4h,03bh,046h,0f8h,07fh,0c1h,0c7h,046h,0f4h,000h,000h,0bfh,000h,000h,0e9h,003h
	db 002h
l6397:
	db 0b8h,02ch,000h,0f7h,06eh,0f6h,08bh,0c8h,08bh,046h,004h,0d1h,0e0h,08bh,0d8h,08bh
	db 087h,0a8h,043h,003h,0c1h,08bh,0d8h,080h,07fh,022h,002h,074h,00ch,080h,07fh,011h
	db 000h,077h,006h,080h,07fh,010h,000h,076h,040h
l63c0:
	db 08bh,046h,006h,08bh,0d0h,0b1h,004h,0d3h,0e0h,02bh,0c2h,0d1h,0e0h,050h,08bh,0c7h
	db 08bh,0d0h,0d1h,0e0h,003h,0c2h,08bh,0c8h,058h,003h,0c1h,08bh,0d8h,08ah,087h,048h
	db 036h,02ah,0e4h,089h,046h,0feh,0b8h,03ah,001h,0f7h,0eeh,08bh,0c8h,08bh,046h,0feh
	db 003h,0c8h,08bh,0d9h,08ah,087h,046h,037h,02ah,0e4h,089h,046h,0fch,0e9h,054h,001h
l6400:
	db 08bh,046h,006h,08bh,0d0h,0b1h,004h,0d3h,0e0h,02bh,0c2h,0d1h,0e0h,050h,08bh,0c7h
	db 08bh,0d0h,0d1h,0e0h,003h,0c2h,08bh,0c8h,058h,003h,0c1h,08bh,0d8h,08ah,087h,049h
	db 036h,02ah,0e4h,089h,046h,0fch,08ah,087h,04ah,036h,02ah,0e4h,089h,046h,0fah,0ffh
	db 04eh,0fah,07eh,003h,0e9h,0f7h,000h
l6437:
	db 08ah,087h,048h,036h,02ah,0e4h,089h,046h,0feh,0ffh,046h,0fch,0b8h,03ah,001h,0f7h
	db 0eeh,08bh,0c8h,08bh,046h,0feh,003h,0c8h,08bh,0d9h,08ah,087h,046h,037h,02ah,0e4h
	db 050h,08ah,087h,050h,037h,02ah,0e4h,08bh,0c8h,058h,003h,0c1h,048h,03bh,046h,0fch
	db 07dh,065h,0b8h,03ah,001h,0f7h,0eeh,003h,0c7h,08bh,0d8h,08ah,087h,03ch,037h,02ah
	db 0e4h,050h
	call random_
	db 059h,050h,0b8h,03ah,001h,0f7h,0eeh,003h,0c7h,08bh,0d8h,08ah,087h,032h,037h,02ah
	db 0e4h,08bh,0c8h,058h,003h,0c1h,089h,046h,0feh,08ah,046h,0feh,050h,08bh,046h,006h
	db 08bh,0d0h,0b1h,004h,0d3h,0e0h,02bh,0c2h,0d1h,0e0h,08bh,0c8h,08bh,0c7h,08bh,0d0h
	db 0d1h,0e0h,003h,0c2h,08bh,0d0h,003h,0c8h,08bh,0d9h,058h,088h,087h,048h,036h,0b8h
	db 03ah,001h,0f7h,0eeh,003h,046h,0feh,08bh,0d8h,08ah,087h,046h,037h,02ah,0e4h,089h
	db 046h,0fch
l64ce:
	db 08ah,046h,0fch,050h,08bh,046h,006h,08bh,0d0h,0b1h,004h,0d3h,0e0h,02bh,0c2h,0d1h
	db 0e0h,08bh,0c8h,08bh,0c7h,08bh,0d0h,0d1h,0e0h,003h,0c2h,08bh,0d0h,003h,0c8h,08bh
	db 0d9h,058h,088h,087h,049h,036h,0b8h,03ah,001h,0f7h,0eeh,08bh,04eh,0fch,0d1h,0e1h
	db 0d1h,0e1h,003h,0c1h,08bh,0d8h,08ah,087h,05ch,037h,02ah,0e4h,050h
	call random_
	db 059h,050h,0b8h,03ah,001h,0f7h,0eeh,08bh,04eh,0fch,0d1h,0e1h,0d1h,0e1h,003h,0c1h
	db 08bh,0d8h,08ah,087h,05bh,037h,02ah,0e4h,08bh,0c8h,058h,003h,0c1h,089h,046h,0fah
l652e:
	db 08ah,046h,0fah,050h,08bh,046h,006h,08bh,0d0h,0b1h,004h,0d3h,0e0h,02bh,0c2h,0d1h
	db 0e0h,08bh,0c8h,08bh,0c7h,08bh,0d0h,0d1h,0e0h,003h,0c2h,08bh,0d0h,003h,0c8h,08bh
	db 0d9h,058h,088h,087h,04ah,036h
l6554:
	db 0b8h,03ah,001h,0f7h,0eeh,08bh,04eh,0fch,0d1h,0e1h,0d1h,0e1h,003h,0c1h,08bh,0d8h
	db 08ah,087h,05ah,037h,08bh,04eh,008h,003h,04eh,0f4h,08bh,0d9h,088h,007h,080h,0bch
	db 02ch,043h,028h,075h,010h,083h,0ffh,004h,075h,00bh,08bh,046h,008h,003h,046h,0f4h
	db 08bh,0d8h,0c6h,007h,000h
l6589:
	db 08bh,046h,008h,003h,046h,0f4h,08bh,0d8h,080h,03fh,000h,074h,003h,0ffh,046h,0f4h
l6599:
	db 047h
l659a:
	db 0b8h,03ah,001h,0f7h,0eeh,08bh,0d8h,08ah,087h,016h,038h,02ah,0e4h,03bh,0c7h,07eh
	db 003h,0e9h,0e9h,0fdh
l65ae:
	db 08bh,046h,008h,003h,046h,0f4h,08bh,0d8h,0c6h,007h,000h,05eh,05fh,08bh,0e5h,05dh
	db 0c3h
#endasm
