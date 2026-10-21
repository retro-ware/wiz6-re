extern char g3813[];
extern int bottom_line_win;
extern int g43a6[];
extern int g43b4[];
extern int g50b4[];
extern int group_monster_rec[];
extern int main_window;
extern int monster_group_count;
extern int monster_groups[];
extern int party_picture_win;
extern int view_pos_group[];
/* Let monster groups advance and swap places, announcing 'ADVANCE(S)!'. */
advance_monster_groups()
{
	int l2;
	int l4;
	int l6;
	int l8;
	int l10;
	int l12;
	int l28[8];
	char x28[800];
	defer_window_draw(main_window);
	defer_window_draw(bottom_line_win);
	l2 = 1;
	goto L5967;
L576b:
	l28[(l2 + 1)] = 0;
	l4 = 0;
	goto L5821;
L5781:
	if (((((char *)monster_groups[l2] + (44 * l4))[34]) || (((char *)monster_groups[l2] + (44 * l4))[16])) || (((char *)monster_groups[l2] + (44 * l4))[17])) goto L581e;
	l12 = 0;
	for (l10 = 0; l10 < 10; l10++) {
	if ((unsigned)((char *)monster_groups[l2])[((44 * l4) + l10) + 14] > 0) {
	l12 += (*(int *)(((char *)monster_groups[l2] + (44 * l4)) + 2) / 4);
	}
	}
	if (*(int *)(((char *)monster_groups[l2] + (44 * l4)) + 2) <= l12) goto L581e;
	l28[(l2 + 1)] += (*(int *)(((char *)monster_groups[l2] + (44 * l4)) + 2) - l12);
L581e:
	l4++;
L5821:
	if ((unsigned char)(*(char **)((char *)monster_groups + (l2 << 1)))[413] > l4) goto L5781;
	if ((unsigned)(*(char **)((char *)group_monster_rec + (l2 << 1)))[168] <= 0) goto L5877;
	l28[(l2 + 1)] /= (((unsigned char)(*(char **)((char *)group_monster_rec + (l2 << 1)))[168] / 10) + 1);
L5877:
	if ((unsigned)(*(char **)((char *)group_monster_rec + (l2 << 1)))[170] > 0) {
	l28[(l2 + 1)] = (int)((((long)l28[(l2 + 1)] * (unsigned char)(*(char **)((char *)group_monster_rec + (l2 << 1)))[170]) / 100L) + (long)l28[(l2 + 1)]);
	}
	if ((unsigned)(*(char **)((char *)group_monster_rec + (l2 << 1)))[171] > 0) {
	l28[(l2 + 1)] = (int)((((long)l28[(l2 + 1)] * (unsigned char)(*(char **)((char *)group_monster_rec + (l2 << 1)))[171]) / 100L) + (long)l28[(l2 + 1)]);
	}
	if (g3813[((unsigned char)(*(char **)((char *)monster_groups + (l2 << 1)))[411] * 314)]) {
	l28[(l2 + 1)] = 0;
	}
	l2++;
L5967:
	if (l2 <= monster_group_count) goto L576b;
	l2 = monster_group_count;
	goto L5be5;
L597c:
	if (random(l28[(l2 + 1)]) <= random(l28[l2])) goto L5be2;
	clear_window(party_picture_win, 0);
	refresh_all_windows();
	wait_animating_view(1);
	strcpy(20500, ((char *)group_monster_rec[l2] + ((((*(char **)((char *)monster_groups + (l2 << 1)))[413] == 1 ? 0 : 1) << 4) + ((unsigned char)(*(char **)((char *)monster_groups + (l2 << 1)))[412] << 5))));
	get_message(((*(char **)((char *)monster_groups + (l2 << 1)))[413] == 1 ? 3510 : 3511), 20580);
	set_cursor(party_picture_win, (20 - (((strlen(20500) + strlen(20580)) + 1) / 2)), 0);
	print_string(party_picture_win, 20500, 6);
	print_string(party_picture_win, 20580, 14);
	play_sound(0);
	l4 = 0;
	goto L5ae2;
L5a93:
	if (((char *)g43a6[l2] + (44 * l4))[42] != -1) {
	l6 = (((char *)g43a6[l2] + (44 * l4))[42] / 10);
	l8 = (((char *)g43a6[l2] + (44 * l4))[42] % 10);
	*(int *)((char *)g50b4 + ((l6 * 10) + (l8 << 1))) = 1;
	}
	l4++;
L5ae2:
	if ((unsigned char)(*(char **)((char *)g43a6 + (l2 << 1)))[413] > l4) goto L5a93;
	show_encounter_view(1);
	l4 = 0;
	goto L5b65;
L5b07:
	if (((char *)g43a6[l2] + (44 * l4))[42] != -1) {
	l6 = (((char *)g43a6[l2] + (44 * l4))[42] / 10);
	l8 = (((char *)g43a6[l2] + (44 * l4))[42] % 10);
	*(int *)((char *)view_pos_group + ((l6 * 10) + (l8 << 1))) = 0;
	((char *)g43a6[l2] + (44 * l4))[42] = -1;
	}
	l4++;
L5b65:
	if ((unsigned char)(*(char **)((char *)g43a6 + (l2 << 1)))[413] > l4) goto L5b07;
	redraw_view_background();
	l6 = l28[(l2 + 1)];
	l28[(l2 + 1)] = l28[l2];
	l28[l2] = l6;
	swapmem(monster_groups[l2], g43a6[l2], 416);
	swapmem(group_monster_rec[l2], g43b4[l2], 222);
	load_group_pics();
	place_group_sprites((l2 - 1));
	arrange_monster_positions();
	show_encounter_view(0);
L5be2:
	l2--;
L5be5:
	if (l2 >= 2) goto L597c;
}
