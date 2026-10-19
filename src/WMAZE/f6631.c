extern int message_delay;
show_error(p4)
{
	show_maze_text(p4);
	play_sound(0);
	wait_animating_m(message_delay);
}
