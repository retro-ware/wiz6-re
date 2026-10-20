extern int picture_win;
/* Redraw the camp scene for animation frame, with sprite offsets dx, dy. */
draw_camp_scene(frame, dx, dy)
{
	drv_op_be(picture_win, 0);
	drv_op_c6(123, 1, 123);
	drv_op_c6(124, 1, 124);
	drv_op_c6(125, 1, 125);
	drv_op_c6(20, 1, 16);
	drv_op_c6(21, 1, 17);
	drv_op_c6(22, 1, 18);
	drv_op_c6(16, 1, 20);
	drv_op_c6(17, 1, 21);
	drv_op_c6(18, 1, 22);
	drv_op_c6(151, 1, 151);
	drv_op_c6(152, 1, 152);
	drv_op_c6(153, 1, 153);
	drv_op_c6(25, 0, -1);
	drv_op_c6(28, 0, -1);
	drv_op_c6(31, 0, -1);
	drv_op_c6(34, 0, -1);
	draw_camp_backdrop_char(15);
	draw_camp_backdrop_char(12);
	draw_camp_sprite(1, 0, 72, 248);
	draw_camp_sprite(2, 0, 72, 248);
	draw_camp_sprite(3, dx, 128, 192);
	draw_camp_sprite(4, dy, 128, 192);
	if (frame) {
	draw_camp_sprite(5, 0, 72, 248);
	draw_camp_sprite(6, 0, 72, 248);
	}
}
