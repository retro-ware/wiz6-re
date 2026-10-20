/* Occasionally wait and play a random ambient sound. */
#asm
	public play_random_drip_
	extrn delay_tick_:near
	extrn play_sound_:near
	extrn random_:near
play_random_drip_:
	db 0b8h,028h,000h,050h
	call random_
	db 059h,03dh,000h,000h,07eh,008h
	call delay_tick_
	call delay_tick_
	db 0ebh,010h
l469d:
	db 0b8h,003h,000h,050h
	call random_
	db 059h,005h,00ah,000h,050h
	call play_sound_
	db 059h
l46ad:
	db 0c3h
#endasm
