#asm
	extrn access_scenario_record_:near
#endasm
extern char g4550[];
extern char g51cf;
extern char pc_item_flags[];
extern int g5274;
extern int g527a;
extern int pc_gold[];
extern int pc_item_id[];
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
	char x31[54];
	long l89;
	char x89[17];
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
	if (*(long *)(l31 + 0) < 0L) goto Lacd9;
	if (*(long *)((char *)pc_gold + (432 * member)) < *(long *)(l31 + 0)) goto Lacd9;
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
#asm
	db 0b8h,000h,000h,050h,0ffh,076h,0f8h,08dh,046h,097h,050h,0b8h,001h,000h,050h
	call access_scenario_record_
	db 083h,0c4h,008h,08ah,046h,0d2h,02ah,0e4h,0a9h,002h,000h,074h,019h,08bh,046h,0f8h
	db 03bh,006h,0bch,051h,074h,010h,03bh,006h,0beh,051h,074h,00ah
#endasm
	fa645(1529);
	return;
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
