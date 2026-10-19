extern char g4518[];
extern char g452b[];
extern char pc_class[];
extern int chest_trap;
extern int game_state_arg;
extern int menu_clicked;
extern int pc_level[];
/* Disarm: let the member pick a trap name; returns 1 disarmed, 0 failed safely, -1 trap sprung. */
disarm_chest(member, chest)
{
	int l2;
	int l4;
	char *win;
	int chance;
	int sel;
	int count;
	int traps[16];
	if (chest_trap) goto L6afa;
	return -1;
L6afa:
	win = create_window(20, 19, 20, 5, 25, -5, 0, 0);
	count = 0;
	l2 = 0;
L6b2a:
	if (test_bit((chest + 36), l2) != 1) goto L6b51;
	traps[count] = l2;
	count++;
L6b51:
	l2++;
	if (l2 < 16) goto L6b2a;
	sel = 0;
	set_click_region(0, ((unsigned char)win[2] + 2), ((unsigned char)win[3] + 2), ((unsigned char)win[2] + 19), ((unsigned char)win[3] + 2));
	set_click_region(1, ((unsigned char)win[2] + 1), (unsigned char)win[3], ((unsigned char)win[2] + 1), (unsigned char)win[3]);
	set_click_region(2, ((unsigned char)win[2] + 1), ((unsigned char)win[3] + 4), ((unsigned char)win[2] + 1), ((unsigned char)win[3] + 4));
	set_click_region(3, 255, 0, 0, 0);
L6bf7:
	draw_trap_list(win, sel, 1, count, traps);
	l2 = get_chest_input(20670, 13720);
	if (menu_clicked != 1) goto L6c4c;
	goto L6c3d;
	l2 = 5;
#asm
	db 0ebh,01dh
#endasm
	l2 = 2;
#asm
	db 0ebh,016h
#endasm
	l2 = 4;
#asm
	db 0ebh,00fh
#endasm
L6c3d:
	;
#asm
l6c3d:
	db 03dh,000h,000h,074h,0e6h,03dh,001h,000h,074h,0e8h,03dh,002h,000h,074h,0eah
#endasm
L6c4c:
	switch (l2) {
case 2:
	if (sel <= 0) goto L6c5a;
	sel--;
L6c5a:
	goto L6c74;
case 4:
	if ((sel + 1) >= count) goto L6c68;
	sel++;
L6c68:
	goto L6c74;
	}
L6c74:
	;
#asm
l6c74:
	db 083h,07eh,0feh,005h,074h,003h
#endasm
	goto L6bf7;
L6c7d:
	destroy_window(win, 0);
	if (traps[sel] == chest_trap) goto L6ca2;
	return -1;
L6ca2:
	chance = (((((unsigned char)g452b[(432 * member)] / 2) + ((unsigned char)g4518[(432 * member)] / 2)) + *(int *)((char *)pc_level + (432 * member))) - (game_state_arg << 1));
	if (pc_class[(432 * member)] != 3) goto L6cff;
	chance += ((unsigned char)g4518[(432 * member)] * 3);
	try_skill_gain(member, 15, 3);
	goto L6d33;
L6cff:
	;
#asm
l6cff:
	db 0b8h,0b0h,001h,0f7h,06eh,004h,08bh,0d8h,08ah,087h,087h,045h,03ch,00dh,074h,008h
	db 03ch,004h,074h,004h,03ch,006h,075h,01ch
#endasm
L6d17:
	;
#asm
l6d17:
	db 08ah,087h,018h,045h,02ah,0e4h,0d1h,0e0h,001h,046h,0f8h
#endasm
	try_skill_gain(member, 15, 2);
L6d33:
	if (chance <= 95) goto L6d3e;
	chance = 95;
L6d3e:
	if (chance >= 5) goto L6d49;
	chance = 5;
L6d49:
	if ((l4 = random(100)) >= chance) goto L6d5f;
	return 1;
L6d5f:
	if ((100 - ((100 - chance) / 3)) >= l4) goto L6d7d;
	return -1;
L6d7d:
	return 0;
}
