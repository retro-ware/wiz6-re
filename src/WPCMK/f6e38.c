extern char g00df[];
extern char g00e0[];
extern char g00e3[];
extern char spell_picks_left[];
extern char spell_table[];
extern int char_spell_points[];
extern int char_spell_points_max[];
choose_starting_spell(sheet_win, win, category)
{
	int l2;
	int l4;
	int spell;
	int l8;
	int class_bit;
	int l12;
	char x12[10];
	int saved_known;
	int saved_sp[6];
	switch (category) {
case 0:
	class_bit = 8;
	l12 = 28;
	goto L6e87;
case 1:
	class_bit = 4;
	l12 = 26;
	goto L6e87;
case 3:
	class_bit = 2;
	l12 = 27;
	goto L6e87;
case 2:
	class_bit = 1;
	l12 = 25;
	goto L6e87;
	}
L6e87:
	movmem(22008, &saved_known, 12);
	setmem(22008, 12, 0);
	l8 = 1;
	l4 = 0;
	l2 = 0;
L6eba:
	if (((!(class_bit & (unsigned char)g00e3[(l2 * 6)])) || ((unsigned char)g00df[(l2 * 6)] > l8)) || (test_bit(&saved_known, l2))) goto L6f02;
	set_bit(22008, l2, 1);
	l4++;
L6f02:
	l2++;
	if (l2 < 82) goto L6eba;
	if (l4) goto L6f29;
	movmem(&saved_known, 22008, 12);
	return;
L6f29:
	fill_window(win, 32, 3, 0);
	defer_window_draw(win);
	set_cursor(win, 1, 1);
	print_message(703, win, 18);
	resume_window_draw(win);
	for (l2 = 0; l2 < 6; l2++) {
	saved_sp[l2] = *(int *)((char *)char_spell_points + (l2 << 2));
	*(int *)((char *)char_spell_points + (l2 << 2)) = 999;
	}
L6fa3:
	if ((spell = select_spell(sheet_win, win, 0)) != -1) goto L6fbd;
	goto L6fa3;
L6fbd:
	movmem(&saved_known, 22008, 12);
	for (l2 = 0; l2 < 6; l2++) {
	*(int *)((char *)char_spell_points + (l2 << 2)) = saved_sp[l2];
	}
	set_bit(22008, spell, 1);
	l2 = (((unsigned char)g00df[(spell * 6)] << 1) + 1);
	l4 = (unsigned char)spell_table[(spell * 6)];
	if ((unsigned char)g00e0[(spell * 6)] > (*(int *)((char *)char_spell_points_max + (l4 << 2)) + l2)) {
	l2 = ((unsigned char)g00e0[(spell * 6)] - *(int *)((char *)char_spell_points_max + (l4 << 2)));
	}
	*(int *)((char *)char_spell_points_max + (l4 << 2)) += l2;
	*(int *)((char *)char_spell_points + (l4 << 2)) += l2;
	spell_picks_left[category]--;
	draw_spell_points(sheet_win);
	return;
}
