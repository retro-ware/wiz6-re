extern char pc_item_qty[];
use_item_charge(p4, p6)
{
	if ((unsigned)pc_item_qty[((432 * p4) + (p6 << 3))] <= 0) goto L5f82;
	pc_item_qty[((432 * p4) + (p6 << 3))]--;
#asm
	db 075h,00ch
#endasm
	remove_item(p4, p6);
L5f82:
	;
}
