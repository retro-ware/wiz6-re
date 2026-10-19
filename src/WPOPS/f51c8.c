extern int view_anim_state;
animate_until_reset()
{
	view_anim_state = -2;
L51ce:
	animate_combat_step();
	if (view_anim_state != -2) goto L51ce;
}
