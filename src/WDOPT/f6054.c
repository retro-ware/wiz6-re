#asm
	public f6054_
	extrn make_two_char_text_:near
	extrn random_:near
	extrn reduce_toward_zero_:near
	extrn roll_dice_dopt_:near
	extrn show_overhead_map_:near
	extrn try_open_lock_:near
f6054_:
	db 055h,08bh,0ech,083h,0c4h,0fch,057h,056h,08bh,046h,006h,0e9h,0e2h,004h,08bh,046h
	db 008h,08bh,0d0h,0d1h,0e0h,003h,0c2h,0b1h,003h,0d3h,0e0h,003h,0c2h,0d1h,0e0h,001h
	db 006h,0d0h,04eh,0b8h,000h,000h,050h,0ffh,036h,0d2h,04eh,08bh,046h,008h,08bh,0d0h
	db 0d1h,0e0h,0d1h,0e0h,003h,0c2h,005h,046h,000h,050h
	call reduce_toward_zero_
	db 083h,0c4h,006h,0a3h,0d2h,04eh,0e9h,0c1h,004h,08bh,046h,008h,08bh,0d0h,0b1h,004h
	db 0d3h,0e0h,003h,0c2h,0d1h,0e0h,003h,0c2h,001h,006h,0d4h,04eh,0b8h,000h,000h,050h
	db 0ffh,036h,0d6h,04eh,08bh,046h,008h,048h,0b9h,002h,000h,099h,0f7h,0f9h,040h,050h
	call reduce_toward_zero_
	db 083h,0c4h,006h,0a3h,0d6h,04eh,0e9h,08eh,004h,08bh,046h,008h,08bh,0d0h,0d1h,0e0h
	db 003h,0c2h,0b1h,003h,0d3h,0e0h,003h,0c2h,0d1h,0e0h,001h,006h,0cch,04eh,0b8h,000h
	db 000h,050h,0ffh,036h,0ceh,04eh,08bh,046h,008h,048h,0b9h,002h,000h,099h,0f7h,0f9h
	db 040h,050h
	call reduce_toward_zero_
	db 083h,0c4h,006h,0a3h,0ceh,04eh,0e9h,059h,004h,08bh,046h,008h,08bh,0d0h,0d1h,0e0h
	db 0d1h,0e0h,003h,0c2h,001h,006h,0dch,04eh,0e9h,047h,004h,0b8h,064h,000h,0f7h,06eh
	db 008h,001h,006h,0c8h,04eh,0e9h,03ah,004h,08bh,046h,008h,08bh,0d0h,0d1h,0e0h,003h
	db 0c2h,0b1h,003h,0d3h,0e0h,003h,0c2h,0d1h,0e0h,001h,006h,0d8h,04eh,0b8h,000h,000h
	db 050h,0ffh,036h,0dah,04eh,08bh,046h,008h,08bh,0d0h,0d1h,0e0h,0d1h,0e0h,003h,0c2h
	db 050h
	call reduce_toward_zero_
	db 083h,0c4h,006h,0a3h,0dah,04eh,0e9h,005h,004h,0ffh,076h,008h,0b8h,008h,000h,050h
	db 08bh,046h,008h,0d1h,0e0h,050h
	call make_two_char_text_
	db 083h,0c4h,006h,08bh,0c8h,083h,0ech,004h,08bh,0c4h,08ch,0d2h,08eh,0c2h,08bh,0f1h
	db 08bh,0f8h,0a5h,0a5h
	call roll_dice_dopt_
	db 083h,0c4h,004h,089h,046h,0feh,050h,0b8h,0b0h,001h,0f7h,06eh,00ah,08bh,0d8h,058h
	db 001h,087h,004h,044h,08bh,087h,004h,044h,03bh,087h,006h,044h,07eh,008h,08bh,087h
	db 006h,044h,089h,087h,004h,044h
l61a3:
	db 0e9h,0b5h,003h,0b8h,0b0h,001h,0f7h,06eh,00ah,08bh,0d8h,08ah,087h,00dh,045h,02ah
	db 0e4h,050h,08bh,046h,008h,08bh,0d0h,0d1h,0e0h,003h,0c2h,0b1h,003h,0d3h,0e0h,003h
	db 0c2h,08bh,0c8h,058h,02bh,0c1h,089h,046h,0feh,03dh,000h,000h,07dh,005h,0c7h,046h
	db 0feh,000h,000h
l61d6:
	db 08ah,046h,0feh,088h,087h,00dh,045h,0e9h,07bh,003h,0b8h,0b0h,001h,0f7h,06eh,00ah
	db 08bh,0d8h,08ah,087h,08ch,045h,02ah,0e4h,02bh,046h,008h,089h,046h,0feh,03dh,000h
	db 000h,07fh,00ah,0c7h,046h,0feh,000h,000h,0c6h,087h,00fh,045h,000h
l6203:
	db 08ah,046h,0feh,088h,087h,08ch,045h,08ah,087h,00fh,045h,02ah,0e4h,050h,08bh,046h
	db 008h,08bh,0d0h,0d1h,0e0h,0d1h,0e0h,003h,0c2h,08bh,0c8h,058h,02bh,0c1h,089h,046h
	db 0feh,03dh,000h,000h,07fh,00ah,0c7h,046h,0feh,000h,000h,0c6h,087h,08ch,045h,000h
l6233:
	db 08ah,046h,0feh,088h,087h,00fh,045h,0e9h,01eh,003h,0b8h,0b0h,001h,0f7h,06eh,00ah
	db 08bh,0d8h,080h,0bfh,089h,045h,002h,075h,056h,08bh,046h,008h,08bh,0d0h,0d1h,0e0h
	db 003h,0c2h,050h,08ah,087h,017h,045h,02ah,0e4h,08bh,0d0h,0b9h,015h,000h,02bh,0c8h
	db 058h,03bh,0c1h,07eh,03ah,0feh,08fh,017h,045h,0b8h,015h,000h,050h
	call random_
	db 059h,050h,0b8h,0b0h,001h,0f7h,06eh,00ah,08bh,0d8h,08ah,087h,017h,045h,02ah,0e4h
	db 08bh,0c8h,058h,03bh,0c1h,07eh,013h,0c6h,087h,089h,045h,003h,0c7h,087h,000h,044h
	db 000h,000h,0c7h,087h,004h,044h,000h,000h,0ebh,005h
l629d:
	db 0c6h,087h,089h,045h,000h
l62a2:
	db 0e9h,0b6h,002h,0b8h,0b0h,001h,0f7h,06eh,00ah,08bh,0d8h,08ah,087h,011h,045h,02ah
	db 0e4h,050h,08bh,046h,008h,08bh,0d0h,0d1h,0e0h,003h,0c2h,0b1h,003h,0d3h,0e0h,003h
	db 0c2h,08bh,0c8h,058h,02bh,0c1h,089h,046h,0feh,03dh,000h,000h,07dh,005h,0c7h,046h
	db 0feh,000h,000h
l62d5:
	db 08ah,046h,0feh,088h,087h,011h,045h,0e9h,07ch,002h,0c7h,046h,0fch,001h,000h
l62e4:
	db 08bh,046h,0fch,03dh,001h,000h,074h,014h,03dh,002h,000h,074h,00fh,03dh,004h,000h
	db 074h,00ah,03dh,008h,000h,074h,005h,03dh,009h,000h,075h,030h
l6300:
	db 0b8h,0b0h,001h,0f7h,06eh,00ah,08bh,0c8h,08bh,046h,0fch,003h,0c8h,08bh,0d9h,08ah
	db 087h,00ah,045h,02ah,0e4h,08bh,04eh,008h,0d1h,0e1h,02bh,0c1h,089h,046h,0feh,03dh
	db 000h,000h,07dh,005h,0c7h,046h,0feh,000h,000h
l6329:
	db 08ah,046h,0feh,088h,087h,00ah,045h
l6330:
	db 0ffh,046h,0fch,08bh,046h,0fch,03dh,009h,000h,07eh,0a9h,0e9h,01dh,002h,0ffh,076h
	db 008h,0b8h,007h,000h,050h,0ffh,076h,008h
	call make_two_char_text_
	db 083h,0c4h,006h,08bh,0c8h,083h,0ech,004h,08bh,0c4h,08ch,0d2h,08eh,0c2h,08bh,0f1h
	db 08bh,0f8h,0a5h,0a5h
	call roll_dice_dopt_
	db 083h,0c4h,004h,089h,046h,0feh,050h,0b8h,0b0h,001h,0f7h,06eh,00ah,08bh,0d8h,058h
	db 001h,087h,000h,044h,08bh,087h,000h,044h,03bh,087h,002h,044h,07eh,008h,08bh,087h
	db 002h,044h,089h,087h,000h,044h
l6388:
	db 0e9h,0d0h,001h,0b8h,0b0h,001h,0f7h,06eh,00ah,08bh,0d8h,080h,0bfh,089h,045h,003h
	db 075h,03dh,08bh,046h,008h,08bh,0d0h,0d1h,0e0h,003h,0c2h,050h,08ah,087h,017h,045h
	db 02ah,0e4h,08bh,0d0h,0b9h,012h,000h,02bh,0c8h,058h,03bh,0c1h,07eh,021h,0feh,08fh
	db 017h,045h,0c6h,087h,089h,045h,000h,0c7h,087h,000h,044h,001h,000h,08bh,087h,006h
	db 044h,0b9h,00ah,000h,099h,0f7h,0f9h,089h,087h,004h,044h,0ffh,087h,00eh,044h
l63d7:
	db 0e9h,081h,001h,0ffh,076h,008h
	call try_open_lock_
	db 059h,03dh,0ffh,0ffh,075h,000h
l63e6:
	db 0e9h,072h,001h,0ffh,076h,008h
	call show_overhead_map_
	db 059h,0e9h,068h,001h,0e9h,065h,001h,0ffh,076h,008h,0b8h,008h,000h,050h,0ffh,076h
	db 008h
	call make_two_char_text_
	db 083h,0c4h,006h,08bh,0c8h,083h,0ech,004h,08bh,0c4h,08ch,0d2h,08eh,0c2h,08bh,0f1h
	db 08bh,0f8h,0a5h,0a5h
	call roll_dice_dopt_
	db 083h,0c4h,004h,089h,046h,0feh,050h,0b8h,0b0h,001h,0f7h,06eh,004h,08bh,0d8h,058h
	db 001h,087h,004h,044h,08bh,087h,004h,044h,03bh,087h,006h,044h,07eh,008h,08bh,087h
	db 006h,044h,089h,087h,004h,044h
l6440:
	db 0b8h,000h,000h,050h,0b8h,002h,000h,050h,0ffh,076h,008h
	call make_two_char_text_
	db 083h,0c4h,006h,08bh,0c8h,083h,0ech,004h,08bh,0c4h,08ch,0d2h,08eh,0c2h,08bh,0f1h
	db 08bh,0f8h,0a5h,0a5h
	call roll_dice_dopt_
	db 083h,0c4h,004h,089h,046h,0feh,050h,0b8h,0b0h,001h,0f7h,06eh,004h,08bh,0d8h,058h
	db 001h,087h,000h,044h,08bh,087h,000h,044h,03bh,087h,002h,044h,07eh,008h,08bh,087h
	db 002h,044h,089h,087h,000h,044h
l648b:
	db 0e9h,0cdh,000h,0c7h,046h,0feh,000h,000h
l6493:
	db 0b8h,000h,000h,050h,0b8h,00ah,000h,050h,0ffh,076h,008h
	call make_two_char_text_
	db 083h,0c4h,006h,08bh,0c8h,083h,0ech,004h,08bh,0c4h,08ch,0d2h,08eh,0c2h,08bh,0f1h
	db 08bh,0f8h,0a5h,0a5h
	call roll_dice_dopt_
	db 083h,0c4h,004h,089h,046h,0fch,050h,0b8h,0b0h,001h,0f7h,06eh,004h,08bh,0c8h,08bh
	db 056h,0feh,0d1h,0e2h,0d1h,0e2h,003h,0c2h,08bh,0d8h,058h,001h,087h,010h,044h,08bh
	db 087h,010h,044h,03bh,087h,012h,044h,07eh,008h,08bh,087h,012h,044h,089h,087h,010h
	db 044h
l64e9:
	db 0ffh,046h,0feh,08bh,046h,0feh,03dh,006h,000h,07ch,09fh,0ebh,065h,00ah,000h,00fh
	db 000h,01ah,000h,01eh,000h,026h,000h,027h,000h,029h,000h,02eh,000h,033h,000h,035h
	db 000h,039h,000h,03ch,000h,03eh,000h,040h,000h,044h,000h,046h,000h,04dh,000h,050h
	db 000h,051h,000h,056h,061h,0a6h,061h,0e0h,061h,002h,061h,014h,061h,0dah,063h,0cdh
	db 060h,03dh,062h,0dfh,062h,062h,060h,0a5h,062h,0e9h,063h,0f3h,063h,03eh,063h,09ah
	db 060h,021h,061h,08bh,063h,0f6h,063h,08eh,064h,05bh,065h
l6544:
	db 006h,08ch,0c9h,08eh,0c1h,057h,0bfh,0f6h,064h,0b9h,014h,000h,0fch,0f2h,0afh,026h
	db 08bh,04dh,024h,05fh,007h,0ffh,0e1h
l655b:
	db 05eh,05fh,08bh,0e5h,05dh,0c3h
#endasm
