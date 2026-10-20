#asm
	public f9edb_
	extrn f5078_:near
	extrn f817e_:near
	extrn fill_window_:near
	extrn npc_choose_spell_:near
	extrn random_:near
f9edb_:
	db 055h,08bh,0ech,083h,0c4h,0fch,0b8h,000h,000h,050h,0b8h,003h,000h,050h,0b8h,020h
	db 000h,050h,0ffh,076h,004h
	call fill_window_
	db 083h,0c4h,008h,0ffh,076h,006h,0ffh,076h,004h
	call npc_choose_spell_
	db 083h,0c4h,004h,089h,046h,0feh,0c7h,006h,02ch,052h,0ffh,0ffh,03dh,0ffh,0ffh,075h
	db 003h,0e9h,0b8h,000h
l9f13:
	db 0b9h,000h,001h,099h,0f7h,0f9h,089h,046h,0fch,089h,056h,0feh,08bh,0c2h,08bh,0d0h
	db 0d1h,0e0h,003h,0c2h,0d1h,0e0h,08bh,0d8h,08ah,087h,0e0h,000h,02ah,0e4h,0f7h,06eh
	db 0fch,050h,0b8h,0b0h,001h,0f7h,06eh,006h,08bh,0c8h,08ah,087h,0deh,000h,02ah,0e4h
	db 08bh,0d0h,0d1h,0e0h,0d1h,0e0h,08bh,0d0h,003h,0c8h,08bh,0d9h,058h,029h,087h,010h
	db 044h,0ffh,036h,022h,053h,0ffh,076h,0fch,0ffh,076h,0feh,0ffh,076h,006h
	call f817e_
	db 083h,0c4h,008h,0ffh,076h,0fch
	call random_
	db 059h,050h,08bh,046h,0feh,08bh,0d0h,0d1h,0e0h,003h,0c2h,0d1h,0e0h,08bh,0d8h,08ah
	db 087h,0dfh,000h,02ah,0e4h,08bh,0c8h,058h,003h,0c1h,003h,046h,0fch,050h,0b8h,0b0h
	db 001h,0f7h,06eh,006h,08bh,0d8h,058h,029h,087h,004h,044h,083h,0bfh,004h,044h,000h
	db 07dh,01fh,0c7h,087h,004h,044h,000h,000h,0b8h,006h,000h,050h
	call random_
	db 059h,005h,006h,000h,050h,0b8h,0b0h,001h,0f7h,06eh,006h,08bh,0d8h,058h,088h,087h
	db 00ch,045h
l9fbe:
	db 0ffh,036h,07ah,052h,0ffh,076h,006h
	call f5078_
	db 083h,0c4h,004h
l9fcb:
	db 08bh,0e5h,05dh,0c3h
#endasm
