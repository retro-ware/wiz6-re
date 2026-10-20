#asm
	public f7038_
	extrn access_scenario_record_:near
	extrn f4572_:near
	extrn f4f73_:near
	extrn f5078_:near
	extrn f5382_:near
	extrn f5508_:near
	extrn f5690_:near
	extrn f5a1e_:near
	extrn f5a69_:near
	extrn f5c61_:near
	extrn f5d0c_:near
	extrn f5d9b_:near
	extrn f6835_:near
	extrn f69db_:near
	extrn f6d11_:near
	extrn f6d9d_:near
	extrn f6de9_:near
	extrn f6e7e_:near
	extrn fb2fd_:near
	extrn fc7d9_:near
	extrn fc999_:near
	extrn fd90e_:near
	extrn get_message_:near
	extrn npc_give_item_to_member_:near
	extrn npc_input_word_:near
	extrn random_:near
	extrn replace_char_with_string_:near
	extrn set_bit_:near
	extrn strlen_:near
	extrn test_bit_:near
f7038_:
	db 055h,08bh,0ech,083h,0c4h,0cah,056h,08bh,046h,006h,0d1h,0e0h,08bh,0d8h,08bh,087h
	db 086h,051h,089h,046h,0fch,0b8h,000h,000h,050h,0ffh,076h,0fch,08dh,046h,0dch,050h
	db 0b8h,006h,000h,050h
	call access_scenario_record_
	db 083h,0c4h,008h,0c7h,046h,0feh,000h,000h
l7067:
	db 083h,07eh,0feh,008h,07ch,003h,0e9h,003h,00fh
l7070:
	db 08bh,046h,0feh,0d1h,0e0h,0d1h,0e0h,08bh,0d8h,003h,0ddh,08ah,047h,0dfh,02ah,0e4h
	db 0e9h,0ddh,00eh,0b8h,000h,000h
l7086:
	db 05eh,08bh,0e5h,05dh,0c3h,08bh,046h,0feh,0d1h,0e0h,0d1h,0e0h,08bh,0d8h,003h,0ddh
	db 080h,07fh,0deh,000h,075h,035h,083h,03eh,064h,052h,000h,075h,01ah
	call f6d9d_
	db 08bh,046h,0feh,0d1h,0e0h,0d1h,0e0h,08bh,0d8h,003h,0ddh,0ffh,077h,0dch
	call fc999_
	db 059h
	call f6de9_
	db 0ebh,012h
l70bd:
	db 08bh,046h,0feh,0d1h,0e0h,0d1h,0e0h,08bh,0d8h,003h,0ddh,0ffh,077h,0dch
	call fc999_
	db 059h
l70cf:
	db 0ebh,01bh
l70d1:
	db 08bh,046h,0feh,0d1h,0e0h,0d1h,0e0h,08bh,0d8h,003h,0ddh,08ah,047h,0deh,02ah,0e4h
	db 048h,050h,0ffh,077h,0dch
	call f5c61_
	db 083h,0c4h,004h
l70ec:
	db 0e9h,07eh,00eh,0b8h,001h,000h,050h,0b8h,005h,006h,050h
	call f5d9b_
	db 083h,0c4h,004h,0a0h,0cch,051h,02ah,0e4h,0a3h,03ah,043h,0c7h,006h,038h,043h,001h
	db 000h,0c7h,006h,054h,043h,000h,000h,0c7h,006h,076h,052h,000h,000h,0c7h,006h,03ah
	db 036h,00ah,000h,0c7h,006h,0ceh,04fh,012h,000h,0b8h,001h,000h,0e9h,05dh,0ffh,08bh
	db 046h,0feh,0d1h,0e0h,0d1h,0e0h,08bh,0d8h,003h,0ddh,080h,07fh,0deh,000h,075h,00eh
	db 0b8h,000h,000h,050h,0b8h,006h,006h,050h
	call f5d9b_
	db 083h,0c4h,004h
l7148:
	db 0c7h,006h,076h,052h,001h,000h,0c7h,006h,03ah,036h,005h,000h,0c7h,006h,0ceh,04fh
	db 012h,000h,0b8h,001h,000h,0e9h,026h,0ffh,08bh,046h,0feh,0d1h,0e0h,0d1h,0e0h,08bh
	db 0d8h,003h,0ddh,08bh,047h,0dch,0b9h,000h,001h,099h,0f7h,0f9h,089h,046h,0dah,089h
	db 056h,0d8h,080h,07fh,0deh,000h,076h,02ah,050h,08ah,047h,0deh,02ah,0e4h,050h
	call f5508_
	db 083h,0c4h,004h,08bh,046h,0dah,08bh,04eh,0d8h,0d1h,0e1h,08bh,0d9h,089h,087h,062h
	db 043h,0ffh,076h,0d8h,050h
	call f4572_
	db 083h,0c4h,004h
	call f5690_
	db 0ebh,010h
l71aa:
	db 08bh,046h,0d8h,0d1h,0e0h,08bh,0d8h,0c7h,087h,062h,043h,000h,000h
	call f5690_
l71ba:
	db 0e9h,0b0h,00dh,08bh,046h,0feh,0d1h,0e0h,0d1h,0e0h,08bh,0d8h,003h,0ddh,08ah,047h
	db 0deh,02ah,0e4h,050h
	call f5a1e_
	db 059h,0e9h,098h,00dh,083h,03eh,064h,052h,000h,075h,028h
	call f6d9d_
	db 08bh,046h,0feh,0d1h,0e0h,0d1h,0e0h,08bh,0d8h,003h,0ddh,08ah,047h,0deh,02ah,0e4h
	db 050h,0ffh,077h,0dch,0ffh,076h,004h
	call npc_input_word_
	db 083h,0c4h,006h,089h,046h,0d6h
	call f6de9_
	db 0ebh,020h
l7204:
	db 08bh,046h,0feh,0d1h,0e0h,0d1h,0e0h,08bh,0d8h,003h,0ddh,08ah,047h,0deh,02ah,0e4h
	db 050h,0ffh,077h,0dch,0ffh,076h,004h
	call npc_input_word_
	db 083h,0c4h,006h,089h,046h,0d6h
l7224:
	db 083h,07eh,0d6h,001h,07eh,019h,0ffh,076h,0d6h,0ffh,076h,004h
	call f7038_
	db 083h,0c4h,004h,03dh,001h,000h,075h,006h,0b8h,001h,000h,0e9h,045h,0feh
l7241:
	db 0ebh,044h
l7243:
	db 083h,03eh,064h,052h,000h,074h,03dh,0b8h,0d4h,051h,050h,08bh,046h,0feh,0d1h,0e0h
	db 0d1h,0e0h,08bh,0d8h,003h,0ddh,08bh,047h,0dch,040h,050h
	call get_message_
	db 083h,0c4h,004h,0b8h,0d4h,051h,050h
	call strlen_
	db 059h,03dh,000h,000h,07eh,016h,0b8h,005h,000h,050h,0b8h,0d4h,051h,050h
	call fc7d9_
	db 083h,0c4h,004h,0ffh,036h,064h,052h
	call f4f73_
	db 059h
l7287:
	db 0e9h,0e3h,00ch
	call f5a69_
	db 0e9h,0ddh,00ch,0a1h,09ah,04fh,0ebh,018h
l7295:
	db 0ffh,00eh,0a2h,04fh,0ebh,026h
l729b:
	db 0ffh,00eh,0a4h,04fh,0ebh,020h
l72a1:
	db 0ffh,006h,0a2h,04fh,0ebh,01ah
l72a7:
	db 0ffh,006h,0a4h,04fh,0ebh,014h
l72ad:
	db 03dh,000h,000h,074h,0e3h,03dh,001h,000h,074h,0e4h,03dh,002h,000h,074h,0e5h,03dh
	db 003h,000h,074h,0e6h
l72c1:
	db 0a1h,09ah,04fh,040h,040h,0b9h,004h,000h,099h,0f7h,0f9h,089h,016h,09ah,04fh,0ffh
	db 036h,0a2h,04fh,0ffh,036h,0a4h,04fh,0b8h,09ch,04fh,050h,0b8h,09eh,04fh,050h,0b8h
	db 0a0h,04fh,050h
	call fd90e_
	db 083h,0c4h,00ah,08bh,01eh,0a8h,04fh,08bh,036h,09ch,04fh,08ah,080h,0c0h,006h,02ah
	db 0e4h,0a3h,0e8h,04eh,0c7h,006h,03ah,036h,005h,000h,0c7h,006h,0ceh,04fh,012h,000h
	db 0b8h,001h,000h,0e9h,079h,0fdh,0b8h,0ffh,0ffh,050h,08bh,046h,0feh,0d1h,0e0h,0d1h
	db 0e0h,08bh,0d8h,003h,0ddh,0ffh,077h,0dch,0ffh,076h,004h
	call npc_give_item_to_member_
	db 083h,0c4h,006h,089h,046h,0ceh,08bh,046h,004h,089h,046h,0d8h,0c7h,046h,0dah,000h
	db 000h,0ebh,027h
l7338:
	db 0b8h,0ffh,0ffh,050h,08bh,046h,0feh,0d1h,0e0h,0d1h,0e0h,08bh,0d8h,003h,0ddh,0ffh
	db 077h,0dch,0ffh,076h,0dah
	call npc_give_item_to_member_
	db 083h,0c4h,006h,089h,046h,0ceh,08bh,046h,0dah,089h,046h,0d8h,0ffh,046h,0dah
l735f:
	db 08bh,046h,0dah,03bh,006h,0ceh,043h,07dh,006h,083h,07eh,0ceh,0ffh,074h,0cah
l736e:
	db 083h,07eh,0ceh,0ffh,075h,006h,0b8h,000h,000h,0e9h,00ch,0fdh
l737a:
	db 08bh,046h,0feh,0d1h,0e0h,0d1h,0e0h,08bh,0d8h,003h,0ddh,080h,07fh,0deh,001h,075h
	db 034h,0b8h,0d4h,051h,050h,0b8h,00bh,006h,050h
	call get_message_
	db 083h,0c4h,004h,0b8h,05eh,000h,050h,0b8h,0b0h,001h,0f7h,06eh,0d8h,005h,0e8h,043h
	db 050h,0b8h,0d4h,051h,050h
	call replace_char_with_string_
	db 083h,0c4h,006h,0b8h,001h,000h,050h,0b8h,0d4h,051h,050h
	call f5d0c_
	db 083h,0c4h,004h
l73bf:
	db 0e9h,0abh,00bh,08bh,046h,0feh,0d1h,0e0h,0d1h,0e0h,08bh,0d8h,003h,0ddh,0ffh,077h
	db 0dch,0ffh,076h,004h
	call f6d11_
	db 083h,0c4h,004h,089h,046h,0d6h,03dh,0ffh,0ffh,074h,03ch,0b8h,0b0h,001h,0f7h,06eh
	db 004h,08bh,04eh,0d6h,0d1h,0e1h,0d1h,0e1h,0d1h,0e1h,003h,0c1h,08bh,0d8h,08ah,087h
	db 02ch,044h,02ah,0e4h,08bh,0d8h,080h,0bfh,0cch,000h,001h,075h,00eh,0ffh,076h,0d6h
	db 0ffh,076h,004h
	call f69db_
	db 083h,0c4h,004h,0ebh,00ch
l7411:
	db 0ffh,076h,0d6h,0ffh,076h,004h
	call f6835_
	db 083h,0c4h,004h
l741d:
	db 0e9h,04dh,00bh,08bh,046h,0feh,0d1h,0e0h,0d1h,0e0h,08bh,0d8h,003h,0ddh,08bh,047h
	db 0dch,050h,08ah,047h,0deh,02ah,0e4h,08bh,0c8h,058h,08bh,0d9h,0f7h,0ebh,089h,056h
	db 0d4h,089h,046h,0d2h,08bh,046h,0d2h,08bh,056h,0d4h,050h,052h,0b8h,0b0h,001h,0f7h
	db 06eh,004h,08bh,0d8h,05ah,058h,001h,087h,0fch,043h,011h,097h,0feh,043h,08bh,046h
	db 0d2h,08bh,056h,0d4h,029h,006h,0c0h,051h,019h,016h,0c2h,051h,083h,03eh,0c2h,051h
	db 000h,07fh,009h,075h,009h,083h,03eh,0c0h,051h,000h,072h,002h
l7479:
	db 0ebh,00ch
l747b:
	db 0c7h,006h,0c2h,051h,000h,000h,0c7h,006h,0c0h,051h,000h,000h
l7487:
	db 0e9h,0e3h,00ah,08bh,046h,0feh,0d1h,0e0h,0d1h,0e0h,08bh,0d8h,003h,0ddh,08bh,047h
	db 0dch,0bbh,00ah,000h,0f7h,0ebh,089h,056h,0d4h,089h,046h,0d2h,083h,07eh,0d4h,000h
	db 075h,004h,083h,07eh,0d2h,000h
l74ad:
	db 075h,027h,0c7h,046h,0dah,000h,000h,0ebh,017h
l74b6:
	db 0b8h,0b0h,001h,0f7h,06eh,0dah,08bh,0d8h,0c7h,087h,0feh,043h,000h,000h,0c7h,087h
	db 0fch,043h,000h,000h,0ffh,046h,0dah
l74cd:
	db 08bh,046h,0dah,03bh,006h,0ceh,043h,07ch,0e0h
l74d6:
	db 0b8h,0b0h,001h,0f7h,06eh,004h,08bh,0d8h,08bh,087h,0fch,043h,08bh,097h,0feh,043h
	db 03bh,056h,0d4h,07fh,007h,075h,007h,03bh,046h,0d2h,072h,002h
l74f2:
	db 0ebh,050h
l74f4:
	db 0ffh,076h,004h
	call f5382_
	db 059h,0b8h,0b0h,001h,0f7h,06eh,004h,08bh,0d8h,08bh,087h,0fch,043h,08bh,097h,0feh
	db 043h,03bh,056h,0d4h,07fh,007h,075h,007h,03bh,046h,0d2h,072h,002h
l7517:
	db 0ebh,02bh
l7519:
	db 08bh,046h,0feh,0d1h,0e0h,0d1h,0e0h,08bh,0d8h,003h,0ddh,08ah,047h,0deh,02ah,0e4h
	db 050h,0ffh,076h,004h
	call f7038_
	db 083h,0c4h,004h,03dh,001h,000h,075h,006h,0b8h,001h,000h,0e9h,048h,0fbh
l753e:
	db 0b8h,000h,000h,0e9h,042h,0fbh
l7544:
	db 08bh,046h,0d2h,08bh,056h,0d4h,050h,052h,0b8h,0b0h,001h,0f7h,06eh,004h,08bh,0d8h
	db 05ah,058h,029h,087h,0fch,043h,019h,097h,0feh,043h,08bh,046h,0d2h,08bh,056h,0d4h
	db 001h,006h,0c0h,051h,011h,016h,0c2h,051h,0e9h,0feh,009h,0e9h,0fbh,009h,08bh,046h
	db 0feh,0d1h,0e0h,0d1h,0e0h,08bh,0d8h,003h,0ddh,08bh,047h,0dch,089h,046h,0d6h,03dh
	db 000h,000h,07eh,025h,03dh,04fh,000h,07dh,020h,08ah,047h,0deh,02ah,0e4h,050h,0ffh
	db 076h,0d6h,0a1h,03ch,036h,08bh,0d0h,0d1h,0e0h,0d1h,0e0h,003h,0c2h,0d1h,0e0h,005h
	db 0ech,04eh,050h
	call set_bit_
	db 083h,0c4h,006h
l75ad:
	db 0e9h,0bdh,009h,08bh,046h,0feh,0d1h,0e0h,0d1h,0e0h,08bh,0d8h,003h,0ddh,08bh,047h
	db 0dch,089h,046h,0d6h,03dh,000h,000h,07eh,050h,03dh,04fh,000h,07dh,04bh,08ah,047h
	db 0deh,02ah,0e4h,050h,0ffh,076h,0d6h,0a1h,03ch,036h,08bh,0d0h,0d1h,0e0h,0d1h,0e0h
	db 003h,0c2h,0d1h,0e0h,005h,0ech,04eh,050h
	call set_bit_
	db 083h,0c4h,006h,08bh,046h,0feh,0d1h,0e0h,0d1h,0e0h,08bh,0d8h,003h,0ddh,08ah,047h
	db 0deh,02ah,0e4h,050h,0ffh,076h,0d6h,0a1h,03ch,036h,08bh,0d0h,0d1h,0e0h,0d1h,0e0h
	db 003h,0c2h,0d1h,0e0h,005h,0f8h,033h,050h
	call set_bit_
	db 083h,0c4h,006h
l7616:
	db 0e9h,054h,009h,08bh,046h,0feh,0d1h,0e0h,0d1h,0e0h,08bh,0d8h,003h,0ddh,08bh,047h
	db 0dch,089h,046h,0d6h,03dh,000h,000h,07eh,018h,03dh,00fh,000h,07dh,013h,08ah,047h
	db 0deh,02ah,0e4h,050h,0ffh,076h,0d6h,0b8h,078h,052h,050h
	call set_bit_
	db 083h,0c4h,006h
l7647:
	db 0e9h,023h,009h,08bh,046h,0feh,0d1h,0e0h,0d1h,0e0h,08bh,0d8h,003h,0ddh,08bh,047h
	db 0dch,089h,046h,0d6h,03dh,000h,000h,07eh,03bh,03dh,00fh,000h,07dh,036h,08ah,047h
	db 0deh,02ah,0e4h,050h,0ffh,076h,0d6h,0b8h,078h,052h,050h
	call set_bit_
	db 083h,0c4h,006h,08bh,046h,0feh,0d1h,0e0h,0d1h,0e0h,08bh,0d8h,003h,0ddh,08ah,047h
	db 0deh,02ah,0e4h,050h,0ffh,076h,0d6h,0a1h,074h,052h,0d1h,0e0h,005h,0a0h,034h,050h
	call set_bit_
	db 083h,0c4h,006h
l769b:
	db 0e9h,0cfh,008h,08bh,046h,0feh,0d1h,0e0h,0d1h,0e0h,08bh,0d8h,003h,0ddh,0ffh,077h
	db 0dch,0a1h,03ch,036h,08bh,0d0h,0d1h,0e0h,0d1h,0e0h,003h,0c2h,0d1h,0e0h,005h,0ech
	db 04eh,050h
	call test_bit_
	db 083h,0c4h,004h,03dh,001h,000h,075h,006h,0b8h,000h,000h,0e9h,0b8h,0f9h
l76ce:
	db 0e9h,09ch,008h,08bh,046h,0feh,0d1h,0e0h,0d1h,0e0h,08bh,0d8h,003h,0ddh,0ffh,077h
	db 0dch,0a1h,03ch,036h,08bh,0d0h,0d1h,0e0h,0d1h,0e0h,003h,0c2h,0d1h,0e0h,005h,0ech
	db 04eh,050h
	call test_bit_
	db 083h,0c4h,004h,085h,0c0h,075h,006h,0b8h,000h,000h,0e9h,086h,0f9h
l7700:
	db 0e9h,06ah,008h,08bh,046h,0feh,0d1h,0e0h,0d1h,0e0h,08bh,0d8h,003h,0ddh,0ffh,077h
	db 0dch,0b8h,078h,052h,050h
	call test_bit_
	db 083h,0c4h,004h,03dh,001h,000h,075h,006h,0b8h,000h,000h,0e9h,060h,0f9h
l7726:
	db 0e9h,044h,008h,08bh,046h,0feh,0d1h,0e0h,0d1h,0e0h,08bh,0d8h,003h,0ddh,0ffh,077h
	db 0dch,0b8h,078h,052h,050h
	call test_bit_
	db 083h,0c4h,004h,085h,0c0h,075h,006h,0b8h,000h,000h,0e9h,03bh,0f9h
l774b:
	db 0e9h,01fh,008h,08bh,046h,0feh,0d1h,0e0h,0d1h,0e0h,08bh,0d8h,003h,0ddh,080h,07fh
	db 0deh,000h,075h,011h,0ffh,077h,0dch,0ffh,076h,004h
	call f6d11_
	db 083h,0c4h,004h,089h,046h,0ceh,0ebh,038h
l7770:
	db 0c7h,046h,0ceh,0ffh,0ffh,0c7h,046h,0dah,000h,000h,0ebh,01dh
l777c:
	db 08bh,046h,0feh,0d1h,0e0h,0d1h,0e0h,08bh,0d8h,003h,0ddh,0ffh,077h,0dch,0ffh,076h
	db 0dah
	call f6d11_
	db 083h,0c4h,004h,089h,046h,0ceh,0ffh,046h,0dah
l7799:
	db 08bh,046h,0dah,03bh,006h,0ceh,043h,07dh,006h,083h,07eh,0ceh,0ffh,074h,0d4h
l77a8:
	db 083h,07eh,0ceh,0ffh,075h,006h,0b8h,000h,000h,0e9h,0d2h,0f8h
l77b4:
	db 0e9h,0b6h,007h,08bh,046h,0feh,0d1h,0e0h,0d1h,0e0h,08bh,0d8h,003h,0ddh,080h,07fh
	db 0deh,000h,075h,011h,0ffh,077h,0dch,0ffh,076h,004h
	call f6d11_
	db 083h,0c4h,004h,089h,046h,0ceh,0ebh,038h
l77d9:
	db 0c7h,046h,0ceh,0ffh,0ffh,0c7h,046h,0dah,000h,000h,0ebh,01dh
l77e5:
	db 08bh,046h,0feh,0d1h,0e0h,0d1h,0e0h,08bh,0d8h,003h,0ddh,0ffh,077h,0dch,0ffh,076h
	db 0dah
	call f6d11_
	db 083h,0c4h,004h,089h,046h,0ceh,0ffh,046h,0dah
l7802:
	db 08bh,046h,0dah,03bh,006h,0ceh,043h,07dh,006h,083h,07eh,0ceh,0ffh,074h,0d4h
l7811:
	db 083h,07eh,0ceh,0ffh,074h,006h,0b8h,000h,000h,0e9h,069h,0f8h
l781d:
	db 0e9h,04dh,007h,0b8h,064h,000h,050h
	call random_
	db 059h,08bh,04eh,0feh,0d1h,0e1h,0d1h,0e1h,08bh,0d9h,003h,0ddh,08bh,04fh,0dch,03bh
	db 0c1h,07eh,006h,0b8h,000h,000h,0e9h,046h,0f8h
l7840:
	db 0e9h,02ah,007h,08bh,046h,0feh,0d1h,0e0h,0d1h,0e0h,08bh,0d8h,003h,0ddh,0ffh,077h
	db 0dch,0a1h,03ch,036h,08bh,0d0h,0d1h,0e0h,0d1h,0e0h,003h,0c2h,0d1h,0e0h,005h,0ech
	db 04eh,050h
	call test_bit_
	db 083h,0c4h,004h,085h,0c0h,075h,025h,08bh,046h,0feh,0d1h,0e0h,0d1h,0e0h,08bh,0d8h
	db 003h,0ddh,08ah,047h,0deh,02ah,0e4h,050h,0ffh,076h,004h
	call f7038_
	db 083h,0c4h,004h,03dh,001h,000h,075h,006h,0b8h,001h,000h,0e9h,0f5h,0f7h
l7891:
	db 0e9h,0d9h,006h,08bh,046h,0feh,0d1h,0e0h,0d1h,0e0h,08bh,0d8h,003h,0ddh,0ffh,077h
	db 0dch,0a1h,03ch,036h,08bh,0d0h,0d1h,0e0h,0d1h,0e0h,003h,0c2h,0d1h,0e0h,005h,0ech
	db 04eh,050h
	call test_bit_
	db 083h,0c4h,004h,03dh,001h,000h,075h,025h,08bh,046h,0feh,0d1h,0e0h,0d1h,0e0h,08bh
	db 0d8h,003h,0ddh,08ah,047h,0deh,02ah,0e4h,050h,0ffh,076h,004h
	call f7038_
	db 083h,0c4h,004h,03dh,001h,000h,075h,006h,0b8h,001h,000h,0e9h,0a3h,0f7h
l78e3:
	db 0e9h,087h,006h,08bh,046h,0feh,0d1h,0e0h,0d1h,0e0h,08bh,0d8h,003h,0ddh,0ffh,077h
	db 0dch,0b8h,078h,052h,050h
	call test_bit_
	db 083h,0c4h,004h,085h,0c0h,075h,025h,08bh,046h,0feh,0d1h,0e0h,0d1h,0e0h,08bh,0d8h
	db 003h,0ddh,08ah,047h,0deh,02ah,0e4h,050h,0ffh,076h,004h
	call f7038_
	db 083h,0c4h,004h,03dh,001h,000h,075h,006h,0b8h,001h,000h,0e9h,05fh,0f7h
l7927:
	db 0e9h,043h,006h,08bh,046h,0feh,0d1h,0e0h,0d1h,0e0h,08bh,0d8h,003h,0ddh,0ffh,077h
	db 0dch,0b8h,078h,052h,050h
	call test_bit_
	db 083h,0c4h,004h,03dh,001h,000h,075h,025h,08bh,046h,0feh,0d1h,0e0h,0d1h,0e0h,08bh
	db 0d8h,003h,0ddh,08ah,047h,0deh,02ah,0e4h,050h,0ffh,076h,004h
	call f7038_
	db 083h,0c4h,004h,03dh,001h,000h,075h,006h,0b8h,001h,000h,0e9h,01ah,0f7h
l796c:
	db 0e9h,0feh,005h,0b8h,064h,000h,050h
	call random_
	db 059h,08bh,04eh,0feh,0d1h,0e1h,0d1h,0e1h,08bh,0d9h,003h,0ddh,08bh,04fh,0dch,03bh
	db 0c1h,07dh,01ah,08ah,047h,0deh,02ah,0e4h,050h,0ffh,076h,004h
	call f7038_
	db 083h,0c4h,004h,03dh,001h,000h,075h,006h,0b8h,001h,000h,0e9h,0e3h,0f6h
l79a3:
	db 0e9h,0c7h,005h,0c7h,046h,0dah,000h,000h,0ebh,05fh
l79ad:
	db 0b8h,0b0h,001h,0f7h,06eh,0dah,08bh,0d8h,080h,0bfh,089h,045h,000h,075h,04dh,0b8h
	db 0d4h,051h,050h,0b8h,00ch,006h,050h
	call get_message_
	db 083h,0c4h,004h,0b8h,05eh,000h,050h,0b8h,0b0h,001h,0f7h,06eh,0dah,005h,0e8h,043h
	db 050h,0b8h,0d4h,051h,050h
	call replace_char_with_string_
	db 083h,0c4h,006h,0b8h,001h,000h,050h,0b8h,0d4h,051h,050h
	call f5d0c_
	db 083h,0c4h,004h,0b8h,0b0h,001h,0f7h,06eh,0dah,08bh,0d8h,0feh,087h,011h,045h,0ffh
	db 036h,07ah,052h,0ffh,076h,0dah
	call f5078_
	db 083h,0c4h,004h
l7a09:
	db 0ffh,046h,0dah
l7a0c:
	db 08bh,046h,0dah,03bh,006h,0ceh,043h,07ch,098h,0e9h,055h,005h,08bh,046h,0feh,0d1h
	db 0e0h,0d1h,0e0h,08bh,0d8h,003h,0ddh,08bh,047h,0dch,089h,046h,0ceh,0c7h,046h,0dah
	db 000h,000h,0e9h,0d9h,000h
l7a31:
	db 0b8h,0b0h,001h,0f7h,06eh,0dah,08bh,0d8h,080h,0bfh,089h,045h,003h,072h,003h,0e9h
	db 0c4h,000h
l7a43:
	db 0b8h,0f5h,000h,050h,0ffh,076h,0dah
	call f6d11_
	db 083h,0c4h,004h,03dh,0ffh,0ffh,074h,01ch,08bh,046h,0feh,0d1h,0e0h,0d1h,0e0h,08bh
	db 0d8h,003h,0ddh,08ah,047h,0deh,02ah,0e4h,089h,046h,0ceh,0a1h,0ceh,043h,089h,046h
	db 0dah,0e9h,096h,000h
l7a71:
	db 0b8h,0d4h,051h,050h,0b8h,00dh,006h,050h
	call get_message_
	db 083h,0c4h,004h,0b8h,05eh,000h,050h,0b8h,0b0h,001h,0f7h,06eh,0dah,005h,0e8h,043h
	db 050h,0b8h,0d4h,051h,050h
	call replace_char_with_string_
	db 083h,0c4h,006h,0b8h,001h,000h,050h,0b8h,0d4h,051h,050h
	call f5d0c_
	db 083h,0c4h,004h,0b8h,0b0h,001h,0f7h,06eh,0dah,08bh,0d8h,0ffh,0b7h,000h,044h
	call random_
	db 059h,040h,050h,0b8h,0b0h,001h,0f7h,06eh,0dah,08bh,0d8h,058h,089h,087h,000h,044h
	db 0b8h,004h,000h,050h
	call random_
	db 059h,040h,050h,0b8h,0b0h,001h,0f7h,06eh,0dah,08bh,0d8h,058h,029h,087h,002h,044h
	db 083h,0bfh,002h,044h,001h,07dh,006h,0c7h,087h,002h,044h,001h,000h
l7ae8:
	db 08bh,087h,000h,044h,03bh,087h,002h,044h,07eh,008h,08bh,087h,002h,044h,089h,087h
	db 000h,044h
l7afa:
	db 0ffh,036h,07ah,052h,0ffh,076h,0dah
	call f5078_
	db 083h,0c4h,004h
l7b07:
	db 0ffh,046h,0dah
l7b0a:
	db 08bh,046h,0dah,03bh,006h,0ceh,043h,07dh,003h,0e9h,01bh,0ffh
l7b16:
	db 0ffh,076h,0ceh,0b8h,000h,000h,050h
	call f7038_
	db 083h,0c4h,004h,03dh,001h,000h,075h,006h,0b8h,001h,000h,0e9h,058h,0f5h
l7b2e:
	db 0e9h,03ch,004h,0c7h,046h,0dah,000h,000h,0e9h,0c5h,000h
l7b39:
	db 08bh,046h,0feh,0d1h,0e0h,0d1h,0e0h,08bh,0d8h,003h,0ddh,08bh,047h,0dch,048h,089h
	db 046h,0cah,08ah,047h,0deh,02ah,0e4h,048h,089h,046h,0cch,0c7h,046h,0d0h,000h,000h
l7b59:
	db 08bh,046h,0d0h,0d1h,0e0h,08bh,0d8h,003h,0ddh,08bh,047h,0cah,089h,046h,0ceh,03dh
	db 000h,000h,07dh,003h,0e9h,07dh,000h
l7b70:
	db 03dh,007h,000h,07eh,00bh,0b8h,008h,000h,050h
	call random_
	db 059h,089h,046h,0ceh
l7b80:
	db 0b8h,0b0h,001h,0f7h,06eh,0dah,003h,046h,0ceh,08bh,0d8h,080h,0bfh,014h,045h,012h
	db 073h,05bh,0feh,087h,014h,045h,0b8h,0d4h,051h,050h,0b8h,097h,013h,050h
	call get_message_
	db 083h,0c4h,004h,0b8h,07ch,052h,050h,08bh,046h,0ceh,005h,0bah,013h,050h
	call get_message_
	db 083h,0c4h,004h,0b8h,05eh,000h,050h,0b8h,0b0h,001h,0f7h,06eh,0dah,005h,0e8h,043h
	db 050h,0b8h,0d4h,051h,050h
	call replace_char_with_string_
	db 083h,0c4h,006h,0b8h,024h,000h,050h,0b8h,07ch,052h,050h,0b8h,0d4h,051h,050h
	call replace_char_with_string_
	db 083h,0c4h,006h,0b8h,001h,000h,050h,0b8h,0d4h,051h,050h
	call f5d0c_
	db 083h,0c4h,004h
l7bed:
	db 0ffh,046h,0d0h,08bh,046h,0d0h,03dh,002h,000h,07dh,003h,0e9h,05eh,0ffh
l7bfb:
	db 0ffh,046h,0dah
l7bfe:
	db 08bh,046h,0dah,03bh,006h,0ceh,043h,07dh,003h,0e9h,02fh,0ffh
l7c0a:
	db 0e9h,060h,003h,0c7h,046h,0d6h,000h,000h,0c7h,046h,0dah,000h,000h,0ebh,00eh
l7c19:
	db 0b8h,008h,000h,050h
	call random_
	db 059h,001h,046h,0d6h,0ffh,046h,0dah
l7c27:
	db 08bh,046h,0feh,0d1h,0e0h,0d1h,0e0h,08bh,0d8h,003h,0ddh,08bh,047h,0dch,03bh,046h
	db 0dah,07fh,0dfh,08bh,046h,0feh,0d1h,0e0h,0d1h,0e0h,08bh,0d8h,003h,0ddh,080h,07fh
	db 0deh,000h,076h,027h,08bh,046h,0d6h,050h,0b8h,0b0h,001h,0f7h,06eh,004h,08bh,0d8h
	db 058h,029h,087h,004h,044h,083h,0bfh,004h,044h,000h,07dh,00dh,0c7h,087h,004h,044h
	db 000h,000h,08ah,046h,0d6h,088h,087h,00ch,045h
l7c70:
	db 0ebh,023h
l7c72:
	db 08bh,046h,0d6h,050h,0b8h,0b0h,001h,0f7h,06eh,004h,08bh,0d8h,058h,001h,087h,004h
	db 044h,08bh,087h,004h,044h,03bh,087h,006h,044h,07eh,008h,08bh,087h,006h,044h,089h
	db 087h,004h,044h
l7c95:
	db 0ffh,036h,07ah,052h,0ffh,076h,004h
	call f5078_
	db 083h,0c4h,004h,0e9h,0c8h,002h,08bh,046h,0feh,0d1h,0e0h,0d1h,0e0h,08bh,0d8h,003h
	db 0ddh,08ah,047h,0deh,02ah,0e4h,050h,0ffh,076h,004h
	call f7038_
	db 083h,0c4h,004h,03dh,001h,000h,075h,006h,0b8h,001h,000h,0e9h,0bch,0f3h
l7cca:
	db 0e9h,0a0h,002h,0b8h,001h,000h,050h,08bh,046h,0feh,0d1h,0e0h,0d1h,0e0h,08bh,0d8h
	db 003h,0ddh,08ah,047h,0deh,02ah,0e4h,050h
	call random_
	db 059h,0d1h,0e0h,08bh,04eh,0feh,0d1h,0e1h,0d1h,0e1h,08bh,0d9h,003h,0ddh,08bh,04fh
	db 0dch,003h,0c1h,050h
	call f5c61_
	db 083h,0c4h,004h,0e9h,06bh,002h,08bh,046h,0feh,0d1h,0e0h,0d1h,0e0h,08bh,0d8h,003h
	db 0ddh,08bh,047h,0dch,0a3h,09ah,04fh
	call f5690_
	db 0b8h,004h,000h,050h
	call f5a1e_
	db 059h,0e9h,04ch,002h,0c7h,046h,0dah,000h,000h,0ebh,077h
l7d28:
	db 08bh,046h,0feh,0d1h,0e0h,0d1h,0e0h,08bh,0d8h,003h,0ddh,08ah,047h,0deh,02ah,0e4h
	db 0ebh,018h
l7d3a:
	db 0ffh,006h,0a2h,04fh,0ebh,026h
l7d40:
	db 0ffh,006h,0a4h,04fh,0ebh,020h
l7d46:
	db 0ffh,00eh,0a2h,04fh,0ebh,01ah
l7d4c:
	db 0ffh,00eh,0a4h,04fh,0ebh,014h
l7d52:
	db 03dh,000h,000h,074h,0e3h,03dh,001h,000h,074h,0e4h,03dh,002h,000h,074h,0e5h,03dh
	db 003h,000h,074h,0e6h
l7d66:
	db 0ffh,036h,0a2h,04fh,0ffh,036h,0a4h,04fh,0b8h,09ch,04fh,050h,0b8h,09eh,04fh,050h
	db 0b8h,0a0h,04fh,050h
	call fd90e_
	db 083h,0c4h,00ah,08bh,01eh,0a8h,04fh,08bh,036h,09ch,04fh,08ah,080h,0c0h,006h,02ah
	db 0e4h,0a3h,0e8h,04eh
	call f5690_
	db 0b8h,004h,000h,050h
	call f5a1e_
	db 059h,0ffh,046h,0dah
l7d9f:
	db 08bh,046h,0feh,0d1h,0e0h,0d1h,0e0h,08bh,0d8h,003h,0ddh,08bh,047h,0dch,03bh,046h
	db 0dah,07eh,003h,0e9h,073h,0ffh
l7db5:
	db 0e9h,0b5h,001h,0ffh,076h,004h
	call fb2fd_
	db 059h,085h,0c0h,075h,025h,08bh,046h,0feh,0d1h,0e0h,0d1h,0e0h,08bh,0d8h,003h,0ddh
	db 08ah,047h,0deh,02ah,0e4h,050h,0ffh,076h,004h
	call f7038_
	db 083h,0c4h,004h,03dh,001h,000h,075h,006h,0b8h,001h,000h,0e9h,09eh,0f2h
l7de8:
	db 0e9h,082h,001h,0b8h,001h,000h,0e9h,095h,0f2h,0c7h,006h,0a4h,04fh,081h,000h,0c7h
	db 006h,0a2h,04fh,084h,000h,0c7h,006h,0a0h,04fh,001h,000h,0c7h,006h,09eh,04fh,004h
	db 000h,0c7h,006h,09ch,04fh,000h,000h,0c7h,006h,09ah,04fh,000h,000h,0c7h,006h,03ch
	db 036h,00dh,000h,0c7h,006h,03ah,036h,006h,000h,0c7h,006h,0ceh,04fh,012h,000h,0b8h
	db 001h,000h,0e9h,059h,0f2h,08bh,046h,0feh,0d1h,0e0h,0d1h,0e0h,08bh,0d8h,003h,0ddh
	db 08ah,047h,0deh,02ah,0e4h,050h,0ffh,077h,0dch
	call f6e7e_
	db 083h,0c4h,004h,0e9h,03ch,0f2h,0c7h,046h,0ceh,0ffh,0ffh,0c7h,046h,0dah,000h,000h
	db 0ebh,04ah
l7e56:
	db 08bh,046h,0feh,0d1h,0e0h,0d1h,0e0h,08bh,0d8h,003h,0ddh,08ah,047h,0deh,02ah,0e4h
	db 050h,0ffh,076h,0dah
	call f6d11_
	db 083h,0c4h,004h,089h,046h,0ceh,03dh,0ffh,0ffh,074h,025h,050h,0ffh,076h,0dah
	call f6835_
	db 083h,0c4h,004h,0b8h,0ffh,0ffh,050h,08bh,046h,0feh,0d1h,0e0h,0d1h,0e0h,08bh,0d8h
	db 003h,0ddh,0ffh,077h,0dch,0ffh,076h,0dah
	call npc_give_item_to_member_
	db 083h,0c4h,006h
l7e9d:
	db 0ffh,046h,0dah
l7ea0:
	db 08bh,046h,0dah,03bh,006h,0ceh,043h,07dh,006h,083h,07eh,0ceh,0ffh,074h,0a7h
l7eaf:
	db 0e9h,0bbh,000h,08bh,046h,0feh,0d1h,0e0h,0d1h,0e0h,08bh,0d8h,003h,0ddh,08bh,047h
	db 0dch,0b9h,000h,001h,099h,0f7h,0f9h,089h,046h,0dah,089h,056h,0d8h,08ah,047h,0deh
	db 02ah,0e4h,050h,08bh,046h,0dah,08bh,0d0h,0d1h,0e0h,0d1h,0e0h,003h,0c2h,0d1h,0e0h
	db 08bh,0c8h,08bh,056h,0d8h,0d1h,0e2h,003h,0c2h,08bh,0d8h,058h,089h,087h,0deh,050h
	db 0ebh,07ch,08bh,046h,0feh,0d1h,0e0h,0d1h,0e0h,08bh,0d8h,003h,0ddh,08ah,047h,0deh
	db 02ah,0e4h,0a3h,042h,051h,0ebh,067h,083h,070h,08bh,070h,0efh,070h,029h,071h,060h
	db 071h,0bdh,071h,0d5h,071h,08ah,072h,090h,072h,00dh,073h,0c2h,073h,020h,074h,08ah
	db 074h,06fh,075h,072h,075h,0b0h,075h,019h,076h,04ah,076h,09eh,076h,0d1h,076h,003h
	db 077h,029h,077h,04eh,077h,0b7h,077h,020h,078h,043h,078h,094h,078h,0e6h,078h,02ah
	db 079h,06fh,079h,0a6h,079h,018h,07ah,031h,07bh,00dh,07ch,0a5h,07ch,0cdh,07ch,002h
	db 07dh,021h,07dh,0b8h,07dh,0ebh,07dh,0f1h,07dh,02dh,07eh,04ah,07eh,0b2h,07eh,0f1h
	db 07eh
l7f60:
	db 03dh,02dh,000h,073h,008h,093h,0d1h,0e3h,02eh,0ffh,0a7h,006h,07fh
l7f6d:
	db 0ffh,046h,0feh,0e9h,0f4h,0f0h
l7f73:
	db 0e9h,010h,0f1h
#endasm
