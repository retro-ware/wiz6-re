#asm
	public do_use_item_action_
	extrn access_scenario_record_:near
	extrn combat_delay_:near
	extrn do_cast_spell_:near
	extrn get_combatant_name_:near
	extrn get_message_:near
	extrn print_combat_line_:near
	extrn print_msg_centered_:near
	extrn random_:near
	extrn strcpy_:near
	extrn try_raise_skill_:near
	extrn use_item_charge_x_:near
do_use_item_action_:
	db 055h,08bh,0ech,083h,0c4h,0a6h,056h,08bh,05eh,004h,08ah,047h,01fh,02ah,0e4h,089h
	db 046h,0f6h,08ah,047h,020h,02ah,0e4h,089h,046h,0f4h,0ffh,036h,05ch,043h,0ffh,036h
	db 05eh,043h,0b8h,00ch,050h,050h
	call get_combatant_name_
	db 083h,0c4h,006h,0c7h,046h,0fch,000h,000h,0c7h,046h,0fah,000h,000h,0c7h,046h,0f0h
	db 0ffh,0ffh,083h,03eh,05eh,043h,000h,074h,003h,0e9h,0e3h,001h
lb492:
	db 08bh,05eh,004h,08bh,047h,00ah,089h,046h,0f8h,0b8h,000h,000h,050h,0b8h,0b0h,001h
	db 0f7h,02eh,05ch,043h,08bh,04eh,0f8h,0d1h,0e1h,0d1h,0e1h,0d1h,0e1h,003h,0c1h,08bh
	db 0d8h,0ffh,0b7h,028h,044h,08dh,046h,0a6h,050h,0b8h,001h,000h,050h
	call access_scenario_record_
	db 083h,0c4h,008h,08dh,046h,0a6h,050h,0b8h,05ch,050h,050h
	call strcpy_
	db 083h,0c4h,004h,083h,07eh,0c2h,000h,075h,003h,0e9h,030h,001h
lb4dc:
	db 08bh,046h,0c2h,0b9h,000h,001h,099h,0f7h,0f9h,089h,046h,0fch,089h,056h,0fah,08ah
	db 046h,0e2h,02ah,0e4h,0e9h,0f5h,000h
lb4f3:
	db 0b8h,0ach,050h,050h,0b8h,0f1h,00ch,050h
	call get_message_
	db 083h,0c4h,004h,0e9h,0ffh,000h
lb504:
	db 0b8h,0ach,050h,050h,0b8h,0f2h,00ch,050h
	call get_message_
	db 083h,0c4h,004h,0c7h,046h,0f0h,018h,000h,0e9h,0e9h,000h
lb51a:
	db 0b8h,0ach,050h,050h,0b8h,0f3h,00ch,050h
	call get_message_
	db 083h,0c4h,004h,0e9h,0d8h,000h
lb52b:
	db 083h,07eh,0fah,050h,07ch,011h,0b8h,0ach,050h,050h,0b8h,0f6h,00ch,050h
	call get_message_
	db 083h,0c4h,004h,0e9h,0a4h,000h
lb542:
	db 083h,07eh,0fch,000h,074h,003h,0e9h,088h,000h
lb54b:
	db 0b8h,0b0h,001h,0f7h,02eh,05ch,043h,08bh,0d8h,080h,0bfh,087h,045h,006h,075h,052h
	db 08ah,087h,028h,045h,02ah,0e4h,0b9h,00fh,000h,099h,0f7h,0f9h,040h,040h,050h,08bh
	db 046h,0fah,08bh,0d0h,0d1h,0e0h,003h,0c2h,0d1h,0e0h,08bh,0d8h,08ah,087h,0dfh,000h
	db 02ah,0e4h,08bh,0c8h,058h,02bh,0c1h,089h,046h,0fch,0b8h,001h,000h,050h,0b8h,00ch
	db 000h,050h,0ffh,036h,05ch,043h
	call try_raise_skill_
	db 083h,0c4h,006h,083h,07eh,0fch,000h,07dh,005h,0c7h,046h,0fch,000h,000h
lb5a2:
	db 083h,07eh,0fch,006h,07eh,005h,0c7h,046h,0fch,006h,000h
lb5ad:
	db 083h,07eh,0fch,000h,075h,010h,0b8h,0ach,050h,050h,0b8h,0e9h,00ch,050h
	call get_message_
	db 083h,0c4h,004h,0ebh,00eh
lb5c3:
	db 0b8h,0ach,050h,050h,0b8h,0e8h,00ch,050h
	call get_message_
	db 083h,0c4h,004h
lb5d1:
	db 0ebh,013h
lb5d3:
	db 0b8h,0ach,050h,050h,0b8h,0f0h,00ch,050h
	call get_message_
	db 083h,0c4h,004h,0c7h,046h,0f0h,016h,000h
lb5e6:
	db 0ebh,01bh
lb5e8:
	db 03dh,00ch,000h,075h,003h,0e9h,003h,0ffh
lb5f0:
	db 03dh,00dh,000h,075h,003h,0e9h,00ch,0ffh
lb5f8:
	db 03dh,010h,000h,075h,003h,0e9h,01ah,0ffh
lb600:
	db 0e9h,028h,0ffh
lb603:
	db 0ffh,076h,0f8h
	call use_item_charge_x_
	db 059h,0ebh,02ah
lb60c:
	db 080h,07eh,0e2h,002h,074h,006h,080h,07eh,0e2h,004h,075h,010h
lb618:
	db 0b8h,0ach,050h,050h,0b8h,0f5h,00ch,050h
	call get_message_
	db 083h,0c4h,004h,0ebh,00eh
lb628:
	db 0b8h,0ach,050h,050h,0b8h,0f4h,00ch,050h
	call get_message_
	db 083h,0c4h,004h
lb636:
	db 080h,07eh,0ebh,007h,075h,019h,0c7h,006h,052h,043h,001h,000h,0c7h,046h,0f0h,0ffh
	db 0ffh,0b8h,0ach,050h,050h,0b8h,0f0h,00ch,050h
	call get_message_
	db 083h,0c4h,004h
lb655:
	db 0b8h,00bh,000h,050h,0b8h,00eh,000h,050h,0b8h,001h,000h,050h,0b8h,05ch,050h,050h
	db 0b8h,0ach,050h,050h,0b8h,00ch,050h,050h
	call print_combat_line_
	db 083h,0c4h,00ch,0ebh,000h
lb675:
	db 083h,07eh,0fch,000h,075h,003h,0e9h,0ceh,001h
lb67e:
	db 0c7h,006h,0fch,050h,000h,000h,0c7h,006h,018h,051h,000h,000h,08bh,046h,0fah,08bh
	db 0d0h,0d1h,0e0h,003h,0c2h,0d1h,0e0h,08bh,0d8h,08ah,087h,0dfh,000h,02ah,0e4h,08bh
	db 0d0h,0d1h,0e0h,0d1h,0e0h,003h,0c2h,0d1h,0e0h,050h,08bh,046h,0fch,08bh,0d0h,0d1h
	db 0e0h,0d1h,0e0h,003h,0c2h,08bh,0c8h,058h,003h,0c1h,050h
	call random_
	db 059h,005h,0f6h,0ffh,089h,046h,0f2h,083h,03eh,05eh,043h,000h,075h,069h,083h,07eh
	db 0f0h,0ffh,074h,061h,0b8h,003h,000h,050h,0ffh,076h,0f0h,0ffh,036h,05ch,043h
	call try_raise_skill_
	db 083h,0c4h,006h,0b8h,0b0h,001h,0f7h,02eh,05ch,043h,003h,046h,0f0h,08bh,0d8h,08ah
	db 087h,01ch,045h,02ah,0e4h,03bh,046h,0f2h,07dh,039h,080h,03eh,093h,035h,001h,074h
	db 02ch,0b8h,024h,000h,050h
	call random_
	db 059h,050h,0b8h,0b0h,001h,0f7h,02eh,05ch,043h,08bh,0d8h,08ah,087h,01bh,045h,02ah
	db 0e4h,08bh,0c8h,005h,012h,000h,08bh,0c8h,058h,03bh,0c1h,07eh,008h,0c7h,006h,0fch
	db 050h,001h,000h,0ebh,006h
lb72b:
	db 0c7h,006h,018h,051h,001h,000h
lb731:
	db 0ebh,046h
lb733:
	db 0b8h,02ch,000h,0f7h,02eh,05ch,043h,08bh,0f0h,0a1h,05eh,043h,0d1h,0e0h,08bh,0d8h
	db 08bh,09fh,0a8h,043h,08bh,000h,08bh,0d0h,0d1h,0e0h,0d1h,0e0h,003h,0c2h,048h,048h
	db 03bh,046h,0f2h,07dh,021h,080h,03eh,093h,035h,002h,074h,014h,0b8h,007h,000h,050h
	call random_
	db 059h,085h,0c0h,075h,008h,0c7h,006h,0fch,050h,001h,000h,0ebh,006h
lb773:
	db 0c7h,006h,018h,051h,001h,000h
lb779:
	db 083h,03eh,0fch,050h,001h,075h,024h,08bh,046h,0fah,08bh,0d0h,0d1h,0e0h,003h,0c2h
	db 0d1h,0e0h,08bh,0d8h,08ah,087h,0e1h,000h,02ah,0e4h,0a9h,002h,000h,075h,00ch,0c7h
	db 006h,0fch,050h,000h,000h,0c7h,006h,018h,051h,001h,000h
lb7a4:
	db 083h,03eh,018h,051h,001h,075h,01eh,08bh,046h,0fah,08bh,0d0h,0d1h,0e0h,003h,0c2h
	db 0d1h,0e0h,08bh,0d8h,08ah,087h,0e1h,000h,02ah,0e4h,0a9h,001h,000h,075h,006h,0c7h
	db 006h,018h,051h,000h,000h
lb7c9:
	db 083h,03eh,018h,051h,001h,075h,02ah,0b8h,002h,000h,050h
	call combat_delay_
	db 059h,0b8h,002h,000h,050h,0b8h,005h,000h,050h,0b8h,081h,00ch,050h
	call print_msg_centered_
	db 083h,0c4h,006h,0a1h,0c8h,04fh,0b9h,002h,000h,099h,0f7h,0f9h,050h
	call combat_delay_
	db 059h,0ebh,050h
lb7fa:
	db 083h,03eh,0fch,050h,001h,075h,03ah,0b8h,002h,000h,050h
	call combat_delay_
	db 059h,0b8h,002h,000h,050h,0b8h,004h,000h,050h,0b8h,082h,00ch,050h
	call print_msg_centered_
	db 083h,0c4h,006h,0a1h,0c8h,04fh,0b9h,002h,000h,099h,0f7h,0f9h,050h
	call combat_delay_
	db 059h,0a0h,05eh,043h,08bh,05eh,004h,088h,047h,01fh,0a0h,05ch,043h,08bh,05eh,004h
	db 088h,047h,020h
lb83b:
	db 0ffh,076h,0fch,0ffh,076h,0fah,0ffh,076h,004h
	call do_cast_spell_
	db 083h,0c4h,006h
lb84a:
	db 0ebh,00eh
lb84c:
	db 0a1h,0c8h,04fh,0b9h,002h,000h,099h,0f7h,0f9h,050h
	call combat_delay_
	db 059h
lb85a:
	db 05eh,08bh,0e5h,05dh,0c3h
#endasm
