#asm
	extrn get_bitfield_:near
	extrn test_bit_:near
#endasm
extern char *g4fa8;
extern int cell_event_index;
extern int game_state_arg;
extern int maze_data;
extern int party_level;
extern int party_x;
extern int party_y;
can_enter_cell(p4)
{
	int l2;
	int l4;
	char x4[2];
	int l8;
	int l10;
	register int rsi;
#asm
	db 0a1h,09ch,04fh,0b9h,006h,000h,0d3h,0e0h,08bh,00eh,09eh,04fh,0d1h,0e1h,0d1h,0e1h
	db 0d1h,0e1h,003h,0c1h,08bh,0f0h,003h,006h,0a0h,04fh,08bh,0f0h,0b8h,004h,000h,050h
	db 056h,0a1h,0aah,04fh,005h,0f8h,001h,050h
	call get_bitfield_
	db 083h,0c4h,006h,089h,046h,0fah,03dh,001h,000h,074h,005h,03dh,002h,000h,075h,020h
#endasm
L7644:
	if (get_bitfield((maze_data + 888), rsi, 2) != p4) goto L7664;
	return 1;
L7664:
	l8 = party_x;
	l10 = party_y;
	step_position(p4, 1);
	if (!move_to_maze_cell_m(20384, 20382, 20380, party_x, party_y)) goto L76ac;
	set_map_offset(l8, l10);
	return 1;
L76ac:
	;
#asm
l76ac:
	db 0a1h,09ch,04fh,0b9h,006h,000h,0d3h,0e0h,08bh,00eh,09eh,04fh,0d1h,0e1h,0d1h,0e1h
	db 0d1h,0e1h,003h,0c1h,08bh,0f0h,003h,006h,0a0h,04fh,08bh,0f0h,056h,0ffh,076h,006h
	call test_bit_
	db 083h,0c4h,004h,03dh,001h,000h,074h,010h
#endasm
	if (test_bit(19976, rsi) != 1) goto L76f9;
L76e7:
	set_map_offset(l8, l10);
	return 1;
L76f9:
	l2 = test_bit((maze_data + 1082), rsi);
	l4 = test_bit((maze_data + 1178), rsi);
	if (l2 != 1) goto L776f;
	switch (game_state_arg) {
case 0:
case 1:
case 2:
case 3:
case 4:
case 6:
case 8:
case 10:
case 12:
	if ((game_state_arg == 12) && (party_level >= 9)) goto L7746;
	set_map_offset(l8, l10);
	return 1;
L7746:
	goto L776f;
	}
L776f:
	if (l4 != 1) goto L7791;
	switch (game_state_arg) {
case 2:
	set_map_offset(l8, l10);
	return 1;
	}
L7791:
	cell_event_index = (unsigned char)(g4fa8 + party_level)[1728];
	return 0;
}
