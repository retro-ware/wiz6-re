#asm
	public play_ambient_sound_
	extrn delay_tick_:near
	extrn play_sound_:near
	extrn random_:near
play_ambient_sound_:
	db 0b8h,028h,000h,050h
	call random_
	db 059h,03dh,000h,000h,07eh,008h
	call delay_tick_
	call delay_tick_
	db 0ebh,010h
l45cd:
	db 0b8h,003h,000h,050h
	call random_
	db 059h,005h,00ah,000h,050h
	call play_sound_
	db 059h
l45dd:
	db 0c3h
#endasm
