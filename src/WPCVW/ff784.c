extern char g4500[];
extern char g4597[];
extern char pc_class[];
extern char pc_skill_points[];
extern int pc_level[];
/* Do one level up: show gains, hit points, spell points and new spells. */
do_level_up(p4, p6, p8)
{
	int l2;
	char x2[2];
	(*(int *)((char *)pc_level + (432 * p8)))++;
	if ((unsigned char)g4597[(432 * p8)] <= *(int *)((char *)pc_level + (432 * p8))) {
	g4597[(432 * p8)] = 0;
	}
	ff6e6(p8);
	draw_sheet(p4, p6, p8);
	fill_window(p6, 32, 3, 0);
	refresh_window(p6);
	get_message(5010, 21902);
	replace_char_with_string(21902, ((432 * p8) + 17384), 94);
	get_message(((unsigned char)pc_class[(432 * p8)] + 120), 22416);
	replace_char_with_string(21902, 22416, 36);
	show_centered_msg(p6, 21902, 1);
	ff568(p4, p6, p8);
	fed21(p4, p6, p8);
	feff8(p8);
	roll_skill_points(p8);
	if ((unsigned)pc_skill_points[(432 * p8)] > 0) {
	fe922(p6, p8);
	}
	ff201(p8);
	l2 = 0;
Lf891:
	if ((unsigned)g4500[((432 * p8) + l2)] <= 0) goto Lf8b7;
	learn_new_spell(p4, p6, p8, l2);
	goto Lf891;
Lf8b7:
	l2++;
	if (l2 < 4) goto Lf891;
}
