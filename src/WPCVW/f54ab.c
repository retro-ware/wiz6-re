extern char g450c[];
extern char g450d[];
extern char g450e[];
extern char g450f[];
extern char g4510[];
extern char g4512[];
extern char g4513[];
extern char pc_class[];
extern char pc_condition[];
extern char pc_race[];
extern char pc_rank[];
extern char pc_sex[];
extern char pc_stats[];
extern int g0526[];
extern int g053a;
extern int g053c;
extern int g0544;
extern int g43f6[];
extern int g43f8[];
extern int g43fa[];
extern int g43fe[];
extern int g440e[];
extern int member_portrait[];
extern int pc_age_days[];
extern int pc_carried[];
extern int pc_exp[];
extern int pc_gold[];
extern int pc_hp[];
extern int pc_hp_max[];
extern int pc_level[];
extern int pc_max_load[];
extern int pc_stamina[];
extern int pc_stamina_max[];
/* Draw the stats panel of the character sheet: name, race, class, age, level, exp, gold, stats, HP, stamina. */
draw_stats_panel(win, member)
char *win;
{
	int l2;
	int l4;
	char x4[78];
	int l84;
	int l86;
	char x86[2];
	int l90;
	char x90[12];
	register int rsi;
	register int rdi;
	l86 = ((member_portrait[member] * 9) + 72);
	for (rsi = 0; rsi < 3; rsi++) {
	set_cursor(win, 1, (rsi + 1));
	for (rdi = 0; rdi < 3; rdi++) {
	put_char_hi(win, (unsigned char)((((rsi * 3) + l86) + rdi)), 2);
	}
	}
	print_at(win, 4, 1, ((432 * member) + 17384), 5);
	set_cursor(win, 13, 1);
	get_message(((unsigned char)pc_sex[(432 * member)] + 140), &l84);
	put_char(win, (unsigned char)*(char *)&l84, 1);
	put_char(win, 45, 1);
	print_msg(((unsigned char)pc_race[(432 * member)] + 100), win, 1);
	set_cursor(win, 4, 2);
	put_char(win, 30, 5);
	print_int(win, (int)(*(long *)((char *)pc_age_days + (432 * member)) / 365L), 3, 14);
	win[6]++;
	if (((test_bit(((432 * member) + 17792), 0) != 1) && (test_bit(((432 * member) + 17792), 1) != 1)) && (test_bit(((432 * member) + 17792), 2) != 1)) goto L564a;
	put_char(win, 10, 5);
L564a:
	print_msg_at(((unsigned char)pc_class[(432 * member)] + 120), win, 13, 2, 1);
	set_cursor(win, 4, 3);
	put_char(win, 31, 5);
	print_int(win, *(int *)((char *)g440e + (432 * member)), 3, 12);
	print_msg_at(200, win, 13, 3, 8);
	win[6]++;
	print_int(win, *(int *)((char *)pc_level + (432 * member)), 3, 9);
	print_msg_at(201, win, 25, 1, 11);
	get_message(((((unsigned char)pc_class[(432 * member)] * 10) + (unsigned char)pc_rank[(432 * member)]) + 800), 21902);
	set_cursor(win, (39 - strlen(21902)), 1);
	print_string(win, 21902, 3);
	print_msg_at(202, win, 25, 2, 14);
	win[6]++;
	print_long(win, *(int *)((char *)pc_exp + (432 * member)), *(int *)((char *)g43f6 + (432 * member)), 10, 6);
	print_msg_at(203, win, 25, 3, 14);
	win[6]++;
	print_long(win, *(int *)((char *)g43f8 + (432 * member)), *(int *)((char *)g43fa + (432 * member)), 10, 6);
	for (rsi = 0; rsi < 8; rsi++) {
	print_msg_at((rsi + 204), win, 1, (rsi + 5), 5);
	win[6]++;
	print_int(win, (unsigned char)pc_stats[((432 * member) + rsi)], 2, 1);
	}
	print_msg_at(212, win, 10, 5, 4);
	win[6]++;
	print_int(win, *(int *)((char *)pc_hp + (432 * member)), 4, 6);
	put_char(win, 47, 8);
	set_cursor(win, 14, 6);
	print_int(win, *(int *)((char *)pc_hp_max + (432 * member)), 4, 6);
	print_msg_at(213, win, 10, 8, 4);
	win[6] += 2;
	if (((l4 = ((*(int *)((char *)pc_stamina + (432 * member)) * 100) / *(int *)((char *)pc_stamina_max + (432 * member)))) >= 1) || (*(int *)((char *)pc_stamina + (432 * member)) <= 0)) goto L58fc;
	l4 = 1;
L58fc:
	print_int(win, l4, 3, 6);
	put_char(win, 37, 4);
	print_msg_at(214, win, 10, 9, 4);
	win[6]++;
	l4 = (unsigned char)win[6];
	l2 = g0526[(unsigned char)pc_condition[(432 * member)]];
	l2 = ((!l2) && ((unsigned)g450c[(432 * member)] > 0) ? 1 : l2);
	l2 = ((l2 < 2) && ((unsigned)g450d[(432 * member)] > 0) ? 2 : l2);
	if (!l2) goto L59bf;
	put_char_hi(win, (unsigned char)((l2 + 47)), 1);
L59bf:
	if ((unsigned)g4513[(432 * member)] <= 0) goto L59e4;
	put_char_hi(win, (unsigned char)((g0544 + 47)), 1);
L59e4:
	if ((unsigned)g450e[(432 * member)] <= 0) goto L5a09;
	put_char_hi(win, (unsigned char)((g053a + 47)), 1);
L5a09:
	if ((((unsigned)g450f[(432 * member)] <= 0) && ((unsigned)g4510[(432 * member)] <= 0)) && ((unsigned)g4512[(432 * member)] <= 0)) goto L5a3c;
	put_char_hi(win, (unsigned char)((g053c + 47)), 1);
L5a3c:
	if ((unsigned char)win[6] != l4) goto L5a5d;
	put_char_hi(win, (unsigned char)((g0526[0] + 47)), 1);
L5a5d:
	print_msg_at(215, win, 10, 11, 13);
	win[6]++;
	print_long(win, *(int *)((char *)pc_gold + (432 * member)), *(int *)((char *)g43fe + (432 * member)), 7, 5);
	calc_carried_weight(member);
	get_load_category(member);
#asm
	db 056h,057h,08bh,0f0h,08dh,07eh,09ah,08ch,0d9h,08eh,0c1h,0b9h,007h,000h,0f3h,0a5h
	db 05fh,05eh,08ah,046h,0a4h,050h,0b8h,0b0h,001h,0f7h,06eh,006h,08bh,0d8h,058h,088h
	db 087h,08dh,045h
#endasm
	l4 = l90;
	print_msg_at(216, win, 10, 12, (l4 == 9 ? 8 : l4));
	print_int(win, (*(int *)((char *)pc_carried + (432 * member)) / 10), 3, l4);
	put_char(win, 47, (l4 == 9 ? 8 : l4));
	print_int(win, (*(int *)((char *)pc_max_load + (432 * member)) / 10), 3, l4);
	put_glyph_at(win, 1, 14, 35);
	put_glyph_at(win, 1, 16, 36);
	put_glyph_at(win, 1, 18, 37);
	put_glyph_at(win, 11, 14, 38);
	put_glyph_at(win, 11, 16, 39);
	put_glyph_at(win, 11, 18, 40);
	draw_spell_points(win, member);
}
