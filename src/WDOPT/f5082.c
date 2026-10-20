extern int g502c;
extern int main_window;
extern int message_delay;
/* Show result message msg on the message line, beep if flagged, wait. */
show_result_message(msg)
{
	erase_window(main_window, 0);
	refresh_all_windows();
	get_message(msg, 20588);
	print_centered(main_window, 20588, 0, 18);
	if (g502c) {
	play_sound(0);
	}
	wait_animated_dopt((message_delay / 2));
	erase_window(main_window, 0);
}
