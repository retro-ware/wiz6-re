extern int g4f8c;
extern int g4f8e;
extern int g4f90;
extern int g4f92;
extern int g4f94;
extern int g4f96;
extern int g5034;
extern int g503a;
extern int party_cell_x;
extern int party_cell_y;
extern int party_facing;
extern int party_level;
extern int party_x;
extern int party_y;
restore_position()
{
	party_x = g4f96;
	party_y = g4f94;
	party_cell_x = g4f92;
	party_cell_y = g4f90;
	party_level = g4f8e;
	party_facing = g4f8c;
	move_to_maze_cell_m(20384, 20382, 20380, party_x, party_y);
	g503a = 2053;
	g5034 = 0;
}
