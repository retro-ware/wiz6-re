#asm
	extrn get_bitfield_:near
#endasm
extern int game_state_arg;
f7c41(p4, p6, p8, p10, p12)
{
	if (!move_to_maze_cell_m(&p8, &p10, &p12, p4, (p6 - 1))) goto L7c7c;
	if (game_state_arg == 10) goto L7c75;
	if (game_state_arg == 12) goto L7c75;
#asm
	db 0b8h,002h,000h,0ebh,003h
#endasm
L7c75:
	;
#asm
l7c75:
	db 0b8h,000h,000h
#endasm
	return;
L7c7c:
	;
#asm
l7c7c:
	db 0b8h,002h,000h,050h,08bh,046h,00ch,0b9h,006h,000h,0d3h,0e0h,08bh,04eh,00ah,0d1h
	db 0e1h,0d1h,0e1h,0d1h,0e1h,003h,0c1h,003h,046h,008h,050h,0a1h,0aah,04fh,005h,060h
	db 000h,050h
	call get_bitfield_
	db 083h,0c4h,006h
#endasm
	return;
}
