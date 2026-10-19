#asm
	public raise_window_
	extrn link_window_:near
	extrn unlink_window_:near
raise_window_:
	db 055h,08bh,0ech,006h,056h,08bh,076h,004h,056h
	call unlink_window_
	call link_window_
	db 083h,0c4h,002h,05eh,007h,08bh,0e5h,05dh,0c3h
#endasm
