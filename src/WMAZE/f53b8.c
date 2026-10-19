extern int main_window;
show_maze_text(p4)
{
	erase_window(main_window, 1);
	print_centered(main_window, p4, 0, 18);
	flush_keys();
}
