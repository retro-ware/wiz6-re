#asm
	public shutdown_video_
	extrn f1c59_:near
	extrn free_sounds_:near
	extrn free_video_buffers_:near
shutdown_video_:
	db 055h,08bh,0ech,083h,0ech,002h,01eh,006h,056h,057h
	call f1c59_
	call free_video_buffers_
	db 0bbh,079h,035h
	call free_sounds_
	db 05fh,05eh,007h,01fh,08bh,0e5h,05dh,0c3h
#endasm
