#asm
	extrn f7c41_:near
	extrn f7ca6_:near
	extrn get_bitfield_:near
	extrn test_bit_:near
#endasm
extern int game_state_arg;
extern int maze_data;
extern int party_facing;
get_right_wall_m(p4, p6, p8, p10, p12, p14)
{
	int l2;
	int l4;
	register int rsi;
	register int rdi;
	if ((!p14) || (!step_relative_m(&p4, &p6, &p8, &p10, &p12, p14, 0))) goto L8381;
	if ((game_state_arg != 10) && (game_state_arg != 12)) goto L837c;
	return 0;
L837c:
	return 2;
L8381:
	;
#asm
l8381:
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
	if ((game_state_arg == 12) && (p12 <= 8)) goto L83c5;
	return 0;
L83c5:
	goto L83db;
	}
L83db:
	rdi = 0;
#asm
	db 0a1h,09ah,04fh,0ebh,05eh
#endasm
#asm
l83e3:
	db 0b8h,002h,000h,050h,056h,0a1h,0aah,04fh,005h,020h,001h,050h
	call get_bitfield_
	db 083h,0c4h,006h,08bh,0f8h,0ebh,05ch
#endasm
#asm
l83f9:
	db 0ffh,076h,00ch,0ffh,076h,00ah,0ffh,076h,008h,0ffh,076h,006h,0ffh,076h,004h
	call f7c41_
	db 083h,0c4h,00ah,08bh,0f8h,0ebh,043h
#endasm
#asm
l8412:
	db 0ffh,076h,00ch,0ffh,076h,00ah,0ffh,076h,008h,0ffh,076h,006h,0ffh,076h,004h
	call f7ca6_
	db 083h,0c4h,00ah,08bh,0f8h,0ebh,02ah
#endasm
#asm
l842b:
	db 0b8h,002h,000h,050h,056h,0a1h,0aah,04fh,005h,060h,000h,050h
	call get_bitfield_
	db 083h,0c4h,006h,08bh,0f8h,0ebh,014h
#endasm
L8441:
	;
#asm
l8441:
	db 03dh,000h,000h,074h,09dh,03dh,001h,000h,074h,0aeh,03dh,002h,000h,074h,0c2h,03dh
	db 003h,000h,074h,0d6h
#endasm
L8455:
	l2 = get_bitfield((maze_data + 504), rsi, 4);
	l4 = ((get_bitfield((maze_data + 888), rsi, 2) + 3) % 4);
	if (l4 != party_facing) goto L84ec;
#asm
	db 08bh,046h,0feh,0ebh,04ch
#endasm
	rdi = 5;
	goto L84ec;
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
	db 0ebh,027h,0ech,084h,093h,084h,098h,084h,09dh,084h,0a2h,084h,0ech,084h,0ech,084h
	db 0a7h,084h,0ach,084h,0b1h,084h,0b6h,084h,0bbh,084h,0c0h,084h
l84df:
	db 03dh,00dh,000h,073h,008h,093h,0d1h,0e3h,02eh,0ffh,0a7h,0c5h,084h
#endasm
L84ec:
	return rdi;
}
