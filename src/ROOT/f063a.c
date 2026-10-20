extern int msg_index_count;
/* Binary-search the message index for the entry containing a message number. */
find_message_index(msg)
{
	int lo;
	char *entry;
	register int mid;
	register int hi;
	hi = msg_index_count;
	hi--;
	lo = 0;
L064c:
	if (hi < lo) goto L06a5;
	mid = (((hi - lo) / 2) + lo);
	entry = ((mid * 6) + 2122);
	if (*(int *)entry <= msg) goto L0681;
	hi = mid;
	hi--;
	goto L06a3;
L0681:
	if (((unsigned char)entry[4] + *(int *)entry) >= msg) goto L069b;
	lo = (mid + 1);
	goto L06a3;
L069b:
	;
#asm
l069b:
	db 08bh,0c3h
#endasm
	return;
L06a3:
	goto L064c;
L06a5:
	return 0;
}
