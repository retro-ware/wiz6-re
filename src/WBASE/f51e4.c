extern int main_window;
/* Print text on the message line. */
show_status_text(text)
{
	erase_window(main_window, 1);
	print_centered(main_window, text, 0, 18);
	flush_keys();
}
