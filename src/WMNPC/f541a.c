extern int main_window;
f541a(p4, p6)
{
	erase_window(main_window, 0);
	f0a42(main_window, 0);
	f53e5();
	defer_window_draw(main_window);
	set_cursor(main_window, (10 - (((strlen(p4) + p6) + 1) / 2)), 0);
	print_string_hi(main_window, p4, 3);
	resume_window_draw(main_window);
}
