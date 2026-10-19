extern int party_cell_x;
extern int party_cell_y;
extern int party_facing;
extern int party_level;
extern int party_x;
extern int party_y;
try_step(p4)
{
	int l2;
	if ((l2 = get_wall_in_direction(party_facing, party_level, party_cell_x, party_cell_y, party_x, party_y)) >= 2) goto L77e5;
	can_enter_cell(party_facing, p4);
	return;
L77e5:
	return 1;
}
