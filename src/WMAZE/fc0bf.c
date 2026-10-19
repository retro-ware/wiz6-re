extern char *g4fa8;
extern char pc_item_count[];
extern char pc_item_flags[];
extern int cell_event_index;
extern int party_count;
extern int pc_item_id[];
check_party_item_event()
{
	int l2;
	int l4;
	int l6;
	int l8;
	l8 = 1;
	l6 = *(int *)(g4fa8 + (cell_event_index << 1));
	for (l2 = 0; l2 < party_count; l2++) {
	l4 = 0;
	goto Lc118;
Lc0e9:
	if ((*(int *)((char *)pc_item_id + ((432 * l2) + (l4 << 3))) != l6) || (!((unsigned char)pc_item_flags[((432 * l2) + (l4 << 3))] & 1))) goto Lc115;
	l8 = 0;
Lc115:
	l4++;
Lc118:
	if ((unsigned char)pc_item_count[(432 * l2)] > l4) goto Lc0e9;
	}
	swap_level_flags(*(int *)((g4fa8 + (cell_event_index << 1)) + 288), (unsigned char)(g4fa8 + cell_event_index)[1584], l8);
	if (l8) goto Lc17d;
	set_event_flags(extract_bits(*(int *)((g4fa8 + (cell_event_index << 1)) + 576), 0, 2));
Lc17d:
	;
}
