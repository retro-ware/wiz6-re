extern int message_delay;
extern int prompt_win;
show_error_msg(msg, x, y)
{
	set_cursor(prompt_win, x, y);
	print_message(msg, prompt_win, 18);
	play_sound(0);
	wait_seconds_or_enter(message_delay);
}
