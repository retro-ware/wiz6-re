extern int bottom_line_win;
extern int main_window;
close_chest_windows(p4, p6)
{
	destroy_window(p6, 0);
	destroy_window(p4, 0);
	defer_window_draw(main_window);
	defer_window_draw(bottom_line_win);
}
