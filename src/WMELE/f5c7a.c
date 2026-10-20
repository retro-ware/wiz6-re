/* Update the party after a round: deaths, sorting by condition, check all dead. */
#asm
	public update_party_after_round_
	extrn copy_member_to_combatant_:near
	extrn draw_member_panel_mele_:near
	extrn play_sound_:near
	extrn print_string_:near
	extrn set_cursor_:near
	extrn swapmem_:near
	extrn update_combatant_:near
update_party_after_round_:
	db 055h,08bh,0ech,081h,0c4h,01ch,0feh,056h,0c7h,046h,0feh,000h,000h,0e9h,0b9h,000h
l5c8a:
	db 0b8h,02ch,000h,0f7h,06eh,0feh,08bh,0f0h,08bh,01eh,0a8h,043h,080h,078h,022h,003h
	db 072h,003h,0e9h,0a1h,000h
l5c9f:
	db 0b8h,0b0h,001h,0f7h,06eh,0feh,08bh,0d8h,08ah,087h,08bh,045h,02ah,0e4h,050h,08ah
	db 087h,08ah,045h,02ah,0e4h,050h,0ffh,076h,0feh,0b8h,000h,000h,050h
	call update_combatant_
	db 083h,0c4h,008h,03dh,001h,000h,074h,003h,0e9h,076h,000h
l5cca:
	db 0ffh,076h,0feh
	call draw_member_panel_mele_
	db 059h,0b8h,0b0h,001h,0f7h,06eh,0feh,08bh,0d8h,08ah,087h,086h,045h,02ah,0e4h,005h
	db 008h,000h,050h
	call play_sound_
	db 059h,08bh,046h,0feh,0b9h,002h,000h,099h,0f7h,0f9h,0d1h,0e0h,0d1h,0e0h,050h,0b8h
	db 000h,000h,050h,08bh,046h,0feh,099h,0f7h,0f9h,08bh,0c2h,085h,0c0h,075h,005h,0a1h
	db 0bah,04fh,0ebh,003h
l5d0a:
	db 0a1h,0b8h,04fh
l5d0d:
	db 050h
	call set_cursor_
	db 083h,0c4h,006h,0b8h,0fch,0ffh,050h,0b8h,0b0h,001h,0f7h,06eh,0feh,005h,0e8h,043h
	db 050h,08bh,046h,0feh,0b9h,002h,000h,099h,0f7h,0f9h,08bh,0c2h,085h,0c0h,075h,005h
	db 0a1h,0bah,04fh,0ebh,003h
l5d36:
	db 0a1h,0b8h,04fh
l5d39:
	db 050h
	call print_string_
	db 083h,0c4h,006h
l5d40:
	db 0ffh,046h,0feh
l5d43:
	db 08bh,046h,0feh,03bh,006h,0ceh,043h,07dh,003h,0e9h,03bh,0ffh
l5d4f:
	db 0c7h,046h,0feh,000h,000h,0ebh,00ah
l5d56:
	db 0ffh,076h,0feh
	call copy_member_to_combatant_
	db 059h,0ffh,046h,0feh
l5d60:
	db 08bh,046h,0feh,03bh,006h,0ceh,043h,07ch,0edh,0c7h,046h,0feh,000h,000h,0e9h,0e1h
	db 000h
l5d71:
	db 08bh,046h,0feh,040h,089h,046h,0fch,0e9h,0c8h,000h
l5d7b:
	db 0b8h,0b0h,001h,0f7h,06eh,0feh,08bh,0d8h,08ah,087h,089h,045h,050h,0b8h,0b0h,001h
	db 0f7h,06eh,0fch,08bh,0d8h,08ah,08fh,089h,045h,058h,03ah,0c1h,077h,003h,0e9h,0a4h
	db 000h
l5d9c:
	db 0b8h,0b0h,001h,050h,081h,0c3h,0e8h,043h,08bh,0c3h,050h,0b8h,0b0h,001h,0f7h,06eh
	db 0feh,005h,0e8h,043h,050h
	call swapmem_
	db 083h,0c4h,006h,0b8h,02ch,000h,050h,0b8h,02ch,000h,0f7h,06eh,0fch,08bh,0c8h,0a1h
	db 0a8h,043h,003h,0c1h,050h,0b8h,02ch,000h,0f7h,06eh,0feh,08bh,0c8h,0a1h,0a8h,043h
	db 003h,0c1h,050h
	call swapmem_
	db 083h,0c4h,006h,08bh,046h,0feh,0d1h,0e0h,08bh,0d8h,08bh,087h,0dch,043h,089h,086h
	db 01eh,0feh,08bh,046h,0fch,0d1h,0e0h,08bh,0d8h,08bh,087h,0dch,043h,08bh,04eh,0feh
	db 0d1h,0e1h,08bh,0d9h,089h,087h,0dch,043h,08bh,086h,01eh,0feh,08bh,04eh,0fch,0d1h
	db 0e1h,08bh,0d9h,089h,087h,0dch,043h,08bh,046h,0feh,0d1h,0e0h,08bh,0d8h,08bh,087h
	db 0d0h,043h,089h,086h,01eh,0feh,08bh,0d9h,08bh,087h,0d0h,043h,08bh,04eh,0feh,0d1h
	db 0e1h,08bh,0d9h,089h,087h,0d0h,043h,08bh,086h,01eh,0feh,08bh,04eh,0fch,0d1h,0e1h
	db 08bh,0d9h,089h,087h,0d0h,043h
l5e40:
	db 0ffh,046h,0fch
l5e43:
	db 08bh,046h,0fch,03bh,006h,0ceh,043h,07dh,003h,0e9h,02ch,0ffh
l5e4f:
	db 0ffh,046h,0feh
l5e52:
	db 0a1h,0ceh,043h,048h,03bh,046h,0feh,07eh,003h,0e9h,013h,0ffh
l5e5e:
	db 0c7h,046h,0fch,000h,000h,0c7h,086h,01ch,0feh,000h,000h,0c7h,046h,0feh,000h,000h
	db 0ebh,02dh
l5e70:
	db 0b8h,0b0h,001h,0f7h,06eh,0feh,08bh,0d8h,080h,0bfh,089h,045h,002h,072h,003h,0ffh
	db 046h,0fch
l5e82:
	db 0b8h,02ch,000h,0f7h,06eh,0feh,08bh,0f0h,08bh,01eh,0a8h,043h,080h,078h,02bh,002h
	db 075h,006h,0c7h,086h,01ch,0feh,001h,000h
l5e9a:
	db 0ffh,046h,0feh
l5e9d:
	db 08bh,046h,0feh,03bh,006h,0ceh,043h,07ch,0cah,08bh,046h,0fch,03bh,006h,0ceh,043h
	db 075h,00eh,0c7h,006h,0ceh,04fh,008h,000h,0c7h,006h,056h,043h,001h,000h,0ebh,013h
l5ebd:
	db 083h,0beh,01ch,0feh,000h,07eh,00ch,0c7h,006h,0ceh,04fh,017h,000h,0c7h,006h,056h
	db 043h,001h,000h
l5ed0:
	db 05eh,08bh,0e5h,05dh,0c3h
#endasm
