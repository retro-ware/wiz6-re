extern char g4517[];
extern char g451b[];
extern char g453c[];
extern char g4545[];
extern char g50f2;
extern char g5142;
extern char pc_condition[];
extern char pc_stats[];
extern int g50c8;
extern int game_state_arg;
extern int message_delay;
extern int party_count;
extern int party_picture_win;
extern int pc_hp[];
extern int pc_hp_max[];
/* Apply the effects of a sprung chest trap (damage, poison, stat loss, teleport...) to the party. */
spring_trap(trap, member)
{
	char x0[78];
	int l80;
	int i;
	clear_window(party_picture_win, 0);
	refresh_all_windows();
	if (trap) goto L5f92;
	get_message(5228, &l80);
	show_centered_line(party_picture_win, g50c8, &l80, 1, 7);
	return;
L5f92:
	switch (trap) {
case 1:
	show_trap_effect(0, 15);
	for (i = 0; i < party_count; i++) {
	trap_damage_member(i, (game_state_arg + 1), 8);
	}
	goto L66ae;
case 2:
	show_trap_effect(0, 16);
	for (i = 0; i < party_count; i++) {
	inflict_status(i, 5253, 10, 3, 10, 10, 50);
	}
	goto L66ae;
case 3:
	show_trap_effect(0, -1);
	goto L66ae;
case 4:
	show_trap_effect(member, 6);
	trap_damage_member(member, 1, 6);
	inflict_status(member, 5255, 0, 5, (game_state_arg + 2), 10, 50);
	goto L66ae;
case 5:
	show_trap_effect(0, 2);
	i = 0;
	goto L6167;
L607b:
	if (random(100) <= (unsigned char)g453c[(432 * i)]) goto L6164;
	switch (random(6)) {
case 0:
	trap_damage_member(i, (game_state_arg + 1), 8);
	goto L6164;
case 1:
	inflict_status(i, 5254, 2, 4, 10, 10, 50);
	goto L6164;
case 2:
	inflict_status(i, 5252, 9, 2, 10, 10, 50);
	goto L6164;
case 3:
	inflict_status(i, 5253, 4, 3, 10, 10, 50);
	goto L6164;
case 4:
	inflict_condition(i, 5260, 11, 3);
	goto L6164;
case 5:
	inflict_condition(i, 5263, 11, 2);
	goto L6164;
	}
L6164:
	i++;
L6167:
	if (i < party_count) goto L607b;
	goto L66ae;
case 6:
	show_trap_effect(0, 16);
	i = 0;
	goto L62b0;
L618c:
	inflict_status(i, 5265, 11, 9, 10, 10, 50);
	if (((random(100) > ((unsigned char)g4545[(432 * i)] + 75)) && ((unsigned)pc_stats[(432 * i)] > 3)) && ((unsigned)pc_condition[(432 * i)] < 3)) {
	pc_stats[(432 * i)]--;
	get_message(5266, &l80);
	get_message(5267, 20722);
	g5142 = 0;
	print_member_message(i, &l80, 20722, 20802, 1, 5, 5, 0);
	wait_animating(message_delay);
	} else {
	if (((random(100) > ((unsigned char)g4545[(432 * i)] + 75)) && ((unsigned)g4517[(432 * i)] > 3)) && ((unsigned)pc_condition[(432 * i)] < 3)) {
	g4517[(432 * i)]--;
	get_message(5266, &l80);
	get_message(5268, 20722);
	g5142 = 0;
	print_member_message(i, &l80, 20722, 20802, 1, 5, 5, 0);
	wait_animating(message_delay);
	}
	}
	i++;
L62b0:
	if (i < party_count) goto L618c;
	goto L66ae;
case 7:
	show_trap_effect(0, 16);
	goto L66ae;
case 8:
	show_trap_effect(0, 2);
	i = 0;
	goto L639a;
L62e6:
	if ((random(100) > ((unsigned char)g4545[(432 * i)] + 50)) && ((unsigned)pc_condition[(432 * i)] < 3)) {
	*(int *)((char *)pc_hp_max + (432 * i)) -= (random(4) + 1);
	if (*(int *)((char *)pc_hp_max + (432 * i)) < 1) {
	*(int *)((char *)pc_hp_max + (432 * i)) = 1;
	}
	if (*(int *)((char *)pc_hp + (432 * i)) > *(int *)((char *)pc_hp_max + (432 * i))) {
	*(int *)((char *)pc_hp + (432 * i)) = *(int *)((char *)pc_hp_max + (432 * i));
	}
	get_message(5266, &l80);
	get_message(5269, 20722);
	g5142 = 0;
	print_member_message(i, &l80, 20722, 20802, 1, 5, 5, 0);
	wait_animating(message_delay);
	}
	i++;
L639a:
	if (i < party_count) goto L62e6;
	goto L66ae;
case 9:
	show_trap_effect(0, -1);
	goto L66ae;
case 10:
	show_trap_effect(0, 16);
	for (i = 0; i < party_count; i++) {
	inflict_condition(i, 5263, 11, 2);
	}
	goto L66ae;
case 11:
	show_trap_effect(0, 4);
	goto L66ae;
case 12:
	do {
	i = random(party_count);
	} while ((unsigned)pc_condition[(432 * i)] >= 3);
	show_trap_effect(i, 4);
	get_message(5270, &l80);
	clear_window(party_picture_win, 1);
	print_centered(party_picture_win, &l80, g50c8, 5);
	play_sound(0);
	wait_animating(message_delay);
	get_message(5271, &l80);
	g50f2 = 0;
	g5142 = 0;
	print_member_message(i, &l80, 20722, 20802, 1, 6, 0, 0);
	wait_animating(message_delay);
	trap_damage_member(i, (game_state_arg + 1), 8);
	if (((unsigned)pc_condition[(432 * i)] >= 3) || (random(21) <= (unsigned char)g451b[(432 * i)])) goto L657e;
	get_message(5272, &l80);
	g50f2 = 0;
	g5142 = 0;
	print_member_message(i, &l80, 20722, 20802, 1, 6, 0, 0);
	wait_animating(message_delay);
	trap_damage_member(i, ((game_state_arg << 1) + 2), 8);
	if (random(21) <= (unsigned char)g451b[(432 * i)]) goto L657e;
	inflict_condition(i, 5273, 11, 3);
L657e:
	get_message(5274, &l80);
	clear_window(party_picture_win, 1);
	print_centered(party_picture_win, &l80, g50c8, 5);
	play_sound(0);
	wait_animating(message_delay);
	goto L66ae;
case 13:
	show_trap_effect(0, 3);
	for (i = 0; i < party_count; i++) {
	trap_damage_member(i, (game_state_arg + 1), 8);
	inflict_status(i, 5275, 5, 8, 10, 10, 50);
	}
	goto L66ae;
case 14:
	show_trap_effect(0, 0);
	for (i = 0; i < party_count; i++) {
	trap_damage_member(i, (game_state_arg + 1), 10);
	}
	goto L66ae;
case 15:
	show_trap_effect(0, 4);
	for (i = 0; i < party_count; i++) {
	inflict_condition(i, 5260, 11, 3);
	}
	goto L66ae;
	}
L66ae:
	return;
}
