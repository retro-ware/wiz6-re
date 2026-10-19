/* Ask each able party member for a combat action (fight, spell, item, ...), with back/redo. */
#asm
	public choose_party_actions_
	extrn choose_combat_item_:near
	extrn choose_combat_spell_:near
	extrn combat_menu_select_:near
	extrn copy_name_:near
	extrn draw_monster_groups_:near
	extrn fill_window_:near
	extrn get_message_:near
	extrn pick_random_set_bit_:near
	extrn pick_target_monster_:near
	extrn play_sound_:near
	extrn print_combat_prompt_:near
	extrn random_:near
	extrn refresh_all_windows_:near
	extrn replace_char_with_string_:near
	extrn select_monster_group_:near
	extrn select_party_member_:near
	extrn setmem_:near
	extrn test_bit_:near
choose_party_actions_:
	db 055h,08bh,0ech,081h,0c4h,036h,0ffh,056h,0c7h,046h,0fah,000h,000h,0e9h,06bh,001h
l76f9:
	db 0b8h,02ch,000h,0f7h,06eh,0fah,08bh,0c8h,0a1h,0a8h,043h,003h,0c1h,089h,086h,04ch
	db 0ffh,0b8h,00ah,000h,050h
	call random_
	db 059h,050h,0b8h,0b0h,001h,0f7h,06eh,0fah,08bh,0d8h,08ah,087h,093h,045h,02ah,0e4h
	db 08bh,0c8h,058h,003h,0c1h,050h,0b8h,02ch,000h,0f7h,06eh,0fah,08bh,0f0h,08bh,01eh
	db 0a8h,043h,08ah,040h,029h,098h,08bh,0c8h,058h,003h,0c1h,089h,086h,052h,0ffh,03dh
	db 001h,000h,07dh,006h,0c7h,086h,052h,0ffh,001h,000h
l774b:
	db 0b8h,0b0h,001h,0f7h,06eh,0fah,08bh,0d8h,08ah,087h,092h,045h,02ah,0e4h,08bh,0c8h
	db 08bh,086h,052h,0ffh,099h,0f7h,0f9h,089h,086h,050h,0ffh,08bh,09eh,04ch,0ffh,080h
	db 07fh,024h,000h,076h,034h,08bh,086h,052h,0ffh,0b9h,002h,000h,099h,0f7h,0f9h,050h
	call random_
	db 059h,050h,0b8h,014h,000h,050h
	call random_
	db 059h,08bh,0c8h,058h,003h,0c1h,050h,08bh,086h,052h,0ffh,0b9h,002h,000h,099h,0f7h
	db 0f9h,08bh,0c8h,058h,003h,0c1h,08bh,09eh,04ch,0ffh,088h,047h,025h
l77a4:
	db 08bh,09eh,04ch,0ffh,0c6h,047h,021h,000h,08bh,09eh,04ch,0ffh,0c6h,047h,01ch,000h
	db 08bh,09eh,04ch,0ffh,0c6h,047h,01dh,001h,0b8h,0b0h,001h,0f7h,06eh,0fah,08bh,0d8h
	db 08ah,087h,092h,045h,02ah,0e4h,050h,0b8h,02ch,000h,0f7h,06eh,0fah,08bh,0f0h,08bh
	db 01eh,0a8h,043h,08ah,040h,029h,098h,0b9h,00ah,000h,099h,0f7h,0f9h,08bh,0c8h,058h
	db 003h,0c1h,089h,086h,04eh,0ffh,03dh,001h,000h,07dh,006h,0c7h,086h,04eh,0ffh,001h
	db 000h
l77f5:
	db 083h,0beh,04eh,0ffh,004h,07eh,006h,0c7h,086h,04eh,0ffh,004h,000h
l7802:
	db 0c7h,086h,054h,0ffh,000h,000h
l7808:
	db 08bh,086h,054h,0ffh,03bh,086h,04eh,0ffh,07dh,01dh,0b8h,0b0h,001h,0f7h,06eh,0fah
	db 08bh,0d8h,080h,0bfh,089h,045h,002h,073h,00eh,080h,0bfh,00dh,045h,000h,077h,007h
	db 080h,0bfh,00ch,045h,000h,076h,00eh
l782f:
	db 08bh,09eh,04ch,0ffh,08bh,0b6h,054h,0ffh,0c6h,040h,018h,000h,0ebh,017h
l783d:
	db 08ah,086h,052h,0ffh,08bh,09eh,04ch,0ffh,08bh,0b6h,054h,0ffh,088h,040h,018h,08bh
	db 086h,050h,0ffh,029h,086h,052h,0ffh
l7854:
	db 0ffh,086h,054h,0ffh,08bh,086h,054h,0ffh,03dh,004h,000h,07ch,0a7h,0ffh,046h,0fah
l7864:
	db 08bh,046h,0fah,03bh,006h,0ceh,043h,07dh,003h,0e9h,089h,0feh
l7870:
	db 0b8h,000h,000h,050h,0b8h,02dh,000h,050h,0b8h,04ch,050h,050h
	call setmem_
	db 083h,0c4h,006h,0c7h,086h,042h,0ffh,000h,000h,0c7h,046h,0fah,000h,000h
l788d:
	db 08bh,046h,0fah,03bh,006h,0ceh,043h,07ch,003h,0e9h,044h,00ah
l7899:
	db 0b9h,0b0h,001h,0f7h,0e9h,08bh,0d8h,080h,0bfh,089h,045h,002h,072h,003h,0e9h,0e3h
	db 008h
l78aa:
	db 080h,0bfh,00dh,045h,000h,074h,003h,0e9h,0d9h,008h
l78b4:
	db 080h,0bfh,00ch,045h,000h,074h,003h,0e9h,0cfh,008h
l78be:
	db 08bh,046h,0fah,08bh,08eh,042h,0ffh,0d1h,0e1h,08bh,0d9h,003h,0ddh,089h,087h,036h
	db 0ffh,0ffh,086h,042h,0ffh,0b9h,02ch,000h,0f7h,0e9h,08bh,0c8h,0a1h,0a8h,043h,003h
	db 0c1h,089h,086h,04ch,0ffh,0c7h,046h,0feh,000h,000h
l78e8:
	db 08bh,046h,0feh,0d1h,0e0h,08bh,0d8h,003h,0ddh,0c7h,047h,0d8h,001h,000h,0ffh,046h
	db 0feh,08bh,046h,0feh,03dh,00bh,000h,07ch,0e7h,0b8h,0b0h,001h,0f7h,06eh,0fah,08bh
	db 0d8h,080h,0bfh,085h,045h,007h,074h,005h,0c7h,046h,0e8h,000h,000h
l7915:
	db 0b8h,02ch,000h,0f7h,06eh,0fah,08bh,0f0h,08bh,01eh,0a8h,043h,080h,078h,02bh,000h
	db 075h,027h,0b8h,0b0h,001h,0f7h,06eh,0fah,08bh,0d8h,08ah,087h,087h,045h,03ch,003h
	db 074h,01ch,03ch,00dh,074h,018h,03ch,004h,074h,014h,03ch,006h,074h,010h,03ch,00ch
	db 074h,00ch,080h,0bfh,02ch,045h,000h,075h,005h
l794e:
	db 0c7h,046h,0e4h,000h,000h
l7953:
	db 0b8h,0b0h,001h,0f7h,06eh,0fah,08bh,0d8h,080h,0bfh,094h,045h,000h,075h,005h,0c7h
	db 046h,0e0h,000h,000h
l7967:
	db 083h,0beh,042h,0ffh,002h,07dh,00ah,0c7h,046h,0eah,000h,000h,0c7h,046h,0ech,000h
	db 000h
l7978:
	db 08ah,087h,0f8h,044h,02ah,0e4h,089h,086h,04ah,0ffh,03dh,0ffh,000h,075h,003h,0e9h
	db 0fah,000h
l798a:
	db 0d1h,0e0h,0d1h,0e0h,0d1h,0e0h,003h,0d8h,080h,0bfh,02ch,044h,003h,074h,003h,0e9h
	db 0e8h,000h
l799c:
	db 0b8h,0b0h,001h,0f7h,06eh,0fah,08bh,0d8h,08ah,087h,0f9h,044h,02ah,0e4h,089h,086h
	db 048h,0ffh,03dh,0ffh,000h,075h,003h,0e9h,0c9h,000h
l79b6:
	db 0d1h,0e0h,0d1h,0e0h,0d1h,0e0h,003h,0d8h,080h,0bfh,02ch,044h,004h,074h,008h,0c7h
	db 046h,0d8h,000h,000h,0e9h,0b0h,000h
l79cd:
	db 0b8h,0b0h,001h,0f7h,06eh,0fah,08bh,08eh,04ah,0ffh,0d1h,0e1h,0d1h,0e1h,0d1h,0e1h
	db 003h,0c1h,08bh,0d8h,08ah,087h,02dh,044h,03ch,00bh,075h,01fh,0b8h,0b0h,001h,0f7h
	db 06eh,0fah,08bh,08eh,048h,0ffh,0d1h,0e1h,0d1h,0e1h,0d1h,0e1h,003h,0c1h,08bh,0d8h
	db 08ah,087h,02dh,044h,03ch,016h,074h,003h,0e9h,070h,000h
l7a08:
	db 0b8h,0b0h,001h,0f7h,06eh,0fah,08bh,08eh,04ah,0ffh,0d1h,0e1h,0d1h,0e1h,0d1h,0e1h
	db 003h,0c1h,08bh,0d8h,08ah,087h,02dh,044h,03ch,00dh,075h,01ch,0b8h,0b0h,001h,0f7h
	db 06eh,0fah,08bh,08eh,048h,0ffh,0d1h,0e1h,0d1h,0e1h,0d1h,0e1h,003h,0c1h,08bh,0d8h
	db 08ah,087h,02dh,044h,03ch,017h,075h,038h
l7a40:
	db 0b8h,0b0h,001h,0f7h,06eh,0fah,08bh,08eh,04ah,0ffh,0d1h,0e1h,0d1h,0e1h,0d1h,0e1h
	db 003h,0c1h,08bh,0d8h,08ah,087h,02dh,044h,03ch,00ch,075h,021h,0b8h,0b0h,001h,0f7h
	db 06eh,0fah,08bh,08eh,048h,0ffh,0d1h,0e1h,0d1h,0e1h,0d1h,0e1h,003h,0c1h,08bh,0d8h
	db 08ah,087h,02dh,044h,03ch,053h,074h,005h
l7a78:
	db 0c7h,046h,0d8h,000h,000h
l7a7d:
	db 0ebh,005h
l7a7f:
	db 0c7h,046h,0d8h,000h,000h
l7a84:
	db 08bh,046h,0fah,03dh,003h,000h,07ch,01dh,0b9h,0b0h,001h,0f7h,0e9h,08bh,0d8h,080h
	db 0bfh,0e5h,044h,000h,075h,00fh,08bh,01eh,0a8h,043h,080h,078h,02bh,001h,074h,005h
	db 0c7h,046h,0d8h,000h,000h
l7aa9:
	db 0c7h,046h,0eeh,0ffh,0ffh,08dh,086h,060h,0ffh,050h,0b8h,0b0h,001h,0f7h,06eh,0fah
	db 005h,0e8h,043h,050h
	call copy_name_
	db 083h,0c4h,004h
l7ac3:
	db 0b8h,000h,000h,050h,0ffh,036h,08ch,043h
	call draw_monster_groups_
	db 083h,0c4h,004h,0b8h,000h,000h,050h,0b8h,003h,000h,050h,0b8h,020h,000h,050h,0ffh
	db 076h,004h
	call fill_window_
	db 083h,0c4h,008h,08dh,086h,068h,0ffh,050h,0b8h,0ach,00dh,050h
	call get_message_
	db 083h,0c4h,004h,0b8h,024h,000h,050h,08dh,086h,060h,0ffh,050h,08dh,086h,068h,0ffh
	db 050h
	call replace_char_with_string_
	db 083h,0c4h,006h,0b8h,000h,000h,050h,08dh,086h,068h,0ffh,050h
	call print_combat_prompt_
	db 083h,0c4h,004h
	call refresh_all_windows_
	db 0c7h,046h,0b8h,000h,000h,0c7h,046h,0fch,000h,000h
l7b25:
	db 08bh,046h,0fch,0d1h,0e0h,08bh,0d8h,003h,0ddh,083h,07fh,0d8h,0ffh,074h,00eh,083h
	db 07fh,0d8h,001h,075h,003h,0ffh,046h,0b8h
l7b3d:
	db 0ffh,046h,0fch,0ebh,0e3h
l7b42:
	db 0b8h,000h,000h,050h,0b8h,005h,000h,050h,0b8h,003h,000h,083h,07eh,0b8h,009h,07eh
	db 003h,0b8h,004h,000h
l7b56:
	db 050h,0b8h,006h,000h,050h,0b8h,001h,000h,050h,050h,08dh,046h,0d8h,050h,0b8h,0b8h
	db 00bh,050h,0ffh,076h,004h
	call combat_menu_select_
	db 083h,0c4h,012h,089h,046h,0f8h,0c7h,086h,05eh,0ffh,0ffh,0ffh,0b8h,02ch,000h,0f7h
	db 06eh,0fah,08bh,0f0h,08bh,01eh,0a8h,043h,0c6h,040h,01fh,0ffh,0b8h,02ch,000h,0f7h
	db 06eh,0fah,08bh,0f0h,08bh,01eh,0a8h,043h,0c6h,040h,020h,000h,0c7h,086h,058h,0ffh
	db 000h,000h,0c7h,086h,056h,0ffh,000h,000h,08bh,046h,0f8h,0e9h,02dh,004h,0b8h,000h
	db 000h,050h,0b8h,003h,000h,050h,0b8h,020h,000h,050h,0ffh,076h,004h
	call fill_window_
	db 083h,0c4h,008h,08dh,086h,068h,0ffh,050h,0b8h,0adh,00dh,050h
	call get_message_
	db 083h,0c4h,004h,0b8h,024h,000h,050h,08dh,086h,060h,0ffh,050h,08dh,086h,068h,0ffh
	db 050h
	call replace_char_with_string_
	db 083h,0c4h,006h,0b8h,000h,000h,050h,08dh,086h,068h,0ffh,050h
	call print_combat_prompt_
	db 083h,0c4h,004h,0b8h,0b0h,001h,0f7h,06eh,0fah,08bh,0d8h,08ah,087h,0f8h,044h,02ah
	db 0e4h,089h,086h,04ah,0ffh,03dh,0ffh,000h,074h,01bh,0d1h,0e0h,0d1h,0e0h,0d1h,0e0h
	db 003h,0d8h,080h,0bfh,02ch,044h,003h,075h,00ch,0c7h,086h,046h,0ffh,001h,000h,0c7h
	db 086h,05eh,0ffh,008h,000h
l7c25:
	db 083h,0beh,05eh,0ffh,0ffh,074h,003h,0e9h,096h,000h
l7c2f:
	db 0c7h,086h,046h,0ffh,000h,000h,0c7h,046h,0feh,000h,000h
l7c3a:
	db 0ffh,076h,0feh,0b8h,0b0h,001h,0f7h,06eh,0fah,005h,0e7h,044h,050h
	call test_bit_
	db 083h,0c4h,004h,08bh,04eh,0feh,0d1h,0e1h,08bh,0d9h,003h,0ddh,089h,047h,0bah,08bh
	db 046h,0feh,03dh,004h,000h,074h,037h,083h,07eh,0fah,003h,07ch,031h,081h,0beh,04ah
	db 0ffh,0ffh,000h,074h,029h,0b8h,0b0h,001h,0f7h,06eh,0fah,08bh,08eh,04ah,0ffh,0d1h
	db 0e1h,0d1h,0e1h,0d1h,0e1h,003h,0c1h,08bh,0d8h,080h,0bfh,02ch,044h,002h,075h,00eh
	db 08bh,046h,0feh,0d1h,0e0h,08bh,0d8h,003h,0ddh,0c7h,047h,0bah,000h,000h
l7c98:
	db 08bh,046h,0feh,0d1h,0e0h,08bh,0d8h,003h,0ddh,083h,07fh,0bah,001h,075h,00bh,0ffh
	db 086h,046h,0ffh,08bh,046h,0feh,089h,086h,05eh,0ffh
l7cb2:
	db 0ffh,046h,0feh,08bh,046h,0feh,03dh,008h,000h,07dh,003h,0e9h,07ah,0ffh
l7cc0:
	db 0c7h,046h,0cah,0ffh,0ffh
l7cc5:
	db 083h,0beh,046h,0ffh,001h,07eh,030h
	call refresh_all_windows_
	db 0b8h,000h,000h,050h,0b8h,005h,000h,050h,0b8h,003h,000h,050h,0b8h,008h,000h,050h
	db 0b8h,001h,000h,050h,0b8h,003h,000h,050h,08dh,046h,0bah,050h,0b8h,0eah,00bh,050h
	db 0ffh,076h,004h
	call combat_menu_select_
	db 083h,0c4h,012h,089h,086h,05eh,0ffh
l7cfc:
	db 083h,0beh,05eh,0ffh,0ffh,075h,003h,0e9h,06dh,000h
l7d06:
	db 0b8h,0b0h,001h,0f7h,06eh,0fah,08bh,0d8h,08ah,087h,0e5h,044h,02ah,0e4h,089h,086h
	db 044h,0ffh,03dh,002h,000h,075h,00dh,083h,0beh,05eh,0ffh,004h,074h,006h,0c7h,086h
	db 044h,0ffh,000h,000h
l7d2a:
	db 083h,0beh,044h,0ffh,000h,075h,029h,08bh,046h,0fah,03dh,003h,000h,07ch,021h,0b9h
	db 02ch,000h,0f7h,0e9h,08bh,0f0h,08bh,01eh,0a8h,043h,080h,078h,02bh,001h,074h,010h
	db 0b8h,000h,000h,050h
	call play_sound_
	db 059h,0c7h,086h,05ch,0ffh,0ffh,0ffh,0ebh,019h
l7d5a:
	db 0b8h,000h,000h,050h,0ffh,0b6h,044h,0ffh,0b8h,012h,00eh,050h,0ffh,076h,004h
	call select_monster_group_
	db 083h,0c4h,008h,089h,086h,05ch,0ffh
l7d73:
	db 083h,0beh,05eh,0ffh,0ffh,074h,007h,083h,0beh,05ch,0ffh,0ffh,075h,008h
l7d81:
	db 0c7h,086h,058h,0ffh,001h,000h,0ebh,015h
l7d89:
	db 08ah,086h,05ch,0ffh,050h,0b8h,02ch,000h,0f7h,06eh,0fah,08bh,0f0h,08bh,01eh,0a8h
	db 043h,058h,088h,040h,01fh
l7d9e:
	db 0e9h,045h,002h,0b8h,000h,000h,050h,0b8h,003h,000h,050h,0b8h,020h,000h,050h,0ffh
	db 076h,004h
	call fill_window_
	db 083h,0c4h,008h,08dh,086h,068h,0ffh,050h,0b8h,0aeh,00dh,050h
	call get_message_
	db 083h,0c4h,004h,0b8h,024h,000h,050h,08dh,086h,060h,0ffh,050h,08dh,086h,068h,0ffh
	db 050h
	call replace_char_with_string_
	db 083h,0c4h,006h,0b8h,000h,000h,050h,08dh,086h,068h,0ffh,050h
	call print_combat_prompt_
	db 083h,0c4h,004h
	call refresh_all_windows_
	db 0c7h,046h,0feh,000h,000h
l7df0:
	db 08bh,046h,0feh,0d1h,0e0h,08bh,0d8h,003h,0ddh,0c7h,047h,0d8h,001h,000h,0ffh,046h
	db 0feh,08bh,046h,0feh,03dh,004h,000h,07ch,0e7h,0b8h,0b0h,001h,0f7h,06eh,0fah,050h
	db 0b8h,0b0h,001h,0f7h,06eh,0fah,08bh,0d8h,08ah,087h,0f9h,044h,02ah,0e4h,08bh,0c8h
	db 0d1h,0e0h,0d1h,0e0h,0d1h,0e0h,08bh,0c8h,058h,003h,0c1h,08bh,0d8h,080h,0bfh,02ch
	db 044h,00bh,074h,005h,0c7h,046h,0d8h,000h,000h
l7e39:
	db 0c7h,046h,0e0h,0ffh,0ffh,0b8h,000h,000h,050h,0b8h,005h,000h,050h,0b8h,002h,000h
	db 050h,0b8h,009h,000h,050h,0b8h,001h,000h,050h,0b8h,003h,000h,050h,08dh,046h,0d8h
	db 050h,0b8h,01ch,00ch,050h,0ffh,076h,004h
	call combat_menu_select_
	db 083h,0c4h,012h,089h,086h,05eh,0ffh,03dh,0ffh,0ffh,075h,006h,0c7h,086h,058h,0ffh
	db 001h,000h
l7e76:
	db 0e9h,06dh,001h,0e9h,06ah,001h,0ffh,076h,0fah,0ffh,076h,004h
	call choose_combat_spell_
	db 083h,0c4h,004h,089h,086h,05eh,0ffh,0c7h,006h,016h,050h,0ffh,0ffh,03dh,0ffh,0ffh
	db 075h,006h,0c7h,086h,058h,0ffh,001h,000h
l7e9d:
	db 0e9h,046h,001h,0ffh,076h,0fah,0ffh,076h,004h
	call choose_combat_item_
	db 083h,0c4h,004h,089h,086h,05eh,0ffh,03dh,0ffh,0ffh,075h,006h,0c7h,086h,058h,0ffh
	db 001h,000h
l7ebb:
	db 0e9h,028h,001h,0b8h,01bh,00eh,050h
	call select_party_member_
	db 059h,089h,086h,05eh,0ffh,03dh,0ffh,0ffh,075h,006h,0c7h,086h,058h,0ffh,001h,000h
l7ed5:
	db 0e9h,00eh,001h,0e9h,00bh,001h,0b8h,000h,000h,050h,0b8h,001h,000h,050h,0b8h,015h
	db 00eh,050h,0ffh,076h,004h
	call select_monster_group_
	db 083h,0c4h,008h,089h,086h,05ch,0ffh,0c7h,086h,05eh,0ffh,008h,000h,03dh,0ffh,0ffh
	db 075h,008h,0c7h,086h,058h,0ffh,001h,000h,0ebh,015h
l7f07:
	db 08ah,086h,05ch,0ffh,050h,0b8h,02ch,000h,0f7h,06eh,0fah,08bh,0f0h,08bh,01eh,0a8h
	db 043h,058h,088h,040h,01fh
l7f1c:
	db 0e9h,0c7h,000h,0e9h,0c4h,000h,0b8h,000h,000h,050h,0b8h,02dh,000h,050h,0b8h,04ch
	db 050h,050h
	call setmem_
	db 083h,0c4h,006h,0c7h,086h,05ch,0ffh,000h,000h,0ebh,036h
l7f3c:
	db 0b8h,02ch,000h,0f7h,0aeh,05ch,0ffh,08bh,0f0h,08bh,01eh,0a8h,043h,080h,078h,01fh
	db 000h,076h,01fh,08ah,040h,01fh,02ah,0e4h,08bh,0d0h,0b1h,003h,0d3h,0e0h,003h,0c2h
	db 050h,08ah,040h,020h,02ah,0e4h,08bh,0c8h,058h,003h,0c1h,08bh,0d8h,0c6h,087h,04ch
	db 050h,001h
l7f6e:
	db 0ffh,086h,05ch,0ffh
l7f72:
	db 08bh,046h,0fah,048h,03bh,086h,05ch,0ffh,07fh,0c0h,08bh,086h,042h,0ffh,0d1h,0e0h
	db 08bh,0d8h,003h,0ddh,08bh,087h,032h,0ffh,048h,089h,046h,0fah,0ffh,08eh,042h,0ffh
	db 0ffh,08eh,042h,0ffh,0c7h,086h,056h,0ffh,001h,000h,0ebh,048h,0b8h,000h,000h,050h
	db 0b8h,02dh,000h,050h,0b8h,04ch,050h,050h
	call setmem_
	db 083h,0c4h,006h,0c7h,046h,0fah,0ffh,0ffh,0c7h,086h,056h,0ffh,001h,000h,0c7h,086h
	db 042h,0ffh,000h,000h,0ebh,023h,0ach,07bh,0a1h,07dh,079h,07eh,07ch,07eh,0a0h,07eh
	db 0beh,07eh,0d8h,07eh,01fh,07fh,0dbh,07eh,022h,07fh,09eh,07fh
l7fd9:
	db 03dh,00bh,000h,073h,008h,093h,0d1h,0e3h,02eh,0ffh,0a7h,0c3h,07fh
l7fe6:
	db 083h,0beh,058h,0ffh,001h,075h,003h,0e9h,0d3h,0fah
l7ff0:
	db 083h,0beh,056h,0ffh,000h,074h,003h,0e9h,093h,001h
l7ffa:
	db 08bh,086h,05eh,0ffh,050h,0b8h,02ch,000h,0f7h,06eh,0fah,08bh,0f0h,08bh,01eh,0a8h
	db 043h,058h,089h,040h,00ah,0b8h,02ch,000h,0f7h,06eh,0fah,08bh,0f0h,08bh,01eh,0a8h
	db 043h,0c7h,040h,00ch,0ffh,0ffh,08ah,046h,0f8h,050h,0b8h,02ch,000h,0f7h,06eh,0fah
	db 08bh,0f0h,08bh,01eh,0a8h,043h,058h,088h,040h,01eh,0b8h,02ch,000h,0f7h,06eh,0fah
	db 08bh,0f0h,08bh,01eh,0a8h,043h,08ah,040h,01fh,02ah,0e4h,089h,086h,05ch,0ffh,03dh
	db 001h,000h,07ch,026h,03dh,005h,000h,07fh,021h,08ah,086h,05ch,0ffh,02ah,0e4h,050h
	db 0ffh,076h,0fah
	call pick_target_monster_
	db 083h,0c4h,004h,050h,0b8h,02ch,000h,0f7h,06eh,0fah,08bh,0f0h,08bh,01eh,0a8h,043h
	db 058h,088h,040h,020h
l8074:
	db 0b8h,0b0h,001h,0f7h,06eh,0fah,08bh,0d8h,08ah,087h,0f9h,044h,02ah,0e4h,089h,086h
	db 04ah,0ffh,083h,07eh,0f8h,000h,074h,003h,0e9h,0feh,000h
l808f:
	db 03dh,0ffh,000h,075h,035h,08ah,087h,0f8h,044h,02ah,0e4h,03dh,0ffh,000h,075h,02ah
	db 081h,0c3h,0e7h,044h,08bh,0c3h,050h
	call pick_random_set_bit_
	db 059h,089h,046h,0feh,03dh,0ffh,0ffh,074h,014h,08bh,046h,0feh,050h,0b8h,02ch,000h
	db 0f7h,06eh,0fah,08bh,0f0h,08bh,01eh,0a8h,043h,058h,089h,040h,00ch
l80c6:
	db 0e9h,0c4h,000h
l80c9:
	db 081h,0beh,04ah,0ffh,0ffh,000h,075h,003h,0e9h,0b9h,000h
l80d4:
	db 0b8h,0b0h,001h,0f7h,06eh,0fah,08bh,08eh,04ah,0ffh,0d1h,0e1h,0d1h,0e1h,0d1h,0e1h
	db 003h,0c1h,08bh,0d8h,08ah,087h,02ch,044h,03ch,002h,074h,008h,03ch,00ch,074h,004h
	db 03ch,010h,075h,014h
l80f8:
	db 0b8h,02ch,000h,0f7h,06eh,0fah,08bh,0f0h,08bh,01eh,0a8h,043h,0c7h,040h,00ch,004h
	db 000h,0e9h,081h,000h
l810c:
	db 0b8h,0b0h,001h,0f7h,06eh,0fah,08bh,08eh,04ah,0ffh,0d1h,0e1h,0d1h,0e1h,0d1h,0e1h
	db 003h,0c1h,08bh,0d8h,080h,0bfh,02ch,044h,002h,073h,066h,0b8h,0b0h,001h,0f7h,06eh
	db 0fah,08bh,0d8h,080h,0bfh,0f5h,044h,001h,074h,00dh,083h,07eh,0fah,003h,07dh,051h
	db 083h,0beh,05ch,0ffh,003h,07dh,04ah
l8143:
	db 0c7h,046h,0f6h,000h,000h
l8148:
	db 0b8h,0b0h,001h,0f7h,06eh,0fah,005h,0f7h,044h,050h
	call pick_random_set_bit_
	db 059h,089h,046h,0feh,0ffh,046h,0f6h,083h,07eh,0feh,004h,075h,006h,083h,07eh,0f6h
	db 00ah,07ch,0e0h
l8168:
	db 083h,07eh,0feh,004h,075h,005h,0c7h,046h,0feh,0ffh,0ffh
l8173:
	db 083h,07eh,0feh,0ffh,074h,014h,08bh,046h,0feh,050h,0b8h,02ch,000h,0f7h,06eh,0fah
	db 08bh,0f0h,08bh,01eh,0a8h,043h,058h,089h,040h,00ch
l818d:
	db 0ffh,046h,0fah,08bh,046h,0fah,03bh,006h,0ceh,043h,074h,003h,0e9h,03eh,001h
l819c:
	db 0b8h,000h,000h,050h,0ffh,036h,08ch,043h
	call draw_monster_groups_
	db 083h,0c4h,004h,0b8h,000h,000h,050h,0b8h,003h,000h,050h,0b8h,020h,000h,050h,0ffh
	db 076h,004h
	call fill_window_
	db 083h,0c4h,008h,08dh,086h,068h,0ffh,050h,0b8h,0b2h,00dh,050h
	call get_message_
	db 083h,0c4h,004h,0b8h,000h,000h,050h,08dh,086h,068h,0ffh,050h
	call print_combat_prompt_
	db 083h,0c4h,004h
	call refresh_all_windows_
	db 0c7h,046h,0feh,000h,000h
l81e5:
	db 08bh,046h,0feh,0d1h,0e0h,08bh,0d8h,003h,0ddh,0c7h,047h,0d8h,001h,000h,0ffh,046h
	db 0feh,08bh,046h,0feh,03dh,003h,000h,07ch,0e7h,083h,0beh,042h,0ffh,000h,075h,00ah
	db 0c7h,046h,0dch,000h,000h,0c7h,046h,0dah,000h,000h
l820f:
	db 0c7h,046h,0deh,0ffh,0ffh,0b8h,000h,000h,050h,0b8h,005h,000h,050h,0b8h,004h,000h
	db 050h,0b8h,00eh,000h,050h,0b8h,001h,000h,050h,0b8h,003h,000h,050h,08dh,046h,0d8h
	db 050h,0b8h,0b3h,00dh,050h,0ffh,076h,004h
	call combat_menu_select_
	db 083h,0c4h,012h,089h,046h,0feh,03dh,002h,000h,075h,020h,0b8h,000h,000h,050h,0b8h
	db 02dh,000h,050h,0b8h,04ch,050h,050h
	call setmem_
	db 083h,0c4h,006h,0c7h,046h,0fah,000h,000h,0c7h,086h,042h,0ffh,000h,000h,0e9h,075h
	db 000h
l8265:
	db 083h,07eh,0feh,001h,075h,06fh,0b8h,000h,000h,050h,0b8h,02dh,000h,050h,0b8h,04ch
	db 050h,050h
	call setmem_
	db 083h,0c4h,006h,0c7h,086h,05ch,0ffh,000h,000h,0ebh,036h
l8285:
	db 0b8h,02ch,000h,0f7h,0aeh,05ch,0ffh,08bh,0f0h,08bh,01eh,0a8h,043h,080h,078h,01fh
	db 000h,076h,01fh,08ah,040h,01fh,02ah,0e4h,08bh,0d0h,0b1h,003h,0d3h,0e0h,003h,0c2h
	db 050h,08ah,040h,020h,02ah,0e4h,08bh,0c8h,058h,003h,0c1h,08bh,0d8h,0c6h,087h,04ch
	db 050h,001h
l82b7:
	db 0ffh,086h,05ch,0ffh
l82bb:
	db 0a1h,0ceh,043h,048h,03bh,086h,05ch,0ffh,07fh,0c0h,08bh,086h,042h,0ffh,0d1h,0e0h
	db 08bh,0d8h,003h,0ddh,08bh,087h,034h,0ffh,089h,046h,0fah,0ffh,08eh,042h,0ffh
l82da:
	db 0e9h,0b0h,0f5h
l82dd:
	db 0c7h,046h,0fah,000h,000h,0e9h,0b5h,000h
l82e5:
	db 0b8h,02ch,000h,0f7h,06eh,0fah,08bh,0f0h,08bh,01eh,0a8h,043h,080h,078h,00fh,000h
	db 076h,033h,0b8h,064h,000h,050h
	call random_
	db 059h,050h,0b8h,0b0h,001h,0f7h,06eh,0fah,08bh,0d8h,08ah,087h,01ah,045h,02ah,0e4h
	db 08bh,0c8h,005h,050h,000h,08bh,0c8h,058h,03bh,0c1h,07eh,010h,0b8h,02ch,000h,0f7h
	db 06eh,0fah,08bh,0f0h,08bh,01eh,0a8h,043h,0c6h,040h,01eh,007h
l832a:
	db 0b8h,02ch,000h,0f7h,06eh,0fah,08bh,0f0h,08bh,01eh,0a8h,043h,080h,078h,01eh,001h
	db 074h,006h,080h,078h,01eh,005h,075h,004h
l8342:
	db 0c6h,040h,018h,001h
l8346:
	db 0b8h,02ch,000h,0f7h,06eh,0fah,08bh,0f0h,08bh,01eh,0a8h,043h,080h,078h,01eh,000h
	db 075h,01ch,083h,078h,00ch,0ffh,075h,014h,0c6h,040h,019h,000h,0b8h,02ch,000h,0f7h
	db 06eh,0fah,08bh,0f0h,08bh,01eh,0a8h,043h,0c6h,040h,01bh,000h
l8372:
	db 0ebh,023h
l8374:
	db 0c7h,046h,0feh,001h,000h
l8379:
	db 0b8h,02ch,000h,0f7h,06eh,0fah,003h,046h,0feh,08bh,0f0h,08bh,01eh,0a8h,043h,0c6h
	db 040h,018h,000h,0ffh,046h,0feh,08bh,046h,0feh,03dh,004h,000h,07ch,0e2h
l8397:
	db 0ffh,046h,0fah
l839a:
	db 08bh,046h,0fah,03bh,006h,0ceh,043h,07dh,003h,0e9h,03fh,0ffh
l83a6:
	db 05eh,08bh,0e5h,05dh,0c3h
#endasm
