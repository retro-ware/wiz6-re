extern char pc_item_qty[];
use_item_charge(p4, p6)
{
	if (((unsigned)pc_item_qty[((432 * p4) + (p6 << 3))] <= 0) || (--pc_item_qty[((432 * p4) + (p6 << 3))])) goto L5f82;
	remove_item(p4, p6);
L5f82:
	;
}
