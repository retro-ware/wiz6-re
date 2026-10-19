extern int anim_phase;
extern int camp_anim_dx;
extern int camp_anim_dy;
extern int camp_anim_tick;
extern int picture_win;
/* Wait for a key while animating the camp scene; return the key. */
wait_key_animated(mode)
{
L5242:
	if (key_available(mode)) goto L5291;
	if (camp_anim_tick) goto L527b;
	anim_phase = ((anim_phase + 1) % 2);
	draw_camp_scene(anim_phase, camp_anim_dx, camp_anim_dy);
	drv_op_c2(picture_win);
	goto L5281;
L527b:
	delay_tick();
	delay_tick();
L5281:
	camp_anim_tick = ((camp_anim_tick + 1) % 10);
	goto L5242;
L5291:
	return (unsigned char)(get_key(mode));
}
