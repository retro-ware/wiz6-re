/* Update every combatant of group g for the end of a round. */
#asm
	public update_group_
	extrn update_combatant_:near
update_group_:
	db 055h,08bh,0ech,083h,0c4h,0fch,057h,056h,0c7h,046h,0feh,000h,000h,0c7h,046h,0fch
	db 000h,000h,0e9h,083h,000h
l53df:
	db 0b8h,02ch,000h,0f7h,06eh,0fch,08bh,0f0h,08bh,046h,004h,0d1h,0e0h,08bh,0d8h,08bh
	db 09fh,0a8h,043h,080h,078h,022h,003h,073h,027h,0b8h,000h,000h,050h,08bh,046h,004h
	db 0d1h,0e0h,08bh,0d8h,08bh,09fh,0b6h,043h,08ah,087h,0d7h,000h,02ah,0e4h,050h,0ffh
	db 076h,0fch,0ffh,076h,004h
	call update_combatant_
	db 083h,0c4h,008h,03dh,001h,000h,075h,000h
l541f:
	db 0b8h,02ch,000h,0f7h,06eh,0fch,08bh,0f0h,08bh,046h,004h,0d1h,0e0h,08bh,0d8h,08bh
	db 09fh,0a8h,043h,080h,078h,022h,003h,073h,027h,003h,0deh,08bh,0f3h,0b8h,02ch,000h
	db 0f7h,06eh,0feh,08bh,0c8h,08bh,046h,004h,0d1h,0e0h,08bh,0d8h,08bh,087h,0a8h,043h
	db 003h,0c1h,08bh,0f8h,08ch,0d9h,08eh,0c1h,0b9h,016h,000h,0f3h,0a5h,0ffh,046h,0feh
l545f:
	db 0ffh,046h,0fch
l5462:
	db 08bh,046h,004h,0d1h,0e0h,08bh,0d8h,08bh,09fh,0a8h,043h,08ah,087h,09dh,001h,02ah
	db 0e4h,03bh,046h,0fch,07eh,003h,0e9h,064h,0ffh
l547b:
	db 08ah,046h,0feh,08bh,04eh,004h,0d1h,0e1h,08bh,0d9h,08bh,09fh,0a8h,043h,088h,087h
	db 09dh,001h,05eh,05fh,08bh,0e5h,05dh,0c3h
#endasm
