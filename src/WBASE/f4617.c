extern int anim_phase;
extern int camp_anim_dx;
extern int camp_anim_dy;
extern int camp_anim_tick;
extern int picture_win;
/* Wait ticks while animating the camp scene; a click or Enter ends early. */
wait_animated(ticks)
{
	flush_keys();
	ticks = (ticks * 5);
L462b:
	if (ticks <= 0) goto L469d;
	if (!check_screen_click()) goto L463c;
	return;
L463c:
	if (!key_available(1)) goto L4656;
	if ((char)get_key(1) != 13) goto L4656;
	return;
L4656:
	if (camp_anim_tick) goto L4684;
	anim_phase = ((anim_phase + 1) % 2);
	draw_camp_scene(anim_phase, camp_anim_dx, camp_anim_dy);
	drv_op_c2(picture_win);
	goto L468a;
L4684:
	delay_tick();
	delay_tick();
L468a:
	camp_anim_tick = ((camp_anim_tick + 1) % 10);
	ticks--;
	goto L462b;
L469d:
	return;
}
