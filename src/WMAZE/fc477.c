extern char *g4fa8;
extern char g450a[];
extern unsigned char g450c[];
extern char g450d[];
extern char g450f[];
extern char g458c[];
extern char pc_condition[];
extern char pc_sex[];
extern int cell_event_index;
extern int g4f8a;
extern int party_facing;
extern int pc_hp[];
extern int pc_hp_max[];
extern int pc_spell_pts[];
extern int pc_spell_pts_max[];
extern int pc_stamina[];
extern int pc_stamina_max[];
struct s4 { int w[2]; };
struct s4 format_dice();
apply_member_effects()
{
	int l2;
	int l4;
	int l6;
	int l8;
	int l10;
	int l12;
	int l14;
	int l16;
	int l18;
	g4f8a = (unsigned char)(g4fa8 + cell_event_index)[1584];
	if (g4f8a == party_facing) goto Lc49c;
	return;
Lc49c:
	if (*(int *)(g4fa8 + (cell_event_index << 1)) <= 0) goto Lc4af;
	show_message_text_m(*(int *)(g4fa8 + (cell_event_index << 1)), 0);
Lc4af:
	l8 = *(int *)((g4fa8 + (cell_event_index << 1)) + 576);
	l10 = (*(int *)((g4fa8 + (cell_event_index << 1)) + 288) / 16);
	l12 = (*(int *)((g4fa8 + (cell_event_index << 1)) + 288) % 16);
Lc4d8:
	l6 = choose_party_member_m(2047, 1);
	if (l6 == -1) goto Lc8e5;
	l16 = 0;
	l18 = 0;
	if ((unsigned)pc_condition[(l6 * 432)] >= 3) goto Lc8cd;
	l14 = roll_dice(format_dice(l10, l12, l10));
	l2 = 0;
Lc53a:
	if (extract_bits(l8, l2, 1) != 1) goto Lc8bf;
	if (l2 >= 7) goto Lc55d;
	l16 = 1;
Lc55d:
	if ((l2 <= 7) || (l2 >= 15)) goto Lc56f;
	l18 = 2;
Lc56f:
	switch (l2) {
case 0:
	*(int *)((char *)pc_stamina + (432 * l6)) = clamp_value((*(int *)((char *)pc_stamina + (432 * l6)) + l14), 0, *(int *)((char *)pc_stamina_max + (432 * l6)));
	goto Lc8bf;
case 1:
	l4 = 0;
Lc5a6:
	*(int *)((char *)pc_spell_pts + ((432 * l6) + (l4 << 2))) = clamp_value((roll_dice(format_dice(l10, l12, l10)) + *(int *)((char *)pc_spell_pts + ((432 * l6) + (l4 << 2)))), 0, *(int *)((char *)pc_spell_pts_max + ((432 * l6) + (l4 << 2))));
	l4++;
	if (l4 < 6) goto Lc5a6;
	goto Lc8bf;
case 2:
	*(int *)((char *)pc_hp + (432 * l6)) = clamp_value((*(int *)((char *)pc_hp + (432 * l6)) + l14), 0, *(int *)((char *)pc_hp_max + (432 * l6)));
	goto Lc8bf;
case 3:
	g458c[(432 * l6)] = 0;
	g450f[(432 * l6)] = 0;
	goto Lc8bf;
case 4:
	g450d[(432 * l6)] = 0;
	goto Lc8bf;
case 5:
	if (pc_condition[(432 * l6)] != 2) goto Lc697;
	pc_condition[(432 * l6)] = 0;
Lc697:
	goto Lc8bf;
case 6:
	l4 = 1;
Lc69f:
	if (((((l4 != 1) && (l4 != 2)) && (l4 != 4)) && (l4 != 8)) && (l4 != 9)) goto Lc6cf;
	g450a[((432 * l6) + l4)] = 0;
Lc6cf:
	l4++;
	if (l4 <= 9) goto Lc69f;
	goto Lc8bf;
case 8:
	if ((*(int *)((char *)pc_stamina + (432 * l6)) = clamp_value((*(int *)((char *)pc_stamina + (432 * l6)) - l14), 0, *(int *)((char *)pc_stamina_max + (432 * l6)))) > 0) goto Lc733;
	g450c[(432 * l6)] += (random(6) + 6);
Lc733:
	goto Lc8bf;
case 9:
	l4 = 0;
Lc73b:
	*(int *)((char *)pc_spell_pts + ((432 * l6) + (l4 << 2))) = clamp_value((*(int *)((char *)pc_spell_pts + ((432 * l6) + (l4 << 2))) - roll_dice(format_dice(l10, l12, l10))), 0, *(int *)((char *)pc_spell_pts_max + ((432 * l6) + (l4 << 2))));
	l4++;
	if (l4 < 6) goto Lc73b;
	goto Lc8bf;
case 10:
	if ((*(int *)((char *)pc_hp + (432 * l6)) = clamp_value((*(int *)((char *)pc_hp + (432 * l6)) - l14), 0, *(int *)((char *)pc_hp_max + (432 * l6)))) > 0) goto Lc814;
	pc_condition[(432 * l6)] = 3;
	*(int *)((char *)pc_hp + (432 * l6)) = 0;
	*(int *)((char *)pc_stamina + (432 * l6)) = 0;
	play_sound(((unsigned char)pc_sex[(432 * l6)] + 8));
Lc814:
	goto Lc8bf;
case 11:
	if ((unsigned char)g458c[(432 * l6)] >= l10) goto Lc831;
	g458c[(432 * l6)] = *(char *)&l10;
Lc831:
	if ((unsigned char)g450f[(432 * l6)] >= l14) goto Lc843;
	g450f[(432 * l6)] = *(char *)&l14;
Lc843:
	goto Lc8bf;
case 12:
	if ((unsigned char)g450d[(432 * l6)] >= l14) goto Lc860;
	g450d[(432 * l6)] = *(char *)&l14;
Lc860:
	goto Lc8bf;
case 13:
	if ((unsigned)pc_condition[(432 * l6)] >= 2) goto Lc876;
	pc_condition[(432 * l6)] = 2;
Lc876:
	goto Lc8bf;
case 14:
	if (g450c[(432 * l6)] >= l14) goto Lc892;
	g450c[(432 * l6)] = *(char *)&l14;
Lc892:
	goto Lc8bf;
	}
Lc8bf:
	l2++;
	if (l2 < 16) goto Lc53a;
Lc8cd:
	draw_member_status_m(l6);
	show_centered_notice(((l16 + l18) + 2048));
	goto Lc4d8;
Lc8e5:
	refresh_all_windows();
	return;
}
