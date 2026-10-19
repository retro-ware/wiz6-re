extern char g00cc[];
extern char pc_item_count[];
extern char pc_item_flags[];
extern char pc_item_qty[];
extern char pc_item_type[];
extern int g43ca;
extern int pc_item_id[];
/* Merge two inventory items: stack same items or combine via recipe. */
do_merge_items(p4, p6, p8)
{
	int l2;
	int l4;
	int l6;
	if ((unsigned)pc_item_count[(432 * p8)] >= 2) goto L9da3;
	return;
L9da3:
	if ((g43ca = choose_item(p4, p6, 406, p8, 0)) != -1) goto L9dc4;
	return;
L9dc4:
	if ((l4 = choose_item(p4, p6, 407, p8, 0)) != -1) goto L9de5;
	return;
L9de5:
	if (l4 != g43ca) goto L9df5;
	play_sound(0);
	return;
L9df5:
	if (!((unsigned char)pc_item_flags[((432 * p8) + (l4 << 3))] & 1)) goto L9e4e;
	l2 = g43ca;
	g43ca = l4;
	l4 = l2;
	if (!((unsigned char)pc_item_flags[((432 * p8) + (l4 << 3))] & 1)) goto L9e4e;
	play_sound(0);
	return;
L9e4e:
	if ((*(int *)((char *)pc_item_id + ((432 * p8) + (g43ca << 3))) != *(int *)((char *)pc_item_id + ((432 * p8) + (l4 << 3)))) || (g00cc[(unsigned char)pc_item_type[((432 * p8) + (g43ca << 3))]] != 1)) goto L9f4e;
	if ((l6 = ((unsigned char)pc_item_qty[((432 * p8) + (g43ca << 3))] + (unsigned char)pc_item_qty[((432 * p8) + (l4 << 3))])) > 250) goto L9f12;
	pc_item_qty[((432 * p8) + (g43ca << 3))] = *(char *)&l6;
	remove_item(p8, l4);
	goto L9f4c;
L9f12:
	pc_item_qty[((432 * p8) + (g43ca << 3))] = -6;
	pc_item_qty[((432 * p8) + (l4 << 3))] = (char)(l6 + -250);
L9f4c:
	goto L9f6d;
L9f4e:
	if (try_combine_recipe(p4, p8, g43ca, l4)) goto L9f6d;
	play_sound(0);
L9f6d:
	draw_sheet(p4, p6, p8);
	return;
}
