extern char g00cc[];
extern char g506d[];
extern char pc_condition[];
extern int g501e;
extern int g50c8;
extern int g51e2[];
extern int g525a[];
extern int g5268[];
extern int g5274[];
extern int game_state;
extern int loot_count;
extern int loot_item[];
extern int party_count;
extern int party_picture_win;
extern int pc_exp[];
extern int pc_gold[];
extern int return_cmd;
extern int treasure_id;
/* Load the treasure record, handle the chest, roll gold and items and award them. */
open_treasure()
{
	int l2;
	int l4;
	char l5;
	char chest[39];
	char x44[12];
	char l57;
	char l58;
	char l59;
	char x59[27];
	int l88;
	char x88[6];
	int l96;
	int l98;
	char x98[18];
	int l118;
	int alive;
	char gold[8];
	int l130;
	char x130[18];
	int l150;
	char x150[4];
	access_scenario_record(7, chest, treasure_id, 0);
	treasure_id = -1;
	if ((unsigned)l5 <= 0) goto L964f;
	g50c8 = 1;
	if (handle_chest(chest) != -1) goto L9641;
	return;
L9641:
	clear_window(party_picture_win, 0);
L964f:
	if (return_cmd == 21) {
	mark_chest_opened();
	}
	refresh_all_windows();
	*(int *)(gold + (0 + 6)) = 0;
	*(int *)(gold + (0 + 4)) = 0;
	*(int *)(gold + (0 + 2)) = 0;
	*(int *)(gold + 0) = 0;
	loot_count = 0;
	l2 = 0;
L967b:
	if (random(100) >= (unsigned char)chest[((l2 * 6) + 5)]) goto L9763;
	switch ((unsigned char)chest[((l2 * 6) + 4)]) {
case 1:
	l130 = (random((*(int *)(chest + (l2 * 6)) - *(int *)(chest + ((l2 * 6) + 2)))) + *(int *)(chest + ((l2 * 6) + 2)));
	*(long *)(gold + (0 + 4)) += (long)l130;
	goto L9763;
case 4:
	*(long *)(gold + 0) += ((long)*(int *)(chest + (l2 * 6)) * *(int *)(chest + ((l2 * 6) + 2)));
	goto L9763;
case 2:
	if ((loot_item[loot_count] = (random(*(int *)(chest + ((l2 * 6) + 2))) + *(int *)(chest + (l2 * 6)))) > 0) {
	loot_count++;
	}
	goto L9763;
	}
L9763:
	l2++;
	if (l2 < 6) goto L967b;
	alive = 0;
	l2 = 0;
	goto L9792;
L977d:
	if (!pc_condition[(432 * l2)]) {
	alive++;
	}
	l2++;
L9792:
	if (l2 < party_count) goto L977d;
	if (alive) goto L97aa;
	game_state = 8;
	return;
L97aa:
	*(long *)(gold + (0 + 4)) = (*(long *)(gold + (0 + 4)) / (long)alive);
	l2 = 0;
	goto L999a;
L97cd:
	get_message(5004, 20590);
	get_message(5005, ((l2 * 18) + 20974));
	if (loot_item[l2] <= 0) goto L98f5;
	access_scenario_record(1, &l118, loot_item[l2], 0);
	replace_char_with_string(((l2 * 18) + 20974), &l118, 94);
	if (g00cc[(unsigned char)l58] == 1) {
	g51e2[l2] = (unsigned char)(roll_dice(l98, l96));
	} else {
	g51e2[l2] = 1;
	}
	g5268[l2] = (g51e2[l2] * l88);
	g525a[l2] = (unsigned char)l57;
	g5274[l2] = (((unsigned char)l59 & 2) ? 1 : 0);
	switch ((unsigned char)l58) {
case 12:
	get_message(5006, &l150);
	goto L98f5;
case 13:
	get_message(5007, &l150);
	goto L98f5;
case 16:
	get_message(5008, &l150);
	goto L98f5;
default:
	*(char *)&l150 = 0;
	goto L98f5;
	}
L98f5:
	int_to_string(g51e2[l2], 20802);
	replace_char_with_string(((l2 * 18) + 20974), 20802, 36);
	replace_char_with_string(20590, ((l2 * 18) + 20974), 37);
	replace_char_with_string(20590, &l150, 64);
	l4 = strlen(20590);
L9966:
	if ((l4 <= 0) || (g506d[l4] != 32)) goto L9980;
	g506d[l4] = 0;
	l4--;
	goto L9966;
L9980:
	show_centered_line(party_picture_win, g50c8, 20590, 1, 1);
	l2++;
L999a:
	if (l2 < loot_count) goto L97cd;
	if (*(long *)(gold + (0 + 4)) > 0L) {
	get_message(5002, 20590);
	long_to_string(*(int *)(gold + (0 + 4)), *(int *)(gold + (0 + 6)), 20722);
	replace_char_with_string(20590, 20722, 36);
	show_centered_line(party_picture_win, g50c8, 20590, 0, 5);
	}
	if (*(long *)(gold + 0) > 0L) {
	get_message(5003, 20590);
	long_to_string(*(int *)(gold + 0), *(int *)(gold + (0 + 2)), 20722);
	replace_char_with_string(20590, 20722, 36);
	show_centered_line(party_picture_win, g50c8, 20590, 1, 4);
	}
	l2 = 0;
	goto L9a8f;
L9a61:
	if (!pc_condition[(432 * l2)]) {
	*(long *)((char *)pc_exp + (432 * l2)) += *(long *)(gold + 0);
	*(long *)((char *)pc_gold + (432 * l2)) += *(long *)(gold + (0 + 4));
	}
	l2++;
L9a8f:
	if (l2 < party_count) goto L9a61;
	if (loot_count > 0) {
	distribute_loot();
	}
	g501e = 0;
	animate_treasure_view();
	wait_animating(2);
	return;
}
