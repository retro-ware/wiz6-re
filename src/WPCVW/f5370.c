extern char pc_item_count[];
extern char pc_swag_count[];
extern int pc_carried[];
/* Recompute a member's carried weight from inventory and swag items. */
calc_carried_weight(member)
{
	int i;
	*(int *)((char *)pc_carried + (432 * member)) = 0;
	for (i = 0; (unsigned char)pc_item_count[(432 * member)] > i; i++) {
	*(int *)((char *)pc_carried + (432 * member)) += get_item_weight(i, member);
	}
	for (i = 0; (unsigned char)pc_swag_count[(432 * member)] > i; i++) {
	*(int *)((char *)pc_carried + (432 * member)) += get_item_weight((i + 10), member);
	}
}
