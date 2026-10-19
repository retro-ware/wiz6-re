#asm
	extrn print_string_:near
#endasm
extern char g019d[];
extern char g019e[];
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
	if ((unsigned)((char *)monster_groups[group] + (44 * i))[34] >= 2) goto L4689;
	if (((char *)monster_groups[group] + (44 * i))[17]) goto L4689;
	if (((char *)monster_groups[group] + (44 * i))[16]) goto L4689;
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
#asm
	db 0b8h,00eh,000h,050h,08bh,046h,0feh,0d1h,0e0h,08bh,0d8h,08bh,09fh,0a8h,043h,080h
	db 0bfh,09dh,001h,001h,075h,005h,0b8h,000h,000h,0ebh,003h
#endasm
L46f9:
	;
#asm
l46f9:
	db 0b8h,001h,000h
#endasm
L46fc:
	;
#asm
l46fc:
	db 0b9h,004h,000h,0d3h,0e0h,08bh,0c8h,051h,08ah,087h,09ch,001h,02ah,0e4h,0b9h,005h
	db 000h,0d3h,0e0h,059h,003h,0c8h,08bh,046h,0feh,0d1h,0e0h,08bh,0d8h,08bh,087h,0b6h
	db 043h,003h,0c1h,050h,0ffh,076h,004h
	call print_string_
	db 083h,0c4h,006h
#endasm
	set_cursor(win, 19, (group - 1));
	put_char(win, (unsigned char)(((unsigned char)g019e[monster_groups[group]] + 48)), 9);
	group++;
L4762:
	if (group <= monster_group_count) goto L4649;
	resume_window_draw(win);
	if (refresh != 1) goto L478a;
	refresh_window(main_window);
	refresh_window(win);
L478a:
	;
}
