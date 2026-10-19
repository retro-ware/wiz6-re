/* Stop any playing sound. */
#asm
	public stop_sound_
	extrn sound_driver_:near
stop_sound_:
	db 055h,08bh,0ech,01eh,006h,056h,057h,033h,0c0h,050h,050h,050h,050h,050h,050h,050h
	call sound_driver_
	db 083h,0c4h,00eh,033h,0c0h,02eh,0a0h,060h,017h,05fh,05eh,007h,01fh,08bh,0e5h,05dh
	db 0c3h
#endasm
