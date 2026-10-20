extern char *g4fa8;
extern int cell_event_index;
extern int g4ee0[];
fa5cd()
{
	int l2;
	int l4;
	int l6;
	if (*(int *)(g4fa8 + (cell_event_index << 1)) > 0) {
	show_message_text_m(*(int *)(g4fa8 + (cell_event_index << 1)), 0);
	}
	l4 = 0;
	l2 = 0;
La5fa:
	g4ee0[l2] = extract_bits(*(int *)((g4fa8 + (cell_event_index << 1)) + 576), (l2 << 1), 2);
	if (extract_bits(*(int *)((g4fa8 + (cell_event_index << 1)) + 576), ((l2 << 1) + 8), 2) == 2) {
	l4 = 1;
	}
	l2++;
	if (l2 < 4) goto La5fa;
	if (l4) {
	check_secret_detect();
	}
	l6 = (unsigned char)(g4fa8 + cell_event_index)[1584];
	set_event_flags(extract_bits(l6, 5, 2));
}
