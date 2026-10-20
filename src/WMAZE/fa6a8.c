extern char *g4fa8;
extern char *maze_data;
extern int cell_event_index;
change_walls_event()
{
	int l2;
	int l4;
	int l6;
	int l8;
	int l10;
	int l12;
	int l14;
	int l16;
	int l18;
	l4 = *(int *)((g4fa8 + (cell_event_index << 1)) + 576);
	l12 = extract_bits(l4, 0, 3);
	l14 = extract_bits(l4, 3, 3);
	l10 = extract_bits(l4, 6, 4);
	l16 = extract_bits(l4, 10, 1);
	l18 = extract_bits(l4, 11, 2);
	l6 = ((unsigned char)(maze_data + l10)[480] + l12);
	l8 = ((unsigned char)(maze_data + l10)[492] + l14);
	l4 = (unsigned char)(g4fa8 + cell_event_index)[1584];
	l2 = (((l10 << 6) + (l14 << 3)) + l12);
	set_bitfield((maze_data + 96), l2, 2, fa68e(l4, 0));
	set_bitfield((maze_data + 288), l2, 2, fa68e(l4, 1));
	if (!move_to_maze_cell_m(&l12, &l14, &l10, l6, (l8 - 1))) {
	l2 = (((l10 << 6) + (l14 << 3)) + l12);
	set_bitfield((maze_data + 96), l2, 2, fa68e(l4, 2));
	}
	if (!move_to_maze_cell_m(&l12, &l14, &l10, (l6 - 1), l8)) {
	l2 = (((l10 << 6) + (l14 << 3)) + l12);
	set_bitfield((maze_data + 288), l2, 2, fa68e(l4, 3));
	}
	if (l16 == 1) {
	redraw_maze_view();
	}
	if (*(int *)(g4fa8 + (cell_event_index << 1)) > 0) {
	play_sound(*(int *)(g4fa8 + (cell_event_index << 1)));
	}
	set_event_flags(l18);
}
