extern int view_anim_state;
reset_animation()
{
	view_anim_state = -2;
L7740:
	animate_step();
	if (view_anim_state != -2) goto L7740;
}
