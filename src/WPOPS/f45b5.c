extern int main_window;
print_combat_prompt(text, extra_width)
{
	erase_window(main_window, 0);
	f0a42(main_window, 0);
	draw_combat_title();
	defer_window_draw(main_window);
	set_cursor(main_window, (10 - (((strlen(text) + extra_width) + 1) / 2)), 0);
	print_string_hi(main_window, text, 3);
	resume_window_draw(main_window);
}
