extern char pc_item_qty[];
f69db(p4, p6)
{
	if (((unsigned)pc_item_qty[((432 * p4) + (p6 << 3))] > 0) && (!--pc_item_qty[((432 * p4) + (p6 << 3))])) {
	f6835(p4, p6);
	}
}
