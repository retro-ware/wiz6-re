extern char pc_item_count[];
extern char pc_swag_count[];
extern int pc_carried[];
calc_carried_weight_x(p4)
{
	int l2;
	*(int *)((char *)pc_carried + (432 * p4)) = 0;
	for (l2 = 0; (unsigned char)pc_item_count[(432 * p4)] > l2; l2++) {
	*(int *)((char *)pc_carried + (432 * p4)) += get_item_weight_x(l2, p4);
	}
	for (l2 = 0; (unsigned char)pc_swag_count[(432 * p4)] > l2; l2++) {
	*(int *)((char *)pc_carried + (432 * p4)) += get_item_weight_x((l2 + 10), p4);
	}
}
