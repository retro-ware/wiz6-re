extern int member_portrait[];
/* Return the lowest portrait slot 0..5 not used by the first count members. */
find_free_portrait_slot(count)
{
	int slot;
	int i;
	int used;
	slot = 0;
L519b:
	used = 0;
	i = 0;
	goto L51bf;
L51a7:
	if (member_portrait[i] == slot) {
	used = 1;
	}
	i++;
L51bf:
	if (i < count) goto L51a7;
	if (used) goto L51d4;
	return slot;
L51d4:
	slot++;
	if (slot < 6) goto L519b;
	return 0;
}
