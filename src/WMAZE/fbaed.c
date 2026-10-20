extern char *g4fa8;
extern int cell_event_index;
extern int maze_data;
fbaed()
{
	int l2;
	int l4;
	int l6;
	int l8;
	int l10;
	l4 = *(int *)((g4fa8 + (cell_event_index << 1)) + 576);
	l6 = extract_bits(l4, 0, 3);
	l8 = extract_bits(l4, 3, 3);
	l10 = extract_bits(l4, 6, 4);
	l2 = (((l10 << 6) + (l8 << 3)) + l6);
	set_bitfield((maze_data + 504), l2, 4, *(int *)(g4fa8 + (cell_event_index << 1)));
	set_bitfield((maze_data + 888), l2, 2, (unsigned char)(g4fa8 + cell_event_index)[1584]);
	if (extract_bits(l4, 10, 1) == 1) {
	redraw_maze_view();
	}
	if (*(int *)((g4fa8 + (cell_event_index << 1)) + 288) > 0) {
	play_sound(*(int *)((g4fa8 + (cell_event_index << 1)) + 288));
	}
	set_event_flags(extract_bits(l4, 11, 2));
}
