extern int picture_win;
redraw_maze_view()
{
	draw_maze_view_m();
	drv_op_c2(picture_win);
}
