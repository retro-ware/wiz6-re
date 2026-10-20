extern char *g4fa8;
extern int g4ee0[];
extern int party_facing;
/* Clear a found maze event and play its sound. */
clear_maze_event(p4)
{
	g4ee0[party_facing] = 0;
	f5011(((g4fa8 + (p4 << 1)) + 576), (party_facing << 1));
	play_sound(4);
}
