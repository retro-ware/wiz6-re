extern char g4550[];
extern char g51cf;
extern char pc_item_flags[];
extern int g51be;
extern int g5274;
extern int g527a;
extern int pc_gold[];
extern int pc_item_id[];
extern int trap_guess_letters;
extern long g51c0;
/* Ask an amount and give that gold to the NPC, raising its friendliness (g4550). */
do_npc_give_gold(win, member)
char *win;
{
	int l2;
	int l4;
	int l6;
	int l8;
	char x8[5];
	char l14;
	char x14[7];
	int l23;
	int l25;
	int l27;
	char l31[4];
	char x31[14];
	char l46;
	char x46[39];
	long l89;
	char x89[14];
	int l105;
	char x105[1];
	l4 = 0;
Lab35:
	fill_window(win, 32, 3, 0);
	defer_window_draw(win);
	set_cursor(win, 5, 1);
	print_message(1581, win, 18);
	set_cursor(win, 2, 3);
	print_message(1582, win, 18);
	l25 = (unsigned char)win[6];
	l27 = (unsigned char)win[7];
	setmem(&l23, 9, 32);
	l14 = 0;
	print_string(win, &l23, 1);
	resume_window_draw(win);
	refresh_all_windows();
	set_cursor(win, l25, l27);
	npc_input_line(win, &l23, 8, 5, 1);
	*(int *)(l31 + (0 + 2)) = 0;
	*(int *)(l31 + 0) = 0;
	if (!*(char *)&l23) goto Laceb;
	*(long *)(l31 + 0) = (long)atol(&l23);
	if ((*(long *)(l31 + 0) < 0L) || (*(long *)((char *)pc_gold + (432 * member)) < *(long *)(l31 + 0))) goto Lacd9;
	*(long *)((char *)pc_gold + (432 * member)) -= *(long *)(l31 + 0);
	g51c0 += *(long *)(l31 + 0);
	if ((l2 = (int)((long)g4550[((432 * member) + g5274)] + ((*(long *)(l31 + 0) / 10L) / (long)(unsigned char)g51cf))) <= 100) goto Lacc0;
	l2 = 100;
Lacc0:
	g4550[((432 * member) + g5274)] = *(char *)&l2;
	goto Laceb;
Lacd9:
	*(int *)(l31 + (0 + 2)) = -1;
	*(int *)(l31 + 0) = -1;
	play_sound(0);
Laceb:
	if (*(long *)(l31 + 0) != -1L) goto Lacfa;
	goto Lab35;
Lacfa:
	f5078(member, g527a);
	f7f76(member, 2, (int)(*(long *)(l31 + 0) / 256L), (unsigned char)((int)(*(long *)(l31 + 0) % 256L)), 0);
	l6 = npc_choose_member_item(win, member, 1580, 0);
	if (l6 == -1) goto Lae70;
	if (!((unsigned char)pc_item_flags[((432 * member) + (l6 << 3))] & 1)) goto Lad83;
	fa645(1528);
	return;
Lad83:
	l8 = *(int *)((char *)pc_item_id + ((432 * member) + (l6 << 3)));
	access_scenario_record(1, &l105, l8, 0);
	if (((!((unsigned char)l46 & 2)) || (l8 == trap_guess_letters)) || (l8 == g51be)) goto Ladd5;
	fa645(1529);
	return;
Ladd5:
	if ((l2 = (int)((long)g4550[((432 * member) + g5274)] + ((l89 / 20L) / (long)(unsigned char)g51cf))) <= 100) goto Lae20;
	l2 = 100;
Lae20:
	g4550[((432 * member) + g5274)] = *(char *)&l2;
	f6835(member, l6);
	f5078(member, g527a);
	fa645(1504);
	l4 = f7f76(member, 1, l8, 0, 0);
Lae70:
	return l4;
}
