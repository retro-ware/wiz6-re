#asm
	public f4655_
	extrn delay_tick_:near
	extrn play_sound_:near
	extrn random_:near
f4655_:
	db 0b8h,028h,000h,050h
	call random_
	db 059h,03dh,000h,000h,07eh,008h
	call delay_tick_
	call delay_tick_
	db 0ebh,010h
l466a:
	db 0b8h,003h,000h,050h
	call random_
	db 059h,005h,00ah,000h,050h
	call play_sound_
	db 059h
l467a:
	db 0c3h
#endasm
