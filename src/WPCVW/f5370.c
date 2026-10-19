extern char pc_item_count[];
extern char pc_swag_count[];
extern int pc_carried[];
/* Recompute a member's carried weight from inventory and swag items. */
calc_carried_weight(member)
{
	int i;
	*(int *)((char *)pc_carried + (432 * member)) = 0;
	i = 0;
	goto L53a8;
L538b:
	*(int *)((char *)pc_carried + (432 * member)) += get_item_weight(i, member);
	i++;
L53a8:
	if ((unsigned char)pc_item_count[(432 * member)] > i) goto L538b;
	i = 0;
	goto L53e3;
L53c2:
	*(int *)((char *)pc_carried + (432 * member)) += get_item_weight((i + 10), member);
	i++;
L53e3:
	if ((unsigned char)pc_swag_count[(432 * member)] > i) goto L53c2;
}
