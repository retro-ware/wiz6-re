extern int main_window;
/* Load message msg and print it on the message line window. */
show_message_line(msg)
{
	char x0[78];
	int text;
	get_message(msg, &text);
	erase_window(main_window, 0);
	defer_window_draw(main_window);
	print_centered(main_window, &text, 0, 18);
	resume_window_draw(main_window);
}
