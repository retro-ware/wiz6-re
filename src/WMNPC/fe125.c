#asm
	extrn fda34_:near
	extrn fda99_:near
	extrn get_bitfield_:near
	extrn test_bit_:near
#endasm
extern int game_state_arg;
extern int maze_data;
extern int party_facing;
fe125(p4, p6, p8, p10, p12, p14)
{
	int l2;
	int l4;
	register int rsi;
	register int rdi;
	if ((!p14) || (!fdafe(&p4, &p6, &p8, &p10, &p12, p14, 0))) goto Le174;
	if ((game_state_arg != 10) && (game_state_arg != 12)) goto Le16f;
	return 0;
Le16f:
	return 2;
Le174:
	;
#asm
le174:
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
	if ((game_state_arg == 12) && (p12 <= 8)) goto Le1b8;
	return 0;
Le1b8:
	goto Le1ce;
	}
Le1ce:
	rdi = 0;
#asm
	db 0a1h,09ah,04fh,0ebh,05eh
#endasm
#asm
le1d6:
	db 0b8h,002h,000h,050h,056h,0a1h,0aah,04fh,005h,020h,001h,050h
	call get_bitfield_
	db 083h,0c4h,006h,08bh,0f8h,0ebh,05ch
#endasm
#asm
le1ec:
	db 0ffh,076h,00ch,0ffh,076h,00ah,0ffh,076h,008h,0ffh,076h,006h,0ffh,076h,004h
	call fda34_
	db 083h,0c4h,00ah,08bh,0f8h,0ebh,043h
#endasm
#asm
le205:
	db 0ffh,076h,00ch,0ffh,076h,00ah,0ffh,076h,008h,0ffh,076h,006h,0ffh,076h,004h
	call fda99_
	db 083h,0c4h,00ah,08bh,0f8h,0ebh,02ah
#endasm
#asm
le21e:
	db 0b8h,002h,000h,050h,056h,0a1h,0aah,04fh,005h,060h,000h,050h
	call get_bitfield_
	db 083h,0c4h,006h,08bh,0f8h,0ebh,014h
#endasm
Le234:
	;
#asm
le234:
	db 03dh,000h,000h,074h,09dh,03dh,001h,000h,074h,0aeh,03dh,002h,000h,074h,0c2h,03dh
	db 003h,000h,074h,0d6h
#endasm
Le248:
	l2 = get_bitfield((maze_data + 504), rsi, 4);
	l4 = ((get_bitfield((maze_data + 888), rsi, 2) + 3) % 4);
	if (l4 != party_facing) goto Le2df;
#asm
	db 08bh,046h,0feh,0ebh,04ch
#endasm
	rdi = 5;
	goto Le2df;
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
	db 0ebh,027h,0dfh,0e2h,086h,0e2h,08bh,0e2h,090h,0e2h,095h,0e2h,0dfh,0e2h,0dfh,0e2h
	db 09ah,0e2h,09fh,0e2h,0a4h,0e2h,0a9h,0e2h,0aeh,0e2h,0b3h,0e2h
le2d2:
	db 03dh,00dh,000h,073h,008h,093h,0d1h,0e3h,02eh,0ffh,0a7h,0b8h,0e2h
#endasm
Le2df:
	return rdi;
}
