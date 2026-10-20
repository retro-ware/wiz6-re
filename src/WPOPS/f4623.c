extern char g019c[];
extern char g019d[];
extern char g019e[];
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
	group = 1;
	goto L4762;
L4649:
	g019e[monster_groups[group]] = 0;
	i = 0;
	goto L468c;
L4660:
	if ((((unsigned)((char *)monster_groups[group] + (44 * i))[34] >= 2) || (((char *)monster_groups[group] + (44 * i))[17])) || (((char *)monster_groups[group] + (44 * i))[16])) goto L4689;
#asm
	db 0feh,087h,09eh,001h
#endasm
L4689:
	i++;
L468c:
	if ((unsigned char)g019d[monster_groups[group]] > i) goto L4660;
	set_cursor(win, 0, (group - 1));
	put_char(win, (unsigned char)(((unsigned char)g019d[monster_groups[group]] + 48)), 6);
	win[6]++;
	print_string(win, ((char *)group_monster_rec[group] + (((g019d[monster_groups[group]] == 1 ? 0 : 1) << 4) + ((unsigned char)g019c[monster_groups[group]] << 5))), 14);
	set_cursor(win, 19, (group - 1));
	put_char(win, (unsigned char)(((unsigned char)g019e[monster_groups[group]] + 48)), 9);
	group++;
L4762:
	if (group <= monster_group_count) goto L4649;
	resume_window_draw(win);
	if (refresh == 1) {
	refresh_window(main_window);
	refresh_window(win);
	}
}
