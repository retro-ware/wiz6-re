extern int view_anim_state;
/* Redraw the maze view background and sprite list. */
redraw_view_background()
{
	view_anim_state = -2;
L6e07:
	animate_view_step();
	if (view_anim_state != -2) goto L6e07;
}
