extern char *g4fa8;
extern int cell_event_index;
extern int g4f8a;
extern int party_facing;
fb123()
{
	int l2;
	l2 = *(int *)((g4fa8 + (cell_event_index << 1)) + 576);
	if (extract_bits(l2, 6, 1) != 1) goto Lb171;
	if ((g4f8a = extract_bits(l2, 4, 2)) == party_facing) goto Lb171;
	return;
Lb171:
	show_message_text_m(*(int *)(g4fa8 + (cell_event_index << 1)), extract_bits(*(int *)((g4fa8 + (cell_event_index << 1)) + 576), 2, 1));
	set_event_flags(extract_bits(*(int *)((g4fa8 + (cell_event_index << 1)) + 576), 0, 2));
	return;
}
