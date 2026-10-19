extern char g00cc[];
extern char pc_item_qty[];
extern char pc_item_type[];
extern int pc_item_weight[];
get_slot_weight(slot, member)
{
	int l2;
	l2 = 1;
	if ((g00cc[(unsigned char)pc_item_type[((432 * member) + (slot << 3))]] != 1) || ((l2 = (unsigned char)pc_item_qty[((432 * member) + (slot << 3))]) >= 1)) goto L856e;
	l2 = 1;
L856e:
	return (*(int *)((char *)pc_item_weight + ((432 * member) + (slot << 3))) * l2);
}
