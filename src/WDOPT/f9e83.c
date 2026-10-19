extern int picture_win;
/* Redraw the maze view and show it. */
redraw_maze_view()
{
	draw_maze_view_dopt();
	drv_op_c2(picture_win);
}
