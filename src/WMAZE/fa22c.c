extern char *g4fa8;
extern char *maze_data;
extern int cell_event_index;
extern int g5034;
extern int g5232;
extern int game_state_arg;
extern int party_cell_x;
extern int party_cell_y;
extern int party_level;
extern int party_x;
teleport_party()
{
	int l2;
	int l4;
	l2 = *(int *)((g4fa8 + (cell_event_index << 1)) + 576);
	set_event_flags(extract_bits(l2, 10, 2));
	party_cell_x = extract_bits(l2, 0, 3);
	party_cell_y = extract_bits(l2, 3, 3);
	party_level = extract_bits(l2, 6, 4);
	if ((l4 = (unsigned char)(g4fa8 + cell_event_index)[1584]) != 99) goto La2af;
	l4 = -1;
La2af:
	party_x = ((unsigned char)(maze_data + party_level)[480] + party_cell_x);
#asm
	db 08ah,080h,0ech,001h,02ah,0e4h,003h,006h,09eh,04fh,0a3h,0a2h,04fh,08bh,01eh,0a8h
	db 04fh,08ah,080h,0c0h,006h,02ah,0e4h,0a3h,0e8h,04eh
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
