/* Detect display, load its .drv driver, allocate buffers and detect the mouse. */
#asm
	public init_video_
	extrn alloc_video_buffers_:near
	extrn calibrate_delay_:near
	extrn detect_mouse_:near
	extrn detect_video_adapter_:near
	extrn load_video_driver_:near
	extrn seed_random_:near
init_video_:
	db 055h,08bh,0ech,083h,0ech,004h,01eh,006h,056h,057h
	call seed_random_
	call calibrate_delay_
	call detect_video_adapter_
	call alloc_video_buffers_
	call detect_mouse_
	call load_video_driver_
	db 08bh,046h,0feh,05fh,05eh,007h,01fh,08bh,0e5h,05dh,0c3h
#endasm
