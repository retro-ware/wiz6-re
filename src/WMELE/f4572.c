#asm
	public ovmain_
	extrn f70ce_:near
	extrn f724f_:near
	extrn f72d1_:near
ovmain_:
	db 0c7h,006h,00eh,050h,000h,000h,0c7h,006h,010h,050h,000h,000h,0c7h,006h,012h,050h
	db 000h,000h,083h,03eh,03ah,036h,00ah,075h,003h
	call f72d1_
l458e:
	db 083h,03eh,03ah,036h,00eh,075h,003h
	call f724f_
l4598:
	db 083h,03eh,03ah,036h,00bh,075h,003h
	call f70ce_
l45a2:
	db 0b8h,000h,000h,0c3h
#endasm
