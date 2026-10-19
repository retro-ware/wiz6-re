extern char *g4fa8;
extern int game_state_arg;
/* Return the next maze event index from start at map position x, y, level, or -1. */
find_maze_event(x, y, level, start)
{
	register int ev;
	ev = start;
	goto L81ee;
L8193:
	if ((unsigned char)(g4fa8 + ev)[1296] == level) goto L81aa;
	return -1;
L81aa:
	if (((((unsigned char)(g4fa8 + ev)[1008] != x) || ((unsigned char)(g4fa8 + ev)[1152] != y)) || ((unsigned)(g4fa8 + ev)[864] <= 0)) || (test_bit(((game_state_arg * 10) + 20204), (unsigned char)(g4fa8 + ev)[1440]))) goto L81ed;
	return ev;
L81ed:
	ev++;
L81ee:
	if (ev < 144) goto L8193;
	return -1;
}
