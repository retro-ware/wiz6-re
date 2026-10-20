extern char g450a[];
extern char g450d[];
extern char g450f[];
extern char g4511[];
extern char g4517[];
extern char g458c[];
extern char pc_condition[];
extern int g440e[];
extern int g4ec8;
extern int g4ecc;
extern int g4ece;
extern int g4ed0;
extern int g4ed2;
extern int g4ed4;
extern int g4ed6;
extern int g4ed8;
extern int g4eda;
extern int g4edc;
extern int pc_hp[];
extern int pc_hp_max[];
extern int pc_spell_pts[];
extern int pc_spell_pts_max[];
extern int pc_stamina[];
extern int pc_stamina_max[];
struct s4 { int w[2]; };
struct s4 make_two_char_text();
f6054(p4, p6, p8, p10)
{
	int l2;
	int l4;
	switch (p6) {
case 53:
	g4ed0 += (p8 * 50);
	g4ed2 = reduce_toward_zero(((p8 * 5) + 70), g4ed2, 0);
	break;
case 68:
	g4ed4 += (p8 * 35);
	g4ed6 = reduce_toward_zero((((p8 - 1) / 2) + 1), g4ed6, 0);
	break;
case 41:
	g4ecc += (p8 * 50);
	g4ece = reduce_toward_zero((((p8 - 1) / 2) + 1), g4ece, 0);
	break;
case 30:
	g4edc += (p8 * 5);
	break;
case 38:
	g4ec8 += (100 * p8);
	break;
case 70:
	g4ed8 += (p8 * 50);
	g4eda = reduce_toward_zero((p8 * 5), g4eda, 0);
	break;
case 10:
	l2 = roll_dice_dopt(make_two_char_text((p8 << 1), 8, p8));
	*(int *)((char *)pc_stamina + (432 * p10)) += l2;
	if (*(int *)((char *)pc_stamina + (432 * p10)) > *(int *)((char *)pc_stamina_max + (432 * p10))) {
	*(int *)((char *)pc_stamina + (432 * p10)) = *(int *)((char *)pc_stamina_max + (432 * p10));
	}
	break;
case 15:
	if ((l2 = ((unsigned char)g450d[(432 * p10)] - (p8 * 25))) < 0) {
	l2 = 0;
	}
	g450d[(432 * p10)] = *(char *)&l2;
	break;
case 26:
	if ((l2 = ((unsigned char)g458c[(432 * p10)] - p8)) <= 0) {
	l2 = 0;
	g450f[(432 * p10)] = 0;
	}
	g458c[(432 * p10)] = *(char *)&l2;
	if ((l2 = ((unsigned char)g450f[(432 * p10)] - (p8 * 5))) <= 0) {
	l2 = 0;
	g458c[(432 * p10)] = 0;
	}
	g450f[(432 * p10)] = *(char *)&l2;
	break;
case 46:
	if ((pc_condition[(432 * p10)] != 2) || ((p8 * 3) <= (21 - (unsigned char)g4517[(432 * p10)]))) goto L62a2;
	g4517[(432 * p10)]--;
	if (random(21) <= (unsigned char)g4517[(432 * p10)]) goto L629d;
	pc_condition[(432 * p10)] = 3;
	*(int *)((char *)pc_hp + (432 * p10)) = 0;
	*(int *)((char *)pc_stamina + (432 * p10)) = 0;
	goto L62a2;
L629d:
	pc_condition[(432 * p10)] = 0;
L62a2:
	break;
case 57:
	if ((l2 = ((unsigned char)g4511[(432 * p10)] - (p8 * 25))) < 0) {
	l2 = 0;
	}
	g4511[(432 * p10)] = *(char *)&l2;
	break;
case 51:
	l4 = 1;
L62e4:
	if (((((l4 != 1) && (l4 != 2)) && (l4 != 4)) && (l4 != 8)) && (l4 != 9)) goto L6330;
	if ((l2 = ((unsigned char)g450a[((432 * p10) + l4)] - (p8 << 1))) < 0) {
	l2 = 0;
	}
	g450a[((432 * p10) + l4)] = *(char *)&l2;
L6330:
	l4++;
	if (l4 <= 9) goto L62e4;
	break;
case 64:
	l2 = roll_dice_dopt(make_two_char_text(p8, 7, p8));
	*(int *)((char *)pc_hp + (432 * p10)) += l2;
	if (*(int *)((char *)pc_hp + (432 * p10)) > *(int *)((char *)pc_hp_max + (432 * p10))) {
	*(int *)((char *)pc_hp + (432 * p10)) = *(int *)((char *)pc_hp_max + (432 * p10));
	}
	break;
case 77:
	if ((pc_condition[(432 * p10)] != 3) || ((p8 * 3) <= (18 - (unsigned char)g4517[(432 * p10)]))) goto L63d7;
	g4517[(432 * p10)]--;
	pc_condition[(432 * p10)] = 0;
	*(int *)((char *)pc_hp + (432 * p10)) = 1;
	*(int *)((char *)pc_stamina + (432 * p10)) = (*(int *)((char *)pc_stamina_max + (432 * p10)) / 10);
	(*(int *)((char *)g440e + (432 * p10)))++;
L63d7:
	break;
case 39:
	if (try_open_lock(p8) != -1) goto L63e6;
L63e6:
	break;
case 60:
	show_overhead_map(p8);
	break;
case 62:
	break;
case 80:
	l2 = roll_dice_dopt(make_two_char_text(p8, 8, p8));
	*(int *)((char *)pc_stamina + (432 * p4)) += l2;
	if (*(int *)((char *)pc_stamina + (432 * p4)) > *(int *)((char *)pc_stamina_max + (432 * p4))) {
	*(int *)((char *)pc_stamina + (432 * p4)) = *(int *)((char *)pc_stamina_max + (432 * p4));
	}
	l2 = roll_dice_dopt(make_two_char_text(p8, 2, 0));
	*(int *)((char *)pc_hp + (432 * p4)) += l2;
	if (*(int *)((char *)pc_hp + (432 * p4)) > *(int *)((char *)pc_hp_max + (432 * p4))) {
	*(int *)((char *)pc_hp + (432 * p4)) = *(int *)((char *)pc_hp_max + (432 * p4));
	}
	break;
case 81:
	l2 = 0;
L6493:
	l4 = roll_dice_dopt(make_two_char_text(p8, 10, 0));
	*(int *)((char *)pc_spell_pts + ((432 * p4) + (l2 << 2))) += l4;
	if (*(int *)((char *)pc_spell_pts + ((432 * p4) + (l2 << 2))) > *(int *)((char *)pc_spell_pts_max + ((432 * p4) + (l2 << 2)))) {
	*(int *)((char *)pc_spell_pts + ((432 * p4) + (l2 << 2))) = *(int *)((char *)pc_spell_pts_max + ((432 * p4) + (l2 << 2)));
	}
	l2++;
	if (l2 < 6) goto L6493;
	break;
	}
}
