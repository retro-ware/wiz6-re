#asm
	extrn f7652_:near
	extrn f76b7_:near
	extrn get_bitfield_:near
	extrn test_bit_:near
#endasm
extern int game_state_arg;
extern int maze_data;
extern int party_facing;
/* Return the wall type on the left of the cell. */
get_left_wall(x, y, cx, cy, level, side)
{
	int l2;
	int l4;
	register int cell;
	register int wall;
	if ((!side) || (!step_in_facing(&x, &y, &cx, &cy, &level, side, 0))) goto L7bd5;
	if ((game_state_arg != 10) && (game_state_arg != 12)) goto L7bd0;
	return 0;
L7bd0:
	return 2;
L7bd5:
	;
#asm
l7bd5:
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
	if ((game_state_arg == 12) && (level <= 8)) goto L7c19;
	return 0;
L7c19:
	goto L7c2f;
	}
L7c2f:
	wall = 0;
#asm
	db 0a1h,09ah,04fh,0ebh,05eh
#endasm
#asm
l7c37:
	db 0ffh,076h,00ch,0ffh,076h,00ah,0ffh,076h,008h,0ffh,076h,006h,0ffh,076h,004h
	call f76b7_
	db 083h,0c4h,00ah,08bh,0f8h,0ebh,059h
#endasm
#asm
l7c50:
	db 0b8h,002h,000h,050h,056h,0a1h,0aah,04fh,005h,060h,000h,050h
	call get_bitfield_
	db 083h,0c4h,006h,08bh,0f8h,0ebh,043h
#endasm
#asm
l7c66:
	db 0b8h,002h,000h,050h,056h,0a1h,0aah,04fh,005h,020h,001h,050h
	call get_bitfield_
	db 083h,0c4h,006h,08bh,0f8h,0ebh,02dh
#endasm
#asm
l7c7c:
	db 0ffh,076h,00ch,0ffh,076h,00ah,0ffh,076h,008h,0ffh,076h,006h,0ffh,076h,004h
	call f7652_
	db 083h,0c4h,00ah,08bh,0f8h,0ebh,014h
#endasm
L7c95:
	;
#asm
l7c95:
	db 03dh,000h,000h,074h,09dh,03dh,001h,000h,074h,0b1h,03dh,002h,000h,074h,0c2h,03dh
	db 003h,000h,074h,0d3h
#endasm
L7ca9:
	l2 = get_bitfield((maze_data + 504), cell, 4);
	l4 = ((get_bitfield((maze_data + 888), cell, 2) + 1) % 4);
	if (l4 != party_facing) goto L7d3e;
#asm
	db 08bh,046h,0feh,0ebh,04ch
#endasm
	wall = 5;
	goto L7d3e;
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
	db 0ebh,027h,03eh,07dh,0e5h,07ch,0eah,07ch,0efh,07ch,0f4h,07ch,03eh,07dh,03eh,07dh
	db 0f9h,07ch,0feh,07ch,003h,07dh,008h,07dh,00dh,07dh,012h,07dh
l7d31:
	db 03dh,00dh,000h,073h,008h,093h,0d1h,0e3h,02eh,0ffh,0a7h,017h,07dh
#endasm
L7d3e:
	return wall;
}
