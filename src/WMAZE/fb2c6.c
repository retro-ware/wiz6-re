extern int maze_data;
set_door_feature(p4, p6, p8, p10, p12)
{
	int l2;
	int l4;
	int l6;
	int l8;
	if (move_to_maze_cell_m(&l4, &l6, &l8, p4, p6)) goto Lb3a8;
	l2 = (((l8 << 6) + (l6 << 3)) + l4);
	if (p10) goto Lb35b;
	if ((p12 != 1) && (get_bitfield((maze_data + 504), l2, 4) != 7)) goto Lb359;
	set_bitfield((maze_data + 504), l2, 4, 0);
	set_bitfield((maze_data + 888), l2, 2, 0);
Lb359:
	goto Lb3a8;
Lb35b:
	if ((p12 != 1) && (get_bitfield((maze_data + 504), l2, 4))) goto Lb3a8;
	set_bitfield((maze_data + 504), l2, 4, 7);
	set_bitfield((maze_data + 888), l2, 2, p8);
Lb3a8:
	;
}
