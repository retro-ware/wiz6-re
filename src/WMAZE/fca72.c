extern char *g4fa8;
extern char *maze_data;
extern int cell_event_index;
extern int party_cell_x;
extern int party_cell_y;
extern int party_facing;
extern int party_level;
fca72(p4)
{
	int l2;
	int l4;
	int l6;
	int l8;
	int l10;
	int l12;
	int l14;
	l2 = *(int *)((g4fa8 + (cell_event_index << 1)) + 576);
	l10 = party_cell_x;
	l12 = party_cell_y;
	l8 = party_level;
	l4 = ((unsigned char)(maze_data + l8)[480] + l10);
	l6 = ((unsigned char)(maze_data + l8)[492] + l12);
	l14 = (((l8 << 6) + (l12 << 3)) + l10);
	switch (party_facing) {
case 0:
	set_bitfield((maze_data + 96), l14, 2, 1);
	goto Lcbce;
case 1:
	set_bitfield((maze_data + 288), l14, 2, 1);
	goto Lcbce;
case 2:
	if (move_to_maze_cell_m(&l10, &l12, &l8, l4, (l6 - 1))) goto Lcb5e;
	l14 = (((l8 << 6) + (l12 << 3)) + l10);
	set_bitfield((maze_data + 96), l14, 2, 1);
Lcb5e:
	goto Lcbce;
case 3:
	if (move_to_maze_cell_m(&l10, &l12, &l8, (l4 - 1), l6)) goto Lcbaf;
	l14 = (((l8 << 6) + (l12 << 3)) + l10);
	set_bitfield((maze_data + 288), l14, 2, 1);
Lcbaf:
	goto Lcbce;
	}
Lcbce:
	set_door_feature(l4, l6, 0, 0, 1);
	redraw_maze_view();
	play_sound(4);
	fca32(((g4fa8 + (p4 << 1)) + 576), ((party_facing << 1) + 8));
}
