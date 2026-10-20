extern char g00df[];
extern char g00e0[];
extern char g450c[];
extern char spell_table[];
extern int bottom_line_win;
extern int g4fb0;
extern int g502a;
extern int g502e;
extern int g506a;
extern int g51b6;
extern int main_window;
extern int pc_spell_pts[];
extern int pc_stamina[];
/* Cast a spell for member: choose it, pay spell points and stamina, apply it. */
do_cast_spell(member)
{
	int win;
	int spell;
	int level;
	get_message(2001, 20668);
	g506a = 0;
	defer_window_draw(g4fb0);
	win = create_window(0, 19, 19, 5, 10, -4, 0, 0);
	fill_window(win, 32, 3, 0);
	spell = choose_spell(win, member);
	g502e = -1;
	if (spell == -1) goto L8052;
	level = (spell / 256);
	spell = (spell % 256);
	*(int *)((char *)pc_spell_pts + ((432 * member) + ((unsigned char)spell_table[(spell * 6)] << 2))) -= ((unsigned char)g00e0[(spell * 6)] * level);
	f6054(member, spell, level, g51b6);
	*(int *)((char *)pc_stamina + (432 * member)) -= ((random(level) + (unsigned char)g00df[(spell * 6)]) + level);
	if (*(int *)((char *)pc_stamina + (432 * member)) >= 0) goto L8052;
	*(int *)((char *)pc_stamina + (432 * member)) = 0;
	g450c[(432 * member)] = (char)(random(6) + 6);
L8052:
	destroy_window(win, 0);
	resume_window_draw(g4fb0);
	erase_window(main_window, 0);
	f0a42(bottom_line_win, 0);
	if (g502a > 0) {
	show_result_message(g502a);
	}
}
