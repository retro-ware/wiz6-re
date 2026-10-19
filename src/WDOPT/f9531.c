extern int anim_phase;
extern int g4ec8[];
extern int g4f86;
extern int g4fac;
extern int party_facing;
/* Draw the six status/compass icons. */
draw_compass_icons_dopt()
{
	int i;
	int icon;
	int frame;
	i = 0;
L953c:
	switch (i) {
case 3:
	icon = 346;
	frame = (anim_phase + 1);
	goto L95b2;
case 1:
	icon = 349;
	frame = (anim_phase + 1);
	goto L95b2;
case 4:
	icon = 352;
	frame = (anim_phase + 1);
	goto L95b2;
case 0:
	icon = 361;
	frame = (party_facing + 1);
	goto L95b2;
case 2:
	icon = 355;
	frame = ((anim_phase * g4f86) + 1);
	goto L95b2;
case 5:
	icon = 358;
	frame = (anim_phase + 1);
	goto L95b2;
	}
L95b2:
	if (*(int *)((char *)g4ec8 + (i << 2)) <= 0) goto L95c8;
	icon += frame;
L95c8:
	drv_op_c6(icon, 0, -1);
	i++;
	if (i < 6) goto L953c;
	drv_op_c2(g4fac);
}
