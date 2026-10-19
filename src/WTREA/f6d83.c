extern int bottom_line_win;
extern int chest_trap;
extern int g501e;
extern int g50c8;
extern int game_state_arg;
extern int main_window;
extern int party_picture_win;
extern int spell_disarm_result;
try_spell_disarm(p4, p6, p8, p10)
{
	int l2;
	int l4;
	defer_window_draw(p4);
	defer_window_draw(p6);
	defer_window_draw(main_window);
	defer_window_draw(bottom_line_win);
	clear_window(party_picture_win, 0);
	refresh_all_windows();
	if ((l4 = (((p10 * 10) + 50) - (game_state_arg * 5))) <= 95) goto L6de6;
	l4 = 95;
L6de6:
	if (l4 >= 5) goto L6df1;
	l4 = 5;
L6df1:
	l2 = random(100);
	if (l2 >= l4) goto L6e3d;
	chest_trap = 0;
	spell_disarm_result = 1;
	g501e = 1;
	get_message(5234, 20590);
	show_centered_line(party_picture_win, g50c8, 20590, 1, 7);
	goto L6e8b;
L6e3d:
	if ((100 - ((100 - l4) / 3)) >= l2) goto L6e5d;
	spell_disarm_result = -1;
	goto L6e8b;
L6e5d:
	spell_disarm_result = 0;
	get_message(5235, 20590);
	show_centered_line(party_picture_win, g50c8, 20590, 1, 7);
L6e8b:
	resume_window_draw(p4);
	resume_window_draw(p6);
	resume_window_draw(main_window);
	resume_window_draw(bottom_line_win);
}
