extern int g0546[];
extern int g0548[];
extern int g054a[];
extern int pc_item_id[];
/* Combine two items using the recipe table at g0546; returns 1 when a recipe matched. */
try_combine_recipe(p4, p6, p8, p10)
{
	int l2;
	l2 = 0;
L9c99:
	if (*(int *)((char *)pc_item_id + ((432 * p6) + (p8 << 3))) != g0546[(l2 * 3)]) goto L9cf3;
	if (*(int *)((char *)pc_item_id + ((432 * p6) + (p10 << 3))) == g0548[(l2 * 3)]) goto L9d4d;
L9cf3:
	if (*(int *)((char *)pc_item_id + ((432 * p6) + (p8 << 3))) != g0548[(l2 * 3)]) goto L9d77;
	if (*(int *)((char *)pc_item_id + ((432 * p6) + (p10 << 3))) != g0546[(l2 * 3)]) goto L9d77;
L9d4d:
	replace_item(p4, p6, g054a[(l2 * 3)], p8, p10);
	return 1;
L9d77:
	l2++;
	if (l2 < 9) goto L9c99;
	return 0;
}
