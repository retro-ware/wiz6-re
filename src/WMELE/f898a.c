extern int anim_phase;
extern int g4ec8[];
extern int g4f86;
extern int g4fac;
extern int party_facing;
/* Draw the six status/compass icons (facing, light, etc). */
draw_compass_icons()
{
	int i;
	int icon;
	int frame;
	i = 0;
L8995:
	switch (i) {
case 3:
	icon = 346;
	frame = (anim_phase + 1);
	goto L8a0b;
case 1:
	icon = 349;
	frame = (anim_phase + 1);
	goto L8a0b;
case 4:
	icon = 352;
	frame = (anim_phase + 1);
	goto L8a0b;
case 0:
	icon = 361;
	frame = (party_facing + 1);
	goto L8a0b;
case 2:
	icon = 355;
	frame = ((anim_phase * g4f86) + 1);
	goto L8a0b;
case 5:
	icon = 358;
	frame = (anim_phase + 1);
	goto L8a0b;
	}
L8a0b:
	if (*(int *)((char *)g4ec8 + (i << 2)) <= 0) goto L8a21;
	icon += frame;
L8a21:
	drv_op_c6(icon, 0, -1);
	i++;
	if (i < 6) goto L8995;
	drv_op_c2(g4fac);
}
