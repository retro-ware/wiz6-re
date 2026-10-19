#asm
	public free_video_buffers_
	extrn free_dos_blocks_:near
free_video_buffers_:
	db 006h,056h,08dh,036h,086h,01bh
	call free_dos_blocks_
	db 05eh,007h,0c3h
#endasm
