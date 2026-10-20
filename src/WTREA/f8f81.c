extern char *g4fa8;
extern int cell_event_index;
extern int game_state_arg;
mark_chest_opened()
{
	int l2;
	int l4;
	l2 = *(int *)((g4fa8 + (cell_event_index << 1)) + 576);
	if (*(int *)((g4fa8 + (cell_event_index << 1)) + 288) > 0) {
	show_message_text(*(int *)((g4fa8 + (cell_event_index << 1)) + 288), 0);
	}
	l4 = extract_bits(l2, 0, 8);
	set_bit(((game_state_arg * 10) + 20204), l4, 0);
	if (extract_bits(l2, 11, 1) == 1) {
	set_bit(((game_state_arg * 10) + 13304), l4, 0);
	}
	if ((l4 = extract_bits(l2, 9, 2)) <= 0) goto L9088;
	set_bit(((game_state_arg * 10) + 20204), (unsigned char)(g4fa8 + cell_event_index)[1440], 1);
	if (l4 <= 1) goto L9088;
	set_bit(((game_state_arg * 10) + 13304), (unsigned char)(g4fa8 + cell_event_index)[1440], 1);
L9088:
	;
}
