extern char pc_condition[];
extern int party_count;
extern int party_picture_win;
extern int pc_exp[];
extern long combat_gold;
share_combat_gold()
{
	int l2;
	int alive;
	char share[4];
	alive = 0;
	l2 = 0;
	goto L9add;
L9ac8:
	if (!pc_condition[(432 * l2)]) {
	alive++;
	}
	l2++;
L9add:
	if (l2 < party_count) goto L9ac8;
	*(long *)(share + 0) = (combat_gold / (long)alive);
	get_message(5001, 20590);
	long_to_string(*(int *)(share + 0), *(int *)(share + (0 + 2)), 20722);
	replace_char_with_string(20590, 20722, 36);
	show_centered_line(party_picture_win, 2, 20590, 0, 6);
	l2 = 0;
	goto L9b73;
L9b53:
	if (!pc_condition[(432 * l2)]) {
	*(long *)((char *)pc_exp + (432 * l2)) += *(long *)(share + 0);
	}
	l2++;
L9b73:
	if (l2 < party_count) goto L9b53;
}
