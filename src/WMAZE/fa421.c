extern int bottom_line_win;
extern int event_screen_dirty;
extern int g522a;
extern int main_window;
extern int message_delay;
show_member_notice(p4)
{
	char x0[78];
	int l80;
	event_screen_dirty = 1;
	defer_window_draw(main_window);
	defer_window_draw(bottom_line_win);
	g522a = create_window(0, 19, 40, 5, 20, -1, 0, 0);
	refresh_all_windows();
	get_message(2040, &l80);
	replace_char_with_string(&l80, ((432 * p4) + 17384), 94);
	set_cursor(g522a, (20 - ((strlen(&l80) + 1) / 2)), 1);
	print_string(g522a, &l80, 5);
	play_sound(0);
	wait_animating_m(message_delay);
	destroy_window(g522a, 0);
	resume_window_draw(main_window);
	resume_window_draw(bottom_line_win);
}
