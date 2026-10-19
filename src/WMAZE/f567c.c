extern int main_window;
f567c(p4, p6, p8)
{
	show_maze_message(p4);
	flush_keys();
	play_sound(p6);
	wait_animating_m(p8);
	erase_window(main_window, 1);
}
