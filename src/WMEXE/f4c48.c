/* Execute one melee/missile attack of the acting combatant (g435e side, g435c index); p8 is the attack kind. */
#asm
	public do_attack_
	extrn access_scenario_record_:near
	extrn apply_hit_effects_:near
	extrn clear_window_area_:near
	extrn combat_delay_:near
	extrn do_cast_spell_:near
	extrn do_damage_effect_:near
	extrn draw_member_card_x_:near
	extrn f4572_:near
	extrn f8efc_:near
	extrn get_combatant_name_:near
	extrn get_load_category_x_:near
	extrn get_message_:near
	extrn int_to_string_:near
	extrn pick_weighted_:near
	extrn play_sound_:near
	extrn print_combat_centered_:near
	extrn print_combat_line_:near
	extrn print_msg_centered_:near
	extrn random_:near
	extrn roll_dice_x_:near
	extrn set_cursor_:near
	extrn strcpy_:near
	extrn test_bit_:near
	extrn try_raise_skill_:near
	extrn use_item_charge_x_:near
do_attack_:
	db 055h,08bh,0ech,081h,0c4h,060h,0ffh,057h,056h,08bh,05eh,004h,08ah,047h,01fh,02ah
	db 0e4h,089h,046h,0b2h,08ah,047h,020h,02ah,0e4h,089h,046h,0b0h,0c7h,046h,08ah,0ffh
	db 0ffh,0c7h,086h,06ah,0ffh,0ffh,0ffh,0c7h,086h,062h,0ffh,000h,000h,0c7h,006h,00ah
	db 050h,004h,000h,0ffh,036h,05ch,043h,0ffh,036h,05eh,043h,0b8h,00ch,050h,050h
	call get_combatant_name_
	db 083h,0c4h,006h,0c6h,006h,0ach,050h,000h,0c6h,006h,05ch,050h,000h,083h,03eh,05eh
	db 043h,000h,074h,003h,0e9h,084h,001h
l4ca1:
	db 0b8h,0ach,050h,050h,08bh,046h,008h,005h,016h,00dh,050h
	call get_message_
	db 083h,0c4h,004h,0b8h,0b0h,001h,0f7h,02eh,05ch,043h,003h,046h,006h,08bh,0d8h,08ah
	db 087h,0f8h,044h,02ah,0e4h,089h,046h,0b4h,083h,07eh,008h,008h,075h,012h,0b8h,0b0h
	db 001h,0f7h,02eh,05ch,043h,08bh,0d8h,08ah,087h,0f9h,044h,02ah,0e4h,089h,046h,0b4h
l4cdf:
	db 08bh,05eh,004h,080h,07fh,02bh,000h,074h,022h,083h,07eh,008h,004h,074h,01ch,083h
	db 07eh,008h,008h,074h,016h,0b8h,0ach,050h,050h,0b8h,002h,000h,050h
	call random_
	db 059h,005h,039h,00dh,050h
	call get_message_
	db 083h,0c4h,004h
l4d0a:
	db 081h,07eh,0b4h,0ffh,000h,075h,003h,0e9h,00eh,001h
l4d14:
	db 0b8h,000h,000h,050h,0b8h,0b0h,001h,0f7h,02eh,05ch,043h,08bh,04eh,0b4h,0d1h,0e1h
	db 0d1h,0e1h,0d1h,0e1h,003h,0c1h,08bh,0d8h,0ffh,0b7h,028h,044h,08dh,046h,0b6h,050h
	db 0b8h,001h,000h,050h
	call access_scenario_record_
	db 083h,0c4h,008h,08dh,046h,0b6h,050h,0b8h,05ch,050h,050h
	call strcpy_
	db 083h,0c4h,004h,083h,07eh,008h,004h,074h,009h,083h,07eh,008h,008h,074h,003h,0e9h
	db 0c7h,000h
l4d5b:
	db 083h,07eh,008h,004h,075h,01bh,083h,07eh,0d2h,000h,074h,015h,08bh,046h,0d2h,089h
	db 086h,06ah,0ffh,0b8h,0ach,050h,050h,0b8h,038h,00dh,050h
	call get_message_
	db 083h,0c4h,004h
l4d7c:
	db 0b8h,0b0h,001h,0f7h,02eh,05ch,043h,08bh,04eh,0b4h,0d1h,0e1h,0d1h,0e1h,0d1h,0e1h
	db 003h,0c1h,08bh,0d8h,08ah,087h,02dh,044h,02ah,0e4h,0ebh,073h,0c7h,046h,08ah,005h
	db 000h,0e9h,082h,000h,0c7h,046h,08ah,00bh,000h,0e9h,07ah,000h,0c7h,046h,08ah,00ah
	db 000h,0ebh,073h,0c7h,046h,08ah,00dh,000h,0ebh,06ch,0c7h,046h,08ah,00ch,000h,0ebh
	db 065h,0c7h,046h,08ah,007h,000h,0ebh,05eh,0c7h,046h,08ah,009h,000h,0ebh,057h,0c7h
	db 046h,08ah,00eh,000h,0ebh,050h,0c7h,046h,08ah,003h,000h,0ebh,049h,000h,000h,006h
	db 000h,012h,000h,014h,000h,015h,000h,016h,000h,017h,000h,020h,000h,022h,000h,053h
	db 000h,064h,000h,065h,000h,098h,04dh,0a8h,04dh,0afh,04dh,0a0h,04dh,0b6h,04dh,0bdh
	db 04dh,0c4h,04dh,0cbh,04dh,0d2h,04dh,0bdh,04dh,0cbh,04dh,0cbh,04dh,022h,04eh
l4e0b:
	db 006h,08ch,0c9h,08eh,0c1h,057h,0bfh,0d9h,04dh,0b9h,00dh,000h,0fch,0f2h,0afh,026h
	db 08bh,04dh,016h,05fh,007h,0ffh,0e1h
l4e22:
	db 0e9h,076h,001h
l4e25:
	db 0a1h,05eh,043h,0d1h,0e0h,08bh,0d8h,08bh,09fh,0b6h,043h,08bh,076h,006h,080h,0b8h
	db 080h,000h,003h,076h,003h,0e9h,03ch,001h
l4e3d:
	db 0b8h,0ach,050h,050h,08bh,046h,008h,005h,016h,00dh,050h
	call get_message_
	db 083h,0c4h,004h,08bh,05eh,004h,080h,07fh,02bh,000h,074h,023h,08bh,046h,008h,03dh
	db 004h,000h,074h,01bh,03dh,008h,000h,074h,016h,0b8h,0ach,050h,050h,0b8h,002h,000h
	db 050h
	call random_
	db 059h,005h,039h,00dh,050h
	call get_message_
	db 083h,0c4h,004h
l4e7a:
	db 083h,07eh,008h,004h,074h,009h,083h,07eh,008h,008h,074h,003h,0e9h,0c5h,000h
l4e89:
	db 0a1h,05eh,043h,0d1h,0e0h,08bh,0d8h,08bh,09fh,0b6h,043h,08bh,046h,006h,0b9h,004h
	db 000h,0d3h,0e0h,08bh,0f0h,08bh,040h,044h,089h,046h,090h,08bh,040h,046h,089h,046h
	db 092h,08bh,076h,006h,08ah,080h,083h,000h,02ah,0e4h,0ebh,06dh,0c7h,046h,08ah,006h
	db 000h,0e9h,07ch,000h,0c7h,046h,08ah,009h,000h,0ebh,075h,0c7h,046h,08ah,00ah,000h
	db 0ebh,06eh,0c7h,046h,08ah,008h,000h,0ebh,067h,0c7h,046h,08ah,00ch,000h,0ebh,060h
	db 0c7h,046h,08ah,00eh,000h,08ah,046h,092h,02ah,0e4h,086h,0e0h,02ah,0c0h,050h,08ah
	db 046h,093h,02ah,0e4h,08bh,0c8h,058h,003h,0c1h,089h,086h,06ah,0ffh,0ebh,041h,002h
	db 000h,007h,000h,009h,000h,00ah,000h,00dh,000h,012h,000h,013h,000h,018h,000h,01ch
	db 000h,020h,000h,0b5h,04eh,0bdh,04eh,0c4h,04eh,0c4h,04eh,0cbh,04eh,0cbh,04eh,0cbh
	db 04eh,0cbh,04eh,0d2h,04eh,0d9h,04eh,039h,04fh
l4f22:
	db 006h,08ch,0c9h,08eh,0c1h,057h,0bfh,0f8h,04eh,0b9h,00bh,000h,0fch,0f2h,0afh,026h
	db 08bh,04dh,012h,05fh,007h,0ffh,0e1h
l4f39:
	db 083h,0beh,06ah,0ffh,0ffh,074h,00eh,0b8h,0ach,050h,050h,0b8h,038h,00dh,050h
	call get_message_
	db 083h,0c4h,004h
l4f4e:
	db 0a1h,05eh,043h,0d1h,0e0h,08bh,0d8h,08bh,09fh,0b6h,043h,08bh,076h,006h,080h,0b8h
	db 083h,000h,000h,076h,014h,0b8h,05ch,050h,050h,08ah,080h,083h,000h,02ah,0e4h,005h
	db 0d7h,00eh,050h
	call get_message_
	db 083h,0c4h,004h
l4f77:
	db 0ebh,022h
l4f79:
	db 0b8h,0ach,050h,050h,0a1h,05eh,043h,0d1h,0e0h,08bh,0d8h,08bh,09fh,0b6h,043h,08bh
	db 076h,006h,08ah,080h,080h,000h,02ah,0e4h,005h,02bh,00dh,050h
	call get_message_
	db 083h,0c4h,004h
l4f9b:
	db 0b8h,00bh,000h,050h,0b8h,00eh,000h,050h,0b8h,006h,000h,083h,03eh,05eh,043h,000h
	db 075h,003h,0b8h,001h,000h
l4fb0:
	db 050h,0b8h,05ch,050h,050h,0b8h,0ach,050h,050h,0b8h,00ch,050h,050h
	call print_combat_line_
	db 083h,0c4h,00ch,083h,0beh,06ah,0ffh,0ffh,075h,02bh,0ffh,076h,0b0h,0ffh,076h,0b2h
	db 0b8h,00ch,050h,050h
	call get_combatant_name_
	db 083h,0c4h,006h,0b8h,002h,000h,050h,0b8h,006h,000h,083h,07eh,0b2h,000h,075h,003h
	db 0b8h,001h,000h
l4fea:
	db 050h,0b8h,00ch,050h,050h
	call print_combat_centered_
	db 083h,0c4h,006h
l4ff5:
	db 083h,07eh,08ah,0ffh,074h,023h,0b8h,001h,000h,083h,0beh,06ah,0ffh,0ffh,075h,003h
	db 0b8h,000h,000h
l5008:
	db 050h,0ffh,076h,08ah,0ffh,076h,0b0h,0ffh,076h,0b2h
	call f8efc_
	db 083h,0c4h,008h,0c7h,086h,062h,0ffh,001h,000h
l501e:
	db 08bh,046h,0b2h,0d1h,0e0h,08bh,0d8h,08bh,09fh,0b6h,043h,08ah,087h,089h,000h,02ah
	db 0e4h,050h,08ah,087h,088h,000h,02ah,0e4h,08bh,0c8h,058h,003h,0c1h,050h,08ah,087h
	db 087h,000h,02ah,0e4h,08bh,0c8h,058h,003h,0c1h,050h,0a1h,05eh,043h,0d1h,0e0h,08bh
	db 0d8h,08bh,09fh,0b6h,043h,08ah,087h,089h,000h,02ah,0e4h,08bh,0c8h,08ah,087h,088h
	db 000h,02ah,0e4h,08bh,0d0h,003h,0c8h,08ah,087h,087h,000h,02ah,0e4h,08bh,0d0h,003h
	db 0c8h,058h,02bh,0c1h,0b9h,002h,000h,099h,0f7h,0f9h,089h,046h,0ach,08bh,05eh,004h
	db 08ah,047h,028h,098h,089h,046h,082h,083h,03eh,05eh,043h,000h,074h,003h,0e9h,079h
	db 003h
l508f:
	db 083h,07eh,008h,004h,075h,008h,0c7h,046h,084h,005h,000h,0e9h,034h,001h
l509d:
	db 0b8h,0b0h,001h,0f7h,02eh,05ch,043h,003h,046h,006h,08bh,0d8h,08ah,087h,0f8h,044h
	db 02ah,0e4h,03dh,0ffh,000h,075h,003h,0e9h,015h,001h
l50b7:
	db 0b8h,0b0h,001h,0f7h,02eh,05ch,043h,050h,08ah,087h,0f8h,044h,02ah,0e4h,08bh,0c8h
	db 0d1h,0e0h,0d1h,0e0h,0d1h,0e0h,08bh,0c8h,058h,003h,0c1h,08bh,0d8h,08ah,087h,02dh
	db 044h,02ah,0e4h,0e9h,0d6h,000h,0c7h,046h,084h,000h,000h,0e9h,0e5h,000h,0c7h,046h
	db 084h,001h,000h,0e9h,0ddh,000h,0c7h,046h,084h,002h,000h,0e9h,0d5h,000h,0c7h,046h
	db 084h,003h,000h,0e9h,0cdh,000h,0c7h,046h,084h,004h,000h,0e9h,0c5h,000h,0c7h,046h
	db 084h,007h,000h,0e9h,0bdh,000h,0c7h,046h,084h,006h,000h,0e9h,0b5h,000h,0c7h,046h
	db 084h,008h,000h,0e9h,0adh,000h,0c7h,046h,084h,000h,000h,0e9h,0a5h,000h,000h,000h
	db 001h,000h,002h,000h,003h,000h,004h,000h,005h,000h,006h,000h,007h,000h,008h,000h
	db 009h,000h,00ah,000h,00bh,000h,00ch,000h,00dh,000h,00eh,000h,00fh,000h,010h,000h
	db 011h,000h,012h,000h,013h,000h,014h,000h,018h,000h,026h,000h,033h,000h,034h,000h
	db 035h,000h,036h,000h,037h,000h,038h,000h,039h,000h,03ah,000h,03bh,000h,059h,000h
	db 05ah,000h,062h,000h,0ddh,050h,0e5h,050h,0edh,050h,0edh,050h,0f5h,050h,0f5h,050h
	db 0f5h,050h,0fdh,050h,0fdh,050h,0fdh,050h,0fdh,050h,005h,051h,005h,051h,00dh,051h
	db 0e5h,050h,0e5h,050h,0e5h,050h,0fdh,050h,0ddh,050h,0fdh,050h,0edh,050h,015h,051h
	db 015h,051h,0e5h,050h,0f5h,050h,0e5h,050h,0f5h,050h,0e5h,050h,0f5h,050h,0fdh,050h
	db 0e5h,050h,0e5h,050h,0ddh,050h,0fdh,050h,0f5h,050h,01dh,051h
l51b3:
	db 006h,08ch,0c9h,08eh,0c1h,057h,0bfh,025h,051h,0b9h,024h,000h,0fch,0f2h,0afh,026h
	db 08bh,04dh,044h,05fh,007h,0ffh,0e1h
l51ca:
	db 0ebh,005h
l51cc:
	db 0c7h,046h,084h,009h,000h
l51d1:
	db 083h,07eh,084h,009h,075h,01eh,0b8h,0b0h,001h,0f7h,02eh,05ch,043h,08bh,0d8h,080h
	db 0bfh,025h,045h,000h,077h,00eh,080h,0bfh,087h,045h,00ch,074h,007h,080h,0bfh,087h
	db 045h,00dh,075h,011h
l51f5:
	db 0b8h,002h,000h,050h,0ffh,076h,084h,0ffh,036h,05ch,043h
	call try_raise_skill_
	db 083h,0c4h,006h
l5206:
	db 0ffh,036h,05ch,043h
	call get_load_category_x_
	db 059h,08bh,0f0h,08dh,0beh,072h,0ffh,08ch,0d9h,08eh,0c1h,0b9h,007h,000h,0f3h,0a5h
	db 08bh,086h,076h,0ffh,083h,07eh,006h,000h,075h,004h,08bh,086h,074h,0ffh
l522b:
	db 089h,086h,070h,0ffh,08bh,05eh,004h,0ffh,077h,008h,0ffh,077h,006h,0b8h,000h,000h
	db 050h
	call f4572_
	db 083h,0c4h,006h,050h,0b8h,0b0h,001h,0f7h,02eh,05ch,043h,08bh,0d8h,08ah,087h,096h
	db 045h,098h,08bh,0c8h,058h,003h,0c1h,050h,08bh,046h,006h,0b9h,004h,000h,0d3h,0e0h
	db 003h,0d8h,08ah,087h,0e6h,044h,098h,08bh,0c8h,058h,003h,0c1h,050h,08bh,05eh,004h
	db 08ah,047h,027h,098h,08bh,0d0h,0d1h,0e0h,0d1h,0e0h,003h,0c2h,08bh,0c8h,058h,003h
	db 0c1h,003h,046h,0ach,08bh,0c8h,08bh,086h,070h,0ffh,003h,0c8h,08bh,0c1h,050h,0b8h
	db 0b0h,001h,0f7h,02eh,05ch,043h,003h,046h,084h,08bh,0d8h,08ah,087h,01ch,045h,02ah
	db 0e4h,0b9h,003h,000h,099h,0f7h,0f9h,08bh,0c8h,058h,02bh,0c1h,089h,046h,0aah,0b8h
	db 0b0h,001h,0f7h,02eh,05ch,043h,08bh,056h,006h,0b9h,004h,000h,0d3h,0e2h,08bh,0cah
	db 003h,0c1h,08bh,0d8h,08bh,087h,0d8h,044h,089h,046h,090h,08bh,087h,0dah,044h,089h
	db 046h,092h,081h,0c3h,0d8h,044h,089h,05eh,0aeh,0b8h,0b0h,001h,0f7h,02eh,05ch,043h
	db 003h,046h,006h,08bh,0d8h,08ah,087h,0f8h,044h,02ah,0e4h,089h,046h,08eh,083h,07eh
	db 008h,008h,075h,063h,0b8h,0b0h,001h,0f7h,02eh,05ch,043h,08bh,0d8h,08ah,087h,0f9h
	db 044h,02ah,0e4h,089h,046h,08ch,03dh,0ffh,000h,074h,04ah,0d1h,0e0h,0d1h,0e0h,0d1h
	db 0e0h,003h,0d8h,080h,0bfh,02ch,044h,004h,075h,03bh,0b8h,0b0h,001h,0f7h,02eh,05ch
	db 043h,08bh,0d8h,08bh,087h,0e8h,044h,089h,046h,090h,08bh,087h,0eah,044h,089h,046h
	db 092h,081h,0c3h,0e8h,044h,089h,05eh,0aeh,0b8h,0b0h,001h,0f7h,02eh,05ch,043h,08bh
	db 0d8h,08ah,087h,0f6h,044h,098h,001h,046h,0aah,0c7h,046h,082h,000h,000h,0ffh,076h
	db 08ch
	call use_item_charge_x_
	db 059h
l5354:
	db 0ebh,03bh
l5356:
	db 083h,07eh,008h,004h,075h,035h,0b8h,0b0h,001h,0f7h,02eh,05ch,043h,08bh,04eh,08eh
	db 0d1h,0e1h,0d1h,0e1h,0d1h,0e1h,003h,0c1h,08bh,0d8h,08ah,087h,02ch,044h,03ch,00eh
	db 074h,008h,03ch,00ch,073h,009h,03ch,002h,074h,005h
l5380:
	db 0c6h,087h,02eh,044h,001h
l5385:
	db 0c7h,046h,082h,000h,000h,0ffh,076h,08eh
	call use_item_charge_x_
	db 059h
l5391:
	db 0b8h,02ch,000h,0f7h,06eh,0b0h,08bh,0f0h,08bh,046h,0b2h,0d1h,0e0h,08bh,0d8h,08bh
	db 09fh,0a8h,043h,0ffh,070h,008h,0ffh,070h,006h,0b8h,001h,000h,050h
	call f4572_
	db 083h,0c4h,006h,050h,0b8h,02ch,000h,0f7h,06eh,0b0h,08bh,0f0h,08bh,046h,0b2h,0d1h
	db 0e0h,08bh,0d8h,08bh,09fh,0a8h,043h,08ah,040h,026h,098h,08bh,0c8h,058h,003h,0c1h
	db 089h,046h,0a8h,083h,03eh,0d4h,04eh,000h,07eh,006h,0a1h,0d6h,04eh,001h,046h,0a8h
l53e1:
	db 08bh,046h,0b2h,0d1h,0e0h,08bh,0d8h,08bh,09fh,0b6h,043h,08ah,087h,0beh,000h,098h
	db 003h,046h,0a8h,089h,046h,0a6h,08bh,076h,008h,08ah,080h,0c6h,000h,098h,003h,046h
	db 0a8h,089h,046h,0a4h,0e9h,029h,001h
l5408:
	db 08bh,05eh,004h,0ffh,077h,008h,0ffh,077h,006h,0b8h,000h,000h,050h
	call f4572_
	db 083h,0c4h,006h,050h,08bh,05eh,004h,08ah,047h,027h,098h,08bh,0d0h,0d1h,0e0h,0d1h
	db 0e0h,003h,0c2h,08bh,0c8h,058h,003h,0c1h,050h,0a1h,05eh,043h,0d1h,0e0h,08bh,0d8h
	db 08bh,09fh,0b6h,043h,08bh,046h,006h,0b9h,004h,000h,0d3h,0e0h,08bh,0f0h,08ah,040h
	db 052h,098h,08bh,0c8h,058h,003h,0c1h,003h,046h,0ach,089h,046h,0aah,08bh,040h,044h
	db 089h,046h,090h,08bh,040h,046h,089h,046h,092h,003h,0deh,083h,0c3h,044h,089h,05eh
	db 0aeh,083h,07eh,008h,004h,074h,006h,083h,07eh,008h,008h,075h,005h
l5475:
	db 0c7h,046h,082h,000h,000h
l547a:
	db 083h,07eh,0b2h,000h,075h,020h,0ffh,076h,0b0h
	call get_load_category_x_
	db 059h,08bh,0f0h,08dh,0beh,072h,0ffh,08ch,0d9h,08eh,0c1h,0b9h,007h,000h,0f3h,0a5h
	db 08bh,086h,072h,0ffh,089h,086h,06eh,0ffh,0ebh,006h
l54a0:
	db 0c7h,086h,06eh,0ffh,000h,000h
l54a6:
	db 0b8h,02ch,000h,0f7h,06eh,0b0h,08bh,0f0h,08bh,046h,0b2h,0d1h,0e0h,08bh,0d8h,08bh
	db 09fh,0a8h,043h,0ffh,070h,008h,0ffh,070h,006h,0b8h,001h,000h,050h
	call f4572_
	db 083h,0c4h,006h,050h,0b8h,02ch,000h,0f7h,06eh,0b0h,08bh,0f0h,08bh,046h,0b2h,0d1h
	db 0e0h,08bh,0d8h,08bh,09fh,0a8h,043h,08ah,040h,026h,098h,08bh,0c8h,058h,003h,0c1h
	db 089h,046h,0a8h,083h,07eh,0b2h,000h,075h,00dh,083h,03eh,0cch,04eh,000h,07eh,006h
	db 0a1h,0ceh,04eh,029h,046h,0a8h
l54fc:
	db 08bh,046h,0b2h,0d1h,0e0h,08bh,0d8h,08bh,09fh,0b6h,043h,08ah,087h,0beh,000h,098h
	db 003h,046h,0a8h,003h,086h,06eh,0ffh,089h,046h,0a6h,08bh,046h,0a8h,003h,086h,06eh
	db 0ffh,089h,046h,0a4h,083h,07eh,0b2h,000h,074h,00bh,08bh,076h,008h,08ah,080h,0c6h
	db 000h,098h,001h,046h,0a4h
l5531:
	db 0c7h,086h,064h,0ffh,001h,000h,08bh,05eh,004h,080h,07fh,02bh,000h,074h,015h,0b8h
	db 00ah,000h,083h,07eh,0a6h,00ah,07eh,003h,08bh,046h,0a6h
l554c:
	db 089h,046h,0a6h,0c7h,086h,064h,0ffh,002h,000h
l5555:
	db 080h,07fh,012h,000h,076h,020h,08bh,046h,0aah,050h,03dh,05ah,000h,058h,07dh,003h
	db 0b8h,05ah,000h
l5568:
	db 089h,046h,0aah,08bh,046h,0a6h,050h,03dh,000h,000h,058h,07eh,003h,0b8h,000h,000h
l5578:
	db 089h,046h,0a6h
l557b:
	db 080h,07fh,016h,000h,077h,00ch,080h,07fh,00fh,000h,077h,006h,080h,07fh,017h,000h
	db 076h,004h
l558d:
	db 083h,046h,0aah,019h
l5591:
	db 0b8h,02ch,000h,0f7h,06eh,0b0h,08bh,0f0h,08bh,046h,0b2h,0d1h,0e0h,08bh,0d8h,08bh
	db 09fh,0a8h,043h,080h,078h,012h,000h,077h,012h,080h,078h,010h,000h,077h,00ch,080h
	db 078h,011h,000h,077h,006h,080h,078h,022h,002h,075h,00bh
l55bc:
	db 0c7h,046h,0a6h,00fh,000h,0c7h,086h,064h,0ffh,002h,000h
l55c7:
	db 080h,078h,016h,000h,077h,006h,080h,078h,00fh,000h,076h,004h
l55d3:
	db 083h,046h,0a6h,004h
l55d7:
	db 0c7h,046h,080h,000h,000h,0a1h,05eh,043h,0d1h,0e0h,08bh,0d8h,08bh,09fh,0b6h,043h
	db 080h,0bfh,086h,000h,00fh,076h,003h,0ffh,046h,080h
l55f1:
	db 080h,0bfh,086h,000h,011h,076h,003h,0ffh,046h,080h
l55fb:
	db 08bh,046h,080h,001h,046h,082h,08bh,046h,0b2h,0d1h,0e0h,08bh,0d8h,08bh,09fh,0a8h
	db 043h,08ah,040h,029h,098h,0b9h,00ah,000h,099h,0f7h,0f9h,08bh,0c8h,0a1h,05eh,043h
	db 0d1h,0e0h,08bh,0d8h,08bh,09fh,0b6h,043h,08ah,087h,0d4h,000h,02ah,0e4h,02bh,0c1h
	db 050h
	call random_
	db 059h,040h,089h,046h,09ch,03dh,001h,000h,07dh,005h,0c7h,046h,09ch,001h,000h
l563e:
	db 083h,07eh,09ch,004h,07eh,005h,0c7h,046h,09ch,004h,000h
l5649:
	db 08bh,046h,008h,0e9h,09dh,000h,0e9h,0a7h,000h,0ffh,04eh,0a6h,0ffh,04eh,0a6h,0ffh
	db 046h,0a4h,0ffh,046h,082h,0e9h,098h,000h,0ffh,04eh,0a4h,0ffh,04eh,0a4h,08bh,046h
	db 082h,003h,046h,080h,040h,040h,089h,046h,082h,0e9h,084h,000h,083h,046h,0a6h,0fch
	db 083h,046h,0a4h,0fch,0c7h,086h,064h,0ffh,002h,000h,0ebh,074h,0c7h,046h,09ch,001h
	db 000h,0c7h,086h,064h,0ffh,001h,000h,0ffh,04eh,0a6h,0ffh,046h,0a4h,0ebh,061h,0ffh
	db 046h,0a6h,0ffh,04eh,0a4h,0ebh,059h,0ffh,04eh,0a6h,0ffh,04eh,0a6h,08bh,046h,082h
	db 003h,046h,080h,040h,040h,089h,046h,082h,0ebh,046h,0ffh,046h,0a6h,0ffh,046h,0a6h
	db 0ffh,04eh,0a4h,0ffh,04eh,0a4h,0c7h,086h,064h,0ffh,001h,000h,0ebh,032h,0c7h,046h
	db 09ch,001h,000h,0c7h,086h,064h,0ffh,001h,000h,0ffh,046h,0a4h,0ffh,046h,0a4h,0ebh
	db 01fh,04fh,056h,052h,056h,061h,056h,075h,056h,085h,056h,098h,056h,0a0h,056h,0b3h
	db 056h,0c7h,056h
l56ec:
	db 03dh,009h,000h,073h,008h,093h,0d1h,0e3h,02eh,0ffh,0a7h,0dah,056h
l56f9:
	db 0b8h,02ch,000h,0f7h,06eh,0b0h,08bh,0f0h,08bh,046h,0b2h,0d1h,0e0h,08bh,0d8h,08bh
	db 09fh,0a8h,043h,080h,078h,01eh,007h,075h,015h,0b8h,00ah,000h,083h,07eh,0a6h,00ah
	db 07eh,003h,08bh,046h,0a6h
l571e:
	db 089h,046h,0a6h,0c7h,086h,064h,0ffh,002h,000h
l5727:
	db 080h,078h,012h,000h,074h,003h,0e9h,07ah,002h
l5730:
	db 080h,078h,010h,000h,074h,003h,0e9h,071h,002h
l5739:
	db 080h,078h,011h,000h,074h,003h,0e9h,068h,002h
l5742:
	db 080h,078h,022h,000h,074h,003h,0e9h,05fh,002h
l574b:
	db 080h,078h,01eh,001h,074h,003h,0e9h,01dh,002h
l5754:
	db 08bh,040h,00ah,0e9h,0f8h,001h
l575a:
	db 083h,07eh,0b2h,000h,075h,02bh,0b8h,0b0h,001h,0f7h,06eh,0b0h,08bh,0d8h,08ah,087h
	db 024h,045h,02ah,0e4h,0b9h,00ah,000h,099h,0f7h,0f9h,040h,029h,046h,0a6h,0b8h,002h
	db 000h,050h,0b8h,008h,000h,050h,0ffh,076h,0b0h
	call try_raise_skill_
	db 083h,0c4h,006h,0ebh,01fh
l578b:
	db 0b8h,02ch,000h,0f7h,06eh,0b0h,08bh,0f0h,08bh,046h,0b2h,0d1h,0e0h,08bh,0d8h,08bh
	db 09fh,0a8h,043h,08bh,000h,0b9h,004h,000h,099h,0f7h,0f9h,040h,029h,046h,0a6h
l57aa:
	db 0c7h,086h,064h,0ffh,001h,000h,0e9h,0bch,001h
l57b3:
	db 0ffh,04eh,0a6h,0ffh,04eh,0a6h,0c7h,086h,064h,0ffh,001h,000h,0e9h,0adh,001h
l57c2:
	db 083h,07eh,008h,004h,075h,003h,0e9h,07eh,001h
l57cb:
	db 083h,07eh,008h,008h,075h,003h,0e9h,075h,001h
l57d4:
	db 0b8h,02ch,000h,0f7h,06eh,0b0h,08bh,0f0h,08bh,046h,0b2h,0d1h,0e0h,08bh,0d8h,08bh
	db 09fh,0a8h,043h,0c6h,040h,01eh,000h,0b8h,02ch,000h,0f7h,06eh,0b0h,08bh,0f0h,08bh
	db 046h,0b2h,0d1h,0e0h,08bh,0d8h,08bh,09fh,0a8h,043h,0c6h,040h,021h,000h,0a1h,05ah
	db 043h,048h,050h,0b8h,02ch,000h,0f7h,06eh,0b0h,08bh,0f0h,08bh,046h,0b2h,0d1h,0e0h
	db 08bh,0d8h,08bh,09fh,0a8h,043h,058h,088h,040h,018h,0a0h,05eh,043h,050h,0b8h,02ch
	db 000h,0f7h,06eh,0b0h,08bh,0f0h,08bh,046h,0b2h,0d1h,0e0h,08bh,0d8h,08bh,09fh,0a8h
	db 043h,058h,088h,040h,01fh,0a0h,05ch,043h,050h,0b8h,02ch,000h,0f7h,06eh,0b0h,08bh
	db 0f0h,08bh,046h,0b2h,0d1h,0e0h,08bh,0d8h,08bh,09fh,0a8h,043h,058h,088h,040h,020h
	db 0b8h,02ch,000h,0f7h,06eh,0b0h,08bh,0f0h,08bh,046h,0b2h,0d1h,0e0h,08bh,0d8h,08bh
	db 09fh,0a8h,043h,0c7h,040h,00ch,0ffh,0ffh,0b8h,02ch,000h,0f7h,06eh,0b0h,08bh,0f0h
	db 08bh,046h,0b2h,0d1h,0e0h,08bh,0d8h,08bh,09fh,0a8h,043h,0c7h,040h,00ah,0ffh,000h
	db 083h,07eh,0b2h,000h,075h,043h,0c7h,086h,06ch,0ffh,007h,000h
l5890:
	db 0ffh,0b6h,06ch,0ffh,0b8h,0b0h,001h,0f7h,06eh,0b0h,005h,0e7h,044h,050h
	call test_bit_
	db 083h,0c4h,004h,03dh,001h,000h,075h,01ch,08bh,086h,06ch,0ffh,050h,0b8h,02ch,000h
	db 0f7h,06eh,0b0h,08bh,0f0h,08bh,046h,0b2h,0d1h,0e0h,08bh,0d8h,08bh,09fh,0a8h,043h
	db 058h,089h,040h,00ah
l58c5:
	db 0ffh,08eh,06ch,0ffh,07dh,0c5h,0ebh,046h
l58cd:
	db 0c7h,086h,06ch,0ffh,007h,000h
l58d3:
	db 0ffh,0b6h,06ch,0ffh,08bh,046h,0b2h,0d1h,0e0h,08bh,0d8h,08bh,087h,0b6h,043h,005h
	db 053h,000h,050h
	call test_bit_
	db 083h,0c4h,004h,03dh,001h,000h,075h,01ch,08bh,086h,06ch,0ffh,050h,0b8h,02ch,000h
	db 0f7h,06eh,0b0h,08bh,0f0h,08bh,046h,0b2h,0d1h,0e0h,08bh,0d8h,08bh,09fh,0a8h,043h
	db 058h,089h,040h,00ah
l590d:
	db 0ffh,08eh,06ch,0ffh,07dh,0c0h
l5913:
	db 0b8h,02ch,000h,0f7h,06eh,0b0h,08bh,0f0h,08bh,046h,0b2h,0d1h,0e0h,08bh,0d8h,08bh
	db 09fh,0a8h,043h,081h,078h,00ah,0ffh,000h,075h,005h,0c7h,040h,00ah,008h,000h
l5932:
	db 0b8h,02ch,000h,0f7h,06eh,0b0h,08bh,0f0h,08bh,046h,0b2h,0d1h,0e0h,08bh,0d8h,08bh
	db 09fh,0a8h,043h,0c6h,040h,01ch,000h
l5949:
	db 0ebh,024h
l594b:
	db 0c7h,046h,0a6h,00fh,000h,0ebh,01dh
l5952:
	db 03dh,000h,000h,075h,003h,0e9h,000h,0feh
l595a:
	db 03dh,001h,000h,075h,003h,0e9h,051h,0feh
l5962:
	db 03dh,002h,000h,075h,003h,0e9h,058h,0feh
l596a:
	db 03dh,003h,000h,074h,0dch
l596f:
	db 0ebh,039h
l5971:
	db 083h,07eh,0b2h,000h,075h,033h,0b8h,0b0h,001h,0f7h,06eh,0b0h,08bh,0d8h,08ah,087h
	db 0f9h,044h,02ah,0e4h,03dh,0ffh,000h,074h,020h,0d1h,0e0h,0d1h,0e0h,0d1h,0e0h,003h
	db 0d8h,080h,0bfh,02ch,044h,00bh,075h,011h,0b8h,000h,000h,050h,0b8h,008h,000h,050h
	db 0ffh,076h,0b0h
	call try_raise_skill_
	db 083h,0c4h,006h
l59aa:
	db 083h,03eh,05eh,043h,000h,074h,03ah,083h,0beh,062h,0ffh,000h,075h,033h,08bh,01eh
	db 0b8h,043h,08ah,087h,0d2h,000h,03ch,000h,076h,027h,03ch,006h,074h,023h,0a1h,05eh
	db 043h,0d1h,0e0h,08bh,0d8h,08bh,09fh,0b6h,043h,08ah,08fh,0d2h,000h,08bh,01eh,0b8h
	db 043h,08ah,087h,0d2h,000h,03ah,0c8h,075h,008h,0b8h,00eh,000h,050h
	call play_sound_
	db 059h
l59eb:
	db 0a1h,0c8h,04fh,0b9h,004h,000h,099h,0f7h,0f9h,050h
	call combat_delay_
	db 059h,0c7h,046h,09eh,000h,000h,0e9h,070h,004h
l5a01:
	db 0b8h,000h,000h,083h,03eh,0cch,04fh,000h,075h,008h,0b8h,064h,000h,050h
	call random_
	db 059h
l5a13:
	db 089h,046h,0a0h,083h,07eh,0b2h,000h,075h,031h,0a1h,05eh,043h,0d1h,0e0h,08bh,0d8h
	db 08bh,087h,0b6h,043h,005h,0b6h,000h,050h
	call pick_weighted_
	db 059h,089h,046h,094h,08bh,046h,0b2h,0d1h,0e0h,08bh,0d8h,08bh,09fh,0b6h,043h,08bh
	db 076h,094h,08ah,080h,0beh,000h,098h,003h,046h,0a4h,089h,046h,0a2h,0ebh,02fh
l5a4d:
	db 08bh,046h,0b2h,0d1h,0e0h,08bh,0d8h,08bh,087h,0b6h,043h,005h,0aeh,000h,050h
	call pick_weighted_
	db 059h,089h,046h,094h,08bh,046h,0b2h,0d1h,0e0h,08bh,0d8h,08bh,09fh,0b6h,043h,08bh
	db 076h,094h,08ah,080h,0beh,000h,098h,003h,046h,0a4h,089h,046h,0a2h
l5a7c:
	db 0b8h,02ch,000h,0f7h,06eh,0b0h,08bh,0f0h,08bh,046h,0b2h,0d1h,0e0h,08bh,0d8h,08bh
	db 09fh,0a8h,043h,080h,078h,022h,002h,075h,010h,08bh,046h,0a2h,050h,03dh,000h,000h
	db 058h,07eh,003h,0b8h,000h,000h
l5aa2:
	db 089h,046h,0a2h
l5aa5:
	db 0b8h,004h,000h,050h,0b8h,027h,000h,050h,0b8h,003h,000h,050h,0b8h,000h,000h,050h
	db 0ffh,036h,0b6h,04fh
	call clear_window_area_
	db 083h,0c4h,00ah,083h,0beh,062h,0ffh,000h,075h,008h,0b8h,006h,000h,050h
	call play_sound_
	db 059h
l5ace:
	db 08bh,046h,0b2h,0d1h,0e0h,08bh,0d8h,08bh,09fh,0b6h,043h,080h,0bfh,0d0h,000h,016h
	db 074h,003h,0e9h,06ch,000h
l5ae3:
	db 083h,0beh,06ah,0ffh,0ffh,075h,065h,083h,03eh,05eh,043h,000h,075h,059h,0b8h,0b0h
	db 001h,0f7h,02eh,05ch,043h,003h,046h,006h,08bh,0d8h,08ah,087h,0f8h,044h,02ah,0e4h
	db 03dh,0ffh,000h,074h,03bh,0b8h,0b0h,001h,0f7h,02eh,05ch,043h,050h,08ah,087h,0f8h
	db 044h,02ah,0e4h,08bh,0c8h,0d1h,0e0h,0d1h,0e0h,0d1h,0e0h,08bh,0c8h,058h,003h,0c1h
	db 08bh,0d8h,081h,0bfh,028h,044h,0cah,001h,075h,007h,083h,03eh,052h,043h,000h,075h
	db 007h
l5b34:
	db 0c7h,046h,0a0h,000h,000h,0ebh,006h
l5b3b:
	db 0c7h,086h,064h,0ffh,001h,000h
l5b41:
	db 0ebh,005h
l5b43:
	db 0c7h,046h,0a0h,000h,000h
l5b48:
	db 0ebh,005h
l5b4a:
	db 0c7h,046h,0a0h,000h,000h
l5b4f:
	db 083h,07eh,008h,004h,074h,006h,083h,07eh,008h,008h,075h,03eh
l5b5b:
	db 0b8h,064h,000h,050h
	call random_
	db 059h,050h,08bh,046h,0b2h,0d1h,0e0h,08bh,0d8h,08bh,09fh,0a8h,043h,08ah,087h,08eh
	db 001h,02ah,0e4h,08bh,0c8h,058h,03bh,0c1h,07dh,01dh,0b8h,003h,000h,050h,0b8h,00eh
	db 000h,050h,0b8h,08eh,00ch,050h
	call print_msg_centered_
	db 083h,0c4h,006h,0b8h,007h,000h,050h
	call play_sound_
	db 059h,0e9h,0c7h,002h
l5b99:
	db 08bh,046h,0a0h,03dh,005h,000h,07dh,003h,0e9h,0aah,002h
l5ba4:
	db 03dh,05fh,000h,07dh,021h,08bh,046h,0a6h,08bh,0d0h,0d1h,0e0h,0d1h,0e0h,003h,0c2h
	db 08bh,04eh,0aah,02bh,0c8h,08bh,046h,0a0h,03bh,0c8h,07ch,00ah,083h,0beh,06ah,0ffh
	db 0ffh,075h,003h,0e9h,084h,002h
l5bca:
	db 083h,0beh,06ah,0ffh,0ffh,074h,026h,08bh,086h,06ah,0ffh,0b9h,000h,001h,099h,0f7h
	db 0f9h,089h,086h,066h,0ffh,089h,096h,068h,0ffh,0c7h,006h,0fch,050h,001h,000h,050h
	db 052h,0ffh,076h,004h
	call do_cast_spell_
	db 083h,0c4h,006h,0e9h,055h,002h
l5bf7:
	db 0b8h,003h,000h,050h,0b8h,004h,000h,050h,0b8h,0e6h,00ch,050h
	call print_msg_centered_
	db 083h,0c4h,006h,0b8h,007h,000h,050h
	call play_sound_
	db 059h,08bh,046h,0b2h,0d1h,0e0h,08bh,0d8h,08bh,09fh,0b6h,043h,080h,0bfh,0d0h,000h
	db 011h,075h,013h,0b8h,00ch,050h,050h,08bh,046h,094h,005h,002h,00dh,050h
	call get_message_
	db 083h,0c4h,004h,0ebh,011h
l5c36:
	db 0b8h,00ch,050h,050h,08bh,046h,094h,005h,0f8h,00ch,050h
	call get_message_
	db 083h,0c4h,004h
l5c47:
	db 0ffh,046h,09ah,08bh,05eh,004h,080h,07fh,02bh,001h,075h,004h,0c6h,047h,02bh,0ffh
l5c57:
	db 0ffh,076h,092h,0ffh,076h,090h
	call roll_dice_x_
	db 083h,0c4h,004h,003h,046h,082h,0f7h,0aeh,064h,0ffh,089h,046h,096h,03dh,000h,000h
	db 07fh,003h,0e9h,094h,001h
l5c75:
	db 083h,07eh,0a0h,05fh,07dh,01ah,08bh,046h,0a2h,08bh,0d0h,0d1h,0e0h,0d1h,0e0h,003h
	db 0c2h,08bh,0c8h,08bh,046h,0aah,02bh,0c1h,03bh,046h,0a0h,07ch,003h,0e9h,074h,001h
l5c95:
	db 0b8h,0ach,050h,050h,0ffh,076h,096h
	call int_to_string_
	db 083h,0c4h,004h,0b8h,05ch,050h,050h,0b8h,0eah,00ch,050h
	call get_message_
	db 083h,0c4h,004h,0b8h,004h,000h,050h,0b8h,000h,000h,050h,0ffh,036h,0b6h,04fh
	call set_cursor_
	db 083h,0c4h,006h,0b8h,005h,000h,050h,050h,0b8h,004h,000h,050h,0b8h,05ch,050h,050h
	db 0b8h,0ach,050h,050h,0b8h,00ch,050h,050h
	call print_combat_line_
	db 083h,0c4h,00ch,08bh,046h,096h,050h,0b8h,02ch,000h,0f7h,06eh,0b0h,08bh,0f0h,08bh
	db 046h,0b2h,0d1h,0e0h,08bh,0d8h,08bh,09fh,0a8h,043h,058h,029h,040h,002h,0b8h,02ch
	db 000h,0f7h,06eh,0b0h,08bh,0f0h,08bh,046h,0b2h,0d1h,0e0h,08bh,0d8h,08bh,09fh,0a8h
	db 043h,0c6h,040h,010h,000h,0b8h,003h,000h,050h
	call random_
	db 059h,08bh,0c8h,040h,040h,08bh,0c8h,0b8h,02ch,000h,0f7h,06eh,0b0h,08bh,0f0h,08bh
	db 046h,0b2h,0d1h,0e0h,08bh,0d8h,08bh,09fh,0a8h,043h,08ah,040h,011h,02ah,0e4h,02bh
	db 0c1h,089h,086h,060h,0ffh,03dh,000h,000h,07dh,006h,0c7h,086h,060h,0ffh,000h,000h
l5d46:
	db 081h,0beh,060h,0ffh,0ffh,000h,07eh,006h,0c7h,086h,060h,0ffh,0ffh,000h
l5d54:
	db 08ah,086h,060h,0ffh,088h,040h,011h,0b8h,02ch,000h,0f7h,06eh,0b0h,08bh,0f0h,08bh
	db 046h,0b2h,0d1h,0e0h,08bh,0d8h,08bh,09fh,0a8h,043h,083h,078h,002h,000h,07fh,046h
	db 0a1h,0c8h,04fh,0b9h,004h,000h,099h,0f7h,0f9h,050h
	call combat_delay_
	db 059h,0b8h,000h,000h,050h,0b8h,050h,00dh,050h,0b8h,006h,000h,050h,050h,0b8h,000h
	db 000h,050h,0b8h,003h,000h,050h,0b8h,000h,000h,050h,0b8h,09eh,00dh,050h,0ffh,076h
	db 0b0h,0ffh,076h,0b2h
	call do_damage_effect_
	db 083h,0c4h,014h,08bh,05eh,004h,080h,07fh,02bh,0ffh,075h,004h,0c6h,047h,02bh,001h
l5db8:
	db 0ebh,04dh
l5dba:
	db 083h,07eh,0b2h,000h,075h,015h,0b8h,002h,000h,050h
	call play_sound_
	db 059h,0b8h,001h,000h,050h,0ffh,076h,0b0h
	call draw_member_card_x_
	db 083h,0c4h,004h
l5dd5:
	db 0a1h,0c8h,04fh,0b9h,004h,000h,099h,0f7h,0f9h,050h
	call combat_delay_
	db 059h,08bh,046h,0b2h,0d1h,0e0h,08bh,0d8h,08bh,09fh,0b6h,043h,080h,0bfh,0d0h,000h
	db 016h,074h,012h,0ffh,076h,0b0h,0ffh,076h,0b2h,0ffh,076h,0aeh,0ffh,076h,004h
	call apply_hit_effects_
	db 083h,0c4h,008h
l5e07:
	db 0ebh,043h
l5e09:
	db 0b8h,0ach,050h,050h,0b8h,0e7h,00ch,050h
	call get_message_
	db 083h,0c4h,004h,0b8h,004h,000h,050h,0b8h,000h,000h,050h,0ffh,036h,0b6h,04fh
	call set_cursor_
	db 083h,0c4h,006h,0c6h,006h,05ch,050h,000h,0b8h,000h,000h,050h,0b8h,00eh,000h,050h
	db 0b8h,004h,000h,050h,0b8h,05ch,050h,050h,0b8h,0ach,050h,050h,0b8h,00ch,050h,050h
	call print_combat_line_
	db 083h,0c4h,00ch
l5e4c:
	db 0ebh,012h
l5e4e:
	db 0b8h,003h,000h,050h,0b8h,00eh,000h,050h,0b8h,0e5h,00ch,050h
	call print_msg_centered_
	db 083h,0c4h,006h
l5e60:
	db 0a1h,0c8h,04fh,0b9h,004h,000h,099h,0f7h,0f9h,050h
	call combat_delay_
	db 059h,0ffh,046h,09eh
l5e71:
	db 08bh,046h,09eh,03bh,046h,09ch,07dh,01ch,0b8h,02ch,000h,0f7h,06eh,0b0h,08bh,0f0h
	db 08bh,046h,0b2h,0d1h,0e0h,08bh,0d8h,08bh,09fh,0a8h,043h,080h,078h,022h,003h,073h
	db 003h,0e9h,06ch,0fbh
l5e95:
	db 08bh,05eh,004h,080h,07fh,02bh,0ffh,075h,004h,0c6h,047h,02bh,000h
l5ea2:
	db 083h,07eh,0b2h,000h,075h,00dh,0b8h,000h,000h,050h,0ffh,076h,0b0h
	call draw_member_card_x_
	db 083h,0c4h,004h
l5eb5:
	db 05eh,05fh,08bh,0e5h,05dh,0c3h
#endasm
