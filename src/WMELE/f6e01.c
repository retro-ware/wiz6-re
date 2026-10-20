extern int view_anim_state;
/* Redraw the maze view background and sprite list. */
redraw_view_background()
{
	view_anim_state = -2;
	do {
	animate_view_step();
	} while (view_anim_state != -2);
}
