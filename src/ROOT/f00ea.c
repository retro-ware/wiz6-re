#asm
	public f00ea_
	extrn lmalloc_:near
f00ea_:
	db 055h,08bh,0ech,08bh,046h,004h,02bh,0d2h,052h,050h
	call lmalloc_
	db 083h,0c4h,004h,08bh,0e5h,05dh,0c3h
#endasm
