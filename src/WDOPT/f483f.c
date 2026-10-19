extern char *main_window;
/* Print a title text at column x on the message line. */
show_title_text_dopt(text, x)
{
	erase_window(main_window, 0);
	f0a42(main_window, 0);
	defer_window_draw(main_window);
	set_cursor(main_window, x, 0);
	print_string_hi(main_window, text, 3);
	main_window[6]++;
	resume_window_draw(main_window);
}
