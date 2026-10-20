extern char g00cc[];
extern char g51e2[];
extern char pc_item_count[];
extern char pc_item_qty[];
extern char pc_item_type[];
extern char pc_swag_count[];
extern int loot_item[];
extern int pc_carried[];
extern int pc_item_id[];
/* Put a found item into a member's inventory (stacking charges); -1 if no room. */
give_item_to_member(member, loot)
{
	int l2;
	int item_id;
	char x4[12];
	char l17;
	char l18;
	char l19;
	char x19[27];
	int l48;
	char x48[6];
	int l56;
	int l58;
	char x58[18];
	int l78;
	char *entry;
	char l81;
	int slot;
	int l85;
	int l87;
	char x87[1];
	item_id = loot_item[loot];
	access_scenario_record(1, &l78, item_id, 0);
	if (g00cc[(unsigned char)l18] == 1) {
	l81 = g51e2[(loot << 1)];
	} else {
	l81 = (char)roll_dice(l58, l56);
	}
	l87 = 1;
	slot = (unsigned char)pc_item_count[(432 * member)];
	l2 = (slot - 1);
	goto L864e;
L85f5:
	if (((*(int *)((char *)pc_item_id + ((432 * member) + (l2 << 3))) != item_id) || (g00cc[(unsigned char)pc_item_type[((432 * member) + (l2 << 3))]] != 1)) || (((unsigned char)pc_item_qty[((432 * member) + (l2 << 3))] + (unsigned char)l81) > 250)) goto L864b;
	slot = l2;
	l87 = 0;
L864b:
	l2--;
L864e:
	if (l2 >= 0) goto L85f5;
	if (slot < 10) goto L86f7;
	l87 = 2;
	slot = ((unsigned char)pc_swag_count[(432 * member)] + 10);
	l2 = ((unsigned char)pc_swag_count[(432 * member)] - 1);
	goto L86e4;
L8682:
	l85 = (l2 + 10);
	if (((*(int *)((char *)pc_item_id + ((432 * member) + (l85 << 3))) != item_id) || (g00cc[(unsigned char)pc_item_type[((432 * member) + (l85 << 3))]] != 1)) || (((unsigned char)pc_item_qty[((432 * member) + (l85 << 3))] + (unsigned char)l81) > 250)) goto L86e1;
	slot = l85;
	l87 = 0;
L86e1:
	l2--;
L86e4:
	if (l2 >= 0) goto L8682;
	if (slot < 22) goto L86f7;
	return -1;
L86f7:
	entry = (char *)pc_item_id + ((432 * member) + (slot << 3));
	if (l87 <= 0) goto L873a;
	entry[6] = 0;
	if (l87 != 1) goto L872e;
	pc_item_count[(432 * member)]++;
	goto L873a;
L872e:
	pc_swag_count[(432 * member)]++;
L873a:
	*(int *)entry = item_id;
	entry[4] = l18;
	entry[5] = l17;
	*(int *)(entry + 2) = l48;
	entry[6] += l81;
	entry[7] = 0;
	if (((unsigned char)l19 & 8)) {
	entry[7] |= 4;
	}
	if (((unsigned char)l19 & 4)) {
	entry[7] |= 8;
	}
	if (((unsigned char)l19 & 16)) {
	entry[7] |= 16;
	}
	if (((unsigned char)l19 & 32)) {
	entry[7] |= 32;
	}
	if (((unsigned char)l19 & 2)) {
	entry[7] |= 64;
	}
	*(int *)((char *)pc_carried + (432 * member)) = 0;
	l2 = 0;
	goto L87f4;
L87d7:
	*(int *)((char *)pc_carried + (432 * member)) += get_slot_weight(l2, member);
	l2++;
L87f4:
	if ((unsigned char)pc_item_count[(432 * member)] > l2) goto L87d7;
	l2 = 0;
	goto L882f;
L880e:
	*(int *)((char *)pc_carried + (432 * member)) += get_slot_weight((l2 + 10), member);
	l2++;
L882f:
	if ((unsigned char)pc_swag_count[(432 * member)] > l2) goto L880e;
	return 0;
}
