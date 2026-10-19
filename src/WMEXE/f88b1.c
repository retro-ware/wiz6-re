#asm
	public f88b1_
	extrn clamp_toward_x_:near
	extrn clear_window_area_:near
	extrn combat_delay_:near
	extrn draw_member_card_x_:near
	extrn f7af7_:near
	extrn get_combatant_name_:near
	extrn print_combat_centered_:near
	extrn print_msg_centered_:near
	extrn random_:near
	extrn set_cursor_:near
f88b1_:
	db 055h,08bh,0ech,083h,0c4h,0f0h,056h,08bh,046h,004h,0d1h,0e0h,08bh,0d8h,08bh,09fh
	db 0a8h,043h,08ah,087h,09dh,001h,02ah,0e4h,089h,046h,0f6h,08bh,046h,006h,050h,03dh
	db 000h,000h,058h,07dh,002h,0f7h,0d8h
l88d8:
	db 089h,046h,0f4h,03bh,046h,0f6h,07eh,006h,08bh,046h,0f6h,089h,046h,0f4h
l88e6:
	db 08bh,046h,0f6h,02bh,046h,0f4h,050h
	call random_
	db 059h,089h,046h,0f2h,089h,046h,0feh,0e9h,0ceh,002h
l88fa:
	db 0b8h,02ch,000h,0f7h,06eh,0feh,08bh,0f0h,08bh,046h,004h,0d1h,0e0h,08bh,0d8h,08bh
	db 09fh,0a8h,043h,080h,078h,022h,003h,072h,003h,0e9h,0afh,002h
l8916:
	db 080h,078h,02bh,000h,074h,003h,0e9h,0a6h,002h
l891f:
	db 0b8h,004h,000h,050h,0b8h,027h,000h,050h,0b8h,002h,000h,050h,0b8h,000h,000h,050h
	db 0ffh,036h,0b6h,04fh
	call clear_window_area_
	db 083h,0c4h,00ah,0b8h,002h,000h,050h,0b8h,001h,000h,050h,0ffh,036h,0b6h,04fh
	call set_cursor_
	db 083h,0c4h,006h,0b8h,001h,000h,050h
	call combat_delay_
	db 059h,0ffh,076h,0feh,0ffh,076h,004h,0b8h,00ch,050h,050h
	call get_combatant_name_
	db 083h,0c4h,006h,0b8h,002h,000h,050h,0b8h,006h,000h,083h,07eh,004h,000h,075h,003h
	db 0b8h,001h,000h
l8973:
	db 050h,0b8h,00ch,050h,050h
	call print_combat_centered_
	db 083h,0c4h,006h,0ffh,076h,008h,0b8h,003h,000h,050h,0ffh,076h,00ah,0ffh,076h,004h
	call f7af7_
	db 083h,0c4h,008h,089h,046h,0fah,03dh,000h,000h,07fh,003h,0e9h,009h,002h
l899c:
	db 0b8h,064h,000h,050h
	call random_
	db 059h,050h,08bh,046h,004h,0d1h,0e0h,08bh,0d8h,08bh,09fh,0b6h,043h,08ah,087h,097h
	db 000h,02ah,0e4h,08bh,0c8h,02bh,046h,008h,08bh,0c8h,058h,03bh,0c1h,07fh,003h,0e9h
	db 0e0h,001h
l89c5:
	db 083h,07eh,00ch,001h,074h,003h,0e9h,0beh,000h
l89ce:
	db 0b8h,001h,000h,050h,0b8h,02ch,000h,0f7h,06eh,0feh,08bh,0f0h,08bh,046h,004h,0d1h
	db 0e0h,08bh,0d8h,08bh,09fh,0a8h,043h,08ah,040h,028h,098h,050h,08bh,046h,0fah,048h
	db 0b9h,002h,000h,099h,0f7h,0f9h,040h,050h
	call clamp_toward_x_
	db 083h,0c4h,006h,050h,0b8h,02ch,000h,0f7h,06eh,0feh,08bh,0f0h,08bh,046h,004h,0d1h
	db 0e0h,08bh,0d8h,08bh,09fh,0a8h,043h,058h,088h,040h,028h,0b8h,000h,000h,050h,0b8h
	db 02ch,000h,0f7h,06eh,0feh,08bh,0f0h,08bh,046h,004h,0d1h,0e0h,08bh,0d8h,08bh,09fh
	db 0a8h,043h,08ah,040h,027h,098h,050h,08bh,046h,0fah,048h,0b9h,002h,000h,099h,0f7h
	db 0f9h,040h,050h
	call clamp_toward_x_
	db 083h,0c4h,006h,050h,0b8h,02ch,000h,0f7h,06eh,0feh,08bh,0f0h,08bh,046h,004h,0d1h
	db 0e0h,08bh,0d8h,08bh,09fh,0a8h,043h,058h,088h,040h,027h,0b8h,02ch,000h,0f7h,06eh
	db 0feh,08bh,0f0h,08bh,046h,004h,0d1h,0e0h,08bh,0d8h,08bh,09fh,0a8h,043h,08bh,000h
	db 02bh,046h,0fah,089h,046h,0fch,03dh,001h,000h,07dh,005h,0c7h,046h,0fch,001h,000h
l8a7f:
	db 08bh,046h,0fch,089h,000h,0c7h,046h,0f0h,0a3h,00dh,0e9h,0e5h,000h
l8a8c:
	db 0b8h,001h,000h,050h,0b8h,02ch,000h,0f7h,06eh,0feh,08bh,0f0h,08bh,046h,004h,0d1h
	db 0e0h,08bh,0d8h,08bh,09fh,0a8h,043h,08ah,040h,029h,098h,050h,08bh,046h,0fah,08bh
	db 0d0h,0d1h,0e0h,003h,0c2h,050h
	call clamp_toward_x_
	db 083h,0c4h,006h,050h,0b8h,02ch,000h,0f7h,06eh,0feh,08bh,0f0h,08bh,046h,004h,0d1h
	db 0e0h,08bh,0d8h,08bh,09fh,0a8h,043h,058h,088h,040h,029h,0c7h,046h,0f6h,000h,000h
l8ad5:
	db 0b8h,02ch,000h,0f7h,06eh,0feh,003h,046h,0f6h,08bh,0f0h,08bh,046h,004h,0d1h,0e0h
	db 08bh,0d8h,08bh,09fh,0a8h,043h,08ah,040h,018h,02ah,0e4h,0b9h,002h,000h,099h,0f7h
	db 0f9h,088h,040h,018h,0ffh,046h,0f6h,08bh,046h,0f6h,03dh,004h,000h,07ch,0d1h,0b8h
	db 02ch,000h,0f7h,06eh,0feh,08bh,0f0h,08bh,046h,004h,0d1h,0e0h,08bh,0d8h,08bh,09fh
	db 0a8h,043h,080h,078h,029h,000h,07dh,04fh,080h,078h,029h,000h,07dh,008h,08ah,040h
	db 029h,098h,0f7h,0d8h,0ebh,004h
l8b2b:
	db 08ah,040h,029h,098h
l8b2f:
	db 0b9h,00ah,000h,099h,0f7h,0f9h,089h,046h,0f6h,03dh,003h,000h,07eh,005h,0c7h,046h
	db 0f6h,003h,000h
l8b42:
	db 083h,07eh,0f6h,000h,07eh,024h,0b8h,02ch,000h,0f7h,06eh,0feh,0b9h,004h,000h,02bh
	db 04eh,0f6h,003h,0c1h,08bh,0f0h,08bh,046h,004h,0d1h,0e0h,08bh,0d8h,08bh,09fh,0a8h
	db 043h,0c6h,040h,018h,000h,0ffh,04eh,0f6h,0ebh,0d6h
l8b6c:
	db 0c7h,046h,0f0h,0a6h,00dh
l8b71:
	db 0b8h,003h,000h,050h,0b8h,005h,000h,050h,0ffh,076h,0f0h
	call print_msg_centered_
	db 083h,0c4h,006h,083h,07eh,004h,000h,075h,00dh,0b8h,000h,000h,050h,0ffh,076h,0feh
	call draw_member_card_x_
	db 083h,0c4h,004h
l8b95:
	db 0a1h,0c8h,04fh,0b9h,002h,000h,099h,0f7h,0f9h,050h
	call combat_delay_
	db 059h,0ebh,020h
l8ba5:
	db 0b8h,003h,000h,050h,0b8h,00eh,000h,050h,0b8h,08fh,00dh,050h
	call print_msg_centered_
	db 083h,0c4h,006h,0a1h,0c8h,04fh,0b9h,002h,000h,099h,0f7h,0f9h,050h
	call combat_delay_
	db 059h
l8bc5:
	db 0ffh,046h,0feh
l8bc8:
	db 08bh,046h,0f2h,003h,046h,0f4h,03bh,046h,0feh,07eh,003h,0e9h,024h,0fdh
l8bd6:
	db 05eh,08bh,0e5h,05dh,0c3h
#endasm
