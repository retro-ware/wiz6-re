extern char pc_class[];
extern int bottom_line_win;
extern int g57fc;
extern int pc_exp[];
extern int pc_level[];
/* Level the member up while his experience reaches the next level. */
check_level_up(p4)
{
	long l4;
	char x4[62];
	int l68;
	int l70;
	char l72[2];
	int l74;
	*(int *)(l72 + 0) = create_window(0, 0, 40, 20, 20, -1, 0, 0);
	l74 = create_window(0, 20, 40, 4, 15, -1, 0, 0);
	resume_window_draw(bottom_line_win);
	erase_window(bottom_line_win, 0);
	access_scenario_record(0, &l68, (unsigned char)pc_class[(432 * p4)], 0);
	g57fc = 0;
Lf94f:
	if (*(int *)((char *)pc_level + (432 * p4)) >= 16) goto Lf978;
	l4 = *(long *)(l72 + (*(int *)((char *)pc_level + (432 * p4)) << 2));
	goto Lf9be;
Lf978:
	l70 = (*(int *)((char *)pc_level + (432 * p4)) + -16);
	l4 = (((*(long *)(l72 + 64) - *(long *)(l72 + 60)) * l70) + *(long *)(l72 + 64));
Lf9be:
	if (*(long *)((char *)pc_exp + (432 * p4)) < l4) goto Lf9ed;
	do_level_up(*(int *)(l72 + 0), l74, p4);
	goto Lfa0b;
Lf9ed:
	destroy_window(l74, 0);
	destroy_window(*(int *)(l72 + 0), 0);
Lfa07:
	return;
Lfa0b:
	goto Lf94f;
	return;
}
