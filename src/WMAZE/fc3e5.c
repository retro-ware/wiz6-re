extern int main_window;
extern int message_delay;
show_centered_notice(msg)
{
	char x0[78];
	int l80;
	defer_window_draw(main_window);
	erase_window(main_window, 0);
	f0a42(main_window, 0);
	get_message(msg, &l80);
	set_cursor(main_window, (10 - ((strlen(&l80) + 1) / 2)), 0);
	print_string_hi(main_window, &l80, 3);
	resume_window_draw(main_window);
	refresh_window(main_window);
	play_sound(0);
	wait_animating_m(message_delay);
}
