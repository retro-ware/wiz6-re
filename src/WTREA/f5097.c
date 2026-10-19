extern char *main_window;
extern char g5082;
print_chest_prompt(msg, x)
{
	erase_window(main_window, 0);
	f0a42(main_window, 0);
	defer_window_draw(main_window);
	setmem(20590, 20, 32);
	g5082 = 0;
	set_cursor(main_window, 20, 0);
	print_string_hi(main_window, 20590, 3);
	set_cursor(main_window, x, 0);
	print_message(msg, main_window, 18);
	main_window[6]++;
	resume_window_draw(main_window);
}
