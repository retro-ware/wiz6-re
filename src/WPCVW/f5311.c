extern char g00cc[];
extern char pc_item_qty[];
extern char pc_item_type[];
extern int pc_item_weight[];
/* Weight of inventory item p4 of member p6 (times quantity for stackable items). */
get_item_weight(item, member)
{
	int qty;
	qty = 1;
	if ((g00cc[(unsigned char)pc_item_type[((432 * member) + (item << 3))]] == 1) && ((qty = (unsigned char)pc_item_qty[((432 * member) + (item << 3))]) < 1)) {
	qty = 1;
	}
	return (*(int *)((char *)pc_item_weight + ((432 * member) + (item << 3))) * qty);
}
