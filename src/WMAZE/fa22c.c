extern int g5034;
extern int g5232;
extern int game_state_arg;
extern int party_cell_x;
extern int party_cell_y;
extern int party_level;
teleport_party()
{
	int l2;
	int l4;
	register int rsi;
#asm
	db 0a1h,0e8h,04eh,0d1h,0e0h,08bh,0f0h,08bh,01eh,0a8h,04fh,08bh,080h,040h,002h,089h
	db 046h,0feh
#endasm
	set_event_flags(extract_bits(l2, 10, 2));
	party_cell_x = extract_bits(l2, 0, 3);
	party_cell_y = extract_bits(l2, 3, 3);
	party_level = extract_bits(l2, 6, 4);
#asm
	db 08bh,01eh,0a8h,04fh,08bh,036h,0e8h,04eh,08ah,080h,030h,006h,02ah,0e4h,089h,046h
	db 0fch,03dh,063h,000h,075h,005h
#endasm
	l4 = -1;
La2af:
	;
#asm
la2af:
	db 08bh,01eh,0aah,04fh,08bh,036h,09ch,04fh,08ah,080h,0e0h,001h,02ah,0e4h,003h,006h
	db 0a0h,04fh,0a3h,0a4h,04fh,08ah,080h,0ech,001h,02ah,0e4h,003h,006h,09eh,04fh,0a3h
	db 0a2h,04fh,08bh,01eh,0a8h,04fh,08ah,080h,0c0h,006h,02ah,0e4h,0a3h,0e8h,04eh
#endasm
	g5232 = 0;
	if (l4 != game_state_arg) goto La2f2;
	redraw_maze_view();
	goto La30c;
La2f2:
	save_level_flags();
	load_maze_level(l4);
	if (game_state_arg < 0) goto La306;
	redraw_maze_view();
La306:
	g5034 = 1;
La30c:
	;
}
