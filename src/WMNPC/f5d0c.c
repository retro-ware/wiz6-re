extern int bottom_line_win;
extern int g5264;
extern int main_window;
extern int message_delay;
f5d0c(p4, p6)
{
	defer_window_draw(main_window);
	defer_window_draw(bottom_line_win);
	g5264 = create_window(0, 19, 40, 5, 30, -1, 0, 1);
	print_centered(g5264, p4, 1, 5);
	if (p6) {
	play_sound(0);
	}
	f5a1e(message_delay);
	destroy_window(g5264, 0);
	g5264 = 0;
	resume_window_draw(main_window);
	resume_window_draw(bottom_line_win);
}
