extern int anim_phase;
extern int g5036;
extern int g5038;
wait_animating_m(p4)
{
	flush_keys();
	p4 = (p4 * 5);
L534f:
	if (p4 <= 0) goto L53b6;
	if (!check_screen_click()) goto L5366;
	g5038 = 1;
	return;
L5366:
	if ((!key_available(1)) || ((char)get_key(1) != 13)) goto L5386;
	g5038 = 1;
	return;
L5386:
	if (!g5036) {
	anim_phase = ((anim_phase + 1) % 2);
	redraw_maze_view();
	} else {
	f4655();
	}
	g5036 = ((g5036 + 1) % 10);
	p4--;
	goto L534f;
L53b6:
	return;
}
