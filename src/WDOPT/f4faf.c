extern char pc_item_qty[];
/* Use one charge of member's item slot; remove it when no charges are left. */
use_item_charge(member, slot)
{
	if (((unsigned)pc_item_qty[((432 * member) + (slot << 3))] <= 0) || (--pc_item_qty[((432 * member) + (slot << 3))])) goto L4fde;
	remove_item(member, slot);
L4fde:
	;
}
