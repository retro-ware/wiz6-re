extern char trap_guess_letters[];
extern int bottom_line_win;
extern int chest_trap;
extern int g501e;
extern int g5024;
extern int g5026;
extern int g50c8;
extern int g5194[];
extern int main_window;
extern int party_count;
extern int party_picture_win;
extern int spell_disarm_result;
extern int trap_guess_len;
/* Chest menu: open, inspect, disarm, cast spell; returns 0 when the chest is resolved. */
handle_chest(chest)
char *chest;
{
	int l2;
	char x2[2];
	int member;
	int l8;
	int win;
	int trap_win;
	char x12[8];
	int l22;
	int tried[11];
	char x44[78];
	int l124;
	g5026 = 0;
	switch ((unsigned char)chest[39]) {
case 0:
	g5024 = -1;
	goto L9142;
case 1:
	g5024 = 0;
	goto L9142;
case 2:
	g5024 = 1;
	goto L9142;
	}
L9142:
	pick_chest_trap(chest);
	resume_window_draw(main_window);
	resume_window_draw(bottom_line_win);
	f0a42(bottom_line_win, 0);
	win = create_window(0, 19, 19, 5, 20, -4, 0, 0);
	fill_window(win, 32, 3, 0);
	trap_win = create_window(20, 19, 20, 5, 21, -5, 0, 0);
	fill_window(trap_win, 32, 3, 0);
	defer_window_draw(trap_win);
	set_cursor(trap_win, 4, 0);
	print_message(5226, trap_win, 18);
	put_glyph_c1(trap_win, 0, 1, 17);
	put_glyph_c1(trap_win, 19, 1, 19);
	put_glyph_c1(trap_win, 0, 3, 6);
	put_glyph_c1(trap_win, 19, 3, 8);
	for (l2 = 1; l2 < 19; l2++) {
	put_glyph_c1(trap_win, l2, 1, 18);
	put_glyph_c1(trap_win, l2, 3, 7);
	}
	put_glyph_c1(trap_win, 0, 2, 4);
	put_glyph_c1(trap_win, 19, 2, 5);
	clear_window_area(trap_win, 1, 2, 18, 2);
	resume_window_draw(trap_win);
	trap_guess_len = 0;
	for (l2 = 0; l2 < 20; l2++) {
	trap_guess_letters[l2] = 0;
	g5194[l2] = 0;
	}
	l2 = 0;
	goto L9317;
L9306:
	tried[l2] = 0;
	l2++;
L9317:
	if (l2 < party_count) goto L9306;
	l2 = 0;
L9325:
	tried[(l2 + 6)] = 1;
	l2++;
	if (l2 <= 4) goto L9325;
	l22 = -1;
L9343:
	print_chest_prompt(5200, 2);
	fill_window(win, 32, 3, 0);
	refresh_all_windows();
	l8 = chest_menu_select(win, 5201, ((char *)tried + 12), 2, 1, 10, 3, 5, 0);
	switch (l8) {
case 2:
	if (((member = choose_party_member(5225, 0)) == -1) || (!is_member_able(member))) goto L93dd;
	g501e = 1;
	close_chest_windows(win, trap_win);
	spring_trap(chest_trap, member);
	return 0;
L93dd:
	goto L95fb;
case 0:
	if ((member = choose_party_member(5223, 0)) == -1) goto L9431;
	if (tried[member]) goto L9429;
	if (!is_member_able(member)) goto L9427;
	inspect_chest(trap_win, member);
	tried[member] = 1;
L9427:
	goto L9431;
L9429:
	play_sound(0);
L9431:
	goto L95fb;
case 1:
	member = choose_party_member(5220, 0);
	if ((member == -1) || (!is_member_able(member))) goto L954e;
	l2 = disarm_chest(member, chest);
	defer_window_draw(win);
	defer_window_draw(trap_win);
	defer_window_draw(main_window);
	defer_window_draw(bottom_line_win);
	clear_window(party_picture_win, 0);
	refresh_all_windows();
	if (l2 != 1) goto L94dd;
	g501e = 1;
	get_message(5229, &l124);
	show_centered_line(party_picture_win, g50c8, &l124, 1, 7);
	close_chest_windows(win, trap_win);
	return 0;
L94dd:
	if (l2 != -1) goto L9508;
	g501e = 1;
	close_chest_windows(win, trap_win);
	spring_trap(chest_trap, member);
	return 0;
L9508:
	get_message(5230, &l124);
	show_centered_line(party_picture_win, g50c8, &l124, 1, 7);
	resume_window_draw(win);
	resume_window_draw(trap_win);
	resume_window_draw(main_window);
	resume_window_draw(bottom_line_win);
L954e:
	goto L95fb;
case 3:
	if (((member = choose_party_member(5224, 0)) == -1) || (!is_member_able(member))) goto L95d0;
	spell_disarm_result = 0;
	cast_spell_on_chest(win, trap_win, member);
	if (spell_disarm_result != 1) goto L95a4;
	g501e = 1;
	close_chest_windows(win, trap_win);
	return 0;
L95a4:
	if (spell_disarm_result != -1) goto L95d0;
	g501e = 1;
	close_chest_windows(win, trap_win);
	spring_trap(chest_trap, member);
	return 0;
L95d0:
	goto L95fb;
case 4:
	close_chest_windows(win, trap_win);
	return -1;
	}
L95fb:
	goto L9343;
#asm
	db 0e9h,0d8h,0fdh
#endasm
}
