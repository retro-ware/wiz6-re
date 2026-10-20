extern int view_anim_state;
reset_animation()
{
	view_anim_state = -2;
	do {
	animate_step();
	} while (view_anim_state != -2);
}
