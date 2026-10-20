extern char pc_skill_points[];
extern char pc_skills[];
fe922(p4, p6)
{
	int l2;
	int l4;
	int l6;
	char x6[18];
	int l26;
	int l28;
	int l30;
	fill_window(p4, 32, 3, 0);
	refresh_window(p4);
	get_message(605, 21902);
	show_centered_msg(p4, 21902, 1);
	l4 = create_window(20, 4, 20, 16, 25, -1, 0, 0);
	l30 = 0;
	l2 = 17;
Le993:
	if ((unsigned)pc_skills[((432 * p6) + l2)] > 0) {
	l30 = 1;
	}
	l2++;
	if (l2 < 22) goto Le993;
	l28 = 0;
Le9ba:
	l6 = draw_skills_page(l4, p4, p6, l28, &l26);
	fdeca(p4, l4, p6, l28, &l26, l6);
	l28 = ((l28 + 1) % 4);
	if ((l28 != 2) || (l30)) goto Lea05;
	l28++;
Lea05:
	if ((unsigned)pc_skill_points[(432 * p6)] > 0) goto Le9ba;
	destroy_window(l4, 0);
}
