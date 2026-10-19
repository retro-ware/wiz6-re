/* WMELE entry: start an encounter, end a combat round, or redraw the combat screen. */
#asm
	public ovmain_
	extrn end_combat_round_:near
	extrn f72d1_:near
	extrn redraw_combat_screen_:near
ovmain_:
	db 0c7h,006h,00eh,050h,000h,000h,0c7h,006h,010h,050h,000h,000h,0c7h,006h,012h,050h
	db 000h,000h,083h,03eh,03ah,036h,00ah,075h,003h
	call f72d1_
l458e:
	db 083h,03eh,03ah,036h,00eh,075h,003h
	call end_combat_round_
l4598:
	db 083h,03eh,03ah,036h,00bh,075h,003h
	call redraw_combat_screen_
l45a2:
	db 0b8h,000h,000h,0c3h
#endasm
