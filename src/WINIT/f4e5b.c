extern int fullscreen_win;
/* Create the full-screen window and load the picture file name into it; show it if show. */
load_fullscreen_pic(name, show)
{
	int fd;
	fullscreen_win = create_window(0, 0, 40, 25, 1, -1, 2, 0);
	stop_sound();
	if ((fd = open(make_data_path(name, 1), 0)) != -1) goto L4eb2;
	exit_game(12);
L4eb2:
	drv_op_be(fullscreen_win, 0);
	drv_op_b6(fd);
	close(fd);
	if (!show) goto L4edc;
	drv_op_c2(fullscreen_win);
L4edc:
	;
}
