extern int anim_phase;
extern int picture_win;
extern int sprite_count;
extern int sprite_list[];
extern int view_anim_state;
/* Advance the view animation state machine by one step. */
animate_view_step()
{
	int l2;
	int l4;
	switch (view_anim_state) {
case -3:
	drv_op_c2(picture_win);
	anim_phase = ((anim_phase + 1) % 2);
	goto L6deb;
case -2:
	draw_maze_view();
	l2 = 0;
L6d79:
	(*(char **)((char *)sprite_list + (l2 << 1)))[20] = 255;
	l2++;
	if (l2 < 12) goto L6d79;
	sprite_count = 0;
	goto L6deb;
case -1:
	l2 = 0;
L6da0:
	l4 = 0;
L6da5:
	queue_monster_sprite(l2, l4, 0);
	l4++;
	if (l4 < 5) goto L6da5;
	l2++;
	if (l2 < 2) goto L6da0;
	goto L6deb;
default:
	draw_view_sprite(view_anim_state);
	goto L6deb;
	}
L6deb:
	view_anim_state++;
	if (view_anim_state != 12) goto L6dfd;
	view_anim_state = -3;
L6dfd:
	;
}
