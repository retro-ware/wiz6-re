/* Load the treasure record, handle the chest, roll gold and items and award them. */
#asm
	public open_treasure_
	extrn $ldv:near
	extrn access_scenario_record_:near
	extrn animate_treasure_view_:near
	extrn clear_window_:near
	extrn distribute_loot_:near
	extrn get_message_:near
	extrn handle_chest_:near
	extrn int_to_string_:near
	extrn long_to_string_:near
	extrn mark_chest_opened_:near
	extrn random_:near
	extrn refresh_all_windows_:near
	extrn replace_char_with_string_:near
	extrn roll_dice_:near
	extrn show_centered_line_:near
	extrn strlen_:near
	extrn wait_animating_:near
open_treasure_:
	db 055h,08bh,0ech,081h,0c4h,066h,0ffh,0b8h,000h,000h,050h,0ffh,036h,0c4h,043h,08dh
	db 046h,0d4h,050h,0b8h,007h,000h,050h
	call access_scenario_record_
	db 083h,0c4h,008h,0c7h,006h,0c4h,043h,0ffh,0ffh,080h,07eh,0fbh,000h,076h,025h,0c7h
	db 006h,0c8h,050h,001h,000h,08dh,046h,0d4h,050h
	call handle_chest_
	db 059h,03dh,0ffh,0ffh,075h,004h
l963d:
	db 08bh,0e5h,05dh,0c3h
l9641:
	db 0b8h,000h,000h,050h,0ffh,036h,0b6h,04fh
	call clear_window_
	db 083h,0c4h,004h
l964f:
	db 083h,03eh,0ceh,04fh,015h,075h,003h
	call mark_chest_opened_
l9659:
	call refresh_all_windows_
	db 0c7h,046h,086h,000h,000h,0c7h,046h,084h,000h,000h,0c7h,046h,082h,000h,000h,0c7h
	db 046h,080h,000h,000h,0c7h,006h,066h,052h,000h,000h,0c7h,046h,0feh,000h,000h
l967b:
	db 0b8h,064h,000h,050h
	call random_
	db 059h,050h,08bh,046h,0feh,08bh,0d0h,0d1h,0e0h,003h,0c2h,0d1h,0e0h,08bh,0d8h,003h
	db 0ddh,08ah,047h,0d9h,02ah,0e4h,08bh,0c8h,058h,03bh,0c1h,07ch,003h,0e9h,0c1h,000h
l96a2:
	db 08ah,047h,0d8h,02ah,0e4h,0e9h,0a7h,000h
l96aa:
	db 08bh,046h,0feh,08bh,0d0h,0d1h,0e0h,003h,0c2h,0d1h,0e0h,08bh,0d8h,003h,0ddh,08bh
	db 047h,0d4h,08bh,04fh,0d6h,02bh,0c1h,050h
	call random_
	db 059h,050h,08bh,046h,0feh,08bh,0d0h,0d1h,0e0h,003h,0c2h,0d1h,0e0h,08bh,0d8h,003h
	db 0ddh,08bh,04fh,0d6h,058h,003h,0c1h,089h,086h,07eh,0ffh,08bh,086h,07eh,0ffh,099h
	db 001h,046h,084h,011h,056h,086h,0ebh,076h
l96ed:
	db 08bh,046h,0feh,08bh,0d0h,0d1h,0e0h,003h,0c2h,0d1h,0e0h,08bh,0d8h,003h,0ddh,08bh
	db 047h,0d4h,08bh,04fh,0d6h,08bh,0d9h,0f7h,0ebh,001h,046h,080h,011h,056h,082h,0ebh
	db 055h
l970e:
	db 08bh,046h,0feh,08bh,0d0h,0d1h,0e0h,003h,0c2h,0d1h,0e0h,08bh,0d8h,003h,0ddh,0ffh
	db 077h,0d6h
	call random_
	db 059h,050h,08bh,046h,0feh,08bh,0d0h,0d1h,0e0h,003h,0c2h,0d1h,0e0h,08bh,0d8h,003h
	db 0ddh,08bh,04fh,0d4h,058h,003h,0c1h,08bh,00eh,066h,052h,0d1h,0e1h,08bh,0d9h,089h
	db 087h,0d6h,051h,03dh,000h,000h,07eh,004h,0ffh,006h,066h,052h
l974f:
	db 0ebh,012h
l9751:
	db 03dh,001h,000h,075h,003h,0e9h,051h,0ffh
l9759:
	db 03dh,002h,000h,074h,0b0h,03dh,004h,000h,074h,08ah
l9763:
	db 0ffh,046h,0feh,08bh,046h,0feh,03dh,006h,000h,07dh,003h,0e9h,00ah,0ffh
l9771:
	db 0c7h,046h,088h,000h,000h,0c7h,046h,0feh,000h,000h,0ebh,015h
l977d:
	db 0b8h,0b0h,001h,0f7h,06eh,0feh,08bh,0d8h,080h,0bfh,089h,045h,000h,075h,003h,0ffh
	db 046h,088h
l978f:
	db 0ffh,046h,0feh
l9792:
	db 08bh,046h,0feh,03bh,006h,0ceh,043h,07ch,0e2h,083h,07eh,088h,000h,075h,009h,0c7h
	db 006h,03ah,036h,008h,000h,0e9h,093h,0feh
l97aa:
	db 08bh,046h,084h,08bh,056h,086h,050h,052h,08bh,046h,088h,099h,08bh,0c8h,08bh,0dah
	db 05ah,058h
	call $ldv
	db 089h,056h,086h,089h,046h,084h,0c7h,046h,0feh,000h,000h,0e9h,0cdh,001h
l97cd:
	db 0b8h,06eh,050h,050h,0b8h,08ch,013h,050h
	call get_message_
	db 083h,0c4h,004h,08bh,046h,0feh,08bh,0d0h,0b1h,003h,0d3h,0e0h,003h,0c2h,0d1h,0e0h
	db 005h,0eeh,051h,050h,0b8h,08dh,013h,050h
	call get_message_
	db 083h,0c4h,004h,08bh,046h,0feh,0d1h,0e0h,08bh,0d8h,083h,0bfh,0d6h,051h,000h,07fh
	db 003h,0e9h,0eeh,000h
l9807:
	db 0b8h,000h,000h,050h,0ffh,0b7h,0d6h,051h,08dh,046h,08ah,050h,0b8h,001h,000h,050h
	call access_scenario_record_
	db 083h,0c4h,008h,0b8h,05eh,000h,050h,08dh,046h,08ah,050h,08bh,046h,0feh,08bh,0d0h
	db 0b1h,003h,0d3h,0e0h,003h,0c2h,0d1h,0e0h,005h,0eeh,051h,050h
	call replace_char_with_string_
	db 083h,0c4h,006h,08ah,046h,0c6h,02ah,0e4h,08bh,0d8h,080h,0bfh,0cch,000h,001h,075h
	db 01bh,0ffh,076h,0a0h,0ffh,076h,09eh
	call roll_dice_
	db 083h,0c4h,004h,02ah,0e4h,08bh,04eh,0feh,0d1h,0e1h,08bh,0d9h,089h,087h,0e2h,051h
	db 0ebh,00dh
l9865:
	db 08bh,046h,0feh,0d1h,0e0h,08bh,0d8h,0c7h,087h,0e2h,051h,001h,000h
l9872:
	db 08bh,046h,0feh,0d1h,0e0h,08bh,0d8h,08bh,087h,0e2h,051h,0f7h,06eh,0a8h,089h,087h
	db 068h,052h,08ah,046h,0c7h,02ah,0e4h,089h,087h,05ah,052h,08ah,046h,0c5h,02ah,0e4h
	db 0a9h,002h,000h,074h,005h,0b8h,001h,000h,0ebh,003h
l989c:
	db 0b8h,000h,000h
l989f:
	db 089h,087h,074h,052h,08ah,046h,0c6h,02ah,0e4h,0ebh,03ah
l98aa:
	db 08dh,086h,06ah,0ffh,050h,0b8h,08eh,013h,050h
	call get_message_
	db 083h,0c4h,004h,0ebh,03ah
l98bb:
	db 08dh,086h,06ah,0ffh,050h,0b8h,08fh,013h,050h
	call get_message_
	db 083h,0c4h,004h,0ebh,029h
l98cc:
	db 08dh,086h,06ah,0ffh,050h,0b8h,090h,013h,050h
	call get_message_
	db 083h,0c4h,004h,0ebh,018h
l98dd:
	db 0c6h,086h,06ah,0ffh,000h,0ebh,011h
l98e4:
	db 03dh,00ch,000h,074h,0c1h,03dh,00dh,000h,074h,0cdh,03dh,010h,000h,074h,0d9h,0ebh
	db 0e8h
l98f5:
	db 0b8h,042h,051h,050h,08bh,046h,0feh,0d1h,0e0h,08bh,0d8h,0ffh,0b7h,0e2h,051h
	call int_to_string_
	db 083h,0c4h,004h,0b8h,024h,000h,050h,0b8h,042h,051h,050h,08bh,046h,0feh,08bh,0d0h
	db 0b1h,003h,0d3h,0e0h,003h,0c2h,0d1h,0e0h,005h,0eeh,051h,050h
	call replace_char_with_string_
	db 083h,0c4h,006h,0b8h,025h,000h,050h,08bh,046h,0feh,08bh,0d0h,0b1h,003h,0d3h,0e0h
	db 003h,0c2h,0d1h,0e0h,005h,0eeh,051h,050h,0b8h,06eh,050h,050h
	call replace_char_with_string_
	db 083h,0c4h,006h,0b8h,040h,000h,050h,08dh,086h,06ah,0ffh,050h,0b8h,06eh,050h,050h
	call replace_char_with_string_
	db 083h,0c4h,006h,0b8h,06eh,050h,050h
	call strlen_
	db 059h,089h,046h,0fch
l9966:
	db 083h,07eh,0fch,000h,07eh,014h,08bh,05eh,0fch,080h,0bfh,06dh,050h,020h,075h,00ah
	db 0c6h,087h,06dh,050h,000h,0ffh,04eh,0fch,0ebh,0e6h
l9980:
	db 0b8h,001h,000h,050h,050h,0b8h,06eh,050h,050h,0ffh,036h,0c8h,050h,0ffh,036h,0b6h
	db 04fh
	call show_centered_line_
	db 083h,0c4h,00ah,0ffh,046h,0feh
l999a:
	db 08bh,046h,0feh,03bh,006h,066h,052h,07dh,003h,0e9h,027h,0feh
l99a6:
	db 083h,07eh,086h,000h,07ch,008h,075h,008h,083h,07eh,084h,000h,077h,002h
l99b4:
	db 0ebh,04ah
l99b6:
	db 0b8h,06eh,050h,050h,0b8h,08ah,013h,050h
	call get_message_
	db 083h,0c4h,004h,0b8h,0f2h,050h,050h,0ffh,076h,086h,0ffh,076h,084h
	call long_to_string_
	db 083h,0c4h,006h,0b8h,024h,000h,050h,0b8h,0f2h,050h,050h,0b8h,06eh,050h,050h
	call replace_char_with_string_
	db 083h,0c4h,006h,0b8h,005h,000h,050h,0b8h,000h,000h,050h,0b8h,06eh,050h,050h,0ffh
	db 036h,0c8h,050h,0ffh,036h,0b6h,04fh
	call show_centered_line_
	db 083h,0c4h,00ah
l9a00:
	db 083h,07eh,082h,000h,07ch,008h,075h,008h,083h,07eh,080h,000h,077h,002h
l9a0e:
	db 0ebh,04ah
l9a10:
	db 0b8h,06eh,050h,050h,0b8h,08bh,013h,050h
	call get_message_
	db 083h,0c4h,004h,0b8h,0f2h,050h,050h,0ffh,076h,082h,0ffh,076h,080h
	call long_to_string_
	db 083h,0c4h,006h,0b8h,024h,000h,050h,0b8h,0f2h,050h,050h,0b8h,06eh,050h,050h
	call replace_char_with_string_
	db 083h,0c4h,006h,0b8h,004h,000h,050h,0b8h,001h,000h,050h,0b8h,06eh,050h,050h,0ffh
	db 036h,0c8h,050h,0ffh,036h,0b6h,04fh
	call show_centered_line_
	db 083h,0c4h,00ah
l9a5a:
	db 0c7h,046h,0feh,000h,000h,0ebh,02eh
l9a61:
	db 0b8h,0b0h,001h,0f7h,06eh,0feh,08bh,0d8h,080h,0bfh,089h,045h,000h,075h,01ch,08bh
	db 046h,080h,08bh,056h,082h,001h,087h,0f4h,043h,011h,097h,0f6h,043h,08bh,046h,084h
	db 08bh,056h,086h,001h,087h,0fch,043h,011h,097h,0feh,043h
l9a8c:
	db 0ffh,046h,0feh
l9a8f:
	db 08bh,046h,0feh,03bh,006h,0ceh,043h,07ch,0c9h,083h,03eh,066h,052h,000h,07eh,003h
	call distribute_loot_
l9aa2:
	db 0c7h,006h,01eh,050h,000h,000h
	call animate_treasure_view_
	db 0b8h,002h,000h,050h
	call wait_animating_
	db 059h,0e9h,087h,0fbh
#endasm
