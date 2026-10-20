#asm
	extrn get_bitfield_:near
	extrn get_south_wall_t_:near
	extrn get_west_wall_t_:near
	extrn test_bit_:near
#endasm
extern int game_state_arg;
extern int maze_data;
extern int party_facing;
get_left_wall_t(p4, p6, p8, p10, p12, p14)
{
	int l2;
	int l4;
	register int rsi;
	register int rdi;
	if ((!p14) || (!step_relative_t(&p4, &p6, &p8, &p10, &p12, p14, 0))) goto La37c;
	if ((game_state_arg != 10) && (game_state_arg != 12)) goto La377;
	return 0;
La377:
	return 2;
La37c:
	;
#asm
la37c:
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
	if ((game_state_arg == 12) && (p12 <= 8)) goto La3c0;
	return 0;
La3c0:
	goto La3d6;
	}
La3d6:
	rdi = 0;
#asm
	db 0a1h,09ah,04fh,0ebh,05eh
#endasm
#asm
la3de:
	db 0ffh,076h,00ch,0ffh,076h,00ah,0ffh,076h,008h,0ffh,076h,006h,0ffh,076h,004h
	call get_south_wall_t_
	db 083h,0c4h,00ah,08bh,0f8h,0ebh,059h
#endasm
#asm
la3f7:
	db 0b8h,002h,000h,050h,056h,0a1h,0aah,04fh,005h,060h,000h,050h
	call get_bitfield_
	db 083h,0c4h,006h,08bh,0f8h,0ebh,043h
#endasm
#asm
la40d:
	db 0b8h,002h,000h,050h,056h,0a1h,0aah,04fh,005h,020h,001h,050h
	call get_bitfield_
	db 083h,0c4h,006h,08bh,0f8h,0ebh,02dh
#endasm
#asm
la423:
	db 0ffh,076h,00ch,0ffh,076h,00ah,0ffh,076h,008h,0ffh,076h,006h,0ffh,076h,004h
	call get_west_wall_t_
	db 083h,0c4h,00ah,08bh,0f8h,0ebh,014h
#endasm
La43c:
	;
#asm
la43c:
	db 03dh,000h,000h,074h,09dh,03dh,001h,000h,074h,0b1h,03dh,002h,000h,074h,0c2h,03dh
	db 003h,000h,074h,0d3h
#endasm
La450:
	l2 = get_bitfield((maze_data + 504), rsi, 4);
	l4 = ((get_bitfield((maze_data + 888), rsi, 2) + 1) % 4);
	if (l4 != party_facing) goto La4e5;
#asm
	db 08bh,046h,0feh,0ebh,04ch
#endasm
	rdi = 5;
	goto La4e5;
	rdi = 6;
#asm
	db 0ebh,04fh
#endasm
	rdi = 8;
#asm
	db 0ebh,04ah
#endasm
	rdi = 9;
#asm
	db 0ebh,045h
#endasm
	rdi = 4;
#asm
	db 0ebh,040h
#endasm
	rdi = 7;
#asm
	db 0ebh,03bh
#endasm
	rdi = 10;
#asm
	db 0ebh,036h
#endasm
	rdi = 11;
#asm
	db 0ebh,031h
#endasm
	rdi = 12;
#asm
	db 0ebh,02ch
#endasm
	rdi = 13;
#asm
	db 0ebh,027h,0e5h,0a4h,08ch,0a4h,091h,0a4h,096h,0a4h,09bh,0a4h,0e5h,0a4h,0e5h,0a4h
	db 0a0h,0a4h,0a5h,0a4h,0aah,0a4h,0afh,0a4h,0b4h,0a4h,0b9h,0a4h
la4d8:
	db 03dh,00dh,000h,073h,008h,093h,0d1h,0e3h,02eh,0ffh,0a7h,0beh,0a4h
#endasm
La4e5:
	return rdi;
}
