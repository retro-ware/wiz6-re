/* Load and display CREDITS.PIC in a full-screen window. */
show_credits()
{
	int win;
	int fd;
	if ((fd = open(make_data_path(20496, 1), 0)) == -1) {
	exit_game(3);
	}
	drv_op_ae(fd, 0L, 20906L, 0);
	close(fd);
	win = create_window(0, 0, 40, 25, 1, -1, 2, 0);
	drv_op_be(win, 0);
	draw_big_char(10, 84, 52);
	draw_big_char(11, 84, 84);
	drv_op_c2(win);
	destroy_window(win, 0);
}
