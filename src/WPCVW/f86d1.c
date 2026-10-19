extern char g00df[];
extern char g00e0[];
extern char g450c[];
extern char spell_table[];
extern int g553c;
extern int g578e;
extern int pc_spell_pts[];
extern int pc_stamina[];
/* Cast-a-spell menu: pick a spell, pay spell points and stamina, then cast it. */
do_cast_menu(p4, p6, p8, p10)
{
	int l2;
	int l4;
	int l6;
	fill_window(p6, 32, 3, 0);
	defer_window_draw(p6);
	set_cursor(p6, 8, 1);
	print_message(701, p6, 18);
	resume_window_draw(p6);
	if (p10) goto L873e;
	choose_spell(p4, p6, p8, 0);
	g553c = -1;
	goto L8813;
L873e:
	l2 = choose_spell(p4, p6, p8, 1);
	if (l2 == -1) goto L8813;
	g553c = -1;
	l6 = (l2 / 256);
	l4 = (l2 % 256);
	*(int *)((char *)pc_spell_pts + ((432 * p8) + ((unsigned char)spell_table[(l4 * 6)] << 2))) -= ((unsigned char)g00e0[(l4 * 6)] * l6);
	*(int *)((char *)pc_stamina + (432 * p8)) -= ((random(l6) + (unsigned char)g00df[(l4 * 6)]) + l6);
	if (*(int *)((char *)pc_stamina + (432 * p8)) >= 0) goto L87fa;
	*(int *)((char *)pc_stamina + (432 * p8)) = 0;
	g450c[(432 * p8)] = (char)(random(6) + 6);
L87fa:
	cast_spell(p8, l4, l6, g578e, p4, p6);
L8813:
	;
}
