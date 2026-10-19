extern int message_delay;
show_centered_line(win, y, text, beep, color)
{
	clear_window_area(win, 0, y, 39, y);
	wait_animating(1);
	set_cursor(win, (20 - ((strlen(text) + 1) / 2)), y);
	print_string(win, text, color);
	if (!beep) goto L5a4a;
	play_sound(0);
L5a4a:
	wait_animating(message_delay);
}
