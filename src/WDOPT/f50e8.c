extern char *g4fa8;
extern int party_cell_x;
extern int party_cell_y;
extern int party_facing;
extern int party_level;
/* Find a lock event at the party position and facing; -1 if none. */
find_lock_event()
{
	int ev;
	ev = (unsigned char)(g4fa8 + party_level)[1728];
L5100:
	if ((ev = find_maze_event(party_cell_x, party_cell_y, party_level, ev)) == -1) goto L5176;
	if (((g4fa8 + ev)[864] != 7) || ((extract_bits(*(int *)((g4fa8 + (ev << 1)) + 576), (party_facing << 1), 2) != 1) && (extract_bits(*(int *)((g4fa8 + (ev << 1)) + 576), (party_facing << 1), 2) != 2))) goto L5171;
	return ev;
L5171:
	ev++;
	goto L5100;
L5176:
	return -1;
}
