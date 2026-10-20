#asm
	public do_cast_action_
	extrn combat_delay_:near
	extrn do_cast_spell_:near
	extrn get_combatant_name_:near
	extrn get_message_:near
	extrn print_combat_line_:near
	extrn print_msg_centered_:near
	extrn random_:near
	extrn try_raise_skill_:near
do_cast_action_:
	db 055h,08bh,0ech,083h,0c4h,0f2h,056h,0a0h,0ceh,043h,08bh,01eh,0a8h,043h,088h,087h
	db 09dh,001h,08bh,05eh,004h,08ah,047h,01fh,02ah,0e4h,089h,046h,0f8h,08ah,047h,020h
	db 02ah,0e4h,089h,046h,0f6h,08bh,047h,00ah,0b9h,000h,001h,099h,0f7h,0f9h,089h,046h
	db 0fch,08bh,047h,00ah,099h,0f7h,0f9h,089h,056h,0fah,0ffh,036h,05ch,043h,0ffh,036h
	db 05eh,043h,0b8h,00ch,050h,050h
	call get_combatant_name_
	db 083h,0c4h,006h,0b8h,0ach,050h,050h,0b8h,0ech,00ch,050h
	call get_message_
	db 083h,0c4h,004h,0b8h,05ch,050h,050h,08bh,046h,0fah,005h,0a0h,00fh,050h
	call get_message_
	db 083h,0c4h,004h,08bh,046h,0fah,08bh,0d0h,0d1h,0e0h,003h,0c2h,0d1h,0e0h,08bh,0d8h
	db 08ah,087h,0deh,000h,02ah,0e4h,0d1h,0e0h,08bh,0d8h,0ffh,0b7h,004h,000h,0b8h,00eh
	db 000h,050h,0b8h,006h,000h,083h,03eh,05eh,043h,000h,075h,003h,0b8h,001h,000h
lb0d3:
	db 050h,0b8h,05ch,050h,050h,0b8h,0ach,050h,050h,0b8h,00ch,050h,050h
	call print_combat_line_
	db 083h,0c4h,00ch,0c7h,006h,0fch,050h,000h,000h,0c7h,006h,018h,051h,000h,000h,0a1h
	db 05eh,043h,0d1h,0e0h,08bh,0d8h,08bh,09fh,0a8h,043h,08ah,087h,091h,001h,02ah,0e4h
	db 08bh,05eh,004h,08bh,00fh,003h,0c1h,040h,050h
	call random_
	db 059h,050h,0a1h,05eh,043h,0d1h,0e0h,08bh,0d8h,08bh,09fh,0a8h,043h,08ah,087h,091h
	db 001h,02ah,0e4h,08bh,0c8h,058h,03bh,0c1h,07dh,006h,0c7h,006h,018h,051h,001h,000h
lb12f:
	db 083h,03eh,05eh,043h,000h,074h,003h,0e9h,0e1h,000h
lb139:
	db 0b8h,0b0h,001h,0f7h,02eh,05ch,043h,08bh,0d8h,08ah,087h,087h,045h,03ch,005h,074h
	db 008h,03ch,004h,074h,004h,03ch,00dh,075h,030h
lb152:
	db 08ah,087h,035h,045h,02ah,0e4h,0b9h,003h,000h,099h,0f7h,0f9h,005h,05ah,000h,050h
	db 08bh,046h,0fah,08bh,0d0h,0d1h,0e0h,003h,0c2h,0d1h,0e0h,08bh,0d8h,08ah,087h,0dfh
	db 000h,02ah,0e4h,0f7h,06eh,0fch,08bh,0c8h,058h,02bh,0c1h,089h,046h,0f2h,0ebh,049h
lb182:
	db 0b8h,0b0h,001h,0f7h,02eh,05ch,043h,08bh,0d8h,08ah,087h,029h,045h,02ah,0e4h,0b9h
	db 003h,000h,099h,0f7h,0f9h,005h,05ah,000h,050h,08bh,046h,0fah,08bh,0d0h,0d1h,0e0h
	db 003h,0c2h,0d1h,0e0h,08bh,0d8h,08ah,087h,0dfh,000h,02ah,0e4h,0f7h,06eh,0fch,08bh
	db 0c8h,058h,02bh,0c1h,089h,046h,0f2h,0b8h,002h,000h,050h,0b8h,00dh,000h,050h,0ffh
	db 036h,05ch,043h
	call try_raise_skill_
	db 083h,0c4h,006h
lb1cb:
	db 0b8h,064h,000h,050h
	call random_
	db 059h,03bh,046h,0f2h,07eh,03fh,080h,03eh,093h,035h,001h,074h,032h,0b8h,024h,000h
	db 050h
	call random_
	db 059h,050h,0b8h,0b0h,001h,0f7h,02eh,05ch,043h,08bh,0d8h,08ah,087h,01bh,045h,02ah
	db 0e4h,08bh,0c8h,005h,012h,000h,08bh,0c8h,058h,03bh,0c1h,07eh,00eh,0c7h,006h,018h
	db 051h,000h,000h,0c7h,006h,0fch,050h,001h,000h,0ebh,006h
lb211:
	db 0c7h,006h,018h,051h,001h,000h
lb217:
	db 0e9h,076h,000h
lb21a:
	db 0b8h,02ch,000h,0f7h,02eh,05ch,043h,08bh,0f0h,0a1h,05eh,043h,0d1h,0e0h,08bh,0d8h
	db 08bh,09fh,0a8h,043h,08bh,000h,08bh,0d0h,0d1h,0e0h,003h,0c2h,005h,058h,000h,050h
	db 08bh,046h,0fah,08bh,0d0h,0d1h,0e0h,003h,0c2h,0d1h,0e0h,08bh,0d8h,08ah,087h,0dfh
	db 000h,02ah,0e4h,0f7h,06eh,0fch,08bh,0c8h,058h,02bh,0c1h,089h,046h,0f2h,0b8h,064h
	db 000h,050h
	call random_
	db 059h,08bh,0c8h,08bh,046h,0f2h,03bh,0c8h,07eh,027h,080h,03eh,093h,035h,002h,074h
	db 01ah,0b8h,007h,000h,050h
	call random_
	db 059h,085h,0c0h,075h,00eh,0c7h,006h,018h,051h,000h,000h,0c7h,006h,0fch,050h,001h
	db 000h,0ebh,006h
lb28a:
	db 0c7h,006h,018h,051h,001h,000h
lb290:
	db 0c7h,046h,0f4h,001h,000h,083h,03eh,05eh,043h,000h,075h,020h,0b8h,0b0h,001h,0f7h
	db 02eh,05ch,043h,08bh,0d8h,08ah,087h,087h,045h,03ch,005h,074h,008h,03ch,004h,074h
	db 004h,03ch,00dh,075h,005h
lb2b5:
	db 0c7h,046h,0f4h,000h,000h
lb2ba:
	db 0ebh,020h
lb2bc:
	db 0a1h,05eh,043h,0d1h,0e0h,08bh,0d8h,08bh,09fh,0b6h,043h,08ah,087h,0d0h,000h,03ch
	db 005h,074h,008h,03ch,004h,074h,004h,03ch,00dh,075h,005h
lb2d7:
	db 0c7h,046h,0f4h,000h,000h
lb2dc:
	db 083h,03eh,0fch,050h,001h,075h,024h,08bh,046h,0fah,08bh,0d0h,0d1h,0e0h,003h,0c2h
	db 0d1h,0e0h,08bh,0d8h,08ah,087h,0e1h,000h,02ah,0e4h,0a9h,002h,000h,075h,00ch,0c7h
	db 006h,0fch,050h,000h,000h,0c7h,006h,018h,051h,001h,000h
lb307:
	db 083h,03eh,018h,051h,001h,075h,01eh,08bh,046h,0fah,08bh,0d0h,0d1h,0e0h,003h,0c2h
	db 0d1h,0e0h,08bh,0d8h,08ah,087h,0e1h,000h,02ah,0e4h,0a9h,001h,000h,075h,006h,0c7h
	db 006h,018h,051h,000h,000h
lb32c:
	db 083h,07eh,0f4h,001h,075h,034h,08bh,05eh,004h,080h,07fh,00eh,000h,076h,02bh,0b8h
	db 002h,000h,050h
	call combat_delay_
	db 059h,0b8h,002h,000h,050h,0b8h,003h,000h,050h,0b8h,080h,00ch,050h
	call print_msg_centered_
	db 083h,0c4h,006h,0a1h,0c8h,04fh,0b9h,002h,000h,099h,0f7h,0f9h,050h
	call combat_delay_
	db 059h,0e9h,081h,000h
lb366:
	db 083h,03eh,018h,051h,001h,075h,02ah,0b8h,002h,000h,050h
	call combat_delay_
	db 059h,0b8h,002h,000h,050h,0b8h,005h,000h,050h,0b8h,081h,00ch,050h
	call print_msg_centered_
	db 083h,0c4h,006h,0a1h,0c8h,04fh,0b9h,002h,000h,099h,0f7h,0f9h,050h
	call combat_delay_
	db 059h,0ebh,050h
lb397:
	db 083h,03eh,0fch,050h,001h,075h,03ah,0b8h,002h,000h,050h
	call combat_delay_
	db 059h,0b8h,002h,000h,050h,0b8h,004h,000h,050h,0b8h,082h,00ch,050h
	call print_msg_centered_
	db 083h,0c4h,006h,0a1h,0c8h,04fh,0b9h,002h,000h,099h,0f7h,0f9h,050h
	call combat_delay_
	db 059h,0a0h,05eh,043h,08bh,05eh,004h,088h,047h,01fh,0a0h,05ch,043h,08bh,05eh,004h
	db 088h,047h,020h
lb3d8:
	db 0ffh,076h,0fch,0ffh,076h,0fah,0ffh,076h,004h
	call do_cast_spell_
	db 083h,0c4h,006h
lb3e7:
	db 083h,03eh,05eh,043h,000h,075h,037h,08bh,046h,0fah,08bh,0d0h,0d1h,0e0h,003h,0c2h
	db 0d1h,0e0h,08bh,0d8h,08ah,087h,0e0h,000h,02ah,0e4h,0f7h,06eh,0fch,050h,0b8h,0b0h
	db 001h,0f7h,02eh,05ch,043h,08bh,0c8h,08ah,087h,0deh,000h,02ah,0e4h,08bh,0d0h,0d1h
	db 0e0h,0d1h,0e0h,08bh,0d0h,003h,0c8h,08bh,0d9h,058h,029h,087h,010h,044h
lb425:
	db 0ffh,076h,0fch
	call random_
	db 059h,050h,08bh,046h,0fah,08bh,0d0h,0d1h,0e0h,003h,0c2h,0d1h,0e0h,08bh,0d8h,08ah
	db 087h,0dfh,000h,02ah,0e4h,08bh,0c8h,058h,003h,0c1h,003h,046h,0fch,05eh,08bh,0e5h
	db 05dh,0c3h
#endasm
