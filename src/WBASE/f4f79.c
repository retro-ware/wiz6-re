extern int anim_phase;
extern int camp_anim_dx;
extern int camp_anim_dy;
extern int g0022;
extern int main_window;
extern int picture_win;
/* Animate the camp scene shift, then show two text lines in a popup and wait. */
animate_and_show_two_lines(line1, line2)
{
	int step;
	int win;
	step = 1;
L4f84:
	anim_phase = ((anim_phase + 1) % 2);
	camp_anim_dx = (((0 - g0022) * step) / 2);
	camp_anim_dy = ((step * g0022) / 2);
	draw_camp_scene(anim_phase, camp_anim_dx, camp_anim_dy);
	drv_op_c2(picture_win);
	play_sound(3);
	step++;
	if (step < 9) goto L4f84;
	wait_animated(5);
	erase_window(main_window, 0);
	win = create_window(0, 19, 40, 5, 30, -1, 0, 0);
	defer_window_draw(win);
	fill_window(win, 32, 3, 0);
	print_centered(win, line1, 1, 18);
	print_centered(win, line2, 2, 18);
	resume_window_draw(win);
	refresh_all_windows();
	destroy_window(win, 0);
}
