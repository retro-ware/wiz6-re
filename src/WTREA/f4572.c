#asm
	public ovmain_
	extrn treasure_after_combat_:near
	extrn treasure_found_:near
ovmain_:
	db 0c7h,006h,01ch,050h,0ffh,0ffh,0c7h,006h,01eh,050h,000h,000h,0c7h,006h,020h,050h
	db 0ffh,0ffh,0c7h,006h,022h,050h,0ffh,0ffh,083h,03eh,03ah,036h,00fh,075h,00bh,0c7h
	db 006h,03ah,036h,016h,000h
	call treasure_after_combat_
	db 0ebh,018h
l459c:
	db 083h,03eh,03ah,036h,015h,075h,00bh,0c7h,006h,03ah,036h,016h,000h
	call treasure_found_
	db 0ebh,006h
l45ae:
	db 0c7h,006h,03ah,036h,016h,000h
l45b4:
	db 0b8h,000h,000h,0c3h
#endasm
