extern char *g4f84;
extern char *g4fa8;
extern int cell_event_index;
extern int g4338;
extern int g4354;
extern int game_state;
encounter_event()
{
	if (extract_bits(*(int *)((g4fa8 + (cell_event_index << 1)) + 576), 3, 1) == 1) {
	*(int *)g4f84 = f467b((unsigned char)(g4fa8 + cell_event_index)[1584]);
	} else {
	*(int *)g4f84 = (unsigned char)(g4fa8 + cell_event_index)[1584];
	}
	g4338 = 1;
	g4354 = 1;
	game_state = 10;
	set_event_flags(extract_bits(*(int *)((g4fa8 + (cell_event_index << 1)) + 576), 4, 2));
	cell_event_index++;
}
