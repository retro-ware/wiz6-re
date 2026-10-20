/* Main loop of a combat round: run every combatant's action in initiative order. */
#asm
	public run_combat_round_
	extrn clear_window_:near
	extrn combat_delay_:near
	extrn f8149_:near
	extrn f83f3_:near
	extrn fb85f_:near
	extrn fc66e_:near
	extrn fd0ad_:near
	extrn random_:near
	extrn refresh_all_windows_:near
	extrn reset_effects_:near
run_combat_round_:
	db 055h,08bh,0ech,083h,0c4h,0fah,056h
	call reset_effects_
	call refresh_all_windows_
	db 0c7h,006h,05ah,043h,064h,000h
ld11c:
	db 0c7h,006h,05eh,043h,000h,000h
ld122:
	db 0c7h,006h,05ch,043h,000h,000h,0e9h,098h,001h
ld12b:
	db 0b8h,02ch,000h,0f7h,02eh,05ch,043h,08bh,0c8h,0a1h,05eh,043h,0d1h,0e0h,08bh,0d8h
	db 08bh,087h,0a8h,043h,003h,0c1h,089h,046h,0feh,08bh,0d8h,080h,07fh,024h,000h,077h
	db 003h,0e9h,0d7h,000h
ld14f:
	db 08ah,047h,025h,02ah,0e4h,03bh,006h,05ah,043h,074h,003h,0e9h,0c9h,000h
ld15d:
	db 080h,07fh,02bh,000h,074h,003h,0e9h,076h,000h
ld166:
	db 08ah,047h,021h,02ah,0e4h,08bh,0f0h,08ah,040h,018h,02ah,0e4h,03bh,006h,05ah,043h
	db 074h,03ah,0c6h,047h,02bh,003h,0b8h,001h,000h,050h,0ffh,036h,0b6h,04fh
	call clear_window_
	db 083h,0c4h,004h,0b8h,002h,000h,050h
	call combat_delay_
	db 059h,0b8h,006h,000h,050h,0b8h,0ffh,0ffh,050h,0b8h,0beh,00dh,050h
	call fb85f_
	db 083h,0c4h,006h,0a1h,0c8h,04fh,0b9h,002h,000h,099h,0f7h,0f9h,050h
	call combat_delay_
	db 059h
ld1b2:
	db 0b8h,00ah,000h,050h
	call random_
	db 059h,08bh,0c8h,0a1h,05ah,043h,02bh,0c1h,005h,0fbh,0ffh,089h,046h,0fah,03dh,001h
	db 000h,07dh,005h,0c7h,046h,0fah,001h,000h
ld1d1:
	db 08ah,046h,0fah,08bh,05eh,0feh,088h,047h,025h,0ebh,04ah
ld1dc:
	db 08bh,05eh,0feh,080h,07fh,02bh,003h,075h,041h,0c6h,047h,02bh,000h,08bh,05eh,0feh
	db 0c6h,047h,025h,000h,0b8h,001h,000h,050h,0ffh,036h,0b6h,04fh
	call clear_window_
	db 083h,0c4h,004h,0b8h,002h,000h,050h
	call combat_delay_
	db 059h,0b8h,006h,000h,050h,0b8h,0ffh,0ffh,050h,0b8h,0bfh,00dh,050h
	call fb85f_
	db 083h,0c4h,006h,0a1h,0c8h,04fh,0b9h,002h,000h,099h,0f7h,0f9h,050h
	call combat_delay_
	db 059h
ld226:
	db 08bh,05eh,0feh,08ah,047h,021h,02ah,0e4h,08bh,0f0h,08ah,040h,018h,02ah,0e4h,03bh
	db 006h,05ah,043h,075h,064h,080h,07fh,024h,000h,076h,047h,080h,07fh,02bh,003h,075h
	db 041h,0c6h,047h,02bh,000h,08bh,05eh,0feh,0c6h,047h,025h,000h,0b8h,001h,000h,050h
	db 0ffh,036h,0b6h,04fh
	call clear_window_
	db 083h,0c4h,004h,0b8h,002h,000h,050h
	call combat_delay_
	db 059h,0b8h,006h,000h,050h,0b8h,0ffh,0ffh,050h,0b8h,0bfh,00dh,050h
	call fb85f_
	db 083h,0c4h,006h,0a1h,0c8h,04fh,0b9h,002h,000h,099h,0f7h,0f9h,050h
	call combat_delay_
	db 059h
ld288:
	call fc66e_
	db 08bh,05eh,0feh,0feh,047h,021h,083h,03eh,03ah,036h,00dh,074h,005h
ld298:
	db 05eh,08bh,0e5h,05dh,0c3h
ld29d:
	db 0ebh,013h
ld29f:
	db 08bh,05eh,0feh,08ah,047h,021h,02ah,0e4h,08bh,0f0h,080h,078h,018h,000h,075h,003h
	db 0feh,047h,021h
ld2b2:
	db 08bh,05eh,0feh,080h,07fh,021h,003h,076h,004h,0c6h,047h,021h,003h
ld2bf:
	db 0ffh,006h,05ch,043h
ld2c3:
	db 0a1h,05eh,043h,0d1h,0e0h,08bh,0d8h,08bh,09fh,0a8h,043h,08ah,087h,09dh,001h,02ah
	db 0e4h,03bh,006h,05ch,043h,07eh,003h,0e9h,04eh,0feh
ld2dd:
	db 0a1h,05eh,043h,0d1h,0e0h,08bh,0d8h,08bh,09fh,0a8h,043h,080h,0bfh,09dh,001h,000h
	db 077h,003h,0e9h,0aeh,001h
ld2f2:
	db 0c7h,046h,0fch,000h,000h
ld2f7:
	db 0a1h,05eh,043h,0d1h,0e0h,08bh,0d8h,08bh,09fh,0a8h,043h,08bh,076h,0fch,08ah,080h
	db 092h,001h,02ah,0e4h,089h,046h,0fah,08ah,080h,096h,001h,02ah,0e4h,03bh,006h,05ah
	db 043h,074h,003h,0e9h,075h,001h
ld31d:
	db 083h,07eh,0fah,000h,07fh,003h,0e9h,06ch,001h
ld326:
	db 0b8h,001h,000h,050h,0ffh,036h,0b6h,04fh
	call clear_window_
	db 083h,0c4h,004h,0b8h,002h,000h,050h
	call combat_delay_
	db 059h,08bh,046h,0fch,0e9h,033h,001h
ld342:
	db 0b8h,004h,000h,050h,0b8h,094h,00ch,050h
	call fd0ad_
	db 083h,0c4h,004h,08bh,046h,0fah,08bh,0d0h,0d1h,0e0h,0d1h,0e0h,003h,0c2h,005h,019h
	db 000h,050h,0b8h,001h,000h,050h,0ffh,076h,0fah,0b8h,004h,000h,050h,0b8h,002h,000h
	db 050h,0b8h,0f6h,0ffh,050h,0ffh,036h,05eh,043h
	call f8149_
	db 083h,0c4h,00eh,0e9h,013h,001h
ld37f:
	db 0b8h,003h,000h,050h,0b8h,095h,00ch,050h
	call fd0ad_
	db 083h,0c4h,004h,0b8h,000h,000h,050h,050h,0ffh,076h,0fah,0b8h,002h,000h,050h,08bh
	db 046h,0fah,08bh,0d0h,0d1h,0e0h,0d1h,0e0h,003h,0c2h,0d1h,0e0h,050h,0b8h,000h,000h
	db 050h,0b8h,005h,000h,050h,0b8h,004h,000h,050h,0b8h,001h,000h,050h,08bh,046h,0fah
	db 08bh,0d0h,0d1h,0e0h,0d1h,0e0h,003h,0c2h,005h,019h,000h,050h,0ffh,076h,0fah,0b8h
	db 006h,000h,050h,0b8h,095h,00dh,050h,0b8h,0f6h,0ffh,050h,0ffh,036h,05eh,043h
	call f83f3_
	db 083h,0c4h,01eh,0e9h,0b0h,000h
ld3e2:
	db 0b8h,006h,000h,050h,0b8h,096h,00ch,050h
	call fd0ad_
	db 083h,0c4h,004h,0b8h,000h,000h,050h,050h,0ffh,076h,0fah,0b8h,004h,000h,050h,0ffh
	db 076h,0fah,0b8h,000h,000h,050h,0b8h,008h,000h,050h,0b8h,003h,000h,050h,0b8h,002h
	db 000h,050h,08bh,046h,0fah,08bh,0d0h,0d1h,0e0h,0d1h,0e0h,003h,0c2h,005h,019h,000h
	db 050h,0ffh,076h,0fah,0b8h,005h,000h,050h,0b8h,098h,00dh,050h,0b8h,0f6h,0ffh,050h
	db 0ffh,036h,05eh,043h
	call f83f3_
	db 083h,0c4h,01eh,0ebh,059h
ld439:
	db 0b8h,006h,000h,050h,0b8h,097h,00ch,050h
	call fd0ad_
	db 083h,0c4h,004h,08bh,046h,0fah,08bh,0d0h,0d1h,0e0h,0d1h,0e0h,003h,0c2h,005h,019h
	db 000h,050h,0b8h,008h,000h,050h,0ffh,076h,0fah,0b8h,006h,000h,050h,0b8h,001h,000h
	db 050h,0b8h,0f6h,0ffh,050h,0ffh,036h,05eh,043h
	call f8149_
	db 083h,0c4h,00eh,0ebh,01dh
ld475:
	db 03dh,000h,000h,075h,003h,0e9h,0c5h,0feh
ld47d:
	db 03dh,001h,000h,075h,003h,0e9h,0fah,0feh
ld485:
	db 03dh,002h,000h,075h,003h,0e9h,055h,0ffh
ld48d:
	db 03dh,003h,000h,074h,0a7h
ld492:
	db 0ffh,046h,0fch,08bh,046h,0fch,03dh,004h,000h,07dh,003h,0e9h,057h,0feh
ld4a0:
	db 0ffh,006h,05eh,043h,0a1h,05eh,043h,03dh,007h,000h,07dh,003h,0e9h,073h,0fch
ld4af:
	db 0ffh,00eh,05ah,043h,07eh,003h,0e9h,064h,0fch
ld4b8:
	db 0b8h,008h,000h,050h
	call combat_delay_
	db 059h,0c7h,006h,03ah,036h,00eh,000h,0e9h,0cfh,0fdh
#endasm
