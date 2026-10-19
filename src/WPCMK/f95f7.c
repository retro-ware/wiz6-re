extern int menu_win;
draw_creation_screen(p4, p6)
{
	fill_window(p4, 0, 1, 0);
	fill_window(p6, 32, 3, 0);
	fill_window(menu_win, 32, 3, 0);
	defer_window_draw(p4);
	draw_creation_frame(p4);
	resume_window_draw(p4);
	refresh_all_windows();
}
