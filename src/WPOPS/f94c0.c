#asm
	extrn get_bitfield_:near
	extrn get_south_wall_:near
	extrn get_west_wall_:near
	extrn test_bit_:near
#endasm
extern int game_state_arg;
extern int maze_data;
extern int party_facing;
get_right_wall(x, y, cx, cy, level, side)
{
	int l2;
	int l4;
	register int cell;
	register int wall;
	if ((!side) || (!step_relative(&x, &y, &cx, &cy, &level, side, 0))) goto L950f;
	if ((game_state_arg != 10) && (game_state_arg != 12)) goto L950a;
	return 0;
L950a:
	return 2;
L950f:
	;
#asm
l950f:
	db 08bh,046h,00ch,0b9h,006h,000h,0d3h,0e0h,08bh,04eh,00ah,0d1h,0e1h,0d1h,0e1h,0d1h
	db 0e1h,003h,0c1h,08bh,0f0h,003h,046h,008h,08bh,0f0h,056h,0a1h,0aah,04fh,005h,03ah
	db 004h,050h
	call test_bit_
	db 083h,0c4h,004h,03dh,001h,000h,075h,02dh
#endasm
	switch (game_state_arg) {
case 0:
case 4:
case 5:
case 12:
	if ((game_state_arg == 12) && (level <= 8)) goto L9553;
	return 0;
L9553:
	goto L9569;
	}
L9569:
	wall = 0;
#asm
	db 0a1h,09ah,04fh,0ebh,05eh
#endasm
#asm
l9571:
	db 0b8h,002h,000h,050h,056h,0a1h,0aah,04fh,005h,020h,001h,050h
	call get_bitfield_
	db 083h,0c4h,006h,08bh,0f8h,0ebh,05ch
#endasm
#asm
l9587:
	db 0ffh,076h,00ch,0ffh,076h,00ah,0ffh,076h,008h,0ffh,076h,006h,0ffh,076h,004h
	call get_west_wall_
	db 083h,0c4h,00ah,08bh,0f8h,0ebh,043h
#endasm
#asm
l95a0:
	db 0ffh,076h,00ch,0ffh,076h,00ah,0ffh,076h,008h,0ffh,076h,006h,0ffh,076h,004h
	call get_south_wall_
	db 083h,0c4h,00ah,08bh,0f8h,0ebh,02ah
#endasm
#asm
l95b9:
	db 0b8h,002h,000h,050h,056h,0a1h,0aah,04fh,005h,060h,000h,050h
	call get_bitfield_
	db 083h,0c4h,006h,08bh,0f8h,0ebh,014h
#endasm
L95cf:
	;
#asm
l95cf:
	db 03dh,000h,000h,074h,09dh,03dh,001h,000h,074h,0aeh,03dh,002h,000h,074h,0c2h,03dh
	db 003h,000h,074h,0d6h
#endasm
L95e3:
	l2 = get_bitfield((maze_data + 504), cell, 4);
	l4 = ((get_bitfield((maze_data + 888), cell, 2) + 3) % 4);
	if (l4 != party_facing) goto L967a;
#asm
	db 08bh,046h,0feh,0ebh,04ch
#endasm
	wall = 5;
	goto L967a;
	wall = 6;
#asm
	db 0ebh,04fh
#endasm
	wall = 8;
#asm
	db 0ebh,04ah
#endasm
	wall = 9;
#asm
	db 0ebh,045h
#endasm
	wall = 4;
#asm
	db 0ebh,040h
#endasm
	wall = 7;
#asm
	db 0ebh,03bh
#endasm
	wall = 10;
#asm
	db 0ebh,036h
#endasm
	wall = 11;
#asm
	db 0ebh,031h
#endasm
	wall = 12;
#asm
	db 0ebh,02ch
#endasm
	wall = 13;
#asm
	db 0ebh,027h,07ah,096h,021h,096h,026h,096h,02bh,096h,030h,096h,07ah,096h,07ah,096h
	db 035h,096h,03ah,096h,03fh,096h,044h,096h,049h,096h,04eh,096h
l966d:
	db 03dh,00dh,000h,073h,008h,093h,0d1h,0e3h,02eh,0ffh,0a7h,053h,096h
#endasm
L967a:
	return wall;
}
