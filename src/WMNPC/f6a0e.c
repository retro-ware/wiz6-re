extern char g00cc[];
extern char pc_item_qty[];
extern char pc_item_type[];
extern int pc_item_weight[];
f6a0e(p4, p6)
{
	int l2;
	l2 = 1;
	if ((g00cc[(unsigned char)pc_item_type[((432 * p6) + (p4 << 3))]] != 1) || ((l2 = (unsigned char)pc_item_qty[((432 * p6) + (p4 << 3))]) >= 1)) goto L6a58;
	l2 = 1;
L6a58:
	return (*(int *)((char *)pc_item_weight + ((432 * p6) + (p4 << 3))) * l2);
}
