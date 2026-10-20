extern int view_anim_state;
animate_until_reset()
{
	view_anim_state = -2;
	do {
	animate_combat_step();
	} while (view_anim_state != -2);
}
