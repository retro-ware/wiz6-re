extern int group_monster_rec[];
extern int main_window;
extern int monster_group_count;
extern int monster_groups[];
draw_monster_groups(win, refresh)
char *win;
{
	int group;
	int i;
	draw_combat_title();
	defer_window_draw(win);
	clear_window(win, 1);
	for (group = 1; group <= monster_group_count; group++) {
	(*(char **)((char *)monster_groups + (group << 1)))[414] = 0;
	i = 0;
	goto L468c;
L4660:
	if ((((unsigned)((char *)monster_groups[group] + (44 * i))[34] >= 2) || (((char *)monster_groups[group] + (44 * i))[17])) || (((char *)monster_groups[group] + (44 * i))[16])) goto L4689;
	(*(char **)((char *)monster_groups + (group << 1)))[414]++;
L4689:
	i++;
L468c:
	if ((unsigned char)(*(char **)((char *)monster_groups + (group << 1)))[413] > i) goto L4660;
	set_cursor(win, 0, (group - 1));
	put_char(win, (unsigned char)(((unsigned char)(*(char **)((char *)monster_groups + (group << 1)))[413] + 48)), 6);
	win[6]++;
	print_string(win, ((char *)group_monster_rec[group] + ((((*(char **)((char *)monster_groups + (group << 1)))[413] == 1 ? 0 : 1) << 4) + ((unsigned char)(*(char **)((char *)monster_groups + (group << 1)))[412] << 5))), 14);
	set_cursor(win, 19, (group - 1));
	put_char(win, (unsigned char)(((unsigned char)(*(char **)((char *)monster_groups + (group << 1)))[414] + 48)), 9);
	}
	resume_window_draw(win);
	if (refresh == 1) {
	refresh_window(main_window);
	refresh_window(win);
	}
}
