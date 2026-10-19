extern int main_window;
extern int message_delay;
fa645(p4)
{
	erase_window(main_window, 1);
	get_message(p4, 20948);
	print_centered(main_window, 20948, 0, 18);
	play_sound(0);
	f5a1e(message_delay);
	erase_window(main_window, 1);
}
