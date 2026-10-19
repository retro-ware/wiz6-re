extern char pc_item_count[];
extern char pc_swag_count[];
extern int g4478[];
extern int pc_item_id[];
f6d11(p4, p6)
{
	int l2;
	l2 = 0;
	goto L6d44;
L6d1e:
	if (*(int *)((char *)pc_item_id + ((432 * p4) + (l2 << 3))) != p6) goto L6d41;
	return l2;
L6d41:
	l2++;
L6d44:
	if ((unsigned char)pc_item_count[(432 * p4)] > l2) goto L6d1e;
	l2 = 0;
	goto L6d85;
L6d5e:
	if (*(int *)((char *)g4478 + ((432 * p4) + (l2 << 3))) != p6) goto L6d82;
	return (l2 + 10);
L6d82:
	l2++;
L6d85:
	if ((unsigned char)pc_swag_count[(432 * p4)] > l2) goto L6d5e;
	return -1;
}
