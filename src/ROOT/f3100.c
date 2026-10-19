#asm
	public f3100_
	extrn f2f76_:near
	extrn f303e_:near
f3100_:
	db 055h,08bh,0ech,006h,056h,08bh,076h,004h,056h
	call f303e_
	call f2f76_
	db 083h,0c4h,002h,05eh,007h,08bh,0e5h,05dh,0c3h
#endasm
