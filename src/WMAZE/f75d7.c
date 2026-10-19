extern int party_x;
extern int party_y;
set_map_offset(p4, p6)
{
	party_x = p4;
	party_y = p6;
	move_to_maze_cell_m(20384, 20382, 20380, party_x, party_y);
}
