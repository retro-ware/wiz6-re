#asm
	public f4572_
	extrn random_:near
f4572_:
	db 055h,08bh,0ech,083h,0c4h,0feh,057h,056h,0beh,000h,000h,0e9h,01dh,001h
l4580:
	db 0b8h,03ah,001h,0f7h,06eh,004h,08bh,0d8h,080h,0bfh,013h,038h,000h,076h,02eh,08ah
	db 087h,013h,038h,02ah,0e4h,03dh,0ffh,000h,074h,023h,0b9h,019h,000h,099h,0f7h,0f9h
	db 08bh,0f8h,089h,056h,0feh,08bh,05eh,004h,080h,0bfh,02ch,043h,036h,075h,00ch,085h
	db 0f6h,075h,008h,0bfh,000h,000h,0c7h,046h,0feh,000h,000h
l45bb:
	db 0ebh,057h
l45bd:
	db 0b8h,03ah,001h,0f7h,06eh,004h,003h,0c6h,08bh,0d8h,08ah,087h,03ch,037h,02ah,0e4h
	db 050h
	call random_
	db 059h,08bh,0f8h,0b8h,03ah,001h,0f7h,06eh,004h,003h,0c6h,08bh,0d8h,08ah,087h,032h
	db 037h,02ah,0e4h,003h,0f8h,0b8h,03ah,001h,0f7h,06eh,004h,003h,0c7h,08bh,0d8h,08ah
	db 087h,050h,037h,02ah,0e4h,050h
	call random_
	db 059h,050h,0b8h,03ah,001h,0f7h,06eh,004h,003h,0c7h,08bh,0d8h,08ah,087h,046h,037h
	db 02ah,0e4h,08bh,0c8h,058h,003h,0c1h,089h,046h,0feh
l4614:
	db 08bh,0c7h,050h,08bh,046h,006h,08bh,0d0h,0b1h,004h,0d3h,0e0h,02bh,0c2h,0d1h,0e0h
	db 08bh,0c8h,08bh,0c6h,08bh,0d0h,0d1h,0e0h,003h,0c2h,08bh,0d0h,003h,0c8h,08bh,0d9h
	db 058h,088h,087h,048h,036h,08ah,046h,0feh,088h,087h,049h,036h,0b8h,03ah,001h,0f7h
	db 06eh,004h,08bh,04eh,0feh,0d1h,0e1h,0d1h,0e1h,003h,0c1h,08bh,0d8h,08ah,087h,05ch
	db 037h,02ah,0e4h,050h
	call random_
	db 059h,050h,0b8h,03ah,001h,0f7h,06eh,004h,08bh,04eh,0feh,0d1h,0e1h,0d1h,0e1h,003h
	db 0c1h,08bh,0d8h,08ah,087h,05bh,037h,02ah,0e4h,08bh,0c8h,058h,003h,0c1h,050h,08bh
	db 046h,006h,08bh,0d0h,0b1h,004h,0d3h,0e0h,02bh,0c2h,0d1h,0e0h,08bh,0c8h,08bh,0c6h
	db 08bh,0d0h,0d1h,0e0h,003h,0c2h,08bh,0d0h,003h,0c8h,08bh,0d9h,058h,088h,087h,04ah
	db 036h,046h
l469d:
	db 0b8h,03ah,001h,0f7h,06eh,004h,08bh,0d8h,08ah,087h,016h,038h,02ah,0e4h,03bh,0c6h
	db 07eh,003h,0e9h,0ceh,0feh
l46b2:
	db 05eh,05fh,08bh,0e5h,05dh,0c3h
#endasm
