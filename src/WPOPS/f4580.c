extern int main_window;
draw_combat_title()
{
	defer_window_draw(main_window);
	set_cursor(main_window, 22, 0);
	print_message(3503, main_window, 18);
	resume_window_draw(main_window);
}
