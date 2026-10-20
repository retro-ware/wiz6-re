#asm
	public ovmain_
	extrn flee_party_:near
	extrn load_maze_level_:near
	extrn maze_main_loop_:near
	extrn random_:near
ovmain_:
	db 083h,03eh,03ah,036h,017h,075h,010h,0b8h,00ah,000h,050h
	call random_
	db 059h,005h,004h,000h,050h
	call flee_party_
	db 059h
l4589:
	db 083h,03eh,03ah,036h,006h,075h,008h,0ffh,036h,03ch,036h
	call load_maze_level_
	db 059h
l4598:
	db 083h,03eh,03ah,036h,005h,075h,003h
	call maze_main_loop_
l45a2:
	db 0b8h,000h,000h,0c3h
#endasm
