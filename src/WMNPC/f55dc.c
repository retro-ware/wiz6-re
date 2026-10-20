extern int anim_phase;
extern int picture_win;
extern int sprite_count;
extern int sprite_list[];
extern int view_anim_state;
f55dc()
{
	int l2;
	int l4;
	switch (view_anim_state) {
case -3:
	drv_op_c2(picture_win);
	anim_phase = ((anim_phase + 1) % 2);
	goto L567a;
case -2:
	fee2e();
	for (l2 = 0; l2 < 12; l2++) {
	(*(char **)((char *)sprite_list + (l2 << 1)))[20] = -1;
	}
	sprite_count = 0;
	goto L567a;
case -1:
	for (l2 = 0; l2 < 2; l2++) {
	for (l4 = 0; l4 < 5; l4++) {
	f49db(l2, l4, 0);
	}
	}
	goto L567a;
default:
	f4c09(view_anim_state);
	goto L567a;
	}
L567a:
	view_anim_state++;
	if (view_anim_state == 12) {
	view_anim_state = -3;
	}
}
