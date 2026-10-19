extern int g4f8e;
extern int g4f90;
extern int g4f92;
extern int g4f94;
extern int g4f96;
extern int party_cell_x;
extern int party_cell_y;
extern int party_level;
extern int party_x;
extern int party_y;
show_prev_position()
{
	int l2;
	int l4;
	int l6;
	int l8;
	int l10;
	l2 = party_x;
	l4 = party_y;
	l6 = party_cell_x;
	l8 = party_cell_y;
	l10 = party_level;
	party_x = g4f96;
	party_y = g4f94;
	party_cell_x = g4f92;
	party_cell_y = g4f90;
	party_level = g4f8e;
	redraw_maze_view();
	wait_animating_m(2);
	party_x = l2;
	party_y = l4;
	party_cell_x = l6;
	party_cell_y = l8;
	party_level = l10;
}
