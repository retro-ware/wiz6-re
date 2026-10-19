extern char char_skills[];
extern char skill_points_left;
skill_points_screen(p4)
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
	l4 = create_window(20, 4, 20, 16, 25, -1, 0, 0);
	l30 = 0;
	l2 = 17;
L609f:
	if ((unsigned)char_skills[l2] <= 0) goto L60ae;
	l30 = 1;
L60ae:
	l2++;
	if (l2 < 22) goto L609f;
	l28 = 0;
L60be:
	l6 = draw_skill_page(l4, p4, l28, &l26);
	distribute_skill_points(p4, l4, l28, &l26, l6);
	l28 = ((l28 + 1) % 4);
	if (l28 != 2) goto L6103;
	if (l30) goto L6103;
	l28++;
L6103:
	if ((unsigned)skill_points_left > 0) goto L60be;
	destroy_window(l4, 0);
}
