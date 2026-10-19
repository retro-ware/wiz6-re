extern int message_delay;
show_centered_msg(p4, p6, p8)
{
	fill_window(p4, 32, 3, 0);
	refresh_window(p4);
	set_cursor(p4, (20 - ((strlen(p6) + 1) / 2)), 1);
	print_string_hi(p4, p6, 3);
	if (p8 <= 0) goto Le916;
	play_sound(0);
Le916:
	wait_seconds_or_enter(message_delay);
}
