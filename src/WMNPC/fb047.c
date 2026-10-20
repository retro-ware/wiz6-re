/* Try to steal gold or an item from the NPC; chance from level and skill. */
#asm
	public do_npc_pilfer_
	extrn f5d0c_:near
	extrn f7f76_:near
	extrn fa206_:near
	extrn get_message_:near
	extrn npc_give_item_to_member_:near
	extrn random_:near
	extrn replace_char_with_string_:near
do_npc_pilfer_:
	db 055h,08bh,0ech,083h,0c4h,0f4h,0b8h,0b0h,001h,0f7h,06eh,004h,08bh,0d8h,08bh,087h
	db 00ch,044h,050h,0a0h,0cfh,051h,02ah,0e4h,08bh,0c8h,058h,02bh,0c1h,08bh,0d0h,0d1h
	db 0e0h,0d1h,0e0h,003h,0c2h,050h,08ah,087h,02ah,045h,02ah,0e4h,0b9h,002h,000h,099h
	db 0f7h,0f9h,08bh,0c8h,058h,003h,0c1h,089h,046h,0feh,080h,0bfh,087h,045h,003h,075h
	db 00dh,08ah,087h,018h,045h,02ah,0e4h,0d1h,0e0h,001h,046h,0feh,0ebh,019h
lb095:
	db 08ah,087h,087h,045h,03ch,004h,074h,008h,03ch,006h,074h,004h,03ch,00dh,075h,009h
lb0a5:
	db 08ah,087h,018h,045h,02ah,0e4h,001h,046h,0feh
lb0ae:
	db 08ah,087h,01ah,045h,02ah,0e4h,050h,003h,01eh,074h,052h,08ah,087h,050h,045h,098h
	db 003h,006h,0d0h,052h,0b9h,004h,000h,099h,0f7h,0f9h,08bh,0c8h,058h,003h,0c1h,003h
	db 046h,0feh,005h,0f6h,0ffh,089h,046h,0feh,03dh,000h,000h,07dh,005h,0c7h,046h,0feh
	db 000h,000h
lb0e0:
	db 083h,07eh,0feh,05fh,07eh,005h,0c7h,046h,0feh,05fh,000h
lb0eb:
	db 0b8h,064h,000h,050h
	call random_
	db 059h,003h,006h,092h,058h,089h,046h,0fch,0b8h,00ah,000h,050h
	call random_
	db 059h,003h,006h,092h,058h,005h,005h,000h,0a3h,092h,058h,0b8h,0d4h,051h,050h,0b8h
	db 0b0h,001h,0f7h,06eh,004h,08bh,0d8h,08ah,087h,086h,045h,02ah,0e4h,005h,022h,006h
	db 050h
	call get_message_
	db 083h,0c4h,004h,0b8h,05eh,000h,050h,0b8h,0b0h,001h,0f7h,06eh,004h,005h,0e8h,043h
	db 050h,0b8h,0d4h,051h,050h
	call replace_char_with_string_
	db 083h,0c4h,006h,0b8h,000h,000h,050h,0b8h,0d4h,051h,050h
	call f5d0c_
	db 083h,0c4h,004h,08bh,046h,0fch,03bh,046h,0feh,07ch,003h,0e9h,0dah,000h
lb159:
	call fa206_
	db 083h,03eh,0b2h,054h,000h,07eh,00dh,0b8h,064h,000h,050h
	call random_
	db 059h,03dh,014h,000h,07dh,061h
lb170:
	db 0b8h,064h,000h,050h
	call random_
	db 059h,050h,0a0h,0cfh,051h,02ah,0e4h,08bh,0c8h,058h,0f7h,0e9h,089h,046h,0fah,099h
	db 03bh,016h,0c2h,051h,07ch,008h,075h,008h,03bh,006h,0c0h,051h,077h,002h
lb195:
	db 0ebh,006h
lb197:
	db 0a1h,0c0h,051h,089h,046h,0fah
lb19d:
	db 08bh,046h,0fah,099h,029h,006h,0c0h,051h,019h,016h,0c2h,051h,08bh,046h,0fah,099h
	db 050h,052h,0b8h,0b0h,001h,0f7h,06eh,004h,08bh,0d8h,05ah,058h,001h,087h,0fch,043h
	db 011h,097h,0feh,043h,0b8h,0d4h,051h,050h,0b8h,026h,006h,050h
	call get_message_
	db 083h,0c4h,004h,0ebh,05fh
lb1d1:
	db 0ffh,036h,0b2h,054h
	call random_
	db 059h,089h,046h,0f8h,0d1h,0e0h,08bh,0d8h,08bh,087h,0b4h,054h,089h,046h,0f6h,0d1h
	db 0e0h,08bh,0d8h,08bh,087h,056h,058h,089h,046h,0f4h,0ffh,0b7h,0eeh,056h,050h,0ffh
	db 076h,004h
	call npc_give_item_to_member_
	db 083h,0c4h,006h,03dh,0ffh,0ffh,075h,010h,0b8h,0d4h,051h,050h,0b8h,027h,006h,050h
	call get_message_
	db 083h,0c4h,004h,0ebh,01bh
lb215:
	db 0b8h,0d4h,051h,050h,0b8h,025h,006h,050h
	call get_message_
	db 083h,0c4h,004h,08bh,046h,0f6h,0d1h,0e0h,08bh,0d8h,0c7h,087h,056h,058h,000h,000h
lb230:
	db 0e9h,0a2h,000h
lb233:
	db 08bh,046h,0feh,0d1h,0e0h,03bh,046h,0fch,07ch,009h,083h,07eh,0fch,05fh,07dh,003h
	db 0e9h,081h,000h
lb246:
	db 0b8h,0d4h,051h,050h,0b8h,028h,006h,050h
	call get_message_
	db 083h,0c4h,004h,0b8h,05eh,000h,050h,0b8h,0b0h,001h,0f7h,06eh,004h,005h,0e8h,043h
	db 050h,0b8h,0d4h,051h,050h
	call replace_char_with_string_
	db 083h,0c4h,006h,0b8h,001h,000h,050h,0b8h,0d4h,051h,050h
	call f5d0c_
	db 083h,0c4h,004h,0b8h,019h,000h,050h
	call random_
	db 059h,08bh,0c8h,005h,019h,000h,08bh,0c8h,0b8h,0b0h,001h,0f7h,06eh,004h,003h,006h
	db 074h,052h,08bh,0d8h,08ah,087h,050h,045h,098h,02bh,0c1h,089h,046h,0fah,03dh,09ch
	db 0ffh,07dh,005h,0c7h,046h,0fah,09ch,0ffh
lb2a9:
	db 08ah,046h,0fah,088h,087h,050h,045h,0b8h,000h,000h,050h,050h,050h,0b8h,00ah,000h
	db 050h,0ffh,076h,004h
	call f7f76_
	db 083h,0c4h,00ah
lb2c3:
	db 08bh,0e5h,05dh,0c3h
lb2c7:
	db 0b8h,0d4h,051h,050h,0b8h,024h,006h,050h
	call get_message_
	db 083h,0c4h,004h
lb2d5:
	db 0b8h,05eh,000h,050h,0b8h,0b0h,001h,0f7h,06eh,004h,005h,0e8h,043h,050h,0b8h,0d4h
	db 051h,050h
	call replace_char_with_string_
	db 083h,0c4h,006h,0b8h,001h,000h,050h,0b8h,0d4h,051h,050h
	call f5d0c_
	db 083h,0c4h,004h,0ebh,0c6h
#endasm
