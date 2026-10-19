#asm
	extrn copy_far_:near
#endasm
extern int game_state_arg;
save_level_flags()
{
	movmem(((game_state_arg * 10) + 20204), ((game_state_arg * 10) + 13304), 10);
#asm
	db 0ffh,036h,004h,033h,0a1h,03ch,036h,0d1h,0e0h,0d1h,0e0h,08bh,0d8h,0ffh,0b7h,0d4h
	db 007h,0ffh,0b7h,0d2h,007h,0a1h,0aah,04fh,08ch,0dah,052h,050h
	call copy_far_
	db 083h,0c4h,00ah,0ffh,036h,006h,033h,0a1h,03ch,036h,0d1h,0e0h,0d1h,0e0h,08bh,0d8h
	db 0ffh,0b7h,00ch,008h,0ffh,0b7h,00ah,008h,0a1h,0a8h,04fh,08ch,0dah,052h,050h
	call copy_far_
	db 083h,0c4h,00ah
#endasm
}
