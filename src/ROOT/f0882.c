/* Read (0) or write (1) one record of a given type from SCENARIO.DBS, decoding packed types. */
#asm
	public access_scenario_record_
	extrn decode_text_:near
	extrn lseek_:near
	extrn read_:near
	extrn stop_sound_:near
	extrn write_:near
access_scenario_record_:
	db 055h,08bh,0ech,081h,0c4h,000h,0ffh,08bh,046h,004h,0ebh,054h,08bh,05eh,008h,08ah
	db 087h,070h,030h,02ah,0e4h,089h,046h,008h,0ebh,056h,08bh,05eh,008h,08ah,087h,080h
	db 030h,02ah,0e4h,089h,046h,008h,0ebh,048h,08bh,05eh,008h,08ah,087h,0c0h,030h,02ah
	db 0e4h,089h,046h,008h,0ebh,03ah,08bh,05eh,008h,08ah,087h,0c0h,031h,02ah,0e4h,089h
	db 046h,008h,0ebh,02ch,08bh,05eh,008h,08ah,087h,0c0h,032h,02ah,0e4h,089h,046h,008h
	db 0ebh,01eh,08eh,008h,08eh,008h,0b8h,008h,09ch,008h,0f2h,008h,0aah,008h,0c6h,008h
l08e2:
	db 02dh,002h,000h,03dh,007h,000h,073h,008h,093h,0d1h,0e3h,02eh,0ffh,0a7h,0d4h,008h
l08f2:
	call stop_sound_
	db 0b8h,000h,000h,050h,08bh,046h,004h,0d1h,0e0h,08bh,0d8h,08bh,08fh,000h,033h,08bh
	db 046h,008h,08bh,0d9h,0f7h,0ebh,08bh,04eh,004h,0d1h,0e1h,0d1h,0e1h,08bh,0d9h,08bh
	db 08fh,048h,030h,08bh,09fh,04ah,030h,003h,0c1h,013h,0d3h,052h,050h,0ffh,036h,042h
	db 008h
	call lseek_
	db 083h,0c4h,008h,08bh,05eh,004h,080h,0bfh,038h,033h,000h,075h,03bh,083h,07eh,00ah
	db 000h,075h,015h,0d1h,0e3h,0ffh,0b7h,000h,033h,0ffh,076h,006h,0ffh,036h,042h,008h
	call read_
	db 083h,0c4h,006h,0ebh,01eh
l0951:
	db 083h,07eh,00ah,001h,075h,018h,08bh,046h,004h,0d1h,0e0h,08bh,0d8h,0ffh,0b7h,000h
	db 033h,0ffh,076h,006h,0ffh,036h,042h,008h
	call write_
	db 083h,0c4h,006h
l096f:
	db 0ebh,02eh
l0971:
	db 083h,07eh,00ah,000h,075h,028h,08bh,046h,004h,0d1h,0e0h,08bh,0d8h,0ffh,0b7h,000h
	db 033h,08dh,086h,001h,0ffh,050h,0ffh,036h,042h,008h
	call read_
	db 083h,0c4h,006h,0ffh,076h,006h,08dh,086h,001h,0ffh,050h
	call decode_text_
	db 083h,0c4h,004h
l099f:
	db 08bh,0e5h,05dh,0c3h
#endasm
