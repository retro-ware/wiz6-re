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
	l2 = 0;
L5608:
	(*(char **)((char *)sprite_list + (l2 << 1)))[20] = 255;
	l2++;
	if (l2 < 12) goto L5608;
	sprite_count = 0;
	goto L567a;
case -1:
	l2 = 0;
L562f:
	l4 = 0;
L5634:
	f49db(l2, l4, 0);
	l4++;
	if (l4 < 5) goto L5634;
	l2++;
	if (l2 < 2) goto L562f;
	goto L567a;
default:
	f4c09(view_anim_state);
	goto L567a;
	}
L567a:
	view_anim_state++;
	if (view_anim_state != 12) goto L568c;
	view_anim_state = -3;
L568c:
	;
}
