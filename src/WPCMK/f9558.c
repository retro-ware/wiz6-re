extern char roster_slot_used[];
extern int roster_slot_count;
find_free_roster_slot()
{
	register int rsi;
	rsi = 0;
	goto L956a;
L955e:
	if (roster_slot_used[rsi]) goto L9569;
	return rsi;
L9569:
	rsi++;
L956a:
	if (rsi < roster_slot_count) goto L955e;
	return -1;
}
