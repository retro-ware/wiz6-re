extern char roster_slot_used[];
extern int roster_slot_count;
is_name_taken(name)
{
	char x0[430];
	int rec;
	register int slot;
	slot = 0;
	goto L95b4;
L9582:
	if ((unsigned)roster_slot_used[slot] <= 0) goto L95b3;
	access_roster_record(&rec, slot, 0);
	if (strcmp(name, &rec)) goto L95b3;
	return -1;
L95b3:
	slot++;
L95b4:
	if (slot < roster_slot_count) goto L9582;
	return 0;
}
