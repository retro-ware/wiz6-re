extern char g00cc[];
extern char g00e2[];
extern char pc_item_count[];
extern char pc_item_qty[];
extern char pc_item_type[];
extern int menu_clicked;
extern int pc_item_id[];
choose_combat_item(win, member)
{
	char *l2;
	char *l4;
	int l6;
	int pos;
	int on_cancel;
	char x10[44];
	int l56;
	char x56[26];
	int item;
	char l264[180];
	char x264[8];
	int l274;
	int l276;
	int l278;
	int l280;
	int l282;
	register int rsi;
	l2 = create_window(0, 19, 19, 5, 12, -4, 0, 0);
	fill_window(l2, 32, 3, 0);
	l4 = create_window(20, 19, 20, 5, 20, -5, 0, 0);
	fill_window(l4, 32, 3, 0);
	defer_window_draw(l2);
	set_cursor(l2, 2, 1);
	print_message(3504, l2, 18);
	resume_window_draw(l2);
	draw_combat_list_box(l4, 0);
	refresh_all_windows();
	pos = 0;
	goto L7316;
L7281:
	access_scenario_record(1, &item, *(int *)((char *)pc_item_id + ((432 * member) + (pos << 3))), 0);
	strcpy(((pos << 4) + ((char *)l264 + 20)), &item);
	if (g00cc[(unsigned char)pc_item_type[((432 * member) + (pos << 3))]] != 1) goto L7304;
	*(int *)(l264 + (pos << 1)) = (unsigned char)pc_item_qty[((432 * member) + (pos << 3))];
	goto L7313;
L7304:
	*(int *)(l264 + (pos << 1)) = 0;
L7313:
	pos++;
L7316:
	if ((unsigned char)pc_item_count[(432 * member)] > pos) goto L7281;
	get_message(3505, &l274);
	pos = 0;
	on_cancel = 0;
	set_click_region(0, ((unsigned char)l4[2] + 2), ((unsigned char)l4[3] + 2), ((unsigned char)l4[2] + 19), ((unsigned char)l4[3] + 2));
	set_click_region(1, ((unsigned char)l4[2] + 1), (unsigned char)l4[3], ((unsigned char)l4[2] + 1), (unsigned char)l4[3]);
	set_click_region(2, ((unsigned char)l4[2] + 1), ((unsigned char)l4[3] + 4), ((unsigned char)l4[2] + 1), ((unsigned char)l4[3] + 4));
	set_click_region(3, ((unsigned char)l2[2] + 7), ((unsigned char)l2[3] + 3), ((strlen(&l274) + (unsigned char)l2[2]) + 6), ((unsigned char)l2[3] + 3));
	set_click_region(4, 255, 0, 0, 0);
L741b:
	if (on_cancel != 1) goto L7463;
	set_cursor(l2, 7, 3);
	print_string(l2, &l274, -3);
	draw_item_list(l4, member, pos, 0, ((char *)l264 + 20), l264);
	goto L74a3;
L7463:
	set_cursor(l2, 7, 3);
	print_string_hi(l2, &l274, 3);
	draw_item_list(l4, member, pos, 1, ((char *)l264 + 20), l264);
L74a3:
	l6 = get_combat_input(17270, 13720);
	if (menu_clicked != 1) goto L74f2;
	goto L74de;
	l6 = 5;
#asm
	db 0ebh,02eh
#endasm
	l6 = 2;
#asm
	db 0ebh,027h
#endasm
	l6 = 4;
#asm
	db 0ebh,020h
#endasm
	on_cancel = 1;
	l6 = 5;
#asm
	db 0ebh,014h
#endasm
L74de:
	;
#asm
l74de:
	db 03dh,000h,000h,074h,0dah,03dh,001h,000h,074h,0dch,03dh,002h,000h,074h,0deh,03dh
	db 003h,000h,074h,0e0h
#endasm
L74f2:
	switch (l6) {
case 1:
	if (on_cancel == 1) goto L7502;
	on_cancel = 1;
L7502:
	goto L7565;
case 2:
	if (on_cancel != 1) goto L7511;
	on_cancel = 0;
	goto L751a;
L7511:
	if (pos <= 0) goto L751a;
	pos--;
L751a:
	goto L7565;
case 3:
	if (on_cancel != 1) goto L7527;
	on_cancel = 0;
L7527:
	goto L7565;
case 4:
	if (on_cancel != 1) goto L7536;
	on_cancel = 0;
	goto L754f;
L7536:
	if ((unsigned char)pc_item_count[(432 * member)] <= (pos + 1)) goto L754f;
	pos++;
L754f:
	goto L7565;
	}
L7565:
	if (l6 != 5) goto L741b;
	destroy_window(l2, 0);
	destroy_window(l4, 0);
	if (on_cancel != 1) goto L7596;
	return -1;
L7596:
	access_scenario_record(1, &item, *(int *)((char *)pc_item_id + ((432 * member) + (pos << 3))), 0);
	if (!l56) goto L7690;
	l278 = (l56 / 256);
	l276 = (l56 % 256);
	if (g00e2[(l276 * 6)] != 1) goto L7642;
	fill_window(win, 32, 3, 0);
	refresh_all_windows();
	rsi = (44 * member);
#asm
	db 08bh,01eh,0a8h,043h,0c6h,040h,01fh,000h
#endasm
	l282 = select_party_member(3610);
	if (l282 != -1) goto L762b;
	return -1;
L762b:
	;
#asm
l762b:
	db 08ah,086h,0e6h,0feh,050h,0b8h,02ch,000h,0f7h,06eh,006h,08bh,0f0h,08bh,01eh,0a8h
	db 043h,058h,088h,040h,020h
#endasm
	goto L7690;
L7642:
	if (g00e2[(l276 * 6)] != 2) goto L7690;
	l280 = select_monster_group(win, 3604, 3, 0);
	if (l280 != -1) goto L767b;
	return -1;
L767b:
	;
#asm
l767b:
	db 08ah,086h,0e8h,0feh,050h,0b8h,02ch,000h,0f7h,06eh,006h,08bh,0f0h,08bh,01eh,0a8h
	db 043h,058h,088h,040h,01fh
#endasm
L7690:
	return pos;
}
