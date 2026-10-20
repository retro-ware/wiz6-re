/* Read monster record mon into group n, roll its members and maybe chain a companion group. */
#asm
	public generate_monster_group_
	extrn access_scenario_record_:near
	extrn f4858_:near
	extrn load_sound_mele_:near
	extrn random_:near
	extrn roll_dice_:near
generate_monster_group_:
	db 055h,08bh,0ech,083h,0c4h,0fch,057h,056h,0ffh,006h,060h,043h,0b8h,000h,000h,050h
	db 0ffh,076h,004h,08bh,046h,006h,0d1h,0e0h,08bh,0d8h,0ffh,0b7h,0b6h,043h,0b8h,004h
	db 000h,050h
	call access_scenario_record_
	db 083h,0c4h,008h,08ah,046h,004h,08bh,04eh,006h,0d1h,0e1h,08bh,0d9h,08bh,09fh,0a8h
	db 043h,088h,087h,09ah,001h,08bh,046h,006h,0d1h,0e0h,08bh,0d8h,08bh,09fh,0b6h,043h
	db 08ah,087h,0d1h,000h,02ah,0e4h,050h
	call f4858_
	db 059h,08bh,04eh,006h,0d1h,0e1h,08bh,0d9h,08bh,09fh,0a8h,043h,088h,087h,09bh,001h
	db 083h,07eh,006h,001h,075h,025h,08bh,046h,006h,0d1h,0e0h,08bh,0d8h,08bh,09fh,0b6h
	db 043h,080h,0bfh,0d2h,000h,000h,076h,00dh,08ah,087h,0d2h,000h,02ah,0e4h,050h
	call load_sound_mele_
	db 059h,0ebh,006h
l49e9:
	db 0c7h,006h,036h,043h,0ffh,0ffh
l49ef:
	db 0a0h,093h,035h,02ah,0e4h,0ebh,026h
l49f6:
	db 08bh,046h,006h,0d1h,0e0h,08bh,0d8h,08bh,09fh,0b6h,043h,083h,07fh,074h,000h,07eh
	db 003h,0ffh,04fh,074h
l4a0a:
	db 0ebh,01ah
l4a0c:
	db 08bh,046h,006h,0d1h,0e0h,08bh,0d8h,08bh,09fh,0b6h,043h,0ffh,047h,074h,0ebh,00ah
l4a1c:
	db 03dh,001h,000h,074h,0d5h,03dh,002h,000h,074h,0e6h
l4a26:
	db 08bh,046h,006h,0d1h,0e0h,08bh,0d8h,08bh,08fh,0b6h,043h,083h,0c1h,074h,083h,0ech
	db 004h,08bh,0c4h,08ch,0d2h,08eh,0c2h,08bh,0f1h,08bh,0f8h,0a5h,0a5h
	call roll_dice_
	db 083h,0c4h,004h,08bh,04eh,006h,0d1h,0e1h,08bh,0d9h,08bh,09fh,0a8h,043h,088h,087h
	db 09dh,001h,08bh,046h,006h,0d1h,0e0h,08bh,0d8h,08bh,09fh,0a8h,043h,080h,0bfh,09dh
	db 001h,001h,073h,005h,0c6h,087h,09dh,001h,001h
l4a6f:
	db 08bh,046h,006h,0d1h,0e0h,08bh,0d8h,08bh,09fh,0a8h,043h,080h,0bfh,09dh,001h,009h
	db 076h,005h,0c6h,087h,09dh,001h,009h
l4a86:
	db 08bh,046h,006h,0d1h,0e0h,08bh,0d8h,08bh,09fh,0a8h,043h,0c6h,087h,09ch,001h,001h
	db 0c7h,046h,0feh,000h,000h
l4a9b:
	db 08bh,046h,006h,0d1h,0e0h,08bh,0d8h,08bh,09fh,0a8h,043h,08bh,076h,0feh,0c6h,080h
	db 08ch,001h,000h,0ffh,046h,0feh,08bh,046h,0feh,03dh,006h,000h,07ch,0e2h,0c7h,046h
	db 0feh,000h,000h
l4abe:
	db 08bh,046h,006h,0d1h,0e0h,08bh,0d8h,08bh,09fh,0a8h,043h,08bh,076h,0feh,0c6h,080h
	db 092h,001h,000h,0ffh,046h,0feh,08bh,046h,0feh,03dh,004h,000h,07ch,0e2h,080h,03eh
	db 093h,035h,002h,075h,00eh,08bh,046h,006h,0d1h,0e0h,08bh,0d8h,08bh,09fh,0b6h,043h
	db 0feh,047h,07ah
l4af1:
	db 0c7h,046h,0feh,000h,000h,0e9h,08ch,001h
l4af9:
	db 08bh,046h,006h,0d1h,0e0h,08bh,0d8h,08bh,09fh,0b6h,043h,08ah,047h,07ah,02ah,0e4h
	db 050h,0b8h,02ch,000h,0f7h,06eh,0feh,08bh,0f0h,08bh,046h,006h,0d1h,0e0h,08bh,0d8h
	db 08bh,09fh,0a8h,043h,058h,089h,000h,08bh,046h,006h,0d1h,0e0h,08bh,0d8h,08bh,08fh
	db 0b6h,043h,083h,0c1h,078h,083h,0ech,004h,08bh,0c4h,08ch,0d2h,08eh,0c2h,08bh,0f1h
	db 08bh,0f8h,0a5h,0a5h
	call roll_dice_
	db 083h,0c4h,004h,050h,0b8h,02ch,000h,0f7h,06eh,0feh,08bh,0f0h,08bh,046h,006h,0d1h
	db 0e0h,08bh,0d8h,08bh,09fh,0a8h,043h,058h,089h,040h,004h,0b8h,02ch,000h,0f7h,06eh
	db 0feh,08bh,0f0h,08bh,046h,006h,0d1h,0e0h,08bh,0d8h,08bh,09fh,0a8h,043h,08bh,040h
	db 004h,089h,040h,002h,08bh,046h,006h,0d1h,0e0h,08bh,0d8h,08bh,08fh,0b6h,043h,083h
	db 0c1h,07ch,083h,0ech,004h,08bh,0c4h,08ch,0d2h,08eh,0c2h,08bh,0f1h,08bh,0f8h,0a5h
	db 0a5h
	call roll_dice_
	db 083h,0c4h,004h,050h,0b8h,02ch,000h,0f7h,06eh,0feh,08bh,0f0h,08bh,046h,006h,0d1h
	db 0e0h,08bh,0d8h,08bh,09fh,0a8h,043h,058h,089h,040h,008h,0b8h,02ch,000h,0f7h,06eh
	db 0feh,08bh,0f0h,08bh,046h,006h,0d1h,0e0h,08bh,0d8h,08bh,09fh,0a8h,043h,08bh,040h
	db 008h,089h,040h,006h,0b8h,02ch,000h,0f7h,06eh,0feh,08bh,0f0h,08bh,046h,006h,0d1h
	db 0e0h,08bh,0d8h,08bh,09fh,0a8h,043h,0c6h,040h,02ah,0ffh,0a0h,093h,035h,02ah,0e4h
	db 0e9h,08eh,000h
l4be7:
	db 0b8h,02ch,000h,0f7h,06eh,0feh,08bh,0f0h,08bh,046h,006h,0d1h,0e0h,08bh,0d8h,08bh
	db 09fh,0a8h,043h,0c6h,040h,026h,002h,0b8h,02ch,000h,0f7h,06eh,0feh,08bh,0f0h,08bh
	db 046h,006h,0d1h,0e0h,08bh,0d8h,08bh,09fh,0a8h,043h,0c6h,040h,027h,002h,0b8h,02ch
	db 000h,0f7h,06eh,0feh,08bh,0f0h,08bh,046h,006h,0d1h,0e0h,08bh,0d8h,08bh,09fh,0a8h
	db 043h,0c6h,040h,029h,0fbh,0ebh,054h
l4c2e:
	db 0b8h,02ch,000h,0f7h,06eh,0feh,08bh,0f0h,08bh,046h,006h,0d1h,0e0h,08bh,0d8h,08bh
	db 09fh,0a8h,043h,0c6h,040h,026h,0feh,0b8h,02ch,000h,0f7h,06eh,0feh,08bh,0f0h,08bh
	db 046h,006h,0d1h,0e0h,08bh,0d8h,08bh,09fh,0a8h,043h,0c6h,040h,027h,0feh,0b8h,02ch
	db 000h,0f7h,06eh,0feh,08bh,0f0h,08bh,046h,006h,0d1h,0e0h,08bh,0d8h,08bh,09fh,0a8h
	db 043h,0c6h,040h,029h,005h,0ebh,00dh
l4c75:
	db 03dh,001h,000h,075h,003h,0e9h,06ah,0ffh
l4c7d:
	db 03dh,002h,000h,074h,0ach
l4c82:
	db 0ffh,046h,0feh
l4c85:
	db 08bh,046h,006h,0d1h,0e0h,08bh,0d8h,08bh,09fh,0a8h,043h,08ah,087h,09dh,001h,02ah
	db 0e4h,03bh,046h,0feh,07eh,003h,0e9h,05bh,0feh
l4c9e:
	db 0a1h,03ch,036h,040h,0b9h,002h,000h,099h,0f7h,0f9h,040h,089h,046h,0feh,083h,03eh
	db 038h,043h,000h,07eh,003h,0ffh,046h,0feh
l4cb6:
	db 0b8h,005h,000h,083h,07eh,0feh,005h,07dh,003h,08bh,046h,0feh
l4cc2:
	db 089h,046h,0feh,0b8h,096h,000h,080h,03eh,093h,035h,001h,074h,00dh,0b8h,064h,000h
	db 080h,03eh,093h,035h,002h,075h,003h,0b8h,04bh,000h
l4cdc:
	db 089h,046h,0fch,08bh,046h,006h,03bh,046h,0feh,07dh,06eh,0c7h,046h,0feh,000h,000h
	db 0c7h,046h,004h,0ffh,0ffh
l4cf1:
	db 08bh,046h,006h,0d1h,0e0h,08bh,0d8h,08bh,09fh,0b6h,043h,08bh,076h,0feh,080h,0b8h
	db 0a6h,000h,000h,076h,02ch,0ffh,076h,0fch
	call random_
	db 059h,050h,08bh,046h,006h,0d1h,0e0h,08bh,0d8h,08bh,09fh,0b6h,043h,08bh,076h,0feh
	db 08ah,080h,0a6h,000h,02ah,0e4h,08bh,0c8h,058h,03bh,0c1h,07dh,009h,08ah,080h,0a4h
	db 000h,02ah,0e4h,089h,046h,004h
l4d32:
	db 0ffh,046h,0feh,083h,07eh,0feh,002h,07dh,006h,083h,07eh,004h,0ffh,074h,0b0h
l4d41:
	db 083h,07eh,004h,0ffh,074h,00eh,08bh,046h,006h,040h,050h,0ffh,076h,004h
	call generate_monster_group_
	db 083h,0c4h,004h
l4d55:
	db 05eh,05fh,08bh,0e5h,05dh,0c3h
#endasm
