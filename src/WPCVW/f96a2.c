extern char g00cc[];
extern char pc_item_count[];
extern char pc_item_flags[];
extern char pc_item_qty[];
extern char pc_item_type[];
extern char pc_swag_count[];
extern int g43ca;
extern int pc_gold[];
extern int pc_item_id[];
long input_number();
struct s8 { int w[4]; };
/* Give items from member p8 to another member, splitting stacks by quantity. */
do_trade_items(p4, p6, p8)
{
	int l2;
	int l4;
	int l6;
	int l8;
	int l10;
	char l14[4];
	int l16;
	int l18;
	int l20;
	if ((l4 = choose_member(p4, p6, 501, -1)) == -1) goto L96cb;
	if (l4 != p8) goto L96d1;
L96cb:
	return;
L96d1:
	if (*(long *)((char *)pc_gold + (432 * p8)) <= 0L) goto L978a;
L96ec:
	*(long *)(l14 + 0) = input_number(p6, 404, 8);
	if ((*(long *)(l14 + 0) < 0L) || (*(long *)((char *)pc_gold + (432 * p8)) < *(long *)(l14 + 0))) goto L9769;
	*(long *)((char *)pc_gold + (432 * p8)) -= *(long *)(l14 + 0);
	*(long *)((char *)pc_gold + (432 * l4)) += *(long *)(l14 + 0);
	goto L977b;
L9769:
	*(int *)(l14 + (0 + 2)) = -1;
	*(int *)(l14 + 0) = -1;
	play_sound(0);
L977b:
	if (*(long *)(l14 + 0) != -1L) goto L978a;
	goto L96ec;
L978a:
	draw_sheet(p4, p6, p8);
L9799:
	if ((((unsigned char)pc_item_count[(432 * l4)] + (unsigned char)pc_swag_count[(432 * l4)]) >= 22) || ((unsigned)pc_item_count[(432 * p8)] <= 0)) goto L9b3c;
	g43ca = choose_item(p4, p6, 403, p8, 0);
	if (g43ca == -1) goto L96cb;
	if ((!((unsigned char)pc_item_flags[((432 * p8) + (g43ca << 3))] & 1)) && (!((unsigned char)pc_item_flags[((432 * p8) + (g43ca << 3))] & 2))) goto L9828;
	l18 = 0;
	l16 = 0;
	play_sound(0);
	goto L98e2;
L9828:
	l18 = 1;
	l16 = 1;
	l8 = (unsigned char)pc_item_qty[((432 * p8) + (g43ca << 3))];
	if (g00cc[(unsigned char)pc_item_type[((432 * p8) + (g43ca << 3))]] != 1) goto L98e2;
L9861:
	l8 = input_number(p6, 405, 3);
	if ((unsigned char)pc_item_qty[((432 * p8) + (g43ca << 3))] < l8) {
	l8 = -1;
	play_sound(0);
	}
	if ((long)l8 == -1L) goto L9861;
	if ((unsigned char)pc_item_qty[((432 * p8) + (g43ca << 3))] > l8) {
	l18 = 0;
	}
	if (l8) goto L98e2;
	l16 = 0;
L98e2:
	if (!l16) goto L9b39;
	l20 = 1;
	l6 = (unsigned char)pc_item_count[(432 * l4)];
	l2 = (l6 - 1);
	goto L9987;
L9908:
	if (((*(int *)((char *)pc_item_id + ((432 * l4) + (l2 << 3))) != *(int *)((char *)pc_item_id + ((432 * p8) + (g43ca << 3)))) || (g00cc[(unsigned char)pc_item_type[((432 * l4) + (l2 << 3))]] != 1)) || (((unsigned char)pc_item_qty[((432 * l4) + (l2 << 3))] + l8) > 250)) goto L9984;
	l6 = l2;
	l20 = 0;
L9984:
	l2--;
L9987:
	if (l2 >= 0) goto L9908;
	if (l6 < 10) goto L9a50;
	l20 = 2;
	l6 = ((unsigned char)pc_swag_count[(432 * l4)] + 10);
	l2 = ((unsigned char)pc_swag_count[(432 * l4)] - 1);
	goto L9a47;
L99bf:
	l10 = (l2 + 10);
	if (((*(int *)((char *)pc_item_id + ((432 * l4) + (l10 << 3))) != *(int *)((char *)pc_item_id + ((432 * p8) + (g43ca << 3)))) || (g00cc[(unsigned char)pc_item_type[((432 * l4) + (l10 << 3))]] != 1)) || (((unsigned char)pc_item_qty[((432 * l4) + (l10 << 3))] + l8) > 250)) goto L9a44;
	l6 = l10;
	l20 = 0;
L9a44:
	l2--;
L9a47:
	if (l2 >= 0) goto L99bf;
L9a50:
	if (l20 <= 0) goto L9ad4;
	*(struct s8 *)((char *)pc_item_id + ((432 * l4) + (l6 << 3))) = *(struct s8 *)((char *)pc_item_id + ((432 * p8) + (g43ca << 3)));
	pc_item_qty[((432 * l4) + (l6 << 3))] = *(char *)&l8;
	pc_item_flags[((432 * l4) + (l6 << 3))] = (char)((unsigned char)pc_item_flags[((432 * l4) + (l6 << 3))] & -2);
	if (l20 == 1) {
	pc_item_count[(432 * l4)]++;
	} else {
	pc_swag_count[(432 * l4)]++;
	}
	goto L9af4;
L9ad4:
	pc_item_qty[((432 * l4) + (l6 << 3))] = (char)((unsigned char)pc_item_qty[((432 * l4) + (l6 << 3))] + l8);
L9af4:
	if (l18) {
	remove_item(p8, g43ca);
	} else {
	pc_item_qty[((432 * p8) + (g43ca << 3))] = (char)((unsigned char)pc_item_qty[((432 * p8) + (g43ca << 3))] - l8);
	}
	draw_sheet(p4, p6, p8);
L9b39:
	goto L9799;
L9b3c:
	return;
}
