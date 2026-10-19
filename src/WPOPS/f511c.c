extern int anim_phase;
extern int picture_win;
extern int sprite_count;
extern int sprite_list[];
extern int view_anim_state;
/* One animation tick of the combat view: redraw maze, queue monster sprites, or draw one sprite. */
animate_combat_step()
{
	int l2;
	int l4;
	char x4[2];
	switch (view_anim_state) {
case -3:
	drv_op_c2(picture_win);
	anim_phase = ((anim_phase + 1) % 2);
	goto L51b2;
case -2:
	draw_maze_view();
	for (l2 = 0; l2 < 12; l2++) {
	(*(char **)((char *)sprite_list + (l2 << 1)))[20] = 255;
	}
	sprite_count = 0;
	goto L51b2;
case -1:
	l2 = 0;
L516e:
	for (l4 = 0; l4 < 5; l4++) {
	queue_monster_sprite(l2, l4);
	}
	l2++;
	if (l2 < 2) goto L516e;
	goto L51b2;
default:
	draw_sprite(view_anim_state);
	goto L51b2;
	}
L51b2:
	view_anim_state++;
	if (view_anim_state != 12) goto L51c4;
	view_anim_state = -3;
L51c4:
	;
}
