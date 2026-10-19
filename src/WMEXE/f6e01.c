extern char g00cc[];
extern char pc_item_qty[];
extern char pc_item_type[];
extern int pc_item_weight[];
get_item_weight_x(item, member)
{
	int qty;
	qty = 1;
	if ((g00cc[(unsigned char)pc_item_type[((432 * member) + (item << 3))]] != 1) || ((qty = (unsigned char)pc_item_qty[((432 * member) + (item << 3))]) >= 1)) goto L6e4b;
	qty = 1;
L6e4b:
	return (*(int *)((char *)pc_item_weight + ((432 * member) + (item << 3))) * qty);
}
