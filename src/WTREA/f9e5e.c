#asm
	extrn get_bitfield_:near
#endasm
extern int game_state_arg;
get_south_wall_t(p4, p6, p8, p10, p12)
{
	if (!move_to_view_cell(&p8, &p10, &p12, (p4 - 1), p6)) goto L9e99;
	if (game_state_arg == 10) goto L9e92;
	if (game_state_arg == 12) goto L9e92;
#asm
	db 0b8h,002h,000h,0ebh,003h
#endasm
L9e92:
	;
#asm
l9e92:
	db 0b8h,000h,000h
#endasm
	return;
L9e99:
	;
#asm
l9e99:
	db 0b8h,002h,000h,050h,08bh,046h,00ch,0b9h,006h,000h,0d3h,0e0h,08bh,04eh,00ah,0d1h
	db 0e1h,0d1h,0e1h,0d1h,0e1h,003h,0c1h,003h,046h,008h,050h,0a1h,0aah,04fh,005h,020h
	db 001h,050h
	call get_bitfield_
	db 083h,0c4h,006h
#endasm
	return;
}
