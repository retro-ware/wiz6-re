#asm
	public f1c3b_
	extrn f1c59_:near
	extrn f2183_:near
	extrn f3556_:near
f1c3b_:
	db 055h,08bh,0ech,083h,0ech,002h,01eh,006h,056h,057h
	call f1c59_
	call f2183_
	db 0bbh,079h,035h
	call f3556_
	db 05fh,05eh,007h,01fh,08bh,0e5h,05dh,0c3h
#endasm
