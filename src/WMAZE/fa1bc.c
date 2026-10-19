extern char *g4fa8;
extern int cell_event_index;
extern int game_state_arg;
set_event_flags(p4)
{
	if ((p4 <= 0) || ((unsigned)(g4fa8 + cell_event_index)[1440] <= 0)) goto La227;
	set_bit(((game_state_arg * 10) + 20204), (unsigned char)(g4fa8 + cell_event_index)[1440], 1);
	if (p4 <= 1) goto La227;
	set_bit(((game_state_arg * 10) + 13304), (unsigned char)(g4fa8 + cell_event_index)[1440], 1);
La227:
	;
}
