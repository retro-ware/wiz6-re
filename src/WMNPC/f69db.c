extern char pc_item_qty[];
f69db(p4, p6)
{
	if ((unsigned)pc_item_qty[((432 * p4) + (p6 << 3))] <= 0) goto L6a0a;
	pc_item_qty[((432 * p4) + (p6 << 3))]--;
#asm
	db 075h,00ch
#endasm
	f6835(p4, p6);
L6a0a:
	;
}
