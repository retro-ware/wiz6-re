extern int anim_cycle;
extern int anim_phase;
extern int g5112;
extern int picture_win;
extern int sprite_count;
extern int sprite_list[];
extern int view_anim_state;
/* Advance one step of the combat animation state machine g4358. */
animate_step()
{
	int l2;
	int l4;
	switch (view_anim_state) {
case -3:
	drv_op_c2(picture_win);
	if (g5112 != 1) goto L767d;
	play_sound(5);
L767d:
	g5112 = 0;
	anim_phase = ((anim_phase + 1) % 2);
	anim_cycle = ((anim_cycle + 1) % 3);
	goto L7724;
case -2:
	fea26();
	l2 = 0;
L76aa:
	(*(char **)((char *)sprite_list + (l2 << 1)))[20] = 255;
	l2++;
	if (l2 < 12) goto L76aa;
	sprite_count = 0;
	goto L7724;
case -1:
	l2 = 0;
L76d1:
	l4 = 0;
L76d6:
	queue_combatant_sprite(l2, l4);
	queue_effect_sprite(l2, l4);
	l4++;
	if (l4 < 5) goto L76d6;
	l2++;
	if (l2 < 2) goto L76d1;
	goto L7724;
default:
	draw_sprite(view_anim_state);
	goto L7724;
	}
L7724:
	view_anim_state++;
	if (view_anim_state != 12) goto L7736;
	view_anim_state = -3;
L7736:
	;
}
