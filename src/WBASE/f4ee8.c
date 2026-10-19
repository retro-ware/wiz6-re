extern int anim_phase;
extern int camp_anim_dx;
extern int camp_anim_dy;
/* Reset the camp scene animation and draw it. */
init_camp_scene()
{
	drv_op_c6(346, 0, -1);
	drv_op_c6(349, 0, -1);
	drv_op_c6(352, 0, -1);
	drv_op_c6(361, 0, -1);
	drv_op_c6(355, 0, -1);
	drv_op_c6(358, 0, -1);
	anim_phase = 0;
	camp_anim_dx = 0;
	camp_anim_dy = 0;
	draw_camp_scene(anim_phase, camp_anim_dx, camp_anim_dy);
}
