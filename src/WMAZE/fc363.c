extern char *g4fa8;
extern int cell_event_index;
fc363()
{
	int l2;
	l2 = test_bit(13464, *(int *)(g4fa8 + (cell_event_index << 1)));
	swap_level_flags(*(int *)((g4fa8 + (cell_event_index << 1)) + 288), (unsigned char)(g4fa8 + cell_event_index)[1584], l2);
	set_event_flags(extract_bits(*(int *)((g4fa8 + (cell_event_index << 1)) + 576), 0, 2));
}
